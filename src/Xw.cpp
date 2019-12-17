
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Aspect_WindowDefinitionError.hxx>
#include <Aspect_WindowError.hxx>

// module includes
#include <Xw_Window.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
struct __GLXFBConfigRec {};

// Module definiiton
void register_Xw(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Xw"));


//Python trampoline classes

// classes


    static_cast<py::class_<Xw_Window ,opencascade::handle<Xw_Window>  , Aspect_Window >>(m.attr("Xw_Window"))
        .def(py::init< const opencascade::handle<Aspect_DisplayConnection> &,const Standard_CString,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Aspect_FBConfig >()  , py::arg("theXDisplay"),  py::arg("theTitle"),  py::arg("thePxLeft"),  py::arg("thePxTop"),  py::arg("thePxWidth"),  py::arg("thePxHeight"),  py::arg("theFBConfig")=static_cast<const Aspect_FBConfig>(NULL) )
        .def(py::init< const opencascade::handle<Aspect_DisplayConnection> &,const Window,const Aspect_FBConfig >()  , py::arg("theXDisplay"),  py::arg("theXWin"),  py::arg("theFBConfig")=static_cast<const Aspect_FBConfig>(NULL) )
        .def("Map",
             (void (Xw_Window::*)() const) static_cast<void (Xw_Window::*)() const>(&Xw_Window::Map),
             R"#(Opens the window <me>)#" )
        .def("Unmap",
             (void (Xw_Window::*)() const) static_cast<void (Xw_Window::*)() const>(&Xw_Window::Unmap),
             R"#(Closes the window <me>)#" )
        .def("DoResize",
             (Aspect_TypeOfResize (Xw_Window::*)() const) static_cast<Aspect_TypeOfResize (Xw_Window::*)() const>(&Xw_Window::DoResize),
             R"#(Applies the resizing to the window <me>)#" )
        .def("DoMapping",
             (Standard_Boolean (Xw_Window::*)() const) static_cast<Standard_Boolean (Xw_Window::*)() const>(&Xw_Window::DoMapping),
             R"#(Apply the mapping change to the window <me>)#" )
        .def("IsMapped",
             (Standard_Boolean (Xw_Window::*)() const) static_cast<Standard_Boolean (Xw_Window::*)() const>(&Xw_Window::IsMapped),
             R"#(Returns True if the window <me> is opened)#" )
        .def("Ratio",
             (Standard_Real (Xw_Window::*)() const) static_cast<Standard_Real (Xw_Window::*)() const>(&Xw_Window::Ratio),
             R"#(Returns The Window RATIO equal to the physical WIDTH/HEIGHT dimensions)#" )
        .def("Position",
             (void (Xw_Window::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const) static_cast<void (Xw_Window::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const>(&Xw_Window::Position),
             R"#(Returns The Window POSITION in PIXEL)#"  , py::arg("X1"),  py::arg("Y1"),  py::arg("X2"),  py::arg("Y2"))
        .def("Size",
             (void (Xw_Window::*)( Standard_Integer & ,  Standard_Integer &  ) const) static_cast<void (Xw_Window::*)( Standard_Integer & ,  Standard_Integer &  ) const>(&Xw_Window::Size),
             R"#(Returns The Window SIZE in PIXEL)#"  , py::arg("theWidth"),  py::arg("theHeight"))
        .def("XWindow",
             (Window (Xw_Window::*)() const) static_cast<Window (Xw_Window::*)() const>(&Xw_Window::XWindow),
             R"#(Returns native Window handle)#" )
        .def("NativeHandle",
             (Aspect_Drawable (Xw_Window::*)() const) static_cast<Aspect_Drawable (Xw_Window::*)() const>(&Xw_Window::NativeHandle),
             R"#(Returns native Window handle)#" )
        .def("NativeParentHandle",
             (Aspect_Drawable (Xw_Window::*)() const) static_cast<Aspect_Drawable (Xw_Window::*)() const>(&Xw_Window::NativeParentHandle),
             R"#(Returns parent of native Window handle)#" )
        .def("NativeFBConfig",
             (Aspect_FBConfig (Xw_Window::*)() const) static_cast<Aspect_FBConfig (Xw_Window::*)() const>(&Xw_Window::NativeFBConfig),
             R"#(Returns native Window FB config (GLXFBConfig on Xlib))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Xw_Window::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Xw_Window::*)() const>(&Xw_Window::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Xw_Window::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Xw_Window::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/Xw_Window.hxx

// operators

// register typdefs
// ./opencascade/Xw_Window.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post