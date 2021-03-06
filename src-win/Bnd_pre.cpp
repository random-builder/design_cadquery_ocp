
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
#include <gp_Lin.hxx>
#include <gp_Pln.hxx>
#include <Standard_NullValue.hxx>
#include <Standard_MultiplyDefined.hxx>
#include <gp_Pln.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax3.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax3.hxx>
#include <Standard_NullValue.hxx>
#include <Standard_MultiplyDefined.hxx>

// module includes
#include <Bnd_Array1OfBox.hxx>
#include <Bnd_Array1OfBox2d.hxx>
#include <Bnd_Array1OfSphere.hxx>
#include <Bnd_B2d.hxx>
#include <Bnd_B2f.hxx>
#include <Bnd_B3d.hxx>
#include <Bnd_B3f.hxx>
#include <Bnd_BoundSortBox.hxx>
#include <Bnd_BoundSortBox2d.hxx>
#include <Bnd_Box.hxx>
#include <Bnd_Box2d.hxx>
#include <Bnd_HArray1OfBox.hxx>
#include <Bnd_HArray1OfBox2d.hxx>
#include <Bnd_HArray1OfSphere.hxx>
#include <Bnd_OBB.hxx>
#include <Bnd_Range.hxx>
#include <Bnd_SeqOfBox.hxx>
#include <Bnd_Sphere.hxx>
#include <Bnd_Tools.hxx>

// template related includes
// ./opencascade\Bnd_SeqOfBox.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Bnd_Array1OfSphere.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Bnd_Array1OfBox2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Bnd_Array1OfBox.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Bnd_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Bnd", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Sequence<Bnd_Box>(m,"Bnd_SeqOfBox");
    preregister_template_NCollection_Array1<Bnd_Sphere>(m,"Bnd_Array1OfSphere");
    preregister_template_NCollection_Array1<Bnd_Box2d>(m,"Bnd_Array1OfBox2d");
    preregister_template_NCollection_Array1<Bnd_Box>(m,"Bnd_Array1OfBox");

