// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <Materials_MaterialsSequence.hxx>

#ifndef _Standard_Type_HeaderFile
#include <Standard_Type.hxx>
#endif

#ifndef _Standard_NoSuchObject_HeaderFile
#include <Standard_NoSuchObject.hxx>
#endif
#ifndef _Standard_OutOfRange_HeaderFile
#include <Standard_OutOfRange.hxx>
#endif
#ifndef _Materials_Material_HeaderFile
#include <Materials_Material.hxx>
#endif
#ifndef _Materials_MtsSequence_HeaderFile
#include <Materials_MtsSequence.hxx>
#endif

 


IMPLEMENT_STANDARD_TYPE(Materials_MaterialsSequence)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Materials_MaterialsSequence)


IMPLEMENT_DOWNCAST(Materials_MaterialsSequence,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Materials_MaterialsSequence)


#define Item Handle_Materials_Material
#define Item_hxx <Materials_Material.hxx>
#define TheSequence Materials_MtsSequence
#define TheSequence_hxx <Materials_MtsSequence.hxx>
#define TCollection_HSequence Materials_MaterialsSequence
#define TCollection_HSequence_hxx <Materials_MaterialsSequence.hxx>
#define Handle_TCollection_HSequence Handle_Materials_MaterialsSequence
#define TCollection_HSequence_Type_() Materials_MaterialsSequence_Type_()
#include <TCollection_HSequence.gxx>

