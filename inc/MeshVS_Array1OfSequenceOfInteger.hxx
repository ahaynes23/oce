// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_Array1OfSequenceOfInteger_HeaderFile
#define _MeshVS_Array1OfSequenceOfInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class TColStd_SequenceOfInteger;



class MeshVS_Array1OfSequenceOfInteger  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   MeshVS_Array1OfSequenceOfInteger(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   MeshVS_Array1OfSequenceOfInteger(const TColStd_SequenceOfInteger& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const TColStd_SequenceOfInteger& V) ;
  
  Standard_EXPORT     void Destroy() ;
~MeshVS_Array1OfSequenceOfInteger()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const MeshVS_Array1OfSequenceOfInteger& Assign(const MeshVS_Array1OfSequenceOfInteger& Other) ;
   const MeshVS_Array1OfSequenceOfInteger& operator =(const MeshVS_Array1OfSequenceOfInteger& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const TColStd_SequenceOfInteger& Value) ;
  
       const TColStd_SequenceOfInteger& Value(const Standard_Integer Index) const;
     const TColStd_SequenceOfInteger& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        TColStd_SequenceOfInteger& ChangeValue(const Standard_Integer Index) ;
      TColStd_SequenceOfInteger& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   MeshVS_Array1OfSequenceOfInteger(const MeshVS_Array1OfSequenceOfInteger& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item TColStd_SequenceOfInteger
#define Array1Item_hxx <TColStd_SequenceOfInteger.hxx>
#define TCollection_Array1 MeshVS_Array1OfSequenceOfInteger
#define TCollection_Array1_hxx <MeshVS_Array1OfSequenceOfInteger.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
