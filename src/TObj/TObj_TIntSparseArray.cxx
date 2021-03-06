// Created on: 2007-03-16
// Created by: Michael SAZONOV
// Copyright (c) 2007-2012 OPEN CASCADE SAS
//
// The content of this file is subject to the Open CASCADE Technology Public
// License Version 6.5 (the "License"). You may not use the content of this file
// except in compliance with the License. Please obtain a copy of the License
// at http://www.opencascade.org and read it completely before using this file.
//
// The Initial Developer of the Original Code is Open CASCADE S.A.S., having its
// main offices at: 1, place des Freres Montgolfier, 78280 Guyancourt, France.
//
// The Original Code and all software distributed under the License is
// distributed on an "AS IS" basis, without warranty of any kind, and the
// Initial Developer hereby disclaims all such warranties, including without
// limitation, any warranties of merchantability, fitness for a particular
// purpose or non-infringement. Please see the License for the specific terms
// and conditions governing the rights and limitations under the License.

// The original implementation Copyright: (C) RINA S.p.A

#include <TObj_TIntSparseArray.hxx>
#include <Standard_GUID.hxx>
#include <Standard_ImmutableObject.hxx>
#include <TDF_Data.hxx>
#include <TDF_AttributeDelta.hxx>
#include <TDF_DeltaOnModification.hxx>

IMPLEMENT_STANDARD_HANDLE(TObj_TIntSparseArray,TDF_Attribute)
IMPLEMENT_STANDARD_RTTIEXT(TObj_TIntSparseArray,TDF_Attribute)

//=======================================================================
//function : TObj_TIntSparseArray
//purpose  : Empty constructor
//=======================================================================

TObj_TIntSparseArray::TObj_TIntSparseArray ()
: myVector(100), myOldMap(100), myDoBackup (Standard_True)
{
}

//=======================================================================
//function : GetID
//purpose  :
//=======================================================================

const Standard_GUID& TObj_TIntSparseArray::GetID()
{
  static Standard_GUID GInterfaceID ("7016dc0c-b118-4433-8ef3-aecdccc79198");
  return GInterfaceID;
}

//=======================================================================
//function : ID
//purpose  :
//=======================================================================

const Standard_GUID& TObj_TIntSparseArray::ID() const
{
  return GetID();
}

//=======================================================================
//function : Set
//purpose  :
//=======================================================================

Handle(TObj_TIntSparseArray) TObj_TIntSparseArray::Set
                           (const TDF_Label& theLabel)
{
  Handle(TObj_TIntSparseArray) aTData;
  if (! theLabel.FindAttribute( GetID(), aTData))
  {
    aTData = new TObj_TIntSparseArray;
    theLabel.AddAttribute(aTData);
  }
  return aTData;
}

//=======================================================================
//function : SetValue
//purpose  : 
//=======================================================================

void TObj_TIntSparseArray::SetValue (const Standard_Integer theId,
                                         const Standard_Integer theValue)
{
  // check that modification is allowed
  if ( !Label().Data()->IsModificationAllowed() )
    Standard_ImmutableObject::Raise
      ("Attribute TObj_TIntSparseArray is changed outside transaction");

  if (theId < 1 || theValue < 1)
    Standard_OutOfRange::Raise ("TObj_TIntSparseArray::SetValue");

  Standard_Integer anOld = AbsentValue;
  Standard_Boolean isOld = myVector.HasValue(theId);
  if (isOld)
  {
    Standard_Integer& aData = myVector(theId);
    if (aData == theValue)
      // no actual modification
      return;
    anOld = aData;
    // set new value
    aData = theValue;
  }
  else
  {
    // set the new value
    myVector.SetValue (theId, theValue);
  }

  TDF_Label aLabel = Label();
  if (!aLabel.IsNull())
  {
    Handle(TDF_Data) aData = aLabel.Data();
    Standard_Integer aCurrentTransaction = aData->Transaction();
    Standard_Integer aMyTransaction = Transaction();

    if (myDoBackup && aMyTransaction < aCurrentTransaction)
      backupValue(theId, anOld, theValue);
  }
}

//=======================================================================
//function : UnsetValue
//purpose  : 
//=======================================================================

void TObj_TIntSparseArray::UnsetValue (const Standard_Integer theId)
{
  // check that modification is allowed
  if ( !Label().Data()->IsModificationAllowed() )
    Standard_ImmutableObject::Raise
      ("Attribute TObj_TIntSparseArray is changed outside transaction");

  if (theId < 1)
    Standard_OutOfRange::Raise ("TObj_TIntSparseArray::UnsetValue");

  Standard_Integer anOld = AbsentValue;
  Standard_Boolean isOld = myVector.HasValue(theId);
  if (isOld)
  {
    anOld = myVector(theId);
    // unset the value
    myVector.UnsetValue(theId);
  }
  else
    // no actual modification
    return;

  TDF_Label aLabel = Label();
  if (!aLabel.IsNull())
  {
    Handle(TDF_Data) aData = aLabel.Data();
    Standard_Integer aCurrentTransaction = aData->Transaction();
    Standard_Integer aMyTransaction = Transaction();

    if (myDoBackup && aMyTransaction < aCurrentTransaction)
      backupValue(theId, anOld, AbsentValue);
  }
}

