
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Shell.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <StdFail_NotDone.hxx>

// module includes
#include <BRepPrimAPI_MakeBox.hxx>
#include <BRepPrimAPI_MakeCone.hxx>
#include <BRepPrimAPI_MakeCylinder.hxx>
#include <BRepPrimAPI_MakeHalfSpace.hxx>
#include <BRepPrimAPI_MakeOneAxis.hxx>
#include <BRepPrimAPI_MakePrism.hxx>
#include <BRepPrimAPI_MakeRevol.hxx>
#include <BRepPrimAPI_MakeRevolution.hxx>
#include <BRepPrimAPI_MakeSphere.hxx>
#include <BRepPrimAPI_MakeSweep.hxx>
#include <BRepPrimAPI_MakeTorus.hxx>
#include <BRepPrimAPI_MakeWedge.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepPrimAPI_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepPrimAPI", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_BRepPrimAPI_MakeSweep : public BRepPrimAPI_MakeSweep{
    public:
        using BRepPrimAPI_MakeSweep::BRepPrimAPI_MakeSweep;
        
        // public pure virtual
        TopoDS_Shape FirstShape() override { PYBIND11_OVERLOAD_PURE(TopoDS_Shape,BRepPrimAPI_MakeSweep,FirstShape,) };
        TopoDS_Shape LastShape() override { PYBIND11_OVERLOAD_PURE(TopoDS_Shape,BRepPrimAPI_MakeSweep,LastShape,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_BRepPrimAPI_MakeOneAxis : public BRepPrimAPI_MakeOneAxis{
    public:
        using BRepPrimAPI_MakeOneAxis::BRepPrimAPI_MakeOneAxis;
        
        // public pure virtual
        Standard_Address OneAxis() override { PYBIND11_OVERLOAD_PURE(Standard_Address,BRepPrimAPI_MakeOneAxis,OneAxis,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes forward declarations only
    py::class_<BRepPrimAPI_MakeSweep ,std::unique_ptr<BRepPrimAPI_MakeSweep> ,Py_BRepPrimAPI_MakeSweep , BRepBuilderAPI_MakeShape >(m,"BRepPrimAPI_MakeSweep",R"#(The abstract class MakeSweep is the root class of swept primitives. Sweeps are objects you obtain by sweeping a profile along a path. The profile can be any topology and the path is usually a curve or a wire. The profile generates objects according to the following rules: - Vertices generate Edges - Edges generate Faces. - Wires generate Shells. - Faces generate Solids. - Shells generate Composite Solids. You are not allowed to sweep Solids and Composite Solids. Two kinds of sweeps are implemented in the BRepPrimAPI package: - The linear sweep called a Prism - The rotational sweep called a Revol Swept constructions along complex profiles such as BSpline curves are also available in the BRepOffsetAPI package..)#");
    py::class_<BRepPrimAPI_MakeHalfSpace ,std::unique_ptr<BRepPrimAPI_MakeHalfSpace>  , BRepBuilderAPI_MakeShape >(m,"BRepPrimAPI_MakeHalfSpace",R"#(Describes functions to build half-spaces. A half-space is an infinite solid, limited by a surface. It is built from a face or a shell, which bounds it, and with a reference point, which specifies the side of the surface where the matter of the half-space is located. A half-space is a tool commonly used in topological operations to cut another shape. A MakeHalfSpace object provides a framework for: - defining and implementing the construction of a half-space, and - consulting the result.)#");
    py::class_<BRepPrimAPI_MakeOneAxis ,std::unique_ptr<BRepPrimAPI_MakeOneAxis> ,Py_BRepPrimAPI_MakeOneAxis , BRepBuilderAPI_MakeShape >(m,"BRepPrimAPI_MakeOneAxis",R"#(The abstract class MakeOneAxis is the root class of algorithms used to construct rotational primitives.)#");
    py::class_<BRepPrimAPI_MakeTorus ,std::unique_ptr<BRepPrimAPI_MakeTorus>  , BRepPrimAPI_MakeOneAxis >(m,"BRepPrimAPI_MakeTorus",R"#(Describes functions to build tori or portions of tori. A MakeTorus object provides a framework for: - defining the construction of a torus, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<BRepPrimAPI_MakeCone ,std::unique_ptr<BRepPrimAPI_MakeCone>  , BRepPrimAPI_MakeOneAxis >(m,"BRepPrimAPI_MakeCone",R"#(Describes functions to build cones or portions of cones. A MakeCone object provides a framework for: - defining the construction of a cone, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<BRepPrimAPI_MakePrism ,std::unique_ptr<BRepPrimAPI_MakePrism>  , BRepPrimAPI_MakeSweep >(m,"BRepPrimAPI_MakePrism",R"#(Describes functions to build linear swept topologies, called prisms. A prism is defined by: - a basis shape, which is swept, and - a sweeping direction, which is: - a vector for finite prisms, or - a direction for infinite or semi-infinite prisms. The basis shape must not contain any solids. The profile generates objects according to the following rules: - Vertices generate Edges - Edges generate Faces. - Wires generate Shells. - Faces generate Solids. - Shells generate Composite Solids A MakePrism object provides a framework for: - defining the construction of a prism, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<BRepPrimAPI_MakeCylinder ,std::unique_ptr<BRepPrimAPI_MakeCylinder>  , BRepPrimAPI_MakeOneAxis >(m,"BRepPrimAPI_MakeCylinder",R"#(Describes functions to build cylinders or portions of cylinders. A MakeCylinder object provides a framework for: - defining the construction of a cylinder, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<BRepPrimAPI_MakeRevolution ,std::unique_ptr<BRepPrimAPI_MakeRevolution>  , BRepPrimAPI_MakeOneAxis >(m,"BRepPrimAPI_MakeRevolution",R"#(Describes functions to build revolved shapes. A MakeRevolution object provides a framework for: - defining the construction of a revolved shape, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<BRepPrimAPI_MakeRevol ,std::unique_ptr<BRepPrimAPI_MakeRevol>  , BRepPrimAPI_MakeSweep >(m,"BRepPrimAPI_MakeRevol",R"#(Class to make revolved sweep topologies.)#");
    py::class_<BRepPrimAPI_MakeBox ,std::unique_ptr<BRepPrimAPI_MakeBox>  , BRepBuilderAPI_MakeShape >(m,"BRepPrimAPI_MakeBox",R"#(Describes functions to build parallelepiped boxes. A MakeBox object provides a framework for: - defining the construction of a box, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<BRepPrimAPI_MakeWedge ,std::unique_ptr<BRepPrimAPI_MakeWedge>  , BRepBuilderAPI_MakeShape >(m,"BRepPrimAPI_MakeWedge",R"#(Describes functions to build wedges, i.e. boxes with inclined faces. A MakeWedge object provides a framework for: - defining the construction of a wedge, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<BRepPrimAPI_MakeSphere ,std::unique_ptr<BRepPrimAPI_MakeSphere>  , BRepPrimAPI_MakeOneAxis >(m,"BRepPrimAPI_MakeSphere",R"#(Describes functions to build spheres or portions of spheres. A MakeSphere object provides a framework for: - defining the construction of a sphere, - implementing the construction algorithm, and - consulting the result.)#");

// pre-register typdefs
// ./opencascade/BRepPrimAPI_MakePrism.hxx
// ./opencascade/BRepPrimAPI_MakeSweep.hxx
// ./opencascade/BRepPrimAPI_MakeBox.hxx
// ./opencascade/BRepPrimAPI_MakeCylinder.hxx
// ./opencascade/BRepPrimAPI_MakeSphere.hxx
// ./opencascade/BRepPrimAPI_MakeHalfSpace.hxx
// ./opencascade/BRepPrimAPI_MakeRevolution.hxx
// ./opencascade/BRepPrimAPI_MakeOneAxis.hxx
// ./opencascade/BRepPrimAPI_MakeWedge.hxx
// ./opencascade/BRepPrimAPI_MakeTorus.hxx
// ./opencascade/BRepPrimAPI_MakeRevol.hxx
// ./opencascade/BRepPrimAPI_MakeCone.hxx

};

// user-defined post-inclusion per module

// user-defined post