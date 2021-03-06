// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_CurveRangeSample_HeaderFile
#define _IntTools_CurveRangeSample_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _IntTools_BaseRangeSample_HeaderFile
#include <IntTools_BaseRangeSample.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class IntTools_Range;



class IntTools_CurveRangeSample  : public IntTools_BaseRangeSample {
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

  
  Standard_EXPORT   IntTools_CurveRangeSample();
  
  Standard_EXPORT   IntTools_CurveRangeSample(const Standard_Integer theIndex);
  
        void SetRangeIndex(const Standard_Integer theIndex) ;
  
        Standard_Integer GetRangeIndex() const;
  
        Standard_Boolean IsEqual(const IntTools_CurveRangeSample& Other) const;
  
  Standard_EXPORT     IntTools_Range GetRange(const Standard_Real theFirst,const Standard_Real theLast,const Standard_Integer theNbSample) const;
  
        Standard_Integer GetRangeIndexDeeper(const Standard_Integer theNbSample) const;





protected:





private:



Standard_Integer myIndex;


};


#include <IntTools_CurveRangeSample.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
