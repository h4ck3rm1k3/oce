// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic2d_Ellips_HeaderFile
#define _Graphic2d_Ellips_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic2d_Ellips_HeaderFile
#include <Handle_Graphic2d_Ellips.hxx>
#endif

#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Graphic2d_Line_HeaderFile
#include <Graphic2d_Line.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Quantity_PlaneAngle_HeaderFile
#include <Quantity_PlaneAngle.hxx>
#endif
#ifndef _Handle_Graphic2d_Drawer_HeaderFile
#include <Handle_Graphic2d_Drawer.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Aspect_FStream_HeaderFile
#include <Aspect_FStream.hxx>
#endif
#ifndef _Aspect_IFStream_HeaderFile
#include <Aspect_IFStream.hxx>
#endif
class Graphic2d_EllipsDefinitionError;
class Graphic2d_GraphicObject;
class Graphic2d_Drawer;


//! The primitive Ellips <br>
class Graphic2d_Ellips : public Graphic2d_Line {

public:

  //! Creates an ellipse. <br>
//!	    The center is <X>, <Y>. <br>
//!	    Angles are measured counterclockwise with 0 radian <br>
//!	    at 3 o'clock. <br>
  Standard_EXPORT   Graphic2d_Ellips(const Handle(Graphic2d_GraphicObject)& aGraphicObject,const Quantity_Length X,const Quantity_Length Y,const Quantity_Length MajorRadius,const Quantity_Length MinorRadius,const Quantity_PlaneAngle anAngle);
  //! returns the coordinates of center of the ellipse <br>
  Standard_EXPORT     void Center(Quantity_Length& X,Quantity_Length& Y) const;
  //! returns the radius of the ellipse <br>
  Standard_EXPORT     Quantity_Length MajorRadius() const;
  //! returns the radius of the ellipse <br>
  Standard_EXPORT     Quantity_Length MinorRadius() const;
  //! returns the angle of the ellipse <br>
  Standard_EXPORT     Quantity_PlaneAngle Angle() const;
  
  Standard_EXPORT   virtual  void Save(Aspect_FStream& aFStream) const;
  
  Standard_EXPORT   static  void Retrieve(Aspect_IFStream& anIFStream,const Handle(Graphic2d_GraphicObject)& aGraphicObject) ;




  DEFINE_STANDARD_RTTI(Graphic2d_Ellips)

protected:

  //! Draws the ellipse <me>. <br>
  Standard_EXPORT     void Draw(const Handle(Graphic2d_Drawer)& aDrawer) ;
  //! Draws element <anIndex> of the circle <me>. <br>
  Standard_EXPORT   virtual  void DrawElement(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Integer anIndex) ;
  //! Draws vertex <anIndex> of the circle <me>. <br>
  Standard_EXPORT   virtual  void DrawVertex(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Integer anIndex) ;
  //! Returns Standard_True if the ellipse <me> is picked, <br>
//!	    Standard_False if not. <br>
  Standard_EXPORT     Standard_Boolean Pick(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal aPrecision,const Handle(Graphic2d_Drawer)& aDrawer) ;



private: 


Standard_ShortReal myX;
Standard_ShortReal myY;
Standard_ShortReal myMajorRadius;
Standard_ShortReal myMinorRadius;
Standard_ShortReal myAngle;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
