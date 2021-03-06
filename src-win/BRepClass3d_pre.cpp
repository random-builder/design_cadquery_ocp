
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <BRepClass3d_SolidExplorer.hxx>
#include <TopoDS_Face.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <TopoDS_Shell.hxx>
#include <IntCurvesFace_Intersector.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <BRepClass3d_Intersector3d.hxx>
#include <BRepClass3d_SolidExplorer.hxx>
#include <BRepClass3d_SolidPassiveClassifier.hxx>
#include <BRepClass3d_SClassifier.hxx>
#include <BRepClass3d_SolidClassifier.hxx>
#include <gp_Lin.hxx>

// module includes
#include <BRepClass3d.hxx>
#include <BRepClass3d_BndBoxTree.hxx>
#include <BRepClass3d_DataMapIteratorOfMapOfInter.hxx>
#include <BRepClass3d_Intersector3d.hxx>
#include <BRepClass3d_MapOfInter.hxx>
#include <BRepClass3d_SClassifier.hxx>
#include <BRepClass3d_SolidClassifier.hxx>
#include <BRepClass3d_SolidExplorer.hxx>
#include <BRepClass3d_SolidPassiveClassifier.hxx>

// template related includes
// ./opencascade\BRepClass3d_MapOfInter.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepClass3d_MapOfInter.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepClass3d_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepClass3d", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_DataMap<TopoDS_Shape, Standard_Address, TopTools_ShapeMapHasher>(m,"BRepClass3d_MapOfInter");

// classes forward declarations only
    py::class_<BRepClass3d , shared_ptr<BRepClass3d> >(m,"BRepClass3d",R"#(None)#");
    py::class_<BRepClass3d_Intersector3d , shared_ptr<BRepClass3d_Intersector3d> >(m,"BRepClass3d_Intersector3d",R"#(None)#");
    py::class_<BRepClass3d_SClassifier , shared_ptr<BRepClass3d_SClassifier> >(m,"BRepClass3d_SClassifier",R"#(Provides an algorithm to classify a point in a solid.)#");
    py::class_<BRepClass3d_SolidExplorer , shared_ptr<BRepClass3d_SolidExplorer> >(m,"BRepClass3d_SolidExplorer",R"#(Provide an exploration of a BRep Shape for the classification. Provide access to the special UB tree to obtain fast search.)#");
    py::class_<BRepClass3d_SolidPassiveClassifier , shared_ptr<BRepClass3d_SolidPassiveClassifier> >(m,"BRepClass3d_SolidPassiveClassifier",R"#(None)#");
    py::class_<BRepClass3d_SolidClassifier , shared_ptr<BRepClass3d_SolidClassifier> , BRepClass3d_SClassifier>(m,"BRepClass3d_SolidClassifier",R"#(Provides an algorithm to classify a point in a solid.)#");

};

// user-defined post-inclusion per module

// user-defined post
