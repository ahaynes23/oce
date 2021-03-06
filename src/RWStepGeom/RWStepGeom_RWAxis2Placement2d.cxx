// Copyright (c) 1999-2012 OPEN CASCADE SAS
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


#include <RWStepGeom_RWAxis2Placement2d.ixx>
#include <StepGeom_Direction.hxx>
#include <StepGeom_CartesianPoint.hxx>


#include <Interface_EntityIterator.hxx>


#include <StepGeom_Axis2Placement2d.hxx>


RWStepGeom_RWAxis2Placement2d::RWStepGeom_RWAxis2Placement2d () {}

void RWStepGeom_RWAxis2Placement2d::ReadStep
	(const Handle(StepData_StepReaderData)& data,
	 const Standard_Integer num,
	 Handle(Interface_Check)& ach,
	 const Handle(StepGeom_Axis2Placement2d)& ent) const
{


	// --- Number of Parameter Control ---

	if (!data->CheckNbParams(num,3,ach,"axis2_placement_2d")) return;

	// --- inherited field : name ---

	Handle(TCollection_HAsciiString) aName;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat1 =` not needed
	data->ReadString (num,1,"name",ach,aName);

	// --- inherited field : location ---

	Handle(StepGeom_CartesianPoint) aLocation;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat2 =` not needed
	data->ReadEntity(num, 2,"location", ach, STANDARD_TYPE(StepGeom_CartesianPoint), aLocation);

	// --- own field : refDirection ---

	Handle(StepGeom_Direction) aRefDirection;
	Standard_Boolean hasArefDirection = Standard_True;
	if (data->IsParamDefined(num,3)) {
	  //szv#4:S4163:12Mar99 `Standard_Boolean stat3 =` not needed
	  data->ReadEntity(num, 3,"ref_direction", ach, STANDARD_TYPE(StepGeom_Direction), aRefDirection);
	}
	else {
	  hasArefDirection = Standard_False;
	  aRefDirection.Nullify();
	}

	//--- Initialisation of the read entity ---


	ent->Init(aName, aLocation, hasArefDirection, aRefDirection);
}


void RWStepGeom_RWAxis2Placement2d::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(StepGeom_Axis2Placement2d)& ent) const
{

	// --- inherited field name ---

	SW.Send(ent->Name());

	// --- inherited field location ---

	SW.Send(ent->Location());

	// --- own field : refDirection ---

	Standard_Boolean hasArefDirection = ent->HasRefDirection();
	if (hasArefDirection) {
	  SW.Send(ent->RefDirection());
	}
	else {
	  SW.SendUndef();
	}
}


void RWStepGeom_RWAxis2Placement2d::Share(const Handle(StepGeom_Axis2Placement2d)& ent, Interface_EntityIterator& iter) const
{

	iter.GetOneItem(ent->Location());

	if (ent->HasRefDirection()) {
	  iter.GetOneItem(ent->RefDirection());
	}

}

