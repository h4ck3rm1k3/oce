// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_SequenceNodeOfSequenceOfBinder_HeaderFile
#define _Transfer_SequenceNodeOfSequenceOfBinder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Transfer_SequenceNodeOfSequenceOfBinder_HeaderFile
#include <Handle_Transfer_SequenceNodeOfSequenceOfBinder.hxx>
#endif

#ifndef _Handle_Transfer_Binder_HeaderFile
#include <Handle_Transfer_Binder.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class Transfer_Binder;
class Transfer_SequenceOfBinder;



class Transfer_SequenceNodeOfSequenceOfBinder : public TCollection_SeqNode {

public:

  
      Transfer_SequenceNodeOfSequenceOfBinder(const Handle(Transfer_Binder)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_Transfer_Binder& Value() const;




  DEFINE_STANDARD_RTTI(Transfer_SequenceNodeOfSequenceOfBinder)

protected:




private: 


Handle_Transfer_Binder myValue;


};

#define SeqItem Handle_Transfer_Binder
#define SeqItem_hxx <Transfer_Binder.hxx>
#define TCollection_SequenceNode Transfer_SequenceNodeOfSequenceOfBinder
#define TCollection_SequenceNode_hxx <Transfer_SequenceNodeOfSequenceOfBinder.hxx>
#define Handle_TCollection_SequenceNode Handle_Transfer_SequenceNodeOfSequenceOfBinder
#define TCollection_SequenceNode_Type_() Transfer_SequenceNodeOfSequenceOfBinder_Type_()
#define TCollection_Sequence Transfer_SequenceOfBinder
#define TCollection_Sequence_hxx <Transfer_SequenceOfBinder.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
