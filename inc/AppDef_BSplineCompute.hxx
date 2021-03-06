// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppDef_BSplineCompute_HeaderFile
#define _AppDef_BSplineCompute_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _AppParCurves_MultiBSpCurve_HeaderFile
#include <AppParCurves_MultiBSpCurve.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Approx_ParametrizationType_HeaderFile
#include <Approx_ParametrizationType.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Handle_AppParCurves_HArray1OfConstraintCouple_HeaderFile
#include <Handle_AppParCurves_HArray1OfConstraintCouple.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _AppParCurves_Constraint_HeaderFile
#include <AppParCurves_Constraint.hxx>
#endif
class TColStd_HArray1OfReal;
class TColStd_HArray1OfInteger;
class AppParCurves_HArray1OfConstraintCouple;
class AppDef_MultiLine;
class AppDef_MyLineTool;
class AppDef_MyBSplGradientOfBSplineCompute;
class AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute;
class AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute;
class AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute;
class AppDef_MyGradientbisOfBSplineCompute;
class AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute;
class AppDef_ResConstraintOfMyGradientbisOfBSplineCompute;
class AppDef_ParFunctionOfMyGradientbisOfBSplineCompute;
class AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute;
class math_Vector;
class TColStd_Array1OfReal;
class TColStd_Array1OfInteger;
class AppParCurves_MultiBSpCurve;
class AppParCurves_MultiCurve;



class AppDef_BSplineCompute  {
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

  
  Standard_EXPORT   AppDef_BSplineCompute(const AppDef_MultiLine& Line,const Standard_Integer degreemin = 4,const Standard_Integer degreemax = 8,const Standard_Real Tolerance3d = 1.0e-3,const Standard_Real Tolerance2d = 1.0e-6,const Standard_Integer NbIterations = 5,const Standard_Boolean cutting = Standard_True,const Approx_ParametrizationType parametrization = Approx_ChordLength,const Standard_Boolean Squares = Standard_False);
  
  Standard_EXPORT   AppDef_BSplineCompute(const AppDef_MultiLine& Line,const math_Vector& Parameters,const Standard_Integer degreemin = 4,const Standard_Integer degreemax = 8,const Standard_Real Tolerance3d = 1.0e-03,const Standard_Real Tolerance2d = 1.0e-06,const Standard_Integer NbIterations = 5,const Standard_Boolean cutting = Standard_True,const Standard_Boolean Squares = Standard_False);
  
  Standard_EXPORT   AppDef_BSplineCompute(const math_Vector& Parameters,const Standard_Integer degreemin = 4,const Standard_Integer degreemax = 8,const Standard_Real Tolerance3d = 1.0e-03,const Standard_Real Tolerance2d = 1.0e-06,const Standard_Integer NbIterations = 5,const Standard_Boolean cutting = Standard_True,const Standard_Boolean Squares = Standard_False);
  
  Standard_EXPORT   AppDef_BSplineCompute(const Standard_Integer degreemin = 4,const Standard_Integer degreemax = 8,const Standard_Real Tolerance3d = 1.0e-03,const Standard_Real Tolerance2d = 1.0e-06,const Standard_Integer NbIterations = 5,const Standard_Boolean cutting = Standard_True,const Approx_ParametrizationType parametrization = Approx_ChordLength,const Standard_Boolean Squares = Standard_False);
  
  Standard_EXPORT     void Interpol(const AppDef_MultiLine& Line) ;
  
  Standard_EXPORT     void Init(const Standard_Integer degreemin = 4,const Standard_Integer degreemax = 8,const Standard_Real Tolerance3d = 1.0e-03,const Standard_Real Tolerance2d = 1.0e-06,const Standard_Integer NbIterations = 5,const Standard_Boolean cutting = Standard_True,const Approx_ParametrizationType parametrization = Approx_ChordLength,const Standard_Boolean Squares = Standard_False) ;
  
  Standard_EXPORT     void Perform(const AppDef_MultiLine& Line) ;
  
  Standard_EXPORT     void SetParameters(const math_Vector& ThePar) ;
  
  Standard_EXPORT     void SetKnots(const TColStd_Array1OfReal& Knots) ;
  