//=======================================================================
//function : Clear
//purpose  :
//=======================================================================

void TObj_TIntSparseArray::Clear ()
{
  // backup old values
  TDF_Label aLabel = Label();
  if (!aLabel.IsNull())
  {
    Handle(TDF_Data) aData = aLabel.Data();
    Standard_Integer aCurrentTransaction = aData->Transaction();
    Standard_Integer aMyTransaction = Transaction();

    if (myDoBackup && aMyTransaction < aCurrentTransaction)
    {
      TObj_TIntSparseArray_VecOfData::Iterator anIt (myVector);
      for (; anIt.More(); anIt.Next())
      {
        Standard_Integer anId = anIt.Key();
        Standard_Integer aVal = anIt.Value();
        backupValue(anId, aVal, AbsentValue);
      }
    }
  }
  myVector.Clear();
}

//=======================================================================
//function : backupValue
//purpose  :
//=======================================================================

void TObj_TIntSparseArray::backupValue (const Standard_Integer theId,
                                            const Standard_Integer theCurrValue,
                                            const Standard_Integer theNewValue)
{
  // save the current value if it has not been saved in previous time
  if ( !myOldMap.IsBound( theId ) )
    myOldMap.Bind(theId, theCurrValue);
  else
  {
    // if value in Undo is the same as the new one, the item in Undo map may be cleared
    Standard_Integer aUData = myOldMap.Value(theId);
    if (aUData == theNewValue)
      myOldMap.UnBind(theId);
  }
}

//=======================================================================
//function : NewEmpty
//purpose  :
//=======================================================================

Handle(TDF_Attribute) TObj_TIntSparseArray::NewEmpty () const
{
  return new TObj_TIntSparseArray;
}

//=======================================================================
//function : BackupCopy
//purpose  : Moves <this> delta into a new other attribute.
//=======================================================================

Handle(TDF_Attribute) TObj_TIntSparseArray::BackupCopy() const
{
  Handle(TObj_TIntSparseArray) aCopy = 
    Handle(TObj_TIntSparseArray)::DownCast(NewEmpty());

  // save delta data in a copy
  if (!myOldMap.IsEmpty())
    aCopy->myOldMap.Exchange ( (TObj_TIntSparseArray_MapOfData&)myOldMap );

  return aCopy;
}

//=======================================================================
//function : Restore
//purpose  : Restores contents of this with theDelta
//=======================================================================

void TObj_TIntSparseArray::Restore(const Handle(TDF_Attribute)& theDelta)
{
  Handle(TObj_TIntSparseArray) aDelta = 
    Handle(TObj_TIntSparseArray)::DownCast(theDelta);
  if (aDelta.IsNull())
    return;

  // restore the values from aDelta->myOldMap
  if (!aDelta->myOldMap.IsEmpty())
  {
    TObj_TIntSparseArray_MapOfData::Iterator anIt (aDelta->myOldMap);
    for (; anIt.More(); anIt.Next())
    {
      Standard_Integer anId = anIt.Key();
      Standard_Integer anOld = anIt.Value();
      if (anOld == AbsentValue)
        UnsetValue (anId);
      else
        SetValue (anId, anOld);
    }
  }
}

//=======================================================================
//function : Paste
//purpose  : copy this
//=======================================================================

void TObj_TIntSparseArray::Paste (const Handle(TDF_Attribute)& theInto,
                                    const Handle(TDF_RelocationTable)&) const
{
  Handle(TObj_TIntSparseArray) aInto =
    Handle(TObj_TIntSparseArray)::DownCast(theInto);
  if(aInto.IsNull())
    return;

  aInto->myVector.Assign(myVector);
}

//=======================================================================
//function : BeforeCommitTransaction
//purpose  : It is called just before Commit or Abort transaction
//=======================================================================

void TObj_TIntSparseArray::BeforeCommitTransaction()
{
  if (!myOldMap.IsEmpty())
  {
    Backup();
    ClearDelta();
  }
}

//=======================================================================
//function : DeltaOnModification
//purpose  : Applies aDelta to <me>
//=======================================================================

void TObj_TIntSparseArray::DeltaOnModification
                        (const Handle(TDF_DeltaOnModification)& theDelta)
{
  // we do not call Backup here, because a backup data is formed inside Restore.
  // Backup is called rather from BeforeCommitTransaction
  Restore(theDelta->Attribute());
}

//=======================================================================
//function : AfterUndo
//purpose  : After application of a TDF_Delta.
//=======================================================================

Standard_Boolean TObj_TIntSparseArray::AfterUndo
                        (const Handle(TDF_AttributeDelta)&,
                         const Standard_Boolean)
{
  // we must be sure that a delta in <me> is cleared
  ClearDelta();
  return Standard_True;
}