// classes forward declarations only
    py::class_<Bnd_B2d , shared_ptr<Bnd_B2d> >(m,"Bnd_B2d",R"#(None)#");
    py::class_<Bnd_B2f , shared_ptr<Bnd_B2f> >(m,"Bnd_B2f",R"#(None)#");
    py::class_<Bnd_B3d , shared_ptr<Bnd_B3d> >(m,"Bnd_B3d",R"#(None)#");
    py::class_<Bnd_B3f , shared_ptr<Bnd_B3f> >(m,"Bnd_B3f",R"#(None)#");
    py::class_<Bnd_BoundSortBox , shared_ptr<Bnd_BoundSortBox> >(m,"Bnd_BoundSortBox",R"#(A tool to compare a bounding box or a plane with a set of bounding boxes. It sorts the set of bounding boxes to give the list of boxes which intersect the element being compared. The boxes being sorted generally bound a set of shapes, while the box being compared bounds a shape to be compared. The resulting list of intersecting boxes therefore gives the list of items which potentially intersect the shape to be compared.)#");
    py::class_<Bnd_BoundSortBox2d , shared_ptr<Bnd_BoundSortBox2d> >(m,"Bnd_BoundSortBox2d",R"#(A tool to compare a 2D bounding box with a set of 2D bounding boxes. It sorts the set of bounding boxes to give the list of boxes which intersect the element being compared. The boxes being sorted generally bound a set of shapes, while the box being compared bounds a shape to be compared. The resulting list of intersecting boxes therefore gives the list of items which potentially intersect the shape to be compared.)#");
    py::class_<Bnd_Box , shared_ptr<Bnd_Box> >(m,"Bnd_Box",R"#(Describes a bounding box in 3D space. A bounding box is parallel to the axes of the coordinates system. If it is finite, it is defined by the three intervals: - [ Xmin,Xmax ], - [ Ymin,Ymax ], - [ Zmin,Zmax ]. A bounding box may be infinite (i.e. open) in one or more directions. It is said to be: - OpenXmin if it is infinite on the negative side of the "X Direction"; - OpenXmax if it is infinite on the positive side of the "X Direction"; - OpenYmin if it is infinite on the negative side of the "Y Direction"; - OpenYmax if it is infinite on the positive side of the "Y Direction"; - OpenZmin if it is infinite on the negative side of the "Z Direction"; - OpenZmax if it is infinite on the positive side of the "Z Direction"; - WholeSpace if it is infinite in all six directions. In this case, any point of the space is inside the box; - Void if it is empty. In this case, there is no point included in the box. A bounding box is defined by: - six bounds (Xmin, Xmax, Ymin, Ymax, Zmin and Zmax) which limit the bounding box if it is finite, - eight flags (OpenXmin, OpenXmax, OpenYmin, OpenYmax, OpenZmin, OpenZmax, WholeSpace and Void) which describe the bounding box if it is infinite or empty, and - a gap, which is included on both sides in any direction when consulting the finite bounds of the box.)#");
    py::class_<Bnd_Box2d , shared_ptr<Bnd_Box2d> >(m,"Bnd_Box2d",R"#(Describes a bounding box in 2D space. A bounding box is parallel to the axes of the coordinates system. If it is finite, it is defined by the two intervals: - [ Xmin,Xmax ], and - [ Ymin,Ymax ]. A bounding box may be infinite (i.e. open) in one or more directions. It is said to be: - OpenXmin if it is infinite on the negative side of the "X Direction"; - OpenXmax if it is infinite on the positive side of the "X Direction"; - OpenYmin if it is infinite on the negative side of the "Y Direction"; - OpenYmax if it is infinite on the positive side of the "Y Direction"; - WholeSpace if it is infinite in all four directions. In this case, any point of the space is inside the box; - Void if it is empty. In this case, there is no point included in the box. A bounding box is defined by four bounds (Xmin, Xmax, Ymin and Ymax) which limit the bounding box if it is finite, six flags (OpenXmin, OpenXmax, OpenYmin, OpenYmax, WholeSpace and Void) which describe the bounding box if it is infinite or empty, and - a gap, which is included on both sides in any direction when consulting the finite bounds of the box.)#");
    py::class_<Bnd_HArray1OfBox ,opencascade::handle<Bnd_HArray1OfBox> , Bnd_Array1OfBox, Standard_Transient>(m,"Bnd_HArray1OfBox",R"#()#");
    py::class_<Bnd_HArray1OfBox2d ,opencascade::handle<Bnd_HArray1OfBox2d> , Bnd_Array1OfBox2d, Standard_Transient>(m,"Bnd_HArray1OfBox2d",R"#()#");
    py::class_<Bnd_HArray1OfSphere ,opencascade::handle<Bnd_HArray1OfSphere> , Bnd_Array1OfSphere, Standard_Transient>(m,"Bnd_HArray1OfSphere",R"#()#");
    py::class_<Bnd_OBB , shared_ptr<Bnd_OBB> >(m,"Bnd_OBB",R"#(The class describes the Oriented Bounding Box (OBB), much tighter enclosing volume for the shape than the Axis Aligned Bounding Box (AABB). The OBB is defined by a center of the box, the axes and the halves of its three dimensions. The OBB can be used more effectively than AABB as a rejection mechanism for non-interfering objects.)#");
    py::class_<Bnd_Range , shared_ptr<Bnd_Range> >(m,"Bnd_Range",R"#(This class describes a range in 1D space restricted by two real values. A range can be void indicating there is no point included in the range.)#");
    py::class_<Bnd_Sphere , shared_ptr<Bnd_Sphere> >(m,"Bnd_Sphere",R"#(This class represents a bounding sphere of a geometric entity (triangle, segment of line or whatever else).)#");
    py::class_<Bnd_Tools , shared_ptr<Bnd_Tools> >(m,"Bnd_Tools",R"#(Defines a set of static methods operating with bounding boxes)#");

};

// user-defined post-inclusion per module

// user-defined post
