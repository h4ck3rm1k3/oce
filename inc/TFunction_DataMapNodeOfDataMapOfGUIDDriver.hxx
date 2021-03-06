// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TFunction_DataMapNodeOfDataMapOfGUIDDriver_HeaderFile
#define _TFunction_DataMapNodeOfDataMapOfGUIDDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TFunction_DataMapNodeOfDataMapOfGUIDDriver_HeaderFile
#include <Handle_TFunction_DataMapNodeOfDataMapOfGUIDDriver.hxx>
#endif

#ifndef _Standard_GUID_HeaderFile
#include <Standard_GUID.hxx>
#endif
#ifndef _Handle_TFunction_Driver_HeaderFile
#include <Handle_TFunction_Driver.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TFunction_Driver;
class Standard_GUID;
class TFunction_DataMapOfGUIDDriver;
class TFunction_DataMapIteratorOfDataMapOfGUIDDriver;



class TFunction_DataMapNodeOfDataMapOfGUIDDriver : public TCollection_MapNode {

public:

  
      TFunction_DataMapNodeOfDataMapOfGUIDDriver(const Standard_GUID& K,const Handle(TFunction_Driver)& I,const TCollection_MapNodePtr& n);
  
        Standard_GUID& Key() const;
  
        Handle_TFunction_Driver& Value() const;




  DEFINE_STANDARD_RTTI(TFunction_DataMapNodeOfDataMapOfGUIDDriver)

protected:




private: 


Standard_GUID myKey;
Handle_TFunction_Driver myValue;


};

#define TheKey Standard_GUID
#define TheKey_hxx <Standard_GUID.hxx>
#define TheItem Handle_TFunction_Driver
#define TheItem_hxx <TFunction_Driver.hxx>
#define Hasher Standard_GUID
#define Hasher_hxx <Standard_GUID.hxx>
#define TCollection_DataMapNode TFunction_DataMapNodeOfDataMapOfGUIDDriver
#define TCollection_DataMapNode_hxx <TFunction_DataMapNodeOfDataMapOfGUIDDriver.hxx>
#define TCollection_DataMapIterator TFunction_DataMapIteratorOfDataMapOfGUIDDriver
#define TCollection_DataMapIterator_hxx <TFunction_DataMapIteratorOfDataMapOfGUIDDriver.hxx>
#define Handle_TCollection_DataMapNode Handle_TFunction_DataMapNodeOfDataMapOfGUIDDriver
#define TCollection_DataMapNode_Type_() TFunction_DataMapNodeOfDataMapOfGUIDDriver_Type_()
#define TCollection_DataMap TFunction_DataMapOfGUIDDriver
#define TCollection_DataMap_hxx <TFunction_DataMapOfGUIDDriver.hxx>

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
