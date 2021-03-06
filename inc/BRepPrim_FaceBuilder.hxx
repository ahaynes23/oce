// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepPrim_FaceBuilder_HeaderFile
#define _BRepPrim_FaceBuilder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Vertex_HeaderFile
#include <TopoDS_Vertex.hxx>
#endif
#ifndef _TopoDS_Edge_HeaderFile
#include <TopoDS_Edge.hxx>
#endif
#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_ConstructionError;
class Standard_OutOfRange;
class BRep_Builder;
class Geom_Surface;
class TopoDS_Face;
class TopoDS_Edge;
class TopoDS_Vertex;


//! The  FaceBuilder is an algorithm   to build a BRep <br>
//!          Face from a Geom Surface. <br>
//! <br>
//!          The  face covers  the  whole surface or  the  area <br>
//!          delimited by UMin, UMax, VMin, VMax <br>
class BRepPrim_FaceBuilder  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BRepPrim_FaceBuilder();
  
  Standard_EXPORT   BRepPrim_FaceBuilder(const BRep_Builder& B,const Handle(Geom_Surface)& S);
  
  Standard_EXPORT   BRepPrim_FaceBuilder(const BRep_Builder& B,const Handle(Geom_Surface)& S,const Standard_Real UMin,const Standard_Real UMax,const Standard_Real VMin,const Standard_Real VMax);
  
  Standard_EXPORT     void Init(const BRep_Builder& B,const Handle(Geom_Surface)& S) ;
  
  Standard_EXPORT     void Init(const BRep_Builder& B,const Handle(Geom_Surface)& S,const Standard_Real UMin,const Standard_Real UMax,const Standard_Real VMin,const Standard_Real VMax) ;
  
  Standard_EXPORT    const TopoDS_Face& Face() const;
Standard_EXPORT operator TopoDS_Face();
  //! Returns the edge of index <I> <br>
//!          1 - Edge VMin <br>
//!          2 - Edge UMax <br>
//!          3 - Edge VMax <br>
//!          4 - Edge UMin <br>
//! <br>
  Standard_EXPORT    const TopoDS_Edge& Edge(const Standard_Integer I) const;
  //! Returns the vertex of index <I> <br>
//!          1 - Vertex UMin,VMin <br>
//!          2 - Vertex UMax,VMin <br>
//!          3 - Vertex UMax,VMax <br>
//!          4 - Vertex UMin,VMax <br>
//! <br>
  Standard_EXPORT    const TopoDS_Vertex& Vertex(const Standard_Integer I) const;





protected:





private:



TopoDS_Vertex myVertex[4];
TopoDS_Edge myEdges[4];
TopoDS_Face myFace;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
