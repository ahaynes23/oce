// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_IntParam_HeaderFile
#define _IFSelect_IntParam_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_IntParam_HeaderFile
#include <Handle_IFSelect_IntParam.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif


//! This class simply allows to access an Integer value through a <br>
//!           Handle, as a String can be (by using HString). <br>
//!           Hence, this value can be accessed : read and modified, without <br>
//!           passing through the specific object which detains it. Thus, <br>
//!           parameters of a Selection or a Dispatch (according its type) <br>
//!           can be controlled directly from the ShareOut which contains them <br>
//! <br>
//!           Additionnaly, an IntParam can be bound to a Static. <br>
//!           Remember that for a String, binding is immediate, because the <br>
//!           string value of a Static is a HAsciiString, it then suffices <br>
//!           to get its Handle. <br>
//!           For an Integer, an IntParam can designate (by its name) a <br>
//!           Static : each time its value is required or set, the Static <br>
//!           is aknowledged <br>
class IFSelect_IntParam : public MMgt_TShared {

public:

  //! Creates an IntParam. Initial value is set to zer <br>
  Standard_EXPORT   IFSelect_IntParam();
  //! Commands this IntParam to be bound to a Static <br>
//!           Hence, Value will return the value if this Static if it is set <br>
//!           Else, Value works on the locally stored value <br>
//!           SetValue also will set the value of the Static <br>
//!           This works only for a present static of type integer or enum <br>
//!           Else, it is ignored <br>
//! <br>
//!           If <statname> is empty, disconnects the IntParam from Static <br>
  Standard_EXPORT     void SetStaticName(const Standard_CString statname) ;
  //! Returns the name of static parameter to which this IntParam <br>
//!           is bound, empty if none <br>
  Standard_EXPORT     Standard_CString StaticName() const;
  //! Reads Integer Value of the IntParam. If a StaticName is <br>
//!           defined and the Static is set, looks in priority the value <br>
//!           of the static <br>
  Standard_EXPORT     Standard_Integer Value() const;
  //! Sets a new Integer Value for the IntParam. If a StaticName is <br>
//!           defined and the Static is set, also sets the value of the static <br>
  Standard_EXPORT     void SetValue(const Standard_Integer val) ;




  DEFINE_STANDARD_RTTI(IFSelect_IntParam)

protected:




private: 


Standard_Integer theval;
TCollection_AsciiString thestn;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
