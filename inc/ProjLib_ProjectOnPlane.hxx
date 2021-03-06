// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ProjLib_ProjectOnPlane_HeaderFile
#define _ProjLib_ProjectOnPlane_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _gp_Ax3_HeaderFile
#include <gp_Ax3.hxx>
#endif
#ifndef _gp_Dir_HeaderFile
#include <gp_Dir.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _GeomAbs_CurveType_HeaderFile
#include <GeomAbs_CurveType.hxx>
#endif
#ifndef _Handle_GeomAdaptor_HCurve_HeaderFile
#include <Handle_GeomAdaptor_HCurve.hxx>
#endif
#ifndef _Adaptor3d_Curve_HeaderFile
#include <Adaptor3d_Curve.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Geom_BezierCurve_HeaderFile
#include <Handle_Geom_BezierCurve.hxx>
#endif
#ifndef _Handle_Geom_BSplineCurve_HeaderFile
#include <Handle_Geom_BSplineCurve.hxx>
#endif
class Adaptor3d_HCurve;
class GeomAdaptor_HCurve;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class Standard_ConstructionError;
class Standard_NotImplemented;
class gp_Ax3;
class gp_Dir;
class TColStd_Array1OfReal;
class gp_Pnt;
class gp_Vec;
class gp_Lin;
class gp_Circ;
class gp_Elips;
class gp_Hypr;
class gp_Parab;
class Geom_BezierCurve;
class Geom_BSplineCurve;


//! Class  used  to project  a 3d curve   on a plane.  The <br>
//!          result will be a 3d curve. <br>
//! <br>
//!          You  can ask   the projected curve  to  have  the same <br>
//!          parametrization as the original curve. <br>
//! <br>
//!          The projection can be done  along every direction  not <br>
//!          parallel to the plane. <br>
//! <br>
class ProjLib_ProjectOnPlane  : public Adaptor3d_Curve {
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

  //! Empty constructor. <br>
  Standard_EXPORT   ProjLib_ProjectOnPlane();
  //! The projection will be normal to the Plane defined <br>
//!          by the Ax3 <Pl>. <br>
  Standard_EXPORT   ProjLib_ProjectOnPlane(const gp_Ax3& Pl);
  //! The projection will be  along the direction <D> on <br>
//!          the plane defined by the Ax3 <Pl>. <br>//! raises  if the direction  <D>  is parallel  to the <br>
//!          plane <Pl>. <br>
  Standard_EXPORT   ProjLib_ProjectOnPlane(const gp_Ax3& Pl,const gp_Dir& D);
  //! Sets the  Curve  and perform  the projection.   if <br>
//!          <KeepParametrization> is true, the parametrization <br>
//!          of the Projected Curve <PC>  will  be the same  as <br>
//!          the parametrization of the initial  curve <C>.  It <br>
//!          meens: proj(C(u)) = PC(u) for  each u.  Otherwize, <br>
//!          the parametrization may change. <br>
  Standard_EXPORT     void Load(const Handle(Adaptor3d_HCurve)& C,const Standard_Real Tolerance,const Standard_Boolean KeepParametrization = Standard_True) ;
  
  Standard_EXPORT    const gp_Ax3& GetPlane() const;
  
  Standard_EXPORT    const gp_Dir& GetDirection() const;
  
  Standard_EXPORT    const Handle_Adaptor3d_HCurve& GetCurve() const;
  
  Standard_EXPORT     Standard_Real FirstParameter() const;
  
  Standard_EXPORT     Standard_Real LastParameter() const;
  
  Standard_EXPORT     GeomAbs_Shape Continuity() const;
  //! If necessary,  breaks the  curve in  intervals  of <br>
//!          continuity  <S>.    And  returns   the number   of <br>
//!          intervals. <br>
  Standard_EXPORT     Standard_Integer NbIntervals(const GeomAbs_Shape S) ;
  //! Stores in <T> the  parameters bounding the intervals <br>
//!          of continuity <S>. <br>
//! <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
  Standard_EXPORT     void Intervals(TColStd_Array1OfReal& T,const GeomAbs_Shape S) ;
  //! Returns    a  curve equivalent   of  <me>  between <br>
//!          parameters <First>  and <Last>. <Tol>  is used  to <br>
//!          test for 3d points confusion. <br>//! If <First> >= <Last> <br>
  Standard_EXPORT     Handle_Adaptor3d_HCurve Trim(const Standard_Real First,const Standard_Real Last,const Standard_Real Tol) const;
  