  Standard_EXPORT     void SetKnotsAndMultiplicities(const TColStd_Array1OfReal& Knots,const TColStd_Array1OfInteger& Mults) ;
  
  Standard_EXPORT     void SetDegrees(const Standard_Integer degreemin,const Standard_Integer degreemax) ;
  
  Standard_EXPORT     void SetTolerances(const Standard_Real Tolerance3d,const Standard_Real Tolerance2d) ;
  
  Standard_EXPORT     void SetContinuity(const Standard_Integer C) ;
  
  Standard_EXPORT     void SetConstraints(const AppParCurves_Constraint firstC,const AppParCurves_Constraint lastC) ;
  
  Standard_EXPORT     Standard_Boolean IsAllApproximated() const;
  
  Standard_EXPORT     Standard_Boolean IsToleranceReached() const;
  
  Standard_EXPORT     void Error(Standard_Real& tol3d,Standard_Real& tol2d) const;
  
  Standard_EXPORT    const AppParCurves_MultiBSpCurve& Value() const;
  
  Standard_EXPORT     AppParCurves_MultiBSpCurve& ChangeValue() ;
  
  Standard_EXPORT    const TColStd_Array1OfReal& Parameters() const;





protected:





private:

  
  Standard_EXPORT     Standard_Boolean Compute(const AppDef_MultiLine& Line,const Standard_Integer fpt,const Standard_Integer lpt,math_Vector& Para,const TColStd_Array1OfReal& Knots,TColStd_Array1OfInteger& Mults) ;
  
  Standard_EXPORT     Standard_Boolean ComputeCurve(const AppDef_MultiLine& Line,const Standard_Integer firspt,const Standard_Integer lastpt) ;
  
  Standard_EXPORT     void Parameters(const AppDef_MultiLine& Line,const Standard_Integer firstP,const Standard_Integer LastP,math_Vector& TheParameters) const;
  
  Standard_EXPORT     Standard_Real SearchFirstLambda(const AppDef_MultiLine& Line,const math_Vector& Para,const TColStd_Array1OfReal& Knots,const math_Vector& V,const Standard_Integer index) const;
  
  Standard_EXPORT     Standard_Real SearchLastLambda(const AppDef_MultiLine& Line,const math_Vector& Para,const TColStd_Array1OfReal& Knots,const math_Vector& V,const Standard_Integer index) const;
  
  Standard_EXPORT     void TangencyVector(const AppDef_MultiLine& Line,const AppParCurves_MultiCurve& C,const Standard_Real U,math_Vector& V) const;
  
  Standard_EXPORT     void FirstTangencyVector(const AppDef_MultiLine& Line,const Standard_Integer index,math_Vector& V) const;
  
  Standard_EXPORT     void LastTangencyVector(const AppDef_MultiLine& Line,const Standard_Integer index,math_Vector& V) const;
  
  Standard_EXPORT     void FindRealConstraints(const AppDef_MultiLine& Line) ;


AppParCurves_MultiBSpCurve TheMultiBSpCurve;
Standard_Boolean alldone;
Standard_Boolean tolreached;
Approx_ParametrizationType Par;
Handle_TColStd_HArray1OfReal myParameters;
Handle_TColStd_HArray1OfReal myfirstParam;
Handle_TColStd_HArray1OfReal myknots;
Handle_TColStd_HArray1OfInteger mymults;
Standard_Boolean myhasknots;
Standard_Boolean myhasmults;
Handle_AppParCurves_HArray1OfConstraintCouple myConstraints;
Standard_Integer mydegremin;
Standard_Integer mydegremax;
Standard_Real mytol3d;
Standard_Real mytol2d;
Standard_Real currenttol3d;
Standard_Real currenttol2d;
Standard_Boolean mycut;
Standard_Boolean mysquares;
Standard_Integer myitermax;
AppParCurves_Constraint myfirstC;
AppParCurves_Constraint mylastC;
AppParCurves_Constraint realfirstC;
AppParCurves_Constraint reallastC;
Standard_Integer mycont;
Standard_Real mylambda1;
Standard_Real mylambda2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
