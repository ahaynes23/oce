// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapNodeOfDataMapOfHArray1OfSequenceOfInteger_HeaderFile
#define _MeshVS_DataMapNodeOfDataMapOfHArray1OfSequenceOfInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MeshVS_DataMapNodeOfDataMapOfHArray1OfSequenceOfInteger_HeaderFile
#include <Handle_MeshVS_DataMapNodeOfDataMapOfHArray1OfSequenceOfInteger.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_MeshVS_HArray1OfSequenceOfInteger_HeaderFile
#include <Handle_MeshVS_HArray1OfSequenceOfInteger.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class MeshVS_HArray1OfSequenceOfInteger;
class TColStd_MapIntegerHasher;
class MeshVS_DataMapOfHArray1OfSequenceOfInteger;
class MeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger;



class MeshVS_DataMapNodeOfDataMapOfHArray1OfSequenceOfInteger : public TCollection_MapNode {

public:

  
      MeshVS_DataMapNodeOfDataMapOfHArray1OfSequenceOfInteger(const Standard_Integer& K,const Handle(MeshVS_HArray1OfSequenceOfInteger)& I,const TCollection_MapNodePtr& n);
  
        Standard_Integer& Key() const;
  
        Handle_MeshVS_HArray1OfSequenceOfInteger& Value() const;




  DEFINE_STANDARD_RTTI(MeshVS_DataMapNodeOfDataMapOfHArray1OfSequenceOfInteger)

protected:




private: 


Standard_Integer myKey;
Handle_MeshVS_HArray1OfSequenceOfInteger myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Standard_Integer.hxx>
#define TheItem Handle_MeshVS_HArray1OfSequenceOfInteger
#define TheItem_hxx <MeshVS_HArray1OfSequenceOfInteger.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode MeshVS_DataMapNodeOfDataMapOfHArray1OfSequenceOfInteger
#define TCollection_DataMapNode_hxx <MeshVS_DataMapNodeOfDataMapOfHArray1OfSequenceOfInteger.hxx>
#define TCollection_DataMapIterator MeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger
#define TCollection_DataMapIterator_hxx <MeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger.hxx>
#define Handle_TCollection_DataMapNode Handle_MeshVS_DataMapNodeOfDataMapOfHArray1OfSequenceOfInteger
#define TCollection_DataMapNode_Type_() MeshVS_DataMapNodeOfDataMapOfHArray1OfSequenceOfInteger_Type_()
#define TCollection_DataMap MeshVS_DataMapOfHArray1OfSequenceOfInteger
#define TCollection_DataMap_hxx <MeshVS_DataMapOfHArray1OfSequenceOfInteger.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
