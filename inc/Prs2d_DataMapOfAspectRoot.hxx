// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs2d_DataMapOfAspectRoot_HeaderFile
#define _Prs2d_DataMapOfAspectRoot_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Prs2d_AspectRoot_HeaderFile
#include <Handle_Prs2d_AspectRoot.hxx>
#endif
#ifndef _Handle_Prs2d_DataMapNodeOfDataMapOfAspectRoot_HeaderFile
#include <Handle_Prs2d_DataMapNodeOfDataMapOfAspectRoot.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class Prs2d_AspectRoot;
class TColStd_MapIntegerHasher;
class Prs2d_DataMapNodeOfDataMapOfAspectRoot;
class Prs2d_DataMapIteratorOfDataMapOfAspectRoot;



class Prs2d_DataMapOfAspectRoot  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   Prs2d_DataMapOfAspectRoot(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     Prs2d_DataMapOfAspectRoot& Assign(const Prs2d_DataMapOfAspectRoot& Other) ;
    Prs2d_DataMapOfAspectRoot& operator =(const Prs2d_DataMapOfAspectRoot& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~Prs2d_DataMapOfAspectRoot()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Standard_Integer& K,const Handle(Prs2d_AspectRoot)& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Standard_Integer& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Standard_Integer& K) ;
  
  Standard_EXPORT    const Handle_Prs2d_AspectRoot& Find(const Standard_Integer& K) const;
   const Handle_Prs2d_AspectRoot& operator()(const Standard_Integer& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Handle_Prs2d_AspectRoot& ChangeFind(const Standard_Integer& K) ;
    Handle_Prs2d_AspectRoot& operator()(const Standard_Integer& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT     Standard_Address Find1(const Standard_Integer& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFind1(const Standard_Integer& K) ;





protected:





private:

  
  Standard_EXPORT   Prs2d_DataMapOfAspectRoot(const Prs2d_DataMapOfAspectRoot& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
