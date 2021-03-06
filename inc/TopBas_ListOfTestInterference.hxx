// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopBas_ListOfTestInterference_HeaderFile
#define _TopBas_ListOfTestInterference_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_TopBas_ListNodeOfListOfTestInterference_HeaderFile
#include <Handle_TopBas_ListNodeOfListOfTestInterference.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class TopBas_ListIteratorOfListOfTestInterference;
class TopBas_TestInterference;
class TopBas_ListNodeOfListOfTestInterference;



class TopBas_ListOfTestInterference  {
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

  
  Standard_EXPORT   TopBas_ListOfTestInterference();
  
  Standard_EXPORT     void Assign(const TopBas_ListOfTestInterference& Other) ;
    void operator=(const TopBas_ListOfTestInterference& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~TopBas_ListOfTestInterference()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const TopBas_TestInterference& I) ;
  
  Standard_EXPORT     void Prepend(const TopBas_TestInterference& I,TopBas_ListIteratorOfListOfTestInterference& theIt) ;
  
  Standard_EXPORT     void Prepend(TopBas_ListOfTestInterference& Other) ;
  
  Standard_EXPORT     void Append(const TopBas_TestInterference& I) ;
  
  Standard_EXPORT     void Append(const TopBas_TestInterference& I,TopBas_ListIteratorOfListOfTestInterference& theIt) ;
  
  Standard_EXPORT     void Append(TopBas_ListOfTestInterference& Other) ;
  
  Standard_EXPORT     TopBas_TestInterference& First() const;
  
  Standard_EXPORT     TopBas_TestInterference& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(TopBas_ListIteratorOfListOfTestInterference& It) ;
  
  Standard_EXPORT     void InsertBefore(const TopBas_TestInterference& I,TopBas_ListIteratorOfListOfTestInterference& It) ;
  
  Standard_EXPORT     void InsertBefore(TopBas_ListOfTestInterference& Other,TopBas_ListIteratorOfListOfTestInterference& It) ;
  
  Standard_EXPORT     void InsertAfter(const TopBas_TestInterference& I,TopBas_ListIteratorOfListOfTestInterference& It) ;
  
  Standard_EXPORT     void InsertAfter(TopBas_ListOfTestInterference& Other,TopBas_ListIteratorOfListOfTestInterference& It) ;


friend class TopBas_ListIteratorOfListOfTestInterference;



protected:





private:

  
  Standard_EXPORT   TopBas_ListOfTestInterference(const TopBas_ListOfTestInterference& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item TopBas_TestInterference
#define Item_hxx <TopBas_TestInterference.hxx>
#define TCollection_ListNode TopBas_ListNodeOfListOfTestInterference
#define TCollection_ListNode_hxx <TopBas_ListNodeOfListOfTestInterference.hxx>
#define TCollection_ListIterator TopBas_ListIteratorOfListOfTestInterference
#define TCollection_ListIterator_hxx <TopBas_ListIteratorOfListOfTestInterference.hxx>
#define Handle_TCollection_ListNode Handle_TopBas_ListNodeOfListOfTestInterference
#define TCollection_ListNode_Type_() TopBas_ListNodeOfListOfTestInterference_Type_()
#define TCollection_List TopBas_ListOfTestInterference
#define TCollection_List_hxx <TopBas_ListOfTestInterference.hxx>

#include <TCollection_List.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
