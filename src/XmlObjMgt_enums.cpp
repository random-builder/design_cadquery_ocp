
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_Trsf.hxx>
#include <gp_Mat.hxx>
#include <gp_XYZ.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <XmlObjMgt_GP.hxx>
#include <XmlObjMgt_Array1.hxx>

// module includes
#include <XmlObjMgt.hxx>
#include <XmlObjMgt_Array1.hxx>
#include <XmlObjMgt_Document.hxx>
#include <XmlObjMgt_DOMString.hxx>
#include <XmlObjMgt_Element.hxx>
#include <XmlObjMgt_GP.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <XmlObjMgt_RRelocationTable.hxx>
#include <XmlObjMgt_SRelocationTable.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_XmlObjMgt_enums(py::module &main_module) {


py::module m = main_module.def_submodule("XmlObjMgt", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<XmlObjMgt_Array1 ,std::unique_ptr<XmlObjMgt_Array1>  >(m,"XmlObjMgt_Array1",R"#(The class Array1 represents unidimensionnal array of fixed size known at run time. The range of the index is user defined. Warning: Programs clients of such class must be independant of the range of the first element. Then, a C++ for loop must be written like this for (i = A->Lower(); i <= A->Upper(); i++))#");
    py::class_<XmlObjMgt_GP ,std::unique_ptr<XmlObjMgt_GP>  >(m,"XmlObjMgt_GP",R"#(Translation of gp (simple geometry) objects)#");
    py::class_<XmlObjMgt_Persistent ,std::unique_ptr<XmlObjMgt_Persistent>  >(m,"XmlObjMgt_Persistent",R"#(root for XML-persistence)#");
    py::class_<XmlObjMgt ,std::unique_ptr<XmlObjMgt>  >(m,"XmlObjMgt",R"#(This package defines services to manage the storage grain of data produced by applications and those classes to manage persistent extern reference.)#");

// pre-register typdefs
// ./opencascade/XmlObjMgt_Array1.hxx
// ./opencascade/XmlObjMgt_Persistent.hxx
// ./opencascade/XmlObjMgt_GP.hxx
// ./opencascade/XmlObjMgt_RRelocationTable.hxx
// ./opencascade/XmlObjMgt_Element.hxx
// ./opencascade/XmlObjMgt_DOMString.hxx
// ./opencascade/XmlObjMgt_Document.hxx
// ./opencascade/XmlObjMgt.hxx
// ./opencascade/XmlObjMgt_SRelocationTable.hxx

};

// user-defined post-inclusion per module

// user-defined post