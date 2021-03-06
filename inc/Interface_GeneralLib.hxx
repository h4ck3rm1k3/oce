// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_GeneralLib_HeaderFile
#define _Interface_GeneralLib_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Interface_NodeOfGeneralLib_HeaderFile
#include <Handle_Interface_NodeOfGeneralLib.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Interface_GeneralModule_HeaderFile
#include <Handle_Interface_GeneralModule.hxx>
#endif
#ifndef _Handle_Interface_Protocol_HeaderFile
#include <Handle_Interface_Protocol.hxx>
#endif
#ifndef _Handle_Interface_GlobalNodeOfGeneralLib_HeaderFile
#include <Handle_Interface_GlobalNodeOfGeneralLib.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Interface_NodeOfGeneralLib;
class Standard_NoSuchObject;
class Standard_Transient;
class Interface_GeneralModule;
class Interface_Protocol;
class Interface_GlobalNodeOfGeneralLib;



class Interface_GeneralLib  {
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

  
  Standard_EXPORT   static  void SetGlobal(const Handle(Interface_GeneralModule)& amodule,const Handle(Interface_Protocol)& aprotocol) ;
  
  Standard_EXPORT   Interface_GeneralLib(const Handle(Interface_Protocol)& aprotocol);
  
  Standard_EXPORT   Interface_GeneralLib();
  
  Standard_EXPORT     void AddProtocol(const Handle(Standard_Transient)& aprotocol) ;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void SetComplete() ;
  
  Standard_EXPORT     Standard_Boolean Select(const Handle(Standard_Transient)& obj,Handle(Interface_GeneralModule)& module,Standard_Integer& CN) const;
  
  Standard_EXPORT     void Start() ;
  
  Standard_EXPORT     Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT    const Handle_Interface_GeneralModule& Module() const;
  
  Standard_EXPORT    const Handle_Interface_Protocol& Protocol() const;





protected:





private:



Handle_Interface_NodeOfGeneralLib thelist;
Handle_Interface_NodeOfGeneralLib thecurr;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
