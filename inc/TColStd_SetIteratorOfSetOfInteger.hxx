// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_SetIteratorOfSetOfInteger_HeaderFile
#define _TColStd_SetIteratorOfSetOfInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TColStd_ListIteratorOfSetListOfSetOfInteger_HeaderFile
#include <TColStd_ListIteratorOfSetListOfSetOfInteger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColStd_ListNodeOfSetListOfSetOfInteger_HeaderFile
#include <Handle_TColStd_ListNodeOfSetListOfSetOfInteger.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class TColStd_SetOfInteger;
class TColStd_SetListOfSetOfInteger;
class TColStd_ListNodeOfSetListOfSetOfInteger;
class TColStd_ListIteratorOfSetListOfSetOfInteger;



class TColStd_SetIteratorOfSetOfInteger  {
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

  
  Standard_EXPORT   TColStd_SetIteratorOfSetOfInteger();
  
  Standard_EXPORT   TColStd_SetIteratorOfSetOfInteger(const TColStd_SetOfInteger& S);
  
  Standard_EXPORT     void Initialize(const TColStd_SetOfInteger& S) ;
  
        Standard_Boolean More() const;
  
        void Next() ;
  
       const Standard_Integer& Value() const;





protected:





private:



TColStd_ListIteratorOfSetListOfSetOfInteger myIterator;


};

#define Item Standard_Integer
#define Item_hxx <Standard_Integer.hxx>
#define TCollection_SetList TColStd_SetListOfSetOfInteger
#define TCollection_SetList_hxx <TColStd_SetListOfSetOfInteger.hxx>
#define TCollection_ListNodeOfSetList TColStd_ListNodeOfSetListOfSetOfInteger
#define TCollection_ListNodeOfSetList_hxx <TColStd_ListNodeOfSetListOfSetOfInteger.hxx>
#define TCollection_ListIteratorOfSetList TColStd_ListIteratorOfSetListOfSetOfInteger
#define TCollection_ListIteratorOfSetList_hxx <TColStd_ListIteratorOfSetListOfSetOfInteger.hxx>
#define TCollection_ListNodeOfSetList TColStd_ListNodeOfSetListOfSetOfInteger
#define TCollection_ListNodeOfSetList_hxx <TColStd_ListNodeOfSetListOfSetOfInteger.hxx>
#define TCollection_ListIteratorOfSetList TColStd_ListIteratorOfSetListOfSetOfInteger
#define TCollection_ListIteratorOfSetList_hxx <TColStd_ListIteratorOfSetListOfSetOfInteger.hxx>
#define TCollection_SetIterator TColStd_SetIteratorOfSetOfInteger
#define TCollection_SetIterator_hxx <TColStd_SetIteratorOfSetOfInteger.hxx>
#define Handle_TCollection_ListNodeOfSetList Handle_TColStd_ListNodeOfSetListOfSetOfInteger
#define TCollection_ListNodeOfSetList_Type_() TColStd_ListNodeOfSetListOfSetOfInteger_Type_()
#define Handle_TCollection_ListNodeOfSetList Handle_TColStd_ListNodeOfSetListOfSetOfInteger
#define TCollection_ListNodeOfSetList_Type_() TColStd_ListNodeOfSetListOfSetOfInteger_Type_()
#define TCollection_Set TColStd_SetOfInteger
#define TCollection_Set_hxx <TColStd_SetOfInteger.hxx>

#include <TCollection_SetIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_SetList
#undef TCollection_SetList_hxx
#undef TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_hxx
#undef TCollection_ListIteratorOfSetList
#undef TCollection_ListIteratorOfSetList_hxx
#undef TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_hxx
#undef TCollection_ListIteratorOfSetList
#undef TCollection_ListIteratorOfSetList_hxx
#undef TCollection_SetIterator
#undef TCollection_SetIterator_hxx
#undef Handle_TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_Type_
#undef Handle_TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_Type_
#undef TCollection_Set
#undef TCollection_Set_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
