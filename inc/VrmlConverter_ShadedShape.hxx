// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _VrmlConverter_ShadedShape_HeaderFile
#define _VrmlConverter_ShadedShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Handle_VrmlConverter_Drawer_HeaderFile
#include <Handle_VrmlConverter_Drawer.hxx>
#endif
class TopoDS_Shape;
class VrmlConverter_Drawer;
class TopoDS_Face;
class Poly_Connect;
class TColgp_Array1OfDir;


//!  ShadedShape - computes  the  shading presentation of shapes <br>
//!           by triangulation algorithms, converts this one into VRML objects <br>
//!           and writes (adds) into anOStream. <br>
//!           All requested properties of the representation including <br>
//!           the maximal chordial deviation  are specify in aDrawer. <br>
//!           This  kind  of  the  presentation  is  converted  into <br>
//!           IndexedFaceSet ( VRML ). <br>
class VrmlConverter_ShadedShape  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  void Add(Standard_OStream& anOStream,const TopoDS_Shape& aShape,const Handle(VrmlConverter_Drawer)& aDrawer) ;
  
  Standard_EXPORT   static  void ComputeNormal(const TopoDS_Face& aFace,Poly_Connect& pc,TColgp_Array1OfDir& Nor) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
