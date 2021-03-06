// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Vrml_Texture2_HeaderFile
#define _Vrml_Texture2_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Handle_Vrml_SFImage_HeaderFile
#include <Handle_Vrml_SFImage.hxx>
#endif
#ifndef _Vrml_Texture2Wrap_HeaderFile
#include <Vrml_Texture2Wrap.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Vrml_SFImage;
class TCollection_AsciiString;


//! defines a Texture2 node of VRML specifying properties of geometry <br>
//!          and its appearance. <br>
//!  This  property  node  defines  a  texture  map  and  parameters  for  that  map <br>
//!  The  texture  can  be  read  from  the  URL  specified  by  the  filename  field. <br>
//!  To  turn  off  texturing,  set  the  filename  field  to  an  empty  string  (""). <br>
//!  Textures  can  alsobe  specified  inline  by  setting  the  image  field <br>
//!  to  contain  the  texture  data. <br>
//!  By  default  : <br>
//!    myFilename ("") <br>
//!    myImage (0 0 0) <br>
//!    myWrapS (Vrml_REPEAT) <br>
//!    myWrapT (Vrml_REPEAT) <br>
class Vrml_Texture2  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Vrml_Texture2();
  
  Standard_EXPORT   Vrml_Texture2(const TCollection_AsciiString& aFilename,const Handle(Vrml_SFImage)& aImage,const Vrml_Texture2Wrap aWrapS,const Vrml_Texture2Wrap aWrapT);
  
  Standard_EXPORT     void SetFilename(const TCollection_AsciiString& aFilename) ;
  
  Standard_EXPORT     TCollection_AsciiString Filename() const;
  
  Standard_EXPORT     void SetImage(const Handle(Vrml_SFImage)& aImage) ;
  
  Standard_EXPORT     Handle_Vrml_SFImage Image() const;
  
  Standard_EXPORT     void SetWrapS(const Vrml_Texture2Wrap aWrapS) ;
  
  Standard_EXPORT     Vrml_Texture2Wrap WrapS() const;
  
  Standard_EXPORT     void SetWrapT(const Vrml_Texture2Wrap aWrapT) ;
  
  Standard_EXPORT     Vrml_Texture2Wrap WrapT() const;
  
  Standard_EXPORT     Standard_OStream& Print(Standard_OStream& anOStream) const;





protected:





private:



TCollection_AsciiString myFilename;
Handle_Vrml_SFImage myImage;
Vrml_Texture2Wrap myWrapS;
Vrml_Texture2Wrap myWrapT;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
