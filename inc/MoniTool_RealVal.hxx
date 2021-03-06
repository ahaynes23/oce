// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_RealVal_HeaderFile
#define _MoniTool_RealVal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MoniTool_RealVal_HeaderFile
#include <Handle_MoniTool_RealVal.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif


//! A Real through a Handle (i.e. managed as TShared) <br>
class MoniTool_RealVal : public MMgt_TShared {

public:

  
  Standard_EXPORT   MoniTool_RealVal(const Standard_Real val = 0.0);
  
  Standard_EXPORT     Standard_Real Value() const;
  
  Standard_EXPORT     Standard_Real& CValue() ;




  DEFINE_STANDARD_RTTI(MoniTool_RealVal)

protected:




private: 


Standard_Real theval;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
