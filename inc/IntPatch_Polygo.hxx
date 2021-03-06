// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_Polygo_HeaderFile
#define _IntPatch_Polygo_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Intf_Polygon2d_HeaderFile
#include <Intf_Polygon2d.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_OutOfRange;
class gp_Pnt2d;



class IntPatch_Polygo  : public Intf_Polygon2d {
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

  
        Standard_Real Error() const;
  
  Standard_EXPORT   virtual  Standard_Integer NbPoints() const = 0;
  
  Standard_EXPORT   virtual  gp_Pnt2d Point(const Standard_Integer Index) const = 0;
  //! Returns the tolerance of the polygon. <br>
      virtual  Standard_Real DeflectionOverEstimation() const;
  //! Returns the number of Segments in the polyline. <br>
      virtual  Standard_Integer NbSegments() const;
  //! Returns the points of the segment <Index> in the Polygon. <br>
      virtual  void Segment(const Standard_Integer theIndex,gp_Pnt2d& theBegin,gp_Pnt2d& theEnd) const;
  
  Standard_EXPORT     void Dump() const;





protected:

  
  Standard_EXPORT   IntPatch_Polygo(const Standard_Real theError = 0.0);


Standard_Real myError;


private:





};


#include <IntPatch_Polygo.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
