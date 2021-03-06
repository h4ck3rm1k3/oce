// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PlotMgt_HListOfPlotterParameter_HeaderFile
#define _PlotMgt_HListOfPlotterParameter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_PlotMgt_HListOfPlotterParameter_HeaderFile
#include <Handle_PlotMgt_HListOfPlotterParameter.hxx>
#endif

#ifndef _PlotMgt_ListOfPlotterParameter_HeaderFile
#include <PlotMgt_ListOfPlotterParameter.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_PlotMgt_PlotterParameter_HeaderFile
#include <Handle_PlotMgt_PlotterParameter.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class PlotMgt_PlotterParameter;
class PlotMgt_ListOfPlotterParameter;



class PlotMgt_HListOfPlotterParameter : public MMgt_TShared {

public:

  
      PlotMgt_HListOfPlotterParameter();
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Length() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const Handle(PlotMgt_PlotterParameter)& anItem) ;
  
  Standard_EXPORT     void Append(const Handle(PlotMgt_HListOfPlotterParameter)& aSequence) ;
  
  Standard_EXPORT     void Prepend(const Handle(PlotMgt_PlotterParameter)& anItem) ;
  
  Standard_EXPORT     void Prepend(const Handle(PlotMgt_HListOfPlotterParameter)& aSequence) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(PlotMgt_PlotterParameter)& anItem) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(PlotMgt_HListOfPlotterParameter)& aSequence) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(PlotMgt_PlotterParameter)& anItem) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(PlotMgt_HListOfPlotterParameter)& aSequence) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT     Handle_PlotMgt_HListOfPlotterParameter Split(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer anIndex,const Handle(PlotMgt_PlotterParameter)& anItem) ;
  
  Standard_EXPORT    const Handle_PlotMgt_PlotterParameter& Value(const Standard_Integer anIndex) const;
  
  Standard_EXPORT     Handle_PlotMgt_PlotterParameter& ChangeValue(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;
  
       const PlotMgt_ListOfPlotterParameter& Sequence() const;
  
        PlotMgt_ListOfPlotterParameter& ChangeSequence() ;
  
  Standard_EXPORT     Handle_PlotMgt_HListOfPlotterParameter ShallowCopy() const;




  DEFINE_STANDARD_RTTI(PlotMgt_HListOfPlotterParameter)

protected:




private: 


PlotMgt_ListOfPlotterParameter mySequence;


};

#define Item Handle_PlotMgt_PlotterParameter
#define Item_hxx <PlotMgt_PlotterParameter.hxx>
#define TheSequence PlotMgt_ListOfPlotterParameter
#define TheSequence_hxx <PlotMgt_ListOfPlotterParameter.hxx>
#define TCollection_HSequence PlotMgt_HListOfPlotterParameter
#define TCollection_HSequence_hxx <PlotMgt_HListOfPlotterParameter.hxx>
#define Handle_TCollection_HSequence Handle_PlotMgt_HListOfPlotterParameter
#define TCollection_HSequence_Type_() PlotMgt_HListOfPlotterParameter_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


// other Inline functions and methods (like "C++: function call" methods)
inline Handle_PlotMgt_HListOfPlotterParameter ShallowCopy(const Handle_PlotMgt_HListOfPlotterParameter& me) {
 return me->ShallowCopy();
}



#endif
