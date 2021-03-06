
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <Standard_GUID.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <TCollection_AsciiString.hxx>
#include <BinDrivers_DocumentStorageDriver.hxx>
#include <BinDrivers_DocumentRetrievalDriver.hxx>
#include <TDocStd_Application.hxx>

// module includes
#include <BinDrivers.hxx>
#include <BinDrivers_DocumentRetrievalDriver.hxx>
#include <BinDrivers_DocumentStorageDriver.hxx>
#include <BinDrivers_Marker.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinDrivers(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BinDrivers"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BinDrivers , shared_ptr<BinDrivers>>(m,"BinDrivers");

    static_cast<py::class_<BinDrivers , shared_ptr<BinDrivers> >>(m.attr("BinDrivers"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinDrivers_DocumentRetrievalDriver ,opencascade::handle<BinDrivers_DocumentRetrievalDriver> , BinLDrivers_DocumentRetrievalDriver>>(m.attr("BinDrivers_DocumentRetrievalDriver"))
    // constructors
    // custom constructors
    // methods
        .def("AttributeDrivers",
             (opencascade::handle<BinMDF_ADriverTable> (BinDrivers_DocumentRetrievalDriver::*)( const opencascade::handle<Message_Messenger> & ) ) static_cast<opencascade::handle<BinMDF_ADriverTable> (BinDrivers_DocumentRetrievalDriver::*)( const opencascade::handle<Message_Messenger> & ) >(&BinDrivers_DocumentRetrievalDriver::AttributeDrivers),
             R"#(None)#"  , py::arg("theMsgDriver"))
        .def("ReadShapeSection",
             (void (BinDrivers_DocumentRetrievalDriver::*)( BinLDrivers_DocumentSection & , std::istream & , const Standard_Boolean ) ) static_cast<void (BinDrivers_DocumentRetrievalDriver::*)( BinLDrivers_DocumentSection & , std::istream & , const Standard_Boolean ) >(&BinDrivers_DocumentRetrievalDriver::ReadShapeSection),
             R"#(None)#"  , py::arg("theSection"),  py::arg("theIS"),  py::arg("isMess")=static_cast<const Standard_Boolean>(Standard_False))
        .def("CheckShapeSection",
             (void (BinDrivers_DocumentRetrievalDriver::*)( const Storage_Position & , std::istream & ) ) static_cast<void (BinDrivers_DocumentRetrievalDriver::*)( const Storage_Position & , std::istream & ) >(&BinDrivers_DocumentRetrievalDriver::CheckShapeSection),
             R"#(None)#"  , py::arg("thePos"),  py::arg("theIS"))
        .def("Clear",
             (void (BinDrivers_DocumentRetrievalDriver::*)() ) static_cast<void (BinDrivers_DocumentRetrievalDriver::*)() >(&BinDrivers_DocumentRetrievalDriver::Clear),
             R"#(Clears the NamedShape driver)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinDrivers_DocumentRetrievalDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinDrivers_DocumentRetrievalDriver::*)() const>(&BinDrivers_DocumentRetrievalDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinDrivers_DocumentRetrievalDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinDrivers_DocumentStorageDriver ,opencascade::handle<BinDrivers_DocumentStorageDriver> , BinLDrivers_DocumentStorageDriver>>(m.attr("BinDrivers_DocumentStorageDriver"))
    // constructors
    // custom constructors
    // methods
        .def("AttributeDrivers",
             (opencascade::handle<BinMDF_ADriverTable> (BinDrivers_DocumentStorageDriver::*)( const opencascade::handle<Message_Messenger> & ) ) static_cast<opencascade::handle<BinMDF_ADriverTable> (BinDrivers_DocumentStorageDriver::*)( const opencascade::handle<Message_Messenger> & ) >(&BinDrivers_DocumentStorageDriver::AttributeDrivers),
             R"#(None)#"  , py::arg("theMsgDriver"))
        .def("WriteShapeSection",
             (void (BinDrivers_DocumentStorageDriver::*)( BinLDrivers_DocumentSection & , std::ostream & ) ) static_cast<void (BinDrivers_DocumentStorageDriver::*)( BinLDrivers_DocumentSection & , std::ostream & ) >(&BinDrivers_DocumentStorageDriver::WriteShapeSection),
             R"#(implements the procedure of writing a shape section to file)#"  , py::arg("theDocSection"),  py::arg("theOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinDrivers_DocumentStorageDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinDrivers_DocumentStorageDriver::*)() const>(&BinDrivers_DocumentStorageDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinDrivers_DocumentStorageDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BinDrivers_DocumentStorageDriver.hxx
// ./opencascade/BinDrivers_DocumentRetrievalDriver.hxx
// ./opencascade/BinDrivers_Marker.hxx
// ./opencascade/BinDrivers.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
