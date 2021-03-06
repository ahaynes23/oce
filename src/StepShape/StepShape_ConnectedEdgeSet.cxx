// Created on: 2001-12-28
// Created by: Andrey BETENEV
// Copyright (c) 2001-2012 OPEN CASCADE SAS
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

#include <StepShape_ConnectedEdgeSet.ixx>

//=======================================================================
//function : StepShape_ConnectedEdgeSet
//purpose  : 
//=======================================================================

StepShape_ConnectedEdgeSet::StepShape_ConnectedEdgeSet ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepShape_ConnectedEdgeSet::Init (const Handle(TCollection_HAsciiString) &aRepresentationItem_Name,
                                       const Handle(StepShape_HArray1OfEdge) &aCesEdges)
{
  StepShape_TopologicalRepresentationItem::Init(aRepresentationItem_Name);

  theCesEdges = aCesEdges;
}

//=======================================================================
//function : CesEdges
//purpose  : 
//=======================================================================

Handle(StepShape_HArray1OfEdge) StepShape_ConnectedEdgeSet::CesEdges () const
{
  return theCesEdges;
}

//=======================================================================
//function : SetCesEdges
//purpose  : 
//=======================================================================

void StepShape_ConnectedEdgeSet::SetCesEdges (const Handle(StepShape_HArray1OfEdge) &aCesEdges)
{
  theCesEdges = aCesEdges;
}
