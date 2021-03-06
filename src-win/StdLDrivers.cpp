
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StdObjMgt_MapOfInstantiators.hxx>
#include <StdObjMgt_Persistent.hxx>
#include <Standard_GUID.hxx>
#include <StdObjMgt_MapOfInstantiators.hxx>
#include <TDocStd_Application.hxx>

// module includes
#include <StdLDrivers.hxx>
#include <StdLDrivers_DocumentRetrievalDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <CDM_Document.hxx>

// Module definiiton
void register_StdLDrivers(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StdLDrivers"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<StdLDrivers , shared_ptr<StdLDrivers>>(m,"StdLDrivers");

    static_cast<py::class_<StdLDrivers , shared_ptr<StdLDrivers> >>(m.attr("StdLDrivers"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Factory_s",
                    (opencascade::handle<Standard_Transient> (*)( const Standard_GUID & ) ) static_cast<opencascade::handle<Standard_Transient> (*)( const Standard_GUID & ) >(&StdLDrivers::Factory),
                    R"#(Depending from the ID, returns a list of storage or retrieval attribute drivers. Used for plugin)#"  , py::arg("aGUID"))
        .def_static("DefineFormat_s",
                    (void (*)( const opencascade::handle<TDocStd_Application> & ) ) static_cast<void (*)( const opencascade::handle<TDocStd_Application> & ) >(&StdLDrivers::DefineFormat),
                    R"#(Defines format "OCC-StdLite" and registers its retrieval driver in the specified application)#"  , py::arg("theApp"))
        .def_static("BindTypes_s",
                    (void (*)( StdObjMgt_MapOfInstantiators & ) ) static_cast<void (*)( StdObjMgt_MapOfInstantiators & ) >(&StdLDrivers::BindTypes),
                    R"#(Register types.)#"  , py::arg("theMap"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdLDrivers_DocumentRetrievalDriver ,opencascade::handle<StdLDrivers_DocumentRetrievalDriver>>(m,"StdLDrivers_DocumentRetrievalDriver");

    static_cast<py::class_<StdLDrivers_DocumentRetrievalDriver ,opencascade::handle<StdLDrivers_DocumentRetrievalDriver> , PCDM_RetrievalDriver>>(m.attr("StdLDrivers_DocumentRetrievalDriver"))
    // constructors
    // custom constructors
    // methods
        .def("CreateDocument",
             (opencascade::handle<CDM_Document> (StdLDrivers_DocumentRetrievalDriver::*)() ) static_cast<opencascade::handle<CDM_Document> (StdLDrivers_DocumentRetrievalDriver::*)() >(&StdLDrivers_DocumentRetrievalDriver::CreateDocument),
             R"#(Create an empty TDocStd_Document.)#" )
        .def("Read",
             (void (StdLDrivers_DocumentRetrievalDriver::*)( const TCollection_ExtendedString & , const opencascade::handle<CDM_Document> & , const opencascade::handle<CDM_Application> & ) ) static_cast<void (StdLDrivers_DocumentRetrievalDriver::*)( const TCollection_ExtendedString & , const opencascade::handle<CDM_Document> & , const opencascade::handle<CDM_Application> & ) >(&StdLDrivers_DocumentRetrievalDriver::Read),
             R"#(Retrieve the content of a file into a new document.)#"  , py::arg("theFileName"),  py::arg("theNewDocument"),  py::arg("theApplication"))
        .def("Read",
             (void (StdLDrivers_DocumentRetrievalDriver::*)( std::istream & , const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & , const opencascade::handle<CDM_Application> & ) ) static_cast<void (StdLDrivers_DocumentRetrievalDriver::*)( std::istream & , const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & , const opencascade::handle<CDM_Application> & ) >(&StdLDrivers_DocumentRetrievalDriver::Read),
             R"#(Override pure virtual method (raises exception Standard_NotImplemented))#"  , py::arg("theIStream"),  py::arg("theStorageData"),  py::arg("theDoc"),  py::arg("theApplication"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdLDrivers_DocumentRetrievalDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdLDrivers_DocumentRetrievalDriver::*)() const>(&StdLDrivers_DocumentRetrievalDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdLDrivers_DocumentRetrievalDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StdLDrivers_DocumentRetrievalDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\StdLDrivers_DocumentRetrievalDriver.hxx
// ./opencascade\StdLDrivers.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
