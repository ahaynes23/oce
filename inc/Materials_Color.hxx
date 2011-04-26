// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Materials_Color_HeaderFile
#define _Materials_Color_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Materials_Color_HeaderFile
#include <Handle_Materials_Color.hxx>
#endif

#ifndef _Quantity_Color_HeaderFile
#include <Quantity_Color.hxx>
#endif
#ifndef _Standard_Transient_HeaderFile
#include <Standard_Transient.hxx>
#endif
#ifndef _Quantity_TypeOfColor_HeaderFile
#include <Quantity_TypeOfColor.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Quantity_Color;


//! This class  encapsulates   a Quantity_Color  in  a <br>
//!          Transient object, to be used in an ObjectProperty <br>
//!          from the package Dynamic. <br>
class Materials_Color : public Standard_Transient {

public:

  //! Creates an empty instance of Color. <br>
  Standard_EXPORT   Materials_Color();
  //! Creates an instance of Color, with <acolor> as color. <br>
  Standard_EXPORT   Materials_Color(const Quantity_Color& acolor);
  //! Sets <acolor> into <me>. <br>
  Standard_EXPORT     void Color(const Quantity_Color& acolor) ;
  //! Returns a Quantity_Color corresponding to <me>. <br>
  Standard_EXPORT     Quantity_Color Color() const;
  //! Get the values ( RGB or HLS )  between 0.0 and 1.0 <br>
  Standard_EXPORT     void Color(const Quantity_TypeOfColor aTypeOfColor,Standard_Real& Reel1,Standard_Real& Reel2,Standard_Real& Reel3) const;
  //! Get the values ( RGB or HLS )  between 0.0 and 255.0 <br>
  Standard_EXPORT     void Color255(const Quantity_TypeOfColor aTypeOfColor,Standard_Real& Reel1,Standard_Real& Reel2,Standard_Real& Reel3) const;
  //! Set the values ( RGB or HLS )  between 0.0 and 1.0 <br>
  Standard_EXPORT     void SetColor(const Quantity_TypeOfColor aTypeOfColor,const Standard_Real Reel1,const Standard_Real Reel2,const Standard_Real Reel3) ;
  //! Set the values ( RGB or HLS )  between 0.0 and 255.0 <br>
  Standard_EXPORT     void SetColor255(const Quantity_TypeOfColor aTypeOfColor,const Standard_Real Reel1,const Standard_Real Reel2,const Standard_Real Reel3) ;




  DEFINE_STANDARD_RTTI(Materials_Color)

protected:




private: 


Quantity_Color thecolor;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif