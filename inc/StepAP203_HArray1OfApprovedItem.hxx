// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_HArray1OfApprovedItem_HeaderFile
#define _StepAP203_HArray1OfApprovedItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepAP203_HArray1OfApprovedItem_HeaderFile
#include <Handle_StepAP203_HArray1OfApprovedItem.hxx>
#endif

#ifndef _StepAP203_Array1OfApprovedItem_HeaderFile
#include <StepAP203_Array1OfApprovedItem.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepAP203_ApprovedItem;
class StepAP203_Array1OfApprovedItem;



class StepAP203_HArray1OfApprovedItem : public MMgt_TShared {

public:

  
  Standard_EXPORT   StepAP203_HArray1OfApprovedItem(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepAP203_HArray1OfApprovedItem(const Standard_Integer Low,const Standard_Integer Up,const StepAP203_ApprovedItem& V);
  
  Standard_EXPORT     void Init(const StepAP203_ApprovedItem& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const StepAP203_ApprovedItem& Value) ;
  
       const StepAP203_ApprovedItem& Value(const Standard_Integer Index) const;
  
        StepAP203_ApprovedItem& ChangeValue(const Standard_Integer Index) ;
  
       const StepAP203_Array1OfApprovedItem& Array1() const;
  
        StepAP203_Array1OfApprovedItem& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepAP203_HArray1OfApprovedItem)

protected:




private: 


StepAP203_Array1OfApprovedItem myArray;


};

#define ItemHArray1 StepAP203_ApprovedItem
#define ItemHArray1_hxx <StepAP203_ApprovedItem.hxx>
#define TheArray1 StepAP203_Array1OfApprovedItem
#define TheArray1_hxx <StepAP203_Array1OfApprovedItem.hxx>
#define TCollection_HArray1 StepAP203_HArray1OfApprovedItem
#define TCollection_HArray1_hxx <StepAP203_HArray1OfApprovedItem.hxx>
#define Handle_TCollection_HArray1 Handle_StepAP203_HArray1OfApprovedItem
#define TCollection_HArray1_Type_() StepAP203_HArray1OfApprovedItem_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif
