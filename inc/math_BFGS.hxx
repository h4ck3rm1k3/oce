// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_BFGS_HeaderFile
#define _math_BFGS_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _math_Status_HeaderFile
#include <math_Status.hxx>
#endif
#ifndef _math_Vector_HeaderFile
#include <math_Vector.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class StdFail_NotDone;
class Standard_DimensionError;
class math_MultipleVarFunctionWithGradient;
class math_Vector;



//! This class implements the Broyden-Fletcher-Goldfarb-Shanno variant of <br>
//! Davidson-Fletcher-Powell minimization algorithm of a function of <br>
//! multiple variables.Knowledge of the function's gradient is required. <br>
class math_BFGS  {
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

  
//! Given the starting point StartingPoint, <br>
//! the Broyden-Fletcher-Goldfarb-Shanno variant of Davidson-Fletcher-Powell <br>
//! minimization is done on the function F. <br>
//! The tolerance required on F is given by Tolerance. <br>
//! The solution F = Fi is found when : <br>
//!   2.0 * abs(Fi - Fi-1) <= Tolerance * (abs(Fi) + abs(Fi-1) + ZEPS). <br>
//! The maximum number of iterations allowed is given by NbIterations. <br>
  Standard_EXPORT   math_BFGS(math_MultipleVarFunctionWithGradient& F,const math_Vector& StartingPoint,const Standard_Real Tolerance = 1.0e-8,const Standard_Integer NbIterations = 200,const Standard_Real ZEPS = 1.0e-12);
  //! Initializes the computation of the minimum of F. <br>
//! Warning <br>
//! A call to the Perform method must be made after this <br>
//! initialization to effectively compute the minimum of the <br>
//! function F. <br>
  Standard_EXPORT   math_BFGS(math_MultipleVarFunctionWithGradient& F,const Standard_Real Tolerance = 1.0e-8,const Standard_Integer NbIterations = 200,const Standard_Real ZEPS = 1.0e-12);
  
  Standard_EXPORT   virtual  void Delete() ;
Standard_EXPORT virtual ~math_BFGS(){Delete() ; }
  //! Is used internally by the constructors. <br>
  Standard_EXPORT     void Perform(math_MultipleVarFunctionWithGradient& F,const math_Vector& StartingPoint) ;
  
//! This method is called at the end of each iteration to check if the <br>
//! solution is found. <br>
//! It can be redefined in a sub-class to implement a specific test to <br>
//! stop the iterations. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsSolutionReached(math_MultipleVarFunctionWithGradient& F) const;
  //! Returns true if the computations are successful, otherwise returns false. <br>
        Standard_Boolean IsDone() const;
  //! returns the location vector of the minimum. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
       const math_Vector& Location() const;
  //! outputs the location vector of the minimum in Loc. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
//! Exception DimensionError is raised if the range of Loc is not <br>
//! equal to the range of the StartingPoint. <br>
        void Location(math_Vector& Loc) const;
  //! returns the value of the minimum. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
        Standard_Real Minimum() const;
  //! Returns the gradient vector at the minimum. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
       const math_Vector& Gradient() const;
  //! Returns the value of the gradient vector at the minimum in Grad. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
//! Exception DimensionError is raised if the range of Grad is not <br>
//! equal to the range of the StartingPoint. <br>
        void Gradient(math_Vector& Grad) const;
  //! Returns the number of iterations really done in the <br>
//!          calculation of the minimum. <br>
//! The exception NotDone is raised if the minimum was not found. <br>
        Standard_Integer NbIterations() const;
  //! Prints on the stream o information on the current state <br>
//!          of the object. <br>
//!          Is used to redefine the operator <<. <br>
  Standard_EXPORT     void Dump(Standard_OStream& o) const;





protected:



math_Status TheStatus;
math_Vector TheLocation;
math_Vector TheGradient;
Standard_Real PreviousMinimum;
Standard_Real TheMinimum;
Standard_Real XTol;
Standard_Real EPSZ;
Standard_Integer nbiter;


private:



Standard_Boolean Done;
Standard_Integer Itermax;


};


#include <math_BFGS.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
