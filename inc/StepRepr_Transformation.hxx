// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_Transformation_HeaderFile
#define _StepRepr_Transformation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepData_SelectType_HeaderFile
#include <StepData_SelectType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_StepRepr_ItemDefinedTransformation_HeaderFile
#include <Handle_StepRepr_ItemDefinedTransformation.hxx>
#endif
#ifndef _Handle_StepRepr_FunctionallyDefinedTransformation_HeaderFile
#include <Handle_StepRepr_FunctionallyDefinedTransformation.hxx>
#endif
class Standard_Transient;
class StepRepr_ItemDefinedTransformation;
class StepRepr_FunctionallyDefinedTransformation;



class StepRepr_Transformation  : public StepData_SelectType {
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

  //! Returns a Transformation SelectType <br>
  Standard_EXPORT   StepRepr_Transformation();
  //! Recognizes a Transformation Kind Entity that is : <br>
//!        1 -> ItemDefinedTransformation <br>
//!        2 -> FunctionallyDefinedTransformation <br>
//!        0 else <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! returns Value as a ItemDefinedTransformation (Null if another type) <br>
  Standard_EXPORT     Handle_StepRepr_ItemDefinedTransformation ItemDefinedTransformation() const;
  //! returns Value as a FunctionallyDefinedTransformation (Null if another type) <br>
  Standard_EXPORT     Handle_StepRepr_FunctionallyDefinedTransformation FunctionallyDefinedTransformation() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