  Standard_EXPORT     Standard_Boolean IsClosed() const;
  
  Standard_EXPORT     Standard_Boolean IsPeriodic() const;
  
  Standard_EXPORT     Standard_Real Period() const;
  //! Computes the point of parameter U on the curve. <br>
  Standard_EXPORT     gp_Pnt Value(const Standard_Real U) const;
  //! Computes the point of parameter U on the curve. <br>
  Standard_EXPORT     void D0(const Standard_Real U,gp_Pnt& P) const;
  //! Computes the point of parameter U on the curve with its <br>
//!  first derivative. <br>//! Raised if the continuity of the current interval <br>
//!  is not C1. <br>
  Standard_EXPORT     void D1(const Standard_Real U,gp_Pnt& P,gp_Vec& V) const;
  
//!  Returns the point P of parameter U, the first and second <br>
//!  derivatives V1 and V2. <br>//! Raised if the continuity of the current interval <br>
//!  is not C2. <br>
  Standard_EXPORT     void D2(const Standard_Real U,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2) const;
  
//!  Returns the point P of parameter U, the first, the second <br>
//!  and the third derivative. <br>//! Raised if the continuity of the current interval <br>
//!  is not C3. <br>
  Standard_EXPORT     void D3(const Standard_Real U,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2,gp_Vec& V3) const;
  
//!  The returned vector gives the value of the derivative for the <br>
//!  order of derivation N. <br>//! Raised if the continuity of the current interval <br>
//!  is not CN. <br>//! Raised if N < 1. <br>
  Standard_EXPORT     gp_Vec DN(const Standard_Real U,const Standard_Integer N) const;
  //!  Returns the parametric  resolution corresponding <br>
//!         to the real space resolution <R3d>. <br>
  Standard_EXPORT     Standard_Real Resolution(const Standard_Real R3d) const;
  //! Returns  the  type of the   curve  in the  current <br>
//!          interval :   Line,   Circle,   Ellipse, Hyperbola, <br>
//!          Parabola, BezierCurve, BSplineCurve, OtherCurve. <br>
  Standard_EXPORT     GeomAbs_CurveType GetType() const;
  
  Standard_EXPORT     gp_Lin Line() const;
  
  Standard_EXPORT     gp_Circ Circle() const;
  
  Standard_EXPORT     gp_Elips Ellipse() const;
  
  Standard_EXPORT     gp_Hypr Hyperbola() const;
  
  Standard_EXPORT     gp_Parab Parabola() const;
  
  Standard_EXPORT     Standard_Integer Degree() const;
  
  Standard_EXPORT     Standard_Boolean IsRational() const;
  
  Standard_EXPORT     Standard_Integer NbPoles() const;
  
  Standard_EXPORT     Standard_Integer NbKnots() const;
  //!  Warning ! this will NOT make a copy of the <br>
//!         Bezier Curve : If you want to modify <br>
//!         the Curve please make a copy yourself <br>
//!         Also it will NOT trim the surface to <br>
//!         myFirst/Last. <br>
  Standard_EXPORT     Handle_Geom_BezierCurve Bezier() const;
  //!  Warning ! this will NOT make a copy of the <br>
//!         BSpline Curve : If you want to modify <br>
//!         the Curve please make a copy yourself <br>
//!         Also it will NOT trim the surface to <br>
//!         myFirst/Last. <br>
  Standard_EXPORT     Handle_Geom_BSplineCurve BSpline() const;





protected:





private:



Handle_Adaptor3d_HCurve myCurve;
gp_Ax3 myPlane;
gp_Dir myDirection;
Standard_Boolean myKeepParam;
Standard_Real myFirstPar;
Standard_Real myLastPar;
Standard_Real myTolerance;
GeomAbs_CurveType myType;
Handle_GeomAdaptor_HCurve myResult;
Standard_Boolean myIsApprox;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
