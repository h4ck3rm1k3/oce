// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_HOfInteger_HeaderFile
#define _PColStd_HOfInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Storable_HeaderFile
#include <Standard_Storable.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PColStd_HOfInteger);


class PColStd_HOfInteger  {

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

  
  Standard_EXPORT   PColStd_HOfInteger();
  
  Standard_EXPORT   virtual  Standard_Integer HashCode(const Standard_Integer& MyKey,const Standard_Integer Upper) const;
  
  Standard_EXPORT   virtual  Standard_Boolean Compare(const Standard_Integer& One,const Standard_Integer& Two) const;



protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
