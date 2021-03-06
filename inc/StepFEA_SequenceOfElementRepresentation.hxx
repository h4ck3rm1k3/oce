// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_SequenceOfElementRepresentation_HeaderFile
#define _StepFEA_SequenceOfElementRepresentation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_StepFEA_ElementRepresentation_HeaderFile
#include <Handle_StepFEA_ElementRepresentation.hxx>
#endif
#ifndef _Handle_StepFEA_SequenceNodeOfSequenceOfElementRepresentation_HeaderFile
#include <Handle_StepFEA_SequenceNodeOfSequenceOfElementRepresentation.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class StepFEA_ElementRepresentation;
class StepFEA_SequenceNodeOfSequenceOfElementRepresentation;



class StepFEA_SequenceOfElementRepresentation  : public TCollection_BaseSequence {
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

  
      StepFEA_SequenceOfElementRepresentation();
  
  Standard_EXPORT     void Clear() ;
~StepFEA_SequenceOfElementRepresentation()
{
  Clear();
}
  
  Standard_EXPORT    const StepFEA_SequenceOfElementRepresentation& Assign(const StepFEA_SequenceOfElementRepresentation& Other) ;
   const StepFEA_SequenceOfElementRepresentation& operator =(const StepFEA_SequenceOfElementRepresentation& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(StepFEA_ElementRepresentation)& T) ;
  
        void Append(StepFEA_SequenceOfElementRepresentation& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(StepFEA_ElementRepresentation)& T) ;
  
        void Prepend(StepFEA_SequenceOfElementRepresentation& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(StepFEA_ElementRepresentation)& T) ;
  
        void InsertBefore(const Standard_Integer Index,StepFEA_SequenceOfElementRepresentation& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(StepFEA_ElementRepresentation)& T) ;
  
        void InsertAfter(const Standard_Integer Index,StepFEA_SequenceOfElementRepresentation& S) ;
  
  Standard_EXPORT    const Handle_StepFEA_ElementRepresentation& First() const;
  
  Standard_EXPORT    const Handle_StepFEA_ElementRepresentation& Last() const;
  
        void Split(const Standard_Integer Index,StepFEA_SequenceOfElementRepresentation& Sub) ;
  
  Standard_EXPORT    const Handle_StepFEA_ElementRepresentation& Value(const Standard_Integer Index) const;
   const Handle_StepFEA_ElementRepresentation& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(StepFEA_ElementRepresentation)& I) ;
  
  Standard_EXPORT     Handle_StepFEA_ElementRepresentation& ChangeValue(const Standard_Integer Index) ;
    Handle_StepFEA_ElementRepresentation& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   StepFEA_SequenceOfElementRepresentation(const StepFEA_SequenceOfElementRepresentation& Other);




};

#define SeqItem Handle_StepFEA_ElementRepresentation
#define SeqItem_hxx <StepFEA_ElementRepresentation.hxx>
#define TCollection_SequenceNode StepFEA_SequenceNodeOfSequenceOfElementRepresentation
#define TCollection_SequenceNode_hxx <StepFEA_SequenceNodeOfSequenceOfElementRepresentation.hxx>
#define Handle_TCollection_SequenceNode Handle_StepFEA_SequenceNodeOfSequenceOfElementRepresentation
#define TCollection_SequenceNode_Type_() StepFEA_SequenceNodeOfSequenceOfElementRepresentation_Type_()
#define TCollection_Sequence StepFEA_SequenceOfElementRepresentation
#define TCollection_Sequence_hxx <StepFEA_SequenceOfElementRepresentation.hxx>

#include <TCollection_Sequence.lxx>

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
