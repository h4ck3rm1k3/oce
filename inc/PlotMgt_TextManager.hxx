// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PlotMgt_TextManager_HeaderFile
#define _PlotMgt_TextManager_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_PlotMgt_TextManager_HeaderFile
#include <Handle_PlotMgt_TextManager.hxx>
#endif

#ifndef _PlotMgt_PlotterDriverPtr_HeaderFile
#include <PlotMgt_PlotterDriverPtr.hxx>
#endif
#ifndef _MFT_TextManager_HeaderFile
#include <MFT_TextManager.hxx>
#endif
#ifndef _Handle_PlotMgt_PlotterDriver_HeaderFile
#include <Handle_PlotMgt_PlotterDriver.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Quantity_PlaneAngle_HeaderFile
#include <Quantity_PlaneAngle.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Aspect_TypeOfText_HeaderFile
#include <Aspect_TypeOfText.hxx>
#endif
class PlotMgt_PlotterDriver;



class PlotMgt_TextManager : public MFT_TextManager {

public:

  
  Standard_EXPORT   PlotMgt_TextManager(const Handle(PlotMgt_PlotterDriver)& aDriver);
  //! Calls when string drawing is started. <br>
//!          with a string aspect <aPaintType> : <br>
//!            0 for filled string <br>
//!            1 for stroke string <br>
//!            2 for outline string <br>
//!          The origine of the string <X>,<Y>, <br>
//!          The orientation of the string <anOrientation>, <br>
//!          The medium size of the char <aWidth,aHeight>, <br>
//!          The Slant of the char <aSlant>, <br>
  Standard_EXPORT   virtual  void BeginString(const Quantity_Length X,const Quantity_Length Y,const Quantity_PlaneAngle anOrientation,const Quantity_Length aWidth,const Quantity_Length aHeight,const Quantity_PlaneAngle aSlant,const Standard_Integer aPaintType) ;
  //! Calls when a char drawing is started <br>
//!          and give the current string position for this char. <br>
//!          and give the relative char position from the beginning <br>
//!          of the string. <br>
  Standard_EXPORT   virtual  Standard_Boolean BeginChar(const Standard_Integer aCharCode,const Quantity_Length X,const Quantity_Length Y) ;
  //! Calls to defines the current char bounding-box. <br>
//! The application can returns FALSE for ending the char drawing. <br>
  Standard_EXPORT   virtual  Standard_Boolean SetCharBoundingBox(const Quantity_Length X1,const Quantity_Length Y1,const Quantity_Length X2,const Quantity_Length Y2,const Quantity_Length X3,const Quantity_Length Y3,const Quantity_Length X4,const Quantity_Length Y4) ;
  //! Calls to defines the current char encoding. <br>
//!  Warning: The application can returns FALSE for skipping the char drawing. <br>
  Standard_EXPORT   virtual  Standard_Boolean SetCharEncoding(const Standard_CString anEncoding) ;
  //! Calls to sets the current string position. <br>
//! The application can returns FALSE for ending the char drawing. <br>
  Standard_EXPORT   virtual  Standard_Boolean Moveto(const Quantity_Length X,const Quantity_Length Y) ;
  //! Calls to drawn to the current string position. <br>
//! The application can returns FALSE for ending the char drawing. <br>
  Standard_EXPORT   virtual  Standard_Boolean Lineto(const Quantity_Length X,const Quantity_Length Y) ;
  //! Calls to drawn to the current string position. <br>
//!          The application can drawn the curve defined by <br>
//!          his descriptor P1,P2,P3,P4 or <br>
//!          returns FALSE to let the interpretor compute the curve <br>
//!          vectors. <br>
  Standard_EXPORT   virtual  Standard_Boolean Curveto(const Quantity_Length X1,const Quantity_Length Y1,const Quantity_Length X2,const Quantity_Length Y2,const Quantity_Length X3,const Quantity_Length Y3,const Quantity_Length X4,const Quantity_Length Y4) ;
  //! Calls when a char path drawing is ended <br>
  Standard_EXPORT   virtual  void ClosePath() ;
  //! Calls when a char drawing is ended <br>
//!          and give the relative char ending position from the <br>
//!          beginning of the string. <br>
//!          The application can returns FALSE for skipping the string <br>
//!          drawing. <br>
  Standard_EXPORT   virtual  Standard_Boolean EndChar(const Quantity_Length X,const Quantity_Length Y) ;
  //! Calls when string drawing is ended (Normally the last call). <br>
  Standard_EXPORT   virtual  void EndString() ;


friend class PlotMgt_PlotterDriver;


  DEFINE_STANDARD_RTTI(PlotMgt_TextManager)

protected:




private: 

  //! Sets the current attribs of the text. <br>
  Standard_EXPORT     void SetTextAttribs(const Standard_Integer aTextColor,const Aspect_TypeOfText aTypeOfText,const Quantity_Length anUnderlinePosition = 0.0) ;

PlotMgt_PlotterDriverPtr myDriver;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
