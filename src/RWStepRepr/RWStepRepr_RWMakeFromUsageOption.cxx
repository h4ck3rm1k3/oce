// Created on: 2000-07-03
// Created by: Andrey BETENEV
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

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.1

#include <RWStepRepr_RWMakeFromUsageOption.ixx>

//=======================================================================
//function : RWStepRepr_RWMakeFromUsageOption
//purpose  : 
//=======================================================================

RWStepRepr_RWMakeFromUsageOption::RWStepRepr_RWMakeFromUsageOption ()
{
}

//=======================================================================
//function : ReadStep
//purpose  : 
//=======================================================================

void RWStepRepr_RWMakeFromUsageOption::ReadStep (const Handle(StepData_StepReaderData)& data,
                                                 const Standard_Integer num,
                                                 Handle(Interface_Check)& ach,
                                                 const Handle(StepRepr_MakeFromUsageOption) &ent) const
{
  // Check number of parameters
  if ( ! data->CheckNbParams(num,8,ach,"make_from_usage_option") ) return;

  // Inherited fields of ProductDefinitionRelationship

  Handle(TCollection_HAsciiString) aProductDefinitionRelationship_Id;
  data->ReadString (num, 1, "product_definition_relationship.id", ach, aProductDefinitionRelationship_Id);

  Handle(TCollection_HAsciiString) aProductDefinitionRelationship_Name;
  data->ReadString (num, 2, "product_definition_relationship.name", ach, aProductDefinitionRelationship_Name);

  Handle(TCollection_HAsciiString) aProductDefinitionRelationship_Description;
  Standard_Boolean hasProductDefinitionRelationship_Description = Standard_True;
  if ( data->IsParamDefined (num,3) ) {
    data->ReadString (num, 3, "product_definition_relationship.description", ach, aProductDefinitionRelationship_Description);
  }
  else {
    hasProductDefinitionRelationship_Description = Standard_False;
  }

  Handle(StepBasic_ProductDefinition) aProductDefinitionRelationship_RelatingProductDefinition;
  data->ReadEntity (num, 4, "product_definition_relationship.relating_product_definition", ach, STANDARD_TYPE(StepBasic_ProductDefinition), aProductDefinitionRelationship_RelatingProductDefinition);

  Handle(StepBasic_ProductDefinition) aProductDefinitionRelationship_RelatedProductDefinition;
  data->ReadEntity (num, 5, "product_definition_relationship.related_product_definition", ach, STANDARD_TYPE(StepBasic_ProductDefinition), aProductDefinitionRelationship_RelatedProductDefinition);

  // Own fields of MakeFromUsageOption

  Standard_Integer aRanking;
  data->ReadInteger (num, 6, "ranking", ach, aRanking);

  Handle(TCollection_HAsciiString) aRankingRationale;
  data->ReadString (num, 7, "ranking_rationale", ach, aRankingRationale);

  Handle(StepBasic_MeasureWithUnit) aQuantity;
  data->ReadEntity (num, 8, "quantity", ach, STANDARD_TYPE(StepBasic_MeasureWithUnit), aQuantity);

  // Initialize entity
  ent->Init(aProductDefinitionRelationship_Id,
            aProductDefinitionRelationship_Name,
            hasProductDefinitionRelationship_Description,
            aProductDefinitionRelationship_Description,
            aProductDefinitionRelationship_RelatingProductDefinition,
            aProductDefinitionRelationship_RelatedProductDefinition,
            aRanking,
            aRankingRationale,
            aQuantity);
}

//=======================================================================
//function : WriteStep
//purpose  : 
//=======================================================================

void RWStepRepr_RWMakeFromUsageOption::WriteStep (StepData_StepWriter& SW,
                                                  const Handle(StepRepr_MakeFromUsageOption) &ent) const
{

  // Inherited fields of ProductDefinitionRelationship

  SW.Send (ent->StepBasic_ProductDefinitionRelationship::Id());

  SW.Send (ent->StepBasic_ProductDefinitionRelationship::Name());

  if ( ent->StepBasic_ProductDefinitionRelationship::HasDescription() ) {
    SW.Send (ent->StepBasic_ProductDefinitionRelationship::Description());
  }
  else SW.SendUndef();

  SW.Send (ent->StepBasic_ProductDefinitionRelationship::RelatingProductDefinition());

  SW.Send (ent->StepBasic_ProductDefinitionRelationship::RelatedProductDefinition());

  // Own fields of MakeFromUsageOption

  SW.Send (ent->Ranking());

  SW.Send (ent->RankingRationale());

  SW.Send (ent->Quantity());
}

//=======================================================================
//function : Share
//purpose  : 
//=======================================================================

void RWStepRepr_RWMakeFromUsageOption::Share (const Handle(StepRepr_MakeFromUsageOption) &ent,
                                              Interface_EntityIterator& iter) const
{

  // Inherited fields of ProductDefinitionRelationship

  iter.AddItem (ent->StepBasic_ProductDefinitionRelationship::RelatingProductDefinition());

  iter.AddItem (ent->StepBasic_ProductDefinitionRelationship::RelatedProductDefinition());

  // Own fields of MakeFromUsageOption

  iter.AddItem (ent->Quantity());
}
