// Created on: 2002-12-12
// Created by: data exchange team
// Copyright (c) 2002-2012 OPEN CASCADE SAS
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

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.2

#include <StepElement_Surface3dElementDescriptor.ixx>

//=======================================================================
//function : StepElement_Surface3dElementDescriptor
//purpose  : 
//=======================================================================

StepElement_Surface3dElementDescriptor::StepElement_Surface3dElementDescriptor ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepElement_Surface3dElementDescriptor::Init (const StepElement_ElementOrder aElementDescriptor_TopologyOrder,
                                                   const Handle(TCollection_HAsciiString) &aElementDescriptor_Description,
                                                   const Handle(StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember) &aPurpose,
                                                   const StepElement_Element2dShape aShape)
{
  StepElement_ElementDescriptor::Init(aElementDescriptor_TopologyOrder,
                                      aElementDescriptor_Description);

  thePurpose = aPurpose;

  theShape = aShape;
}

//=======================================================================
//function : Purpose
//purpose  : 
//=======================================================================

Handle(StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember) StepElement_Surface3dElementDescriptor::Purpose () const
{
  return thePurpose;
}

//=======================================================================
//function : SetPurpose
//purpose  : 
//=======================================================================

void StepElement_Surface3dElementDescriptor::SetPurpose (const Handle(StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember) &aPurpose)
{
  thePurpose = aPurpose;
}

//=======================================================================
//function : Shape
//purpose  : 
//=======================================================================

StepElement_Element2dShape StepElement_Surface3dElementDescriptor::Shape () const
{
  return theShape;
}

//=======================================================================
//function : SetShape
//purpose  : 
//=======================================================================

void StepElement_Surface3dElementDescriptor::SetShape (const StepElement_Element2dShape aShape)
{
  theShape = aShape;
}
