// Created on: 2000-08-15
// Created by: data exchange team
// Copyright (c) 2000-2012 OPEN CASCADE SAS
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



#include <MDF_SRelocationTable.hxx>
#include <MXCAFDoc_DocumentToolStorageDriver.ixx>
#include <MgtTopLoc.hxx>
#include <PTColStd_TransientPersistentMap.hxx>
#include <PXCAFDoc_DocumentTool.hxx>
#include <XCAFDoc_DocumentTool.hxx>

//=======================================================================
//function : Constructor
//purpose  : 
//=======================================================================

MXCAFDoc_DocumentToolStorageDriver::MXCAFDoc_DocumentToolStorageDriver(const Handle(CDM_MessageDriver)& theMsgDriver) : MDF_ASDriver (theMsgDriver)
{
}

//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================

 Standard_Integer MXCAFDoc_DocumentToolStorageDriver::VersionNumber() const
{  return 0; }

//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================

 Handle(Standard_Type) MXCAFDoc_DocumentToolStorageDriver::SourceType() const
{
  static Handle(Standard_Type) sourceType = STANDARD_TYPE(XCAFDoc_DocumentTool);
  return sourceType;
}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================

 Handle(PDF_Attribute) MXCAFDoc_DocumentToolStorageDriver::NewEmpty() const
{
  return new PXCAFDoc_DocumentTool();
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================

void MXCAFDoc_DocumentToolStorageDriver::Paste(const Handle(TDF_Attribute)& /* Source */,
					       const Handle(PDF_Attribute)& /* Target */,
					       const Handle(MDF_SRelocationTable)& /*RelocTable*/) const
{
}

