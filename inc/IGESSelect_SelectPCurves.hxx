// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_SelectPCurves_HeaderFile
#define _IGESSelect_SelectPCurves_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESSelect_SelectPCurves_HeaderFile
#include <Handle_IGESSelect_SelectPCurves.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _IFSelect_SelectExplore_HeaderFile
#include <IFSelect_SelectExplore.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
class Standard_Transient;
class Interface_Graph;
class Interface_EntityIterator;
class TCollection_AsciiString;


//! This Selection returns the pcurves which lie on a face <br>
//!           In two modes : global (i.e. a CompositeCurve is not explored) <br>
//!           or basic (all the basic curves are listed) <br>
class IGESSelect_SelectPCurves : public IFSelect_SelectExplore {

public:

  //! Creates a SelectPCurves <br>
//!           basic True  : lists all the components of pcurves <br>
//!           basic False : lists the uppest level definitions <br>
//!             (i.e. stops at CompositeCurve) <br>
  Standard_EXPORT   IGESSelect_SelectPCurves(const Standard_Boolean basic);
  //! Explores an entity, to take its contained PCurves <br>
//!           An independant curve is IGNORED : only faces are explored <br>
  Standard_EXPORT     Standard_Boolean Explore(const Standard_Integer level,const Handle(Standard_Transient)& ent,const Interface_Graph& G,Interface_EntityIterator& explored) const;
  //! Returns a text defining the criterium : "Basic PCurves" or <br>
//!           "Global PCurves" <br>
  Standard_EXPORT     TCollection_AsciiString ExploreLabel() const;




  DEFINE_STANDARD_RTTI(IGESSelect_SelectPCurves)

protected:




private: 


Standard_Boolean thebasic;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
