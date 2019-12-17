
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <XmlMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <XmlMDocStd_XLinkDriver.hxx>

// module includes
#include <XmlMDocStd.hxx>
#include <XmlMDocStd_XLinkDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_XmlMDocStd(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("XmlMDocStd"));


//Python trampoline classes

// classes


    static_cast<py::class_<XmlMDocStd_XLinkDriver ,opencascade::handle<XmlMDocStd_XLinkDriver>  , XmlMDF_ADriver >>(m.attr("XmlMDocStd_XLinkDriver"))
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDocStd_XLinkDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDocStd_XLinkDriver::*)() const>(&XmlMDocStd_XLinkDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDocStd_XLinkDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  TColStd_DataMapOfIntegerTransient &  ) const) static_cast<Standard_Boolean (XmlMDocStd_XLinkDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  TColStd_DataMapOfIntegerTransient &  ) const>(&XmlMDocStd_XLinkDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDocStd_XLinkDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const) static_cast<void (XmlMDocStd_XLinkDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const>(&XmlMDocStd_XLinkDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDocStd_XLinkDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDocStd_XLinkDriver::*)() const>(&XmlMDocStd_XLinkDriver::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDocStd_XLinkDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XmlMDocStd_XLinkDriver::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<XmlMDocStd ,std::unique_ptr<XmlMDocStd>>(m,"XmlMDocStd");

    static_cast<py::class_<XmlMDocStd ,std::unique_ptr<XmlMDocStd>  >>(m.attr("XmlMDocStd"))
        .def_static("AddDrivers_s",
                    (void (*)( const opencascade::handle<XmlMDF_ADriverTable> & ,  const opencascade::handle<Message_Messenger> &  ) ) static_cast<void (*)( const opencascade::handle<XmlMDF_ADriverTable> & ,  const opencascade::handle<Message_Messenger> &  ) >(&XmlMDocStd::AddDrivers),
                    R"#(Adds the attribute drivers to <aDriverTable>.)#"  , py::arg("aDriverTable"),  py::arg("theMessageDriver"))
;

// functions
// ./opencascade/XmlMDocStd_XLinkDriver.hxx
// ./opencascade/XmlMDocStd.hxx

// operators

// register typdefs
// ./opencascade/XmlMDocStd_XLinkDriver.hxx
// ./opencascade/XmlMDocStd.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post