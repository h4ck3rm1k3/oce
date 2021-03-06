// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GccAna_CircLin2dBisec_HeaderFile
#define _GccAna_CircLin2dBisec_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _gp_Circ2d_HeaderFile
#include <gp_Circ2d.hxx>
#endif
#ifndef _gp_Lin2d_HeaderFile
#include <gp_Lin2d.hxx>
#endif
#ifndef _Handle_GccInt_Bisec_HeaderFile
#include <Handle_GccInt_Bisec.hxx>
#endif
class Standard_OutOfRange;
class StdFail_NotDone;
class gp_Circ2d;
class gp_Lin2d;
class GccInt_Bisec;


//! Describes functions for building bisecting curves between a 2D line and a 2D circle. <br>
//! A bisecting curve between a circle and a line is a curve <br>
//! such that each of its points is at the same distance from <br>
//! the circle and the line. It can be a parabola or a line, <br>
//! depending of the relative position of the line and the <br>
//! circle. The algorithm computes all the elementary curves which are solutions. <br>
//! A CircLin2dBisec object provides a framework for: <br>
//! -   defining the construction of the bisecting curves, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the result. <br>
class GccAna_CircLin2dBisec  {
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

  //! Constructs bisecting curves between the circle Circle and the line Line. <br>
  Standard_EXPORT   GccAna_CircLin2dBisec(const gp_Circ2d& Circle,const gp_Lin2d& Line);
  //! Returns true (this construction algorithm never fails). <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
//! Returns the number of curves, representing solutions computed by this algorithm. <br>
  Standard_EXPORT     Standard_Integer NbSolutions() const;
  //! Returns the solution number Index and raises OutOfRange <br>
//!         exception if Index is greater than the number of solutions <br>
//!    Exceptions <br>
//! Standard_OutOfRange if Index is less than zero or <br>
//! greater than the number of solutions computed by this algorithm. <br>
  Standard_EXPORT     Handle_GccInt_Bisec ThisSolution(const Standard_Integer Index) const;





protected:





private:



Standard_Boolean WellDone;
Standard_Integer NbrSol;
gp_Circ2d circle;
gp_Lin2d line;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
