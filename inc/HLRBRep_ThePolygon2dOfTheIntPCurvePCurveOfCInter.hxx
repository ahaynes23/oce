// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter_HeaderFile
#define _HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Bnd_Box2d_HeaderFile
#include <Bnd_Box2d.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TColgp_Array1OfPnt2d_HeaderFile
#include <TColgp_Array1OfPnt2d.hxx>
#endif
#ifndef _TColStd_Array1OfReal_HeaderFile
#include <TColStd_Array1OfReal.hxx>
#endif
#ifndef _TColStd_Array1OfInteger_HeaderFile
#include <TColStd_Array1OfInteger.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_OutOfRange;
class HLRBRep_CurveTool;
class IntRes2d_Domain;
class Bnd_Box2d;
class gp_Pnt2d;



class HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter(const Standard_Address& Curve,const Standard_Integer NbPnt,const IntRes2d_Domain& Domain,const Standard_Real Tol);
  
  Standard_EXPORT   HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter(const Standard_Address& Curve,const Standard_Integer NbPnt,const IntRes2d_Domain& Domain,const Standard_Real Tol,const Bnd_Box2d& OtherBox);
  
  Standard_EXPORT     void ComputeWithBox(const Standard_Address& Curve,const Bnd_Box2d& OtherBox) ;
  
       const Bnd_Box2d& Bounding() const;
  
        Standard_Real DeflectionOverEstimation() const;
  
        void SetDeflectionOverEstimation(const Standard_Real x) ;
  
        void Closed(const Standard_Boolean clos) ;
  
        Standard_Boolean Closed() const;
  
        Standard_Integer NbSegments() const;
  
       const gp_Pnt2d& BeginOfSeg(const Standard_Integer Index) const;
  
       const gp_Pnt2d& EndOfSeg(const Standard_Integer Index) const;
  
        Standard_Real InfParameter() const;
  
        Standard_Real SupParameter() const;
  
  Standard_EXPORT     Standard_Boolean AutoIntersectionIsPossible() const;
  
  Standard_EXPORT     Standard_Real ApproxParamOnCurve(const Standard_Integer Index,const Standard_Real ParamOnLine) const;
  
        Standard_Integer CalculRegion(const Standard_Real x,const Standard_Real y,const Standard_Real x1,const Standard_Real x2,const Standard_Real y1,const Standard_Real y2) const;
  
  Standard_EXPORT     void Dump() const;





protected:





private:



Bnd_Box2d TheBnd;
Standard_Real TheDeflection;
Standard_Integer NbPntIn;
Standard_Integer TheMaxNbPoints;
TColgp_Array1OfPnt2d ThePnts;
TColStd_Array1OfReal TheParams;
TColStd_Array1OfInteger TheIndex;
Standard_Boolean ClosedPolygon;
Standard_Real Binf;
Standard_Real Bsup;


};

#define TheCurve Standard_Address
#define TheCurve_hxx <Standard_Address.hxx>
#define TheCurveTool HLRBRep_CurveTool
#define TheCurveTool_hxx <HLRBRep_CurveTool.hxx>
#define IntCurve_Polygon2dGen HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter
#define IntCurve_Polygon2dGen_hxx <HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter.hxx>

#include <IntCurve_Polygon2dGen.lxx>

#undef TheCurve
#undef TheCurve_hxx
#undef TheCurveTool
#undef TheCurveTool_hxx
#undef IntCurve_Polygon2dGen
#undef IntCurve_Polygon2dGen_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif