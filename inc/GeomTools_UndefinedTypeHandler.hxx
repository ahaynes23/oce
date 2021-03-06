// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomTools_UndefinedTypeHandler_HeaderFile
#define _GeomTools_UndefinedTypeHandler_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_GeomTools_UndefinedTypeHandler_HeaderFile
#include <Handle_GeomTools_UndefinedTypeHandler.hxx>
#endif

#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_IStream_HeaderFile
#include <Standard_IStream.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
class Geom_Curve;
class Geom2d_Curve;
class Geom_Surface;



class GeomTools_UndefinedTypeHandler : public MMgt_TShared {

public:

  
  Standard_EXPORT   GeomTools_UndefinedTypeHandler();
  
  Standard_EXPORT   virtual  void PrintCurve(const Handle(Geom_Curve)& C,Standard_OStream& OS,const Standard_Boolean compact = Standard_False) const;
  
  Standard_EXPORT   virtual  Standard_IStream& ReadCurve(const Standard_Integer ctype,Standard_IStream& IS,Handle(Geom_Curve)& C) const;
  
  Standard_EXPORT   virtual  void PrintCurve2d(const Handle(Geom2d_Curve)& C,Standard_OStream& OS,const Standard_Boolean compact = Standard_False) const;
  
  Standard_EXPORT   virtual  Standard_IStream& ReadCurve2d(const Standard_Integer ctype,Standard_IStream& IS,Handle(Geom2d_Curve)& C) const;
  
  Standard_EXPORT   virtual  void PrintSurface(const Handle(Geom_Surface)& S,Standard_OStream& OS,const Standard_Boolean compact = Standard_False) const;
  
  Standard_EXPORT   virtual  Standard_IStream& ReadSurface(const Standard_Integer ctype,Standard_IStream& IS,Handle(Geom_Surface)& S) const;




  DEFINE_STANDARD_RTTI(GeomTools_UndefinedTypeHandler)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
