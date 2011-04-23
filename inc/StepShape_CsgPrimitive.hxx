// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_CsgPrimitive_HeaderFile
#define _StepShape_CsgPrimitive_HeaderFile

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
#ifndef _Handle_StepShape_Sphere_HeaderFile
#include <Handle_StepShape_Sphere.hxx>
#endif
#ifndef _Handle_StepShape_Block_HeaderFile
#include <Handle_StepShape_Block.hxx>
#endif
#ifndef _Handle_StepShape_RightAngularWedge_HeaderFile
#include <Handle_StepShape_RightAngularWedge.hxx>
#endif
#ifndef _Handle_StepShape_Torus_HeaderFile
#include <Handle_StepShape_Torus.hxx>
#endif
#ifndef _Handle_StepShape_RightCircularCone_HeaderFile
#include <Handle_StepShape_RightCircularCone.hxx>
#endif
#ifndef _Handle_StepShape_RightCircularCylinder_HeaderFile
#include <Handle_StepShape_RightCircularCylinder.hxx>
#endif
class Standard_Transient;
class StepShape_Sphere;
class StepShape_Block;
class StepShape_RightAngularWedge;
class StepShape_Torus;
class StepShape_RightCircularCone;
class StepShape_RightCircularCylinder;



class StepShape_CsgPrimitive  : public StepData_SelectType {
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

  //! Returns a CsgPrimitive SelectType <br>
  Standard_EXPORT   StepShape_CsgPrimitive();
  //! Recognizes a CsgPrimitive Kind Entity that is : <br>
//!        1 -> Sphere <br>
//!        2 -> Block <br>
//!        3 -> RightAngularWedge <br>
//!        4 -> Torus <br>
//!        5 -> RightCircularCone <br>
//!        6 -> RightCircularCylinder <br>
//!        0 else <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! returns Value as a Sphere (Null if another type) <br>
  Standard_EXPORT     Handle_StepShape_Sphere Sphere() const;
  //! returns Value as a Block (Null if another type) <br>
  Standard_EXPORT     Handle_StepShape_Block Block() const;
  //! returns Value as a RightAngularWedge (Null if another type) <br>
  Standard_EXPORT     Handle_StepShape_RightAngularWedge RightAngularWedge() const;
  //! returns Value as a Torus (Null if another type) <br>
  Standard_EXPORT     Handle_StepShape_Torus Torus() const;
  //! returns Value as a RightCircularCone (Null if another type) <br>
  Standard_EXPORT     Handle_StepShape_RightCircularCone RightCircularCone() const;
  //! returns Value as a RightCircularCylinder (Null if another type) <br>
  Standard_EXPORT     Handle_StepShape_RightCircularCylinder RightCircularCylinder() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif