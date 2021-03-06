// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Visual3d_View_HeaderFile
#define _Visual3d_View_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Visual3d_View_HeaderFile
#include <Handle_Visual3d_View.hxx>
#endif

#ifndef _Graphic3d_CView_HeaderFile
#include <Graphic3d_CView.hxx>
#endif
#ifndef _Visual3d_ContextView_HeaderFile
#include <Visual3d_ContextView.hxx>
#endif
#ifndef _Visual3d_ViewMapping_HeaderFile
#include <Visual3d_ViewMapping.hxx>
#endif
#ifndef _Visual3d_ViewOrientation_HeaderFile
#include <Visual3d_ViewOrientation.hxx>
#endif
#ifndef _Handle_Aspect_Window_HeaderFile
#include <Handle_Aspect_Window.hxx>
#endif
#ifndef _TColStd_Array2OfReal_HeaderFile
#include <TColStd_Array2OfReal.hxx>
#endif
#ifndef _Graphic3d_SequenceOfStructure_HeaderFile
#include <Graphic3d_SequenceOfStructure.hxx>
#endif
#ifndef _Handle_Graphic3d_GraphicDriver_HeaderFile
#include <Handle_Graphic3d_GraphicDriver.hxx>
#endif
#ifndef _Aspect_Background_HeaderFile
#include <Aspect_Background.hxx>
#endif
#ifndef _Aspect_GradientBackground_HeaderFile
#include <Aspect_GradientBackground.hxx>
#endif
#ifndef _Graphic3d_MapOfStructure_HeaderFile
#include <Graphic3d_MapOfStructure.hxx>
#endif
#ifndef _Visual3d_ViewManagerPtr_HeaderFile
#include <Visual3d_ViewManagerPtr.hxx>
#endif
#ifndef _Graphic3d_CBitFields8_HeaderFile
#include <Graphic3d_CBitFields8.hxx>
#endif
#ifndef _Graphic3d_CGraduatedTrihedron_HeaderFile
#include <Graphic3d_CGraduatedTrihedron.hxx>
#endif
#ifndef _Graphic3d_DataStructureManager_HeaderFile
#include <Graphic3d_DataStructureManager.hxx>
#endif
#ifndef _Handle_Visual3d_ViewManager_HeaderFile
#include <Handle_Visual3d_ViewManager.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Visual3d_Layer_HeaderFile
#include <Handle_Visual3d_Layer.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Aspect_FillMethod_HeaderFile
#include <Aspect_FillMethod.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Aspect_GradientFillMethod_HeaderFile
#include <Aspect_GradientFillMethod.hxx>
#endif
#ifndef _Visual3d_TypeOfBackfacingModel_HeaderFile
#include <Visual3d_TypeOfBackfacingModel.hxx>
#endif
#ifndef _Aspect_RenderingContext_HeaderFile
#include <Aspect_RenderingContext.hxx>
#endif
#ifndef _Aspect_GraphicCallbackProc_HeaderFile
#include <Aspect_GraphicCallbackProc.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Aspect_TypeOfTriedronPosition_HeaderFile
#include <Aspect_TypeOfTriedronPosition.hxx>
#endif
#ifndef _Aspect_TypeOfTriedronEcho_HeaderFile
#include <Aspect_TypeOfTriedronEcho.hxx>
#endif
#ifndef _OSD_FontAspect_HeaderFile
#include <OSD_FontAspect.hxx>
#endif
#ifndef _Visual3d_TypeOfAnswer_HeaderFile
#include <Visual3d_TypeOfAnswer.hxx>
#endif
#ifndef _Handle_Graphic3d_Structure_HeaderFile
#include <Handle_Graphic3d_Structure.hxx>
#endif
#ifndef _Aspect_TypeOfUpdate_HeaderFile
#include <Aspect_TypeOfUpdate.hxx>
#endif
#ifndef _Aspect_TypeOfHighlightMethod_HeaderFile
#include <Aspect_TypeOfHighlightMethod.hxx>
#endif
#ifndef _Handle_Aspect_GraphicDriver_HeaderFile
#include <Handle_Aspect_GraphicDriver.hxx>
#endif
#ifndef _Handle_Graphic3d_Plotter_HeaderFile
#include <Handle_Graphic3d_Plotter.hxx>
#endif
#ifndef _Aspect_Handle_HeaderFile
#include <Aspect_Handle.hxx>
#endif
#ifndef _Aspect_PrintAlgo_HeaderFile
#include <Aspect_PrintAlgo.hxx>
#endif
#ifndef _Graphic3d_PtrFrameBuffer_HeaderFile
#include <Graphic3d_PtrFrameBuffer.hxx>
#endif
#ifndef _Image_CRawBufferData_HeaderFile
#include <Image_CRawBufferData.hxx>
#endif
#ifndef _Graphic3d_ExportFormat_HeaderFile
#include <Graphic3d_ExportFormat.hxx>
#endif
#ifndef _Graphic3d_SortType_HeaderFile
#include <Graphic3d_SortType.hxx>
#endif
class Aspect_Window;
class Graphic3d_GraphicDriver;
class Visual3d_TransformError;
class Visual3d_ViewDefinitionError;
class Visual3d_ViewManager;
class Visual3d_ViewOrientation;
class Visual3d_ViewMapping;
class Visual3d_ContextView;
class Visual3d_Layer;
class Aspect_Background;
class Aspect_GradientBackground;
class TColStd_Array2OfReal;
class TCollection_ExtendedString;
class Quantity_Color;
class TCollection_AsciiString;
class Graphic3d_MapOfStructure;
class Graphic3d_Structure;
class Aspect_GraphicDriver;
class Graphic3d_Plotter;


//! Creation and edition of a view in a 3D visualiser. <br>
//!	    A 3D view is composed of an "orientation" part defined <br>
//!	    by the position of the observer, the direction of view, <br>
//!	    and a "mapping" part defined by the type of projection <br>
//!	    (parallel or perspective) and by the window-viewport <br>
//!	    couple which allows passage from the projected coordinate <br>
//!	    space into the screen space. <br>
//! Summary of 3D Viewing <br>
//! To define a view, you must define: <br>
//! -   The view orientation transformation <br>
//! -   The view mapping transformation <br>
//! -   The view representation. <br>
//!  To activate a view, you must define: <br>
//! -   The associated window. <br>
class Visual3d_View : public Graphic3d_DataStructureManager {

public:

  //! Creates a view in the viewer <AManager> with a default <br>
//!	    orientation and a default mapping. <br>
  Standard_EXPORT   Visual3d_View(const Handle(Visual3d_ViewManager)& AManager);
  //! Creates a view in the viewer <AManager> with the orientation <br>
//!	    <VO>, the mapping <VM>, and the context<CTX>. <br>
  Standard_EXPORT   Visual3d_View(const Handle(Visual3d_ViewManager)& AManager,const Visual3d_ViewOrientation& VO,const Visual3d_ViewMapping& VM,const Visual3d_ContextView& CTX);
  //! Activates the view <me>. <br>
//!	    Map the associated window on the screen and <br>
//!	    post the view in this window. <br>
//!  Category: Methods to modify the class definition <br>
//!  Warning: Raises ViewDefinitionError if the associated <br>
//!	    window isn't defined. <br>
  Standard_EXPORT     void Activate() ;
  //! Deactivates the view <me>. <br>
//!	    Unmap the associated window on the screen and <br>
//!	    unpost the view in this window. <br>
//!  Category: Methods to modify the class definition <br>
//!  Warning: Raises ViewDefinitionError if the associated <br>
//!	    window isn't defined. <br>
  Standard_EXPORT     void Deactivate() ;
  //! Deletes and erases the view <me>. <br>
  Standard_EXPORT   virtual  void Destroy() ;
~Visual3d_View()
{
  Destroy();
}
  //! Updates screen in all cases. <br>
  Standard_EXPORT     void Redraw() ;
  //! Updates screen area in all cases. <br>
//! area is given by his xy min corner and size in pixel coordinates <br>
  Standard_EXPORT     void Redraw(const Standard_Integer x,const Standard_Integer y,const Standard_Integer width,const Standard_Integer height) ;
  //! Updates screen in all cases. <br>
  Standard_EXPORT     void Redraw(const Handle(Visual3d_Layer)& AnUnderLayer,const Handle(Visual3d_Layer)& AnOverLayer) ;
  //! Updates screen area in all cases. <br>
//! area is given by his xy min corner and size in pixel coordinates <br>
  Standard_EXPORT     void Redraw(const Handle(Visual3d_Layer)& AnUnderLayer,const Handle(Visual3d_Layer)& AnOverLayer,const Standard_Integer x,const Standard_Integer y,const Standard_Integer width,const Standard_Integer height) ;
  //! Deletes and erases the view <me>. <br>
//!  Warning: No more graphic operations in <me> after this call. <br>
  Standard_EXPORT     void Remove() ;
  //! Updates the view <me> after the modification <br>
//!	    of the associated window. <br>
//!  Category: Methods to modify the class definition <br>
//!  Warning: Raises ViewDefinitionError if the associated <br>
//!	    window isn't defined. <br>
  Standard_EXPORT     void Resized() ;
  //! Modifies the default window background. <br>
//!  Category: Methods to modify the class definition <br>
//!  Warning: Raises ViewDefinitionError if the associated <br>
//!	    window isn't defined. <br>
  Standard_EXPORT     void SetBackground(const Aspect_Background& ABack) ;
  
//!  Category: Methods to modify the class definition <br>
//!  Warning: Raises ViewDefinitionError if the associated <br>
//!	    window isn't defined. <br>
  Standard_EXPORT     void SetBackgroundImage(const Standard_CString FileName,const Aspect_FillMethod FillStyle,const Standard_Boolean update) ;
  
//!  Category: Methods to modify the class definition <br>
//!  Warning: Raises ViewDefinitionError if the associated <br>
//!	    window isn't defined. <br>
  Standard_EXPORT     void SetBgImageStyle(const Aspect_FillMethod FillStyle,const Standard_Boolean update) ;
  //! Modifies the gradient window background. <br>
//!  Category: Methods to modify the class definition <br>
//!  Warning: Raises ViewDefinitionError if the associated <br>
//!	    window isn't defined. <br>
  Standard_EXPORT     void SetGradientBackground(const Aspect_GradientBackground& ABack,const Standard_Boolean update) ;
  
//!  Category: Methods to modify the class definition <br>
//!  Warning: Raises ViewDefinitionError if the associated <br>
//!	    window isn't defined. <br>
  Standard_EXPORT     void SetBgGradientStyle(const Aspect_GradientFillMethod FillStyle,const Standard_Boolean update) ;
  //! Manages display of the back faces <br>
  Standard_EXPORT     void SetBackFacingModel(const Visual3d_TypeOfBackfacingModel aModel) ;
  //! Returns current state of the back faces display <br>
  Standard_EXPORT     Visual3d_TypeOfBackfacingModel BackFacingModel() const;
  //! Sets the context <CTX> in the view <me>. <br>
  Standard_EXPORT     void SetContext(const Visual3d_ContextView& CTX) ;
  //! Sets the transformation matrix that is applied <br>
//!          to <MyViewOrientation> field of the view <me>. <br>
  Standard_EXPORT     void SetTransform(const TColStd_Array2OfReal& AMatrix) ;
  //! Modifies the mapping of the view <me>. <br>
  Standard_EXPORT     void SetViewMapping(const Visual3d_ViewMapping& VM) ;
  //! Saves the current mapping which will be the <br>
//!	    reference value for the reset of the mapping <br>
//!	    done by the ViewmappingReset method. <br>
  Standard_EXPORT     void SetViewMappingDefault() ;
  //! Modifies the orientation of <me>. <br>
  Standard_EXPORT     void SetViewOrientation(const Visual3d_ViewOrientation& VO) ;
  //! Saves the current orientation which will be the <br>
//!	    reference value for the reset of the orientation <br>
//!	    done by the ViewOrientationReset method. <br>
  Standard_EXPORT     void SetViewOrientationDefault() ;
  //! Associates the window <AWindow> to the view <me>. <br>
//!	    No new association if the window is already defined. <br>
//!  Category: Methods to modify the class definition <br>
//!  Warning: Raises ViewDefinitionError if it is impossible <br>
//!	    to associate a view and a window. <br>
//!	    (association already done or another problem) <br>
//!	    Modifies the viewmapping of the associated view <br>
//!	    when it calls the SetRatio method. <br>
//!	    After this call, each view is mapped in an unique window. <br>
  Standard_EXPORT     void SetWindow(const Handle(Aspect_Window)& AWindow) ;
  //! Associates the window <AWindow> and context <AContext> <br>
//!	    to the view <me>. <br>
//!	    If <AContext> is not NULL the graphic context is used <br>
//!          directly to draw something in this view. <br>
//!	    Otherwise an internal context is created. <br>
//!          If <ADisplayCB> is not NULL then a user display CB is <br>
//!          call at the end of the OCC graphic traversal and just <br>
//!          before the swap of buffers. The <aClientData> is pass <br>
//!          to this call back. <br>
//!	    No new association if the window is already defined. <br>
//!  Category: Methods to modify the class definition <br>
//!  Warning: Raises ViewDefinitionError if it is impossible <br>
//!	    to associate a view and a window. <br>
//!	    (association already done or another problem) <br>
//!	    Modifies the viewmapping of the associated view <br>
//!	    when it calls the SetRatio method. <br>
//!	    After this call, each view is mapped in an unique window. <br>
  Standard_EXPORT     void SetWindow(const Handle(Aspect_Window)& AWindow,const Aspect_RenderingContext AContext,const Aspect_GraphicCallbackProc& ADisplayCB,const Standard_Address AClientData) ;
  //! Updates screen in function of modifications of <br>
//!	    the structures. <br>
  Standard_EXPORT     void Update() ;
  //! Updates screen in function of modifications of <br>
//!	    the structures. <br>
  Standard_EXPORT     void Update(const Handle(Visual3d_Layer)& AnUnderLayer,const Handle(Visual3d_Layer)& AnOverLayer) ;
  //! Sets the value of the mapping to be the same as <br>
//!	    the mapping saved by the SetViewMappingDefaut method. <br>
  Standard_EXPORT     void ViewMappingReset() ;
  //! Sets the value of the orientation to be the same as the <br>
//!	    orientation saved by the SetViewOrientationDefaut method. <br>
  Standard_EXPORT     void ViewOrientationReset() ;
  //! Activates animation mode with an optional degeneration <br>
//!	according to the TypeOfDegenerateModel of each graphic structure <br>
//!	When the animation mode is activated in the view, <br>
//!	all Graphic3d_Structure are stored in a graphic object. <br>
//!  Warning: only ONE view may have animation mode turned on <br>
//!	at same time. <br>
  Standard_EXPORT     void SetAnimationModeOn(const Standard_Boolean degenerate = Standard_False) ;
  //! Deactivates the animation mode. <br>
  Standard_EXPORT     void SetAnimationModeOff() ;
  //! Returns the activity of the animation mode. <br>
  Standard_EXPORT     Standard_Boolean AnimationModeIsOn() const;
  //! Returns the activity of the degenerate mode. <br>
  Standard_EXPORT     Standard_Boolean DegenerateModeIsOn() const;
  //! Switches computed HLR mode in the view <br>
  Standard_EXPORT     void SetComputedMode(const Standard_Boolean aMode) ;
  //! Returns the computed HLR mode state <br>
  Standard_EXPORT     Standard_Boolean ComputedMode() const;
  //! Customization of the ZBUFFER Triedron. <br>
//!         Initializes Colors of X Y and axis <br>
//!         Scale ratio defines decreasing of trihedron size when <br>
//!         its position is out of a View <br>
  Standard_EXPORT     void ZBufferTriedronSetup(const Quantity_NameOfColor XColor = Quantity_NOC_RED,const Quantity_NameOfColor YColor = Quantity_NOC_GREEN,const Quantity_NameOfColor ZColor = Quantity_NOC_BLUE1,const Standard_Real SizeRatio = 0.8,const Standard_Real AxisDiametr = 0.05,const Standard_Integer NbFacettes = 12) ;
  //! Display of the Triedron. <br>
//!         Initialize position, color and length of Triedron axes. <br>
//!         The scale is a percent of the window width. <br>
//!         If AsWireframe is FALSE triedron is shown in shaded mode <br>
//!         AColor is not considered for ZBUFFER mode <br>
  Standard_EXPORT     void TriedronDisplay(const Aspect_TypeOfTriedronPosition APosition = Aspect_TOTP_CENTER,const Quantity_NameOfColor AColor = Quantity_NOC_WHITE,const Standard_Real AScale = 0.02,const Standard_Boolean AsWireframe = Standard_True) ;
  //! Erases the Triedron. <br>
  Standard_EXPORT     void TriedronErase() ;
  //! Highlights the echo zone of the Triedron. <br>
  Standard_EXPORT     void TriedronEcho(const Aspect_TypeOfTriedronEcho AType = Aspect_TOTE_NONE) ;
  //! Returns data of a graduated trihedron if displayed (return value is True) <br>
  Standard_EXPORT     Standard_Boolean GetGraduatedTrihedron(TCollection_ExtendedString& xname,TCollection_ExtendedString& yname,TCollection_ExtendedString& zname,Standard_Boolean& xdrawname,Standard_Boolean& ydrawname,Standard_Boolean& zdrawname,Standard_Boolean& xdrawvalues,Standard_Boolean& ydrawvalues,Standard_Boolean& zdrawvalues,Standard_Boolean& drawgrid,Standard_Boolean& drawaxes,Standard_Integer& nbx,Standard_Integer& nby,Standard_Integer& nbz,Standard_Integer& xoffset,Standard_Integer& yoffset,Standard_Integer& zoffset,Standard_Integer& xaxisoffset,Standard_Integer& yaxisoffset,Standard_Integer& zaxisoffset,Standard_Boolean& xdrawtickmarks,Standard_Boolean& ydrawtickmarks,Standard_Boolean& zdrawtickmarks,Standard_Integer& xtickmarklength,Standard_Integer& ytickmarklength,Standard_Integer& ztickmarklength,Quantity_Color& gridcolor,Quantity_Color& xnamecolor,Quantity_Color& ynamecolor,Quantity_Color& znamecolor,Quantity_Color& xcolor,Quantity_Color& ycolor,Quantity_Color& zcolor,TCollection_AsciiString& fontOfNames,OSD_FontAspect& styleOfNames,Standard_Integer& sizeOfNames,TCollection_AsciiString& fontOfValues,OSD_FontAspect& styleOfValues,Standard_Integer& sizeOfValues) const;
  //! Displays a graduated trihedron. <br>
  Standard_EXPORT     void GraduatedTrihedronDisplay(const TCollection_ExtendedString& xname,const TCollection_ExtendedString& yname,const TCollection_ExtendedString& zname,const Standard_Boolean xdrawname,const Standard_Boolean ydrawname,const Standard_Boolean zdrawname,const Standard_Boolean xdrawvalues,const Standard_Boolean ydrawvalues,const Standard_Boolean zdrawvalues,const Standard_Boolean drawgrid,const Standard_Boolean drawaxes,const Standard_Integer nbx,const Standard_Integer nby,const Standard_Integer nbz,const Standard_Integer xoffset,const Standard_Integer yoffset,const Standard_Integer zoffset,const Standard_Integer xaxisoffset,const Standard_Integer yaxisoffset,const Standard_Integer zaxisoffset,const Standard_Boolean xdrawtickmarks,const Standard_Boolean ydrawtickmarks,const Standard_Boolean zdrawtickmarks,const Standard_Integer xtickmarklength,const Standard_Integer ytickmarklength,const Standard_Integer ztickmarklength,const Quantity_Color& gridcolor,const Quantity_Color& xnamecolor,const Quantity_Color& ynamecolor,const Quantity_Color& znamecolor,const Quantity_Color& xcolor,const Quantity_Color& ycolor,const Quantity_Color& zcolor,const TCollection_AsciiString& fontOfNames,const OSD_FontAspect styleOfNames,const Standard_Integer sizeOfNames,const TCollection_AsciiString& fontOfValues,const OSD_FontAspect styleOfValues,const Standard_Integer sizeOfValues) ;
  //! Erases a graduated trihedron from the view. <br>
  Standard_EXPORT     void GraduatedTrihedronErase() ;
  //! Returns the value of the default window background. <br>
  Standard_EXPORT     Aspect_Background Background() const;
  //! Returns the value of the window background. <br>
  Standard_EXPORT     Aspect_GradientBackground GradientBackground() const;
  //! Returns Standard_True if one of the structures <br>
//!	    displayed in the view <me> contains Polygons, <br>
//!	    Triangles or Quadrangles. <br>
  Standard_EXPORT     Standard_Boolean ContainsFacet() const;
  //! Returns Standard_True if one of the structures <br>
//!	    in the set <ASet> contains Polygons, Triangles <br>
//!	    or Quadrangles. <br>
  Standard_EXPORT     Standard_Boolean ContainsFacet(const Graphic3d_MapOfStructure& ASet) const;
  //! Returns the current context of the view <me>. <br>
  Standard_EXPORT    const Visual3d_ContextView& Context() const;
  //! Returns the set of structures displayed in <br>
//!	    the view <me>. <br>
  Standard_EXPORT     void DisplayedStructures(Graphic3d_MapOfStructure& SG) const;
  //! Returns the activity flag of the view <me>. <br>
  Standard_EXPORT     Standard_Boolean IsActive() const;
  //! Returns True if the window associated to the view <br>
//!	    <me> is defined. <br>
  Standard_EXPORT     Standard_Boolean IsDefined() const;
  //! Returns Standard_True is the view <me> is deleted. <br>
//!	    <me> is deleted after the call Remove (me). <br>
  Standard_EXPORT     Standard_Boolean IsDeleted() const;
  //! Returns the coordinates of the boundary box of all <br>
//!	    structures displayed in the view <me>. <br>
  Standard_EXPORT     void MinMaxValues(Standard_Real& XMin,Standard_Real& YMin,Standard_Real& ZMin,Standard_Real& XMax,Standard_Real& YMax,Standard_Real& ZMax) const;
  //! Returns the coordinates of the boundary box of all <br>
//!	    structures in the set <ASet>. <br>
  Standard_EXPORT     void MinMaxValues(const Graphic3d_MapOfStructure& ASet,Standard_Real& XMin,Standard_Real& YMin,Standard_Real& ZMin,Standard_Real& XMax,Standard_Real& YMax,Standard_Real& ZMax) const;
  //! Returns the coordinates of the projection of the <br>
//!	    boundary box of all structures displayed in the view <me>. <br>
  Standard_EXPORT     void MinMaxValues(Standard_Real& XMin,Standard_Real& YMin,Standard_Real& XMax,Standard_Real& YMax) ;
  //! Returns the coordinates of the projection of the <br>
//!	    boundary box of all structures in the set <ASet>. <br>
  Standard_EXPORT     void MinMaxValues(const Graphic3d_MapOfStructure& ASet,Standard_Real& XMin,Standard_Real& YMin,Standard_Real& XMax,Standard_Real& YMax) ;
  //! Returns number of displayed structures in <br>
//!	    the view <me>. <br>
  Standard_EXPORT     Standard_Integer NumberOfDisplayedStructures() const;
  //! Returns the coordinates of the projection of the <br>
//!	    3d coordinates <AX>, <AY>, <AZ>. <br>
  Standard_EXPORT     void Projects(const Standard_Real AX,const Standard_Real AY,const Standard_Real AZ,Standard_Real& APX,Standard_Real& APY,Standard_Real& APZ) ;
  //! Returns the transformation associated to the view <me> <br>
  Standard_EXPORT    const TColStd_Array2OfReal& Transform() const;
  //! Returns the current mapping of the view <me>. <br>
  Standard_EXPORT     Visual3d_ViewMapping ViewMapping() const;
  //! Returns the current reset mapping of the view <me>. <br>
  Standard_EXPORT     Visual3d_ViewMapping ViewMappingDefault() const;
  //! Returns the current orientation of the view <me>. <br>
  Standard_EXPORT     Visual3d_ViewOrientation ViewOrientation() const;
  //! Returns the current reset orientation of the view <me>. <br>
  Standard_EXPORT     Visual3d_ViewOrientation ViewOrientationDefault() const;
  //! Returns the window associated to the view <me>. <br>
//!  Warning: Raises ViewDefinitionError if the associated <br>
//!	    window isn't defined. <br>
  Standard_EXPORT     Handle_Aspect_Window Window() const;
  //! Returns the MAX number of light associated to the view <me>. <br>
  Standard_EXPORT     Standard_Integer LightLimit() const;
  //! Returns the MAX number of clipping planes <br>
//! associated to the view <me>. <br>
  Standard_EXPORT     Standard_Integer PlaneLimit() const;
  //! Returns the view manager handle which manage this view <br>
  Standard_EXPORT     Handle_Visual3d_ViewManager ViewManager() const;
  //! Computes the new presentation of the <br>
//!	    structure <AStructure> displayed in <me> <br>
//!	    with the type Graphic3d_TOS_COMPUTED. <br>
  Standard_EXPORT     void ReCompute(const Handle(Graphic3d_Structure)& AStructure) ;
  //! Returns the identification number of the view <me>. <br>
  Standard_EXPORT     Standard_Integer Identification() const;
  //! Returns the current matrix of mapping of the view <me>. <br>
//!  Warning: Stores the current matrix of mapping. <br>
  Standard_EXPORT    const TColStd_Array2OfReal& MatrixOfMapping() ;
  //! Returns the current matrix of orientation of the view <me>. <br>
//!  Warning: Stores the current matrix of orientation. <br>
  Standard_EXPORT    const TColStd_Array2OfReal& MatrixOfOrientation() ;
  //! Returns the c structure associated to <me>. <br>
  Standard_EXPORT     Standard_Address CView() const;
  //! Returns the associated GraphicDriver. <br>
  Standard_EXPORT     Handle_Aspect_GraphicDriver GraphicDriver() const;
  //! Calls the method Plot for each Structure <br>
//!	    displayed in <me>. <br>
  Standard_EXPORT     void Plot(const Handle(Graphic3d_Plotter)& APlotter) const;
  //! print the contents of all layers of the view to the printer. <br>
//! <hPrnDC> : Pass the PrinterDeviceContext (HDC), <br>
//! <showBackground> : When set to FALSE then print the view without background color <br>
//! (background is white) <br>
//! else set to TRUE for printing with current background color. <br>
//! <filename>: If != NULL, then the view will be printed to a file. <br>
//! <printAlgo>: Select print algorithm: stretch, tile. <br>
//! <theScaleFactor>: Scaling coefficient, used internally to scale the <br>
//! printings accordingly to the scale factor selected in the printer <br>
//! properties dialog. <br>
//! Returns Standard_True if the data is passed to the printer, otherwise <br>
//! Standard_False if the print operation failed due to printer error <br>
//! or insufficient memory. <br>
//!  Warning: Works only under Windows. <br>
  Standard_EXPORT     Standard_Boolean Print(const Handle(Visual3d_Layer)& AnUnderLayer,const Handle(Visual3d_Layer)& AnOverLayer,const Aspect_Handle hPrnDC,const Standard_Boolean showBackground,const Standard_CString filename,const Aspect_PrintAlgo printAlgorithm = Aspect_PA_STRETCH,const Standard_Real theScaleFactor = 1.0) const;
  //! print the contents of the view to printer. <br>
//! <hPrnDC> : Pass the PrinterDeviceContext (HDC), <br>
//! <showBackground> : When set to FALSE then print the view without background color <br>
//! (background is white) <br>
//! else set to TRUE for printing with current background color. <br>
//! <filename>: If != NULL, then the view will be printed to a file. <br>
//! <printAlgo>: Select print algorithm: stretch, tile. <br>
//! <theScaleFactor>: Scaling coefficient, used internally to scale the <br>
//! printings accordingly to the scale factor selected in the printer <br>
//! properties dialog. <br>
//! Returns Standard_True if the data is passed to the printer, otherwise <br>
//! Standard_False if the print operation failed due to printer error <br>
//! or insufficient memory. <br>
//!  Warning: Works only under Windows. <br>
  Standard_EXPORT     Standard_Boolean Print(const Aspect_Handle hPrnDC,const Standard_Boolean showBackground,const Standard_CString filename,const Aspect_PrintAlgo printAlgorithm = Aspect_PA_STRETCH,const Standard_Real theScaleFactor = 1.0) const;
  //! if <AFlag> is Standard_True then the transparency <br>
//!	    is managed in the view <me>. <br>
//!	    Default Standard_False <br>
  Standard_EXPORT     void SetTransparency(const Standard_Boolean AFlag) ;
  //! Returns Standard_True if the ZBuffer is activated <br>
//!	    in the view <me> and Standard_False if not. <br>
  Standard_EXPORT     Standard_Boolean ZBufferIsActivated() const;
  //! Activates the ZBuffer if the integer <AnActivity> <br>
//!	    is equal to 1. <br>
//!	    Deactivates the ZBuffer if the integer <AnActivity> <br>
//!	    is equal to 0. <br>
//!	    If the integer <AnActivity> is equal to -1 then <br>
//!	    - the ZBuffer is activated if <br>
//!		me->Context ().Visualization () == Visual3d_TOV_SHADING <br>
//!	    - the ZBuffer is deactivated if <br>
//!		me->Context ().Visualization () == Visual3d_TOV_WIREFRAME <br>
  Standard_EXPORT     void SetZBufferActivity(const Standard_Integer AnActivity) ;
  //! Returns the underlay of the view <me>. <br>
  Standard_EXPORT    const Handle_Visual3d_Layer& UnderLayer() const;
  //! Returns the underlay of the view <me>. <br>
  Standard_EXPORT    const Handle_Visual3d_Layer& OverLayer() const;
  //! turns on/off opengl depth <br>
  Standard_EXPORT     void EnableDepthTest(const Standard_Boolean enable) const;
  //! returns current state of the opengl depth testing <br>
  Standard_EXPORT     Standard_Boolean IsDepthTestEnabled() const;
  //! Reads depths of shown pixels of the given rectangle <br>
  Standard_EXPORT     void ReadDepths(const Standard_Integer x,const Standard_Integer y,const Standard_Integer width,const Standard_Integer height,const Standard_Address buffer) const;
  //! Generate offscreen FBO in the graphic library <br>
  Standard_EXPORT     Graphic3d_PtrFrameBuffer FBOCreate(const Standard_Integer width,const Standard_Integer height) ;
  //! Remove offscreen FBO from the graphic library <br>
  Standard_EXPORT     void FBORelease(Graphic3d_PtrFrameBuffer& fboPtr) ;
  //! Read offscreen FBO configuration. <br>
  Standard_EXPORT     void FBOGetDimensions(const Graphic3d_PtrFrameBuffer fboPtr,Standard_Integer& width,Standard_Integer& height,Standard_Integer& widthMax,Standard_Integer& heightMax) ;
  //! Change offscreen FBO viewport. <br>
  Standard_EXPORT     void FBOChangeViewport(Graphic3d_PtrFrameBuffer& fboPtr,const Standard_Integer width,const Standard_Integer height) ;
  //! Dump active rendering buffer into specified memory buffer. <br>
  Standard_EXPORT     Standard_Boolean BufferDump(Image_CRawBufferData& buffer) ;
  //! turns on/off opengl lighting, currently used in triedron displaying <br>
  Standard_EXPORT     void EnableGLLight(const Standard_Boolean enable) const;
  //! returns the current state of the gl lighting <br>
//!          currently used in triedron displaying <br>
  Standard_EXPORT     Standard_Boolean IsGLLightEnabled() const;
  
//! Export scene into the one of the Vector graphics formats (SVG, PS, PDF...). <br>
//! In contrast to Bitmaps, Vector graphics is scalable (so you may got quality benefits on printing to laser printer). <br>
//! Notice however that results may differ a lot and do not contain some elements. <br>
  Standard_EXPORT     Standard_Boolean Export(const Standard_CString theFileName,const Graphic3d_ExportFormat theFormat,const Graphic3d_SortType theSortType = Graphic3d_ST_BSP_Tree,const Standard_Real thePrecision = 0.005,const Standard_Address theProgressBarFunc = NULL,const Standard_Address theProgressObject = NULL) const;

friend class Visual3d_ViewManager;


