// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_DateAssignment_HeaderFile
#define _StepBasic_DateAssignment_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_DateAssignment_HeaderFile
#include <Handle_StepBasic_DateAssignment.hxx>
#endif

#ifndef _Handle_StepBasic_Date_HeaderFile
#include <Handle_StepBasic_Date.hxx>
#endif
#ifndef _Handle_StepBasic_DateRole_HeaderFile
#include <Handle_StepBasic_DateRole.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class StepBasic_Date;
class StepBasic_DateRole;



class StepBasic_DateAssignment : public MMgt_TShared {

public:

  
  Standard_EXPORT   virtual  void Init(const Handle(StepBasic_Date)& aAssignedDate,const Handle(StepBasic_DateRole)& aRole) ;
  
  Standard_EXPORT     void SetAssignedDate(const Handle(StepBasic_Date)& aAssignedDate) ;
  
  Standard_EXPORT     Handle_StepBasic_Date AssignedDate() const;
  
  Standard_EXPORT     void SetRole(const Handle(StepBasic_DateRole)& aRole) ;
  
  Standard_EXPORT     Handle_StepBasic_DateRole Role() const;




  DEFINE_STANDARD_RTTI(StepBasic_DateAssignment)

protected:




private: 


Handle_StepBasic_Date assignedDate;
Handle_StepBasic_DateRole role;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
