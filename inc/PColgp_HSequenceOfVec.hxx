// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_HSequenceOfVec_HeaderFile
#define _PColgp_HSequenceOfVec_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColgp_HSequenceOfVec_HeaderFile
#include <Handle_PColgp_HSequenceOfVec.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _Handle_PColgp_HSequenceOfVec_HeaderFile
#include <Handle_PColgp_HSequenceOfVec.hxx>
#endif
#ifndef _Handle_PColgp_SeqNodeOfHSequenceOfVec_HeaderFile
#include <Handle_PColgp_SeqNodeOfHSequenceOfVec.hxx>
#endif
#ifndef _Handle_Standard_Persistent_HeaderFile
#include <Handle_Standard_Persistent.hxx>
#endif
#ifndef _Standard_Persistent_HeaderFile
#include <Standard_Persistent.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class PColgp_SeqNodeOfHSequenceOfVec;
class Standard_Persistent;
class Standard_NoSuchObject;
class Standard_OutOfRange;
class PColgp_SeqExplorerOfHSequenceOfVec;
class gp_Vec;


class PColgp_HSequenceOfVec : public Standard_Persistent {

public:

  
  Standard_EXPORT   PColgp_HSequenceOfVec();
  
  Standard_EXPORT     Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     Standard_Integer Length() const;
  
  Standard_EXPORT     gp_Vec First() const;
  
  Standard_EXPORT     gp_Vec Last() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const gp_Vec& T) ;
  
  Standard_EXPORT     void Append(const Handle(PColgp_HSequenceOfVec)& S) ;
  
  Standard_EXPORT     void Prepend(const gp_Vec& T) ;
  
  Standard_EXPORT     void Prepend(const Handle(PColgp_HSequenceOfVec)& S) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer Index,const gp_Vec& T) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer Index,const Handle(PColgp_HSequenceOfVec)& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const gp_Vec& T) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(PColgp_HSequenceOfVec)& S) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer I,const Standard_Integer J) ;
  
  Standard_EXPORT     Handle_PColgp_HSequenceOfVec SubSequence(const Standard_Integer FromIndex,const Standard_Integer ToIndex) const;
  
  Standard_EXPORT     Handle_PColgp_HSequenceOfVec Split(const Standard_Integer Index) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const gp_Vec& T) ;
  
  Standard_EXPORT     gp_Vec Value(const Standard_Integer Index) const;
  
  Standard_EXPORT     Standard_Boolean Contains(const gp_Vec& T) const;
  
  Standard_EXPORT     Standard_Integer Location(const Standard_Integer N,const gp_Vec& T,const Standard_Integer FromIndex,const Standard_Integer ToIndex) const;
  
  Standard_EXPORT     Standard_Integer Location(const Standard_Integer N,const gp_Vec& T) const;
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;
  
  Standard_EXPORT   virtual  Handle_Standard_Persistent ShallowCopy() const;
  
  Standard_EXPORT   virtual  void ShallowDump(Standard_OStream& s) const;
  
  Standard_EXPORT     void Destroy() ;
~PColgp_HSequenceOfVec()
{
  Destroy();
}
PColgp_HSequenceOfVec(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Handle(PColgp_SeqNodeOfHSequenceOfVec) _CSFDB_GetPColgp_HSequenceOfVecFirstItem() const { return FirstItem; }
    void _CSFDB_SetPColgp_HSequenceOfVecFirstItem(const Handle(PColgp_SeqNodeOfHSequenceOfVec)& p) { FirstItem = p; }
    Handle(PColgp_SeqNodeOfHSequenceOfVec) _CSFDB_GetPColgp_HSequenceOfVecLastItem() const { return LastItem; }
    void _CSFDB_SetPColgp_HSequenceOfVecLastItem(const Handle(PColgp_SeqNodeOfHSequenceOfVec)& p) { LastItem = p; }
    Standard_Integer _CSFDB_GetPColgp_HSequenceOfVecSize() const { return Size; }
    void _CSFDB_SetPColgp_HSequenceOfVecSize(const Standard_Integer p) { Size = p; }

friend class PColgp_SeqExplorerOfHSequenceOfVec;


  DEFINE_STANDARD_RTTI(PColgp_HSequenceOfVec)

protected:




private: 

  
  Standard_EXPORT     Handle_PColgp_SeqNodeOfHSequenceOfVec GetFirst() const;
  
  Standard_EXPORT     Handle_PColgp_SeqNodeOfHSequenceOfVec GetLast() const;

Handle_PColgp_SeqNodeOfHSequenceOfVec FirstItem;
Handle_PColgp_SeqNodeOfHSequenceOfVec LastItem;
Standard_Integer Size;


};





// other Inline functions and methods (like "C++: function call" methods)
inline Handle_Standard_Persistent ShallowCopy(const Handle_PColgp_HSequenceOfVec& me) {
 return me->ShallowCopy();
}

inline void ShallowDump(const Handle_PColgp_HSequenceOfVec& me,Standard_OStream& s) {
 me->ShallowDump(s);
}



#endif