  DEFINE_STANDARD_RTTI(Visual3d_View)

protected:




private: 

  //! Activates degenerate mode. <br>
//!	When the degenerate mode is activated in the view, <br>
//!	all Graphic3d_Structure with the type TOS_COMPUTED <br>
//!	displayed in this view are not computed. <br>
  Standard_EXPORT     void SetDegenerateModeOn() ;
  //! Deactivates the degenerate mode. <br>
  Standard_EXPORT     void SetDegenerateModeOff() ;
  //! Is it possible to display the structure <br>
//!	    <AStructure> in the view <me> ? <br>
  Standard_EXPORT     Visual3d_TypeOfAnswer AcceptDisplay(const Handle(Graphic3d_Structure)& AStructure) const;
  //! Computes the new presentation of the <br>
//!	    Structures displayed in <me> with the type <br>
//!	    Graphic3d_TOS_COMPUTED. <br>
  Standard_EXPORT     void Compute() ;
  //! Changes the display priority of the structure <AStructure>. <br>
  Standard_EXPORT     void ChangeDisplayPriority(const Handle(Graphic3d_Structure)& AStructure,const Standard_Integer OldPriority,const Standard_Integer NewPriority) ;
  //! Add a new top-level Z layer to the view with ID <br>
//! <theLayerId>. The z layer mechanism allows to display <br>
//! structures in higher layers in overlay of structures in lower layers. <br>
//! The layers in a particular view should be managed centrally <br>
//! by its view manager so to avoid IDs mismatching and provide correct <br>
//! display of graphics in all views. <br>
  Standard_EXPORT     void AddZLayer(const Standard_Integer theLayerId) ;
  //! Remove z layer from the view by its ID. <br>
  Standard_EXPORT     void RemoveZLayer(const Standard_Integer theLayerId) ;
  //! Change Z layer of already displayed structure in the view. <br>
  Standard_EXPORT     void ChangeZLayer(const Handle(Graphic3d_Structure)& theStructure,const Standard_Integer theLayerId) ;
  //! Clears the structure <AStructure> to the view <me>. <br>
  Standard_EXPORT     void Clear(const Handle(Graphic3d_Structure)& AStructure,const Standard_Boolean WithDestruction) ;
  //! Connects the structures <AMother> and <ADaughter>. <br>
  Standard_EXPORT     void Connect(const Handle(Graphic3d_Structure)& AMother,const Handle(Graphic3d_Structure)& ADaughter) ;
  //! Disconnects the structures <AMother> and <ADaughter>. <br>
  Standard_EXPORT     void Disconnect(const Handle(Graphic3d_Structure)& AMother,const Handle(Graphic3d_Structure)& ADaughter) ;
  //! Display the structure <AStructure> to the view <me>. <br>
  Standard_EXPORT     void Display(const Handle(Graphic3d_Structure)& AStructure) ;
  //! Display the structure <AStructure> to the view <me>. <br>
  Standard_EXPORT     void Display(const Handle(Graphic3d_Structure)& AStructure,const Aspect_TypeOfUpdate AnUpdateMode) ;
  //! Erases the structure <AStructure> from the view <me>. <br>
  Standard_EXPORT     void Erase(const Handle(Graphic3d_Structure)& AStructure) ;
  //! Erases the structure <AStructure> from the view <me>. <br>
  Standard_EXPORT     void Erase(const Handle(Graphic3d_Structure)& AStructure,const Aspect_TypeOfUpdate AnUpdateMode) ;
  //! Highlights the structure <AStructure> in the view <me>. <br>
  Standard_EXPORT     void Highlight(const Handle(Graphic3d_Structure)& AStructure,const Aspect_TypeOfHighlightMethod AMethod) ;
  //! Transforms the structure <AStructure> in the view <me>. <br>
  Standard_EXPORT     void SetTransform(const Handle(Graphic3d_Structure)& AStructure,const TColStd_Array2OfReal& ATrsf) ;
  //! Suppress the highlighting on the structure <AStructure> <br>
//!	    in the view <me>. <br>
  Standard_EXPORT     void UnHighlight(const Handle(Graphic3d_Structure)& AStructure) ;
  //! Returns an index != 0 if the structure <AStructure> <br>
//!	    have another structure computed for the view <me>. <br>
  Standard_EXPORT     Standard_Integer IsComputed(const Handle(Graphic3d_Structure)& AStructure) const;
  //! Returns true if the structure <AStructure> is <br>
//!	    displayed in the view <me>. <br>
  Standard_EXPORT     Standard_Boolean IsDisplayed(const Handle(Graphic3d_Structure)& AStructure) const;
  //! Modifies the aspect ratio of the view <me> when the <br>
//!	    associated window is defined or resized. <br>
  Standard_EXPORT     void SetRatio() ;
  //! Updates the lights when the associated window is defined <br>
//!	    and when the view is activated. <br>
  Standard_EXPORT     void UpdateLights() ;
  //! Updates the planes when the associated window is defined <br>
//!	    and when the view is activated. <br>
  Standard_EXPORT     void UpdatePlanes() ;
  //! Updates the associated c structure before a call to the <br>
//!	    graphic library. <br>
  Standard_EXPORT     void UpdateView() ;
  //! Returns an index != 0 if the structure <AStructure> <br>
//!	    have the same owner than another structure in the <br>
//!	    sequence of the computed structures. <br>
  Standard_EXPORT     Standard_Integer HaveTheSameOwner(const Handle(Graphic3d_Structure)& AStructure) const;

Graphic3d_CView MyCView;
Visual3d_ContextView MyContext;
Visual3d_ViewMapping MyViewMapping;
Visual3d_ViewMapping MyViewMappingReset;
Visual3d_ViewOrientation MyViewOrientation;
Visual3d_ViewOrientation MyViewOrientationReset;
Handle_Aspect_Window MyWindow;
TColStd_Array2OfReal MyTransformation;
TColStd_Array2OfReal MyMatrixOfMapping;
TColStd_Array2OfReal MyMatrixOfOrientation;
Graphic3d_SequenceOfStructure MyTOCOMPUTESequence;
Graphic3d_SequenceOfStructure MyCOMPUTEDSequence;
Handle_Graphic3d_GraphicDriver MyGraphicDriver;
Aspect_Background MyBackground;
Aspect_GradientBackground MyGradientBackground;
Graphic3d_MapOfStructure MyDisplayedStructure;
Visual3d_ViewManagerPtr MyPtrViewManager;
Graphic3d_CBitFields8 MyCBitFields;
Graphic3d_CGraduatedTrihedron MyGTrihedron;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
