// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs2d_Angle_HeaderFile
#define _Prs2d_Angle_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Prs2d_Angle_HeaderFile
#include <Handle_Prs2d_Angle.hxx>
#endif

#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Prs2d_Dimension_HeaderFile
#include <Prs2d_Dimension.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Prs2d_TypeOfArrow_HeaderFile
#include <Prs2d_TypeOfArrow.hxx>
#endif
#ifndef _Prs2d_ArrowSide_HeaderFile
#include <Prs2d_ArrowSide.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Graphic2d_Drawer_HeaderFile
#include <Handle_Graphic2d_Drawer.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Aspect_FStream_HeaderFile
#include <Aspect_FStream.hxx>
#endif
class Graphic2d_CircleDefinitionError;
class Graphic2d_GraphicObject;
class gp_Pnt2d;
class TCollection_ExtendedString;
class Graphic2d_Drawer;


//! Constructs the primitive Angle <br>
class Prs2d_Angle : public Prs2d_Dimension {

public:

  //! create an angle: <br>
//!          between the line defined by the points <br>
//!          anAttachtPnt1 and anAttachPnt2 and <br>
//!          the line defined by the points <br>
//!          anAttachPnt1 and anAttachPnt3 <br>
//!          Radius of this angle is the distance <br>
//!          between <anAttachPnt1> and <anOffsetPoint> points. <br>
//!          <anArrAngle> in degree <br>
  Standard_EXPORT   Prs2d_Angle(const Handle(Graphic2d_GraphicObject)& aGraphicObject,const gp_Pnt2d& anAttachPnt1,const gp_Pnt2d& anAttachPnt2,const gp_Pnt2d& anAttachPnt3,const Quantity_Length aRadius,const TCollection_ExtendedString& aText,const Standard_Real aTxtScale = 3.0,const Standard_Real anArrAngle = 15.0,const Standard_Real anArrLength = 10.0,const Prs2d_TypeOfArrow anArrType = Prs2d_TOA_OPENED,const Prs2d_ArrowSide anArrow = Prs2d_AS_BOTHAR,const Standard_Boolean IsReverseArrow = Standard_False);
  //! allows to get the properties of the angle <br>
  Standard_EXPORT     void Values(gp_Pnt2d& aPnt1,gp_Pnt2d& aPnt2,gp_Pnt2d& aPnt3,Quantity_Length& aRad) const;
  
  Standard_EXPORT   virtual  void Save(Aspect_FStream& aFStream) const;




  DEFINE_STANDARD_RTTI(Prs2d_Angle)

protected:

  
      virtual  void CalcTxtPos(const Standard_Boolean theFromAbs = Standard_False) ;
  //! Draws the angle <me>. <br>
  Standard_EXPORT     void Draw(const Handle(Graphic2d_Drawer)& aDrawer) ;
  //! Draws element <anIndex> of the angle <me>. <br>
  Standard_EXPORT   virtual  void DrawElement(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Integer anIndex) ;
  //! Draws vertex <anIndex> of the angle <me>. <br>
  Standard_EXPORT   virtual  void DrawVertex(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Integer anIndex) ;
  //! Returns Standard_True if the angle <me> is picked, <br>
//!	    Standard_False if not. <br>
  Standard_EXPORT     Standard_Boolean Pick(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal aPrecision,const Handle(Graphic2d_Drawer)& aDrawer) ;



private: 


Standard_ShortReal myCentX;
Standard_ShortReal myCentY;
Standard_ShortReal myRad;
Standard_ShortReal myFAngle;
Standard_ShortReal mySAngle;


};


#include <Prs2d_Angle.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
