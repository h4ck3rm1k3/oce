// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_ReadWriteModule_HeaderFile
#define _IGESDimen_ReadWriteModule_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDimen_ReadWriteModule_HeaderFile
#include <Handle_IGESDimen_ReadWriteModule.hxx>
#endif

#ifndef _IGESData_ReadWriteModule_HeaderFile
#include <IGESData_ReadWriteModule.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Handle_IGESData_IGESReaderData_HeaderFile
#include <Handle_IGESData_IGESReaderData.hxx>
#endif
class Standard_DomainError;
class IGESData_IGESEntity;
class IGESData_IGESReaderData;
class IGESData_ParamReader;
class IGESData_IGESWriter;


//! Defines Dimen File Access Module for IGESDimen (specific parts) <br>
//!           Specific actions concern : Read and Write Own Parameters of <br>
//!           an IGESEntity <br>
class IGESDimen_ReadWriteModule : public IGESData_ReadWriteModule {

public:

  //! Creates a ReadWriteModule & puts it into ReaderLib & WriterLib <br>
  Standard_EXPORT   IGESDimen_ReadWriteModule();
  //! Defines Case Numbers for Entities of IGESDimen <br>
  Standard_EXPORT     Standard_Integer CaseIGES(const Standard_Integer typenum,const Standard_Integer formnum) const;
  //! Reads own parameters from file for an Entity of IGESDimen <br>
  Standard_EXPORT     void ReadOwnParams(const Standard_Integer CN,const Handle(IGESData_IGESEntity)& ent,const Handle(IGESData_IGESReaderData)& IR,IGESData_ParamReader& PR) const;
  //! Writes own parameters to IGESWriter <br>
  Standard_EXPORT     void WriteOwnParams(const Standard_Integer CN,const Handle(IGESData_IGESEntity)& ent,IGESData_IGESWriter& IW) const;




  DEFINE_STANDARD_RTTI(IGESDimen_ReadWriteModule)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
