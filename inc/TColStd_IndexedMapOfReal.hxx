// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_IndexedMapOfReal_HeaderFile
#define _TColStd_IndexedMapOfReal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TColStd_IndexedMapNodeOfIndexedMapOfReal_HeaderFile
#include <Handle_TColStd_IndexedMapNodeOfIndexedMapOfReal.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_OutOfRange;
class TColStd_MapRealHasher;
class TColStd_IndexedMapNodeOfIndexedMapOfReal;



class TColStd_IndexedMapOfReal  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   TColStd_IndexedMapOfReal(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     TColStd_IndexedMapOfReal& Assign(const TColStd_IndexedMapOfReal& Other) ;
    TColStd_IndexedMapOfReal& operator =(const TColStd_IndexedMapOfReal& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~TColStd_IndexedMapOfReal()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Integer Add(const Standard_Real& K) ;
  
  Standard_EXPORT     void Substitute(const Standard_Integer I,const Standard_Real& K) ;
  
  Standard_EXPORT     void RemoveLast() ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Standard_Real& K) const;
  
  Standard_EXPORT    const Standard_Real& FindKey(const Standard_Integer I) const;
   const Standard_Real& operator ()(const Standard_Integer I) const
{
  return FindKey(I);
}
  
  Standard_EXPORT     Standard_Integer FindIndex(const Standard_Real& K) const;





protected:





private:

  
  Standard_EXPORT   TColStd_IndexedMapOfReal(const TColStd_IndexedMapOfReal& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
