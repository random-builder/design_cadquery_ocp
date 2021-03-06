
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoMoreObject.hxx>

// module includes
#include <BRepSweep_Builder.hxx>
#include <BRepSweep_Iterator.hxx>
#include <BRepSweep_NumLinearRegularSweep.hxx>
#include <BRepSweep_Prism.hxx>
#include <BRepSweep_Revol.hxx>
#include <BRepSweep_Rotation.hxx>
#include <BRepSweep_Tool.hxx>
#include <BRepSweep_Translation.hxx>
#include <BRepSweep_Trsf.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepSweep(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepSweep"));


//Python trampoline classes
    class Py_BRepSweep_NumLinearRegularSweep : public BRepSweep_NumLinearRegularSweep{
    public:
        using BRepSweep_NumLinearRegularSweep::BRepSweep_NumLinearRegularSweep;


        // public pure virtual
        TopoDS_Shape MakeEmptyVertex(const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirV) override { PYBIND11_OVERLOAD_PURE(TopoDS_Shape,BRepSweep_NumLinearRegularSweep,MakeEmptyVertex,aGenV,aDirV) };
        TopoDS_Shape MakeEmptyDirectingEdge(const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirE) override { PYBIND11_OVERLOAD_PURE(TopoDS_Shape,BRepSweep_NumLinearRegularSweep,MakeEmptyDirectingEdge,aGenV,aDirE) };
        TopoDS_Shape MakeEmptyGeneratingEdge(const TopoDS_Shape & aGenE,const Sweep_NumShape & aDirV) override { PYBIND11_OVERLOAD_PURE(TopoDS_Shape,BRepSweep_NumLinearRegularSweep,MakeEmptyGeneratingEdge,aGenE,aDirV) };
        void SetParameters(const TopoDS_Shape & aNewFace,TopoDS_Shape & aNewVertex,const TopoDS_Shape & aGenF,const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirV) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_NumLinearRegularSweep,SetParameters,aNewFace,aNewVertex,aGenF,aGenV,aDirV) };
        void SetDirectingParameter(const TopoDS_Shape & aNewEdge,TopoDS_Shape & aNewVertex,const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirE,const Sweep_NumShape & aDirV) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_NumLinearRegularSweep,SetDirectingParameter,aNewEdge,aNewVertex,aGenV,aDirE,aDirV) };
        void SetGeneratingParameter(const TopoDS_Shape & aNewEdge,TopoDS_Shape & aNewVertex,const TopoDS_Shape & aGenE,const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirV) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_NumLinearRegularSweep,SetGeneratingParameter,aNewEdge,aNewVertex,aGenE,aGenV,aDirV) };
        TopoDS_Shape MakeEmptyFace(const TopoDS_Shape & aGenS,const Sweep_NumShape & aDirS) override { PYBIND11_OVERLOAD_PURE(TopoDS_Shape,BRepSweep_NumLinearRegularSweep,MakeEmptyFace,aGenS,aDirS) };
        void SetPCurve(const TopoDS_Shape & aNewFace,TopoDS_Shape & aNewEdge,const TopoDS_Shape & aGenF,const TopoDS_Shape & aGenE,const Sweep_NumShape & aDirV,const TopAbs_Orientation orien) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_NumLinearRegularSweep,SetPCurve,aNewFace,aNewEdge,aGenF,aGenE,aDirV,orien) };
        void SetGeneratingPCurve(const TopoDS_Shape & aNewFace,TopoDS_Shape & aNewEdge,const TopoDS_Shape & aGenE,const Sweep_NumShape & aDirE,const Sweep_NumShape & aDirV,const TopAbs_Orientation orien) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_NumLinearRegularSweep,SetGeneratingPCurve,aNewFace,aNewEdge,aGenE,aDirE,aDirV,orien) };
        void SetDirectingPCurve(const TopoDS_Shape & aNewFace,TopoDS_Shape & aNewEdge,const TopoDS_Shape & aGenE,const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirE,const TopAbs_Orientation orien) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_NumLinearRegularSweep,SetDirectingPCurve,aNewFace,aNewEdge,aGenE,aGenV,aDirE,orien) };
        TopAbs_Orientation DirectSolid(const TopoDS_Shape & aGenS,const Sweep_NumShape & aDirS) override { PYBIND11_OVERLOAD_PURE(TopAbs_Orientation,BRepSweep_NumLinearRegularSweep,DirectSolid,aGenS,aDirS) };
        Standard_Boolean GGDShapeIsToAdd(const TopoDS_Shape & aNewShape,const TopoDS_Shape & aNewSubShape,const TopoDS_Shape & aGenS,const TopoDS_Shape & aSubGenS,const Sweep_NumShape & aDirS) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepSweep_NumLinearRegularSweep,GGDShapeIsToAdd,aNewShape,aNewSubShape,aGenS,aSubGenS,aDirS) };
        Standard_Boolean GDDShapeIsToAdd(const TopoDS_Shape & aNewShape,const TopoDS_Shape & aNewSubShape,const TopoDS_Shape & aGenS,const Sweep_NumShape & aDirS,const Sweep_NumShape & aSubDirS) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepSweep_NumLinearRegularSweep,GDDShapeIsToAdd,aNewShape,aNewSubShape,aGenS,aDirS,aSubDirS) };
        Standard_Boolean SeparatedWires(const TopoDS_Shape & aNewShape,const TopoDS_Shape & aNewSubShape,const TopoDS_Shape & aGenS,const TopoDS_Shape & aSubGenS,const Sweep_NumShape & aDirS) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepSweep_NumLinearRegularSweep,SeparatedWires,aNewShape,aNewSubShape,aGenS,aSubGenS,aDirS) };
        void SetContinuity(const TopoDS_Shape & aGenS,const Sweep_NumShape & aDirS) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_NumLinearRegularSweep,SetContinuity,aGenS,aDirS) };
        Standard_Boolean HasShape(const TopoDS_Shape & aGenS,const Sweep_NumShape & aDirS) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepSweep_NumLinearRegularSweep,HasShape,aGenS,aDirS) };
        Standard_Boolean IsInvariant(const TopoDS_Shape & aGenS) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepSweep_NumLinearRegularSweep,IsInvariant,aGenS) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_BRepSweep_Trsf : public BRepSweep_Trsf{
    public:
        using BRepSweep_Trsf::BRepSweep_Trsf;


        // public pure virtual
        TopoDS_Shape MakeEmptyVertex(const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirV) override { PYBIND11_OVERLOAD_PURE(TopoDS_Shape,BRepSweep_Trsf,MakeEmptyVertex,aGenV,aDirV) };
        TopoDS_Shape MakeEmptyDirectingEdge(const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirE) override { PYBIND11_OVERLOAD_PURE(TopoDS_Shape,BRepSweep_Trsf,MakeEmptyDirectingEdge,aGenV,aDirE) };
        TopoDS_Shape MakeEmptyGeneratingEdge(const TopoDS_Shape & aGenE,const Sweep_NumShape & aDirV) override { PYBIND11_OVERLOAD_PURE(TopoDS_Shape,BRepSweep_Trsf,MakeEmptyGeneratingEdge,aGenE,aDirV) };
        void SetParameters(const TopoDS_Shape & aNewFace,TopoDS_Shape & aNewVertex,const TopoDS_Shape & aGenF,const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirV) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_Trsf,SetParameters,aNewFace,aNewVertex,aGenF,aGenV,aDirV) };
        void SetDirectingParameter(const TopoDS_Shape & aNewEdge,TopoDS_Shape & aNewVertex,const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirE,const Sweep_NumShape & aDirV) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_Trsf,SetDirectingParameter,aNewEdge,aNewVertex,aGenV,aDirE,aDirV) };
        void SetGeneratingParameter(const TopoDS_Shape & aNewEdge,TopoDS_Shape & aNewVertex,const TopoDS_Shape & aGenE,const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirV) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_Trsf,SetGeneratingParameter,aNewEdge,aNewVertex,aGenE,aGenV,aDirV) };
        TopoDS_Shape MakeEmptyFace(const TopoDS_Shape & aGenS,const Sweep_NumShape & aDirS) override { PYBIND11_OVERLOAD_PURE(TopoDS_Shape,BRepSweep_Trsf,MakeEmptyFace,aGenS,aDirS) };
        void SetPCurve(const TopoDS_Shape & aNewFace,TopoDS_Shape & aNewEdge,const TopoDS_Shape & aGenF,const TopoDS_Shape & aGenE,const Sweep_NumShape & aDirV,const TopAbs_Orientation orien) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_Trsf,SetPCurve,aNewFace,aNewEdge,aGenF,aGenE,aDirV,orien) };
        void SetGeneratingPCurve(const TopoDS_Shape & aNewFace,TopoDS_Shape & aNewEdge,const TopoDS_Shape & aGenE,const Sweep_NumShape & aDirE,const Sweep_NumShape & aDirV,const TopAbs_Orientation orien) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_Trsf,SetGeneratingPCurve,aNewFace,aNewEdge,aGenE,aDirE,aDirV,orien) };
        void SetDirectingPCurve(const TopoDS_Shape & aNewFace,TopoDS_Shape & aNewEdge,const TopoDS_Shape & aGenE,const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirE,const TopAbs_Orientation orien) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_Trsf,SetDirectingPCurve,aNewFace,aNewEdge,aGenE,aGenV,aDirE,orien) };
        Standard_Boolean GGDShapeIsToAdd(const TopoDS_Shape & aNewShape,const TopoDS_Shape & aNewSubShape,const TopoDS_Shape & aGenS,const TopoDS_Shape & aSubGenS,const Sweep_NumShape & aDirS) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepSweep_Trsf,GGDShapeIsToAdd,aNewShape,aNewSubShape,aGenS,aSubGenS,aDirS) };
        Standard_Boolean GDDShapeIsToAdd(const TopoDS_Shape & aNewShape,const TopoDS_Shape & aNewSubShape,const TopoDS_Shape & aGenS,const Sweep_NumShape & aDirS,const Sweep_NumShape & aSubDirS) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepSweep_Trsf,GDDShapeIsToAdd,aNewShape,aNewSubShape,aGenS,aDirS,aSubDirS) };
        Standard_Boolean SeparatedWires(const TopoDS_Shape & aNewShape,const TopoDS_Shape & aNewSubShape,const TopoDS_Shape & aGenS,const TopoDS_Shape & aSubGenS,const Sweep_NumShape & aDirS) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepSweep_Trsf,SeparatedWires,aNewShape,aNewSubShape,aGenS,aSubGenS,aDirS) };
        Standard_Boolean HasShape(const TopoDS_Shape & aGenS,const Sweep_NumShape & aDirS) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepSweep_Trsf,HasShape,aGenS,aDirS) };
        Standard_Boolean IsInvariant(const TopoDS_Shape & aGenS) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepSweep_Trsf,IsInvariant,aGenS) };

        TopAbs_Orientation DirectSolid(const TopoDS_Shape & aGenS,const Sweep_NumShape & aDirS) override { PYBIND11_OVERLOAD_PURE(TopAbs_Orientation,BRepSweep_NumLinearRegularSweep,DirectSolid,aGenS,aDirS) };

        // protected pure virtual


        // private pure virtual

    };

// classes


    static_cast<py::class_<BRepSweep_Builder , shared_ptr<BRepSweep_Builder> >>(m.attr("BRepSweep_Builder"))
    // constructors
    // custom constructors
    // methods
        .def("Builder",
             (const BRep_Builder & (BRepSweep_Builder::*)() const) static_cast<const BRep_Builder & (BRepSweep_Builder::*)() const>(&BRepSweep_Builder::Builder),
             R"#(None)#" )
        .def("Builder",
             (const BRep_Builder & (BRepSweep_Builder::*)() const) static_cast<const BRep_Builder & (BRepSweep_Builder::*)() const>(&BRepSweep_Builder::Builder),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepSweep_Iterator , shared_ptr<BRepSweep_Iterator> >>(m.attr("BRepSweep_Iterator"))
    // constructors
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (BRepSweep_Iterator::*)() const) static_cast<Standard_Boolean (BRepSweep_Iterator::*)() const>(&BRepSweep_Iterator::More),
             R"#(Returns True if there is a current sub-shape.)#" )
        .def("Value",
             (const TopoDS_Shape & (BRepSweep_Iterator::*)() const) static_cast<const TopoDS_Shape & (BRepSweep_Iterator::*)() const>(&BRepSweep_Iterator::Value),
             R"#(Returns the current sub-shape.)#" )
        .def("Orientation",
             (TopAbs_Orientation (BRepSweep_Iterator::*)() const) static_cast<TopAbs_Orientation (BRepSweep_Iterator::*)() const>(&BRepSweep_Iterator::Orientation),
             R"#(Returns the orientation of the current sub-shape.)#" )
        .def("More",
             (Standard_Boolean (BRepSweep_Iterator::*)() const) static_cast<Standard_Boolean (BRepSweep_Iterator::*)() const>(&BRepSweep_Iterator::More),
             R"#(Returns True if there is a current sub-shape.)#" )
        .def("Value",
             (const TopoDS_Shape & (BRepSweep_Iterator::*)() const) static_cast<const TopoDS_Shape & (BRepSweep_Iterator::*)() const>(&BRepSweep_Iterator::Value),
             R"#(Returns the current sub-shape.)#" )
        .def("Orientation",
             (TopAbs_Orientation (BRepSweep_Iterator::*)() const) static_cast<TopAbs_Orientation (BRepSweep_Iterator::*)() const>(&BRepSweep_Iterator::Orientation),
             R"#(Returns the orientation of the current sub-shape.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepSweep_NumLinearRegularSweep , shared_ptr<BRepSweep_NumLinearRegularSweep>,Py_BRepSweep_NumLinearRegularSweep >>(m.attr("BRepSweep_NumLinearRegularSweep"))
    // constructors
    // custom constructors
    // methods
        .def("MakeEmptyVertex",
             (TopoDS_Shape (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<TopoDS_Shape (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_NumLinearRegularSweep::MakeEmptyVertex),
             R"#(Builds the vertex addressed by [aGenV,aDirV], with its geometric part, but without subcomponents.)#"  , py::arg("aGenV"),  py::arg("aDirV"))
        .def("MakeEmptyDirectingEdge",
             (TopoDS_Shape (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<TopoDS_Shape (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_NumLinearRegularSweep::MakeEmptyDirectingEdge),
             R"#(Builds the edge addressed by [aGenV,aDirE], with its geometric part, but without subcomponents.)#"  , py::arg("aGenV"),  py::arg("aDirE"))
        .def("MakeEmptyGeneratingEdge",
             (TopoDS_Shape (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<TopoDS_Shape (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_NumLinearRegularSweep::MakeEmptyGeneratingEdge),
             R"#(Builds the edge addressed by [aGenE,aDirV], with its geometric part, but without subcomponents.)#"  , py::arg("aGenE"),  py::arg("aDirV"))
        .def("SetParameters",
             (void (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<void (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_NumLinearRegularSweep::SetParameters),
             R"#(Sets the parameters of the new vertex on the new face. The new face and new vertex where generated from aGenF, aGenV and aDirV .)#"  , py::arg("aNewFace"),  py::arg("aNewVertex"),  py::arg("aGenF"),  py::arg("aGenV"),  py::arg("aDirV"))
        .def("SetDirectingParameter",
             (void (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & ) ) static_cast<void (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & ) >(&BRepSweep_NumLinearRegularSweep::SetDirectingParameter),
             R"#(Sets the parameter of the new vertex on the new edge. The new edge and new vertex where generated from aGenV aDirE, and aDirV.)#"  , py::arg("aNewEdge"),  py::arg("aNewVertex"),  py::arg("aGenV"),  py::arg("aDirE"),  py::arg("aDirV"))
        .def("SetGeneratingParameter",
             (void (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<void (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_NumLinearRegularSweep::SetGeneratingParameter),
             R"#(Sets the parameter of the new vertex on the new edge. The new edge and new vertex where generated from aGenE, aGenV and aDirV .)#"  , py::arg("aNewEdge"),  py::arg("aNewVertex"),  py::arg("aGenE"),  py::arg("aGenV"),  py::arg("aDirV"))
        .def("MakeEmptyFace",
             (TopoDS_Shape (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<TopoDS_Shape (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_NumLinearRegularSweep::MakeEmptyFace),
             R"#(Builds the face addressed by [aGenS,aDirS], with its geometric part, but without subcomponents. The couple aGenS, aDirS can be a "generating face and a directing vertex" or "a generating edge and a directing edge".)#"  , py::arg("aGenS"),  py::arg("aDirS"))
        .def("SetPCurve",
             (void (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const TopAbs_Orientation ) ) static_cast<void (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const TopAbs_Orientation ) >(&BRepSweep_NumLinearRegularSweep::SetPCurve),
             R"#(Sets the PCurve for a new edge on a new face. The new edge and the new face were generated using aGenF, aGenE and aDirV.)#"  , py::arg("aNewFace"),  py::arg("aNewEdge"),  py::arg("aGenF"),  py::arg("aGenE"),  py::arg("aDirV"),  py::arg("orien"))
        .def("SetGeneratingPCurve",
             (void (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & , const TopAbs_Orientation ) ) static_cast<void (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & , const TopAbs_Orientation ) >(&BRepSweep_NumLinearRegularSweep::SetGeneratingPCurve),
             R"#(Sets the PCurve for a new edge on a new face. The new edge and the new face were generated using aGenE, aDirE and aDirV.)#"  , py::arg("aNewFace"),  py::arg("aNewEdge"),  py::arg("aGenE"),  py::arg("aDirE"),  py::arg("aDirV"),  py::arg("orien"))
        .def("SetDirectingPCurve",
             (void (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const TopAbs_Orientation ) ) static_cast<void (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const TopAbs_Orientation ) >(&BRepSweep_NumLinearRegularSweep::SetDirectingPCurve),
             R"#(Sets the PCurve for a new edge on a new face. The new edge and the new face were generated using aGenE, aDirE and aGenV.)#"  , py::arg("aNewFace"),  py::arg("aNewEdge"),  py::arg("aGenE"),  py::arg("aGenV"),  py::arg("aDirE"),  py::arg("orien"))
        .def("DirectSolid",
             (TopAbs_Orientation (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<TopAbs_Orientation (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_NumLinearRegularSweep::DirectSolid),
             R"#(Returns the Orientation of the shell in the solid generated by the face aGenS with the edge aDirS. It is REVERSED if the surface is swept in the direction of the normal.)#"  , py::arg("aGenS"),  py::arg("aDirS"))
        .def("GGDShapeIsToAdd",
             (Standard_Boolean (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) const) static_cast<Standard_Boolean (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) const>(&BRepSweep_NumLinearRegularSweep::GGDShapeIsToAdd),
             R"#(Returns true if aNewSubShape (addressed by aSubGenS and aDirS) must be added in aNewShape (addressed by aGenS and aDirS).)#"  , py::arg("aNewShape"),  py::arg("aNewSubShape"),  py::arg("aGenS"),  py::arg("aSubGenS"),  py::arg("aDirS"))
        .def("GDDShapeIsToAdd",
             (Standard_Boolean (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & ) const) static_cast<Standard_Boolean (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & ) const>(&BRepSweep_NumLinearRegularSweep::GDDShapeIsToAdd),
             R"#(Returns true if aNewSubShape (addressed by aGenS and aSubDirS) must be added in aNewShape (addressed by aGenS and aDirS).)#"  , py::arg("aNewShape"),  py::arg("aNewSubShape"),  py::arg("aGenS"),  py::arg("aDirS"),  py::arg("aSubDirS"))
        .def("SeparatedWires",
             (Standard_Boolean (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) const) static_cast<Standard_Boolean (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) const>(&BRepSweep_NumLinearRegularSweep::SeparatedWires),
             R"#(In some particular cases the topology of a generated face must be composed of independant closed wires, in this case this function returns true.)#"  , py::arg("aNewShape"),  py::arg("aNewSubShape"),  py::arg("aGenS"),  py::arg("aSubGenS"),  py::arg("aDirS"))
        .def("SplitShell",
             (TopoDS_Shape (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & ) const) static_cast<TopoDS_Shape (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & ) const>(&BRepSweep_NumLinearRegularSweep::SplitShell),
             R"#(In some particular cases the topology of a generated Shell must be composed of independant closed Shells, in this case this function returns a Compound of independant Shells.)#"  , py::arg("aNewShape"))
        .def("SetContinuity",
             (void (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<void (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_NumLinearRegularSweep::SetContinuity),
             R"#(Called to propagate the continuity of every vertex between two edges of the generating wire aGenS on the generated edge and faces.)#"  , py::arg("aGenS"),  py::arg("aDirS"))
        .def("HasShape",
             (Standard_Boolean (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , const Sweep_NumShape & ) const) static_cast<Standard_Boolean (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & , const Sweep_NumShape & ) const>(&BRepSweep_NumLinearRegularSweep::HasShape),
             R"#(Returns true if aDirS and aGenS addresses a resulting Shape. In some specific cases the shape can be geometrically inexsistant, then this function returns false.)#"  , py::arg("aGenS"),  py::arg("aDirS"))
        .def("IsInvariant",
             (Standard_Boolean (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (BRepSweep_NumLinearRegularSweep::*)( const TopoDS_Shape & ) const>(&BRepSweep_NumLinearRegularSweep::IsInvariant),
             R"#(Returns true if aGenS cannot be transformed.)#"  , py::arg("aGenS"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepSweep_Prism , shared_ptr<BRepSweep_Prism> >>(m.attr("BRepSweep_Prism"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepSweep_Revol , shared_ptr<BRepSweep_Revol> >>(m.attr("BRepSweep_Revol"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepSweep_Tool , shared_ptr<BRepSweep_Tool> >>(m.attr("BRepSweep_Tool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepSweep_Trsf , shared_ptr<BRepSweep_Trsf>,Py_BRepSweep_Trsf , BRepSweep_NumLinearRegularSweep>>(m.attr("BRepSweep_Trsf"))
    // constructors
    // custom constructors
    // methods
        .def("MakeEmptyVertex",
             (TopoDS_Shape (BRepSweep_Trsf::*)( const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<TopoDS_Shape (BRepSweep_Trsf::*)( const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_Trsf::MakeEmptyVertex),
             R"#(Builds the vertex addressed by [aGenV,aDirV], with its geometric part, but without subcomponents.)#"  , py::arg("aGenV"),  py::arg("aDirV"))
        .def("MakeEmptyDirectingEdge",
             (TopoDS_Shape (BRepSweep_Trsf::*)( const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<TopoDS_Shape (BRepSweep_Trsf::*)( const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_Trsf::MakeEmptyDirectingEdge),
             R"#(Builds the edge addressed by [aGenV,aDirE], with its geometric part, but without subcomponents.)#"  , py::arg("aGenV"),  py::arg("aDirE"))
        .def("MakeEmptyGeneratingEdge",
             (TopoDS_Shape (BRepSweep_Trsf::*)( const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<TopoDS_Shape (BRepSweep_Trsf::*)( const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_Trsf::MakeEmptyGeneratingEdge),
             R"#(Builds the edge addressed by [aGenE,aDirV], with its geometric part, but without subcomponents.)#"  , py::arg("aGenE"),  py::arg("aDirV"))
        .def("SetParameters",
             (void (BRepSweep_Trsf::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<void (BRepSweep_Trsf::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_Trsf::SetParameters),
             R"#(Sets the parameters of the new vertex on the new face. The new face and new vertex where generated from aGenF, aGenV and aDirV .)#"  , py::arg("aNewFace"),  py::arg("aNewVertex"),  py::arg("aGenF"),  py::arg("aGenV"),  py::arg("aDirV"))
        .def("SetDirectingParameter",
             (void (BRepSweep_Trsf::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & ) ) static_cast<void (BRepSweep_Trsf::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & ) >(&BRepSweep_Trsf::SetDirectingParameter),
             R"#(Sets the parameter of the new vertex on the new edge. The new edge and new vertex where generated from aGenV aDirE, and aDirV.)#"  , py::arg("aNewEdge"),  py::arg("aNewVertex"),  py::arg("aGenV"),  py::arg("aDirE"),  py::arg("aDirV"))
        .def("SetGeneratingParameter",
             (void (BRepSweep_Trsf::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<void (BRepSweep_Trsf::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_Trsf::SetGeneratingParameter),
             R"#(Sets the parameter of the new vertex on the new edge. The new edge and new vertex where generated from aGenE, aGenV and aDirV .)#"  , py::arg("aNewEdge"),  py::arg("aNewVertex"),  py::arg("aGenE"),  py::arg("aGenV"),  py::arg("aDirV"))
        .def("MakeEmptyFace",
             (TopoDS_Shape (BRepSweep_Trsf::*)( const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<TopoDS_Shape (BRepSweep_Trsf::*)( const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_Trsf::MakeEmptyFace),
             R"#(Builds the face addressed by [aGenS,aDirS], with its geometric part, but without subcomponents. The couple aGenS, aDirS can be a "generating face and a directing vertex" or "a generating edge and a directing edge".)#"  , py::arg("aGenS"),  py::arg("aDirS"))
        .def("SetPCurve",
             (void (BRepSweep_Trsf::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const TopAbs_Orientation ) ) static_cast<void (BRepSweep_Trsf::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const TopAbs_Orientation ) >(&BRepSweep_Trsf::SetPCurve),
             R"#(Sets the PCurve for a new edge on a new face. The new edge and the new face were generated using aGenF, aGenE and aDirV.)#"  , py::arg("aNewFace"),  py::arg("aNewEdge"),  py::arg("aGenF"),  py::arg("aGenE"),  py::arg("aDirV"),  py::arg("orien"))
        .def("SetGeneratingPCurve",
             (void (BRepSweep_Trsf::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & , const TopAbs_Orientation ) ) static_cast<void (BRepSweep_Trsf::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & , const TopAbs_Orientation ) >(&BRepSweep_Trsf::SetGeneratingPCurve),
             R"#(Sets the PCurve for a new edge on a new face. The new edge and the new face were generated using aGenE, aDirE and aDirV.)#"  , py::arg("aNewFace"),  py::arg("aNewEdge"),  py::arg("aGenE"),  py::arg("aDirE"),  py::arg("aDirV"),  py::arg("orien"))
        .def("SetDirectingPCurve",
             (void (BRepSweep_Trsf::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const TopAbs_Orientation ) ) static_cast<void (BRepSweep_Trsf::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const TopAbs_Orientation ) >(&BRepSweep_Trsf::SetDirectingPCurve),
             R"#(Sets the PCurve for a new edge on a new face. The new edge and the new face were generated using aGenE, aDirE and aGenV.)#"  , py::arg("aNewFace"),  py::arg("aNewEdge"),  py::arg("aGenE"),  py::arg("aGenV"),  py::arg("aDirE"),  py::arg("orien"))
        .def("GGDShapeIsToAdd",
             (Standard_Boolean (BRepSweep_Trsf::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) const) static_cast<Standard_Boolean (BRepSweep_Trsf::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) const>(&BRepSweep_Trsf::GGDShapeIsToAdd),
             R"#(Returns true if aNewSubShape (addressed by aSubGenS and aDirS) must be added in aNewShape (addressed by aGenS and aDirS).)#"  , py::arg("aNewShape"),  py::arg("aNewSubShape"),  py::arg("aGenS"),  py::arg("aSubGenS"),  py::arg("aDirS"))
        .def("GDDShapeIsToAdd",
             (Standard_Boolean (BRepSweep_Trsf::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & ) const) static_cast<Standard_Boolean (BRepSweep_Trsf::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & ) const>(&BRepSweep_Trsf::GDDShapeIsToAdd),
             R"#(Returns true if aNewSubShape (addressed by aGenS and aSubDirS) must be added in aNewShape (addressed by aGenS and aDirS).)#"  , py::arg("aNewShape"),  py::arg("aNewSubShape"),  py::arg("aGenS"),  py::arg("aDirS"),  py::arg("aSubDirS"))
        .def("SeparatedWires",
             (Standard_Boolean (BRepSweep_Trsf::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) const) static_cast<Standard_Boolean (BRepSweep_Trsf::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) const>(&BRepSweep_Trsf::SeparatedWires),
             R"#(In some particular cases the topology of a generated face must be composed of independant closed wires, in this case this function returns true.)#"  , py::arg("aNewShape"),  py::arg("aNewSubShape"),  py::arg("aGenS"),  py::arg("aSubGenS"),  py::arg("aDirS"))
        .def("HasShape",
             (Standard_Boolean (BRepSweep_Trsf::*)( const TopoDS_Shape & , const Sweep_NumShape & ) const) static_cast<Standard_Boolean (BRepSweep_Trsf::*)( const TopoDS_Shape & , const Sweep_NumShape & ) const>(&BRepSweep_Trsf::HasShape),
             R"#(Returns true if aDirS and aGenS addresses a resulting Shape. In some specific cases the shape can be geometrically inexsistant, then this function returns false.)#"  , py::arg("aGenS"),  py::arg("aDirS"))
        .def("IsInvariant",
             (Standard_Boolean (BRepSweep_Trsf::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (BRepSweep_Trsf::*)( const TopoDS_Shape & ) const>(&BRepSweep_Trsf::IsInvariant),
             R"#(Returns true if the geometry of aGenS is not modified by the trsf of the BRepSweep Trsf.)#"  , py::arg("aGenS"))
        .def("SetContinuity",
             (void (BRepSweep_Trsf::*)( const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<void (BRepSweep_Trsf::*)( const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_Trsf::SetContinuity),
             R"#(Called to propagate the continuity of every vertex between two edges of the generating wire aGenS on the generated edge and faces.)#"  , py::arg("aGenS"),  py::arg("aDirS"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepSweep_Rotation , shared_ptr<BRepSweep_Rotation> , BRepSweep_Trsf>>(m.attr("BRepSweep_Rotation"))
    // constructors
    // custom constructors
    // methods
        .def("MakeEmptyVertex",
             (TopoDS_Shape (BRepSweep_Rotation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<TopoDS_Shape (BRepSweep_Rotation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_Rotation::MakeEmptyVertex),
             R"#(Builds the vertex addressed by [aGenV,aDirV], with its geometric part, but without subcomponents.)#"  , py::arg("aGenV"),  py::arg("aDirV"))
        .def("MakeEmptyDirectingEdge",
             (TopoDS_Shape (BRepSweep_Rotation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<TopoDS_Shape (BRepSweep_Rotation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_Rotation::MakeEmptyDirectingEdge),
             R"#(Builds the edge addressed by [aGenV,aDirE], with its geometric part, but without subcomponents.)#"  , py::arg("aGenV"),  py::arg("aDirE"))
        .def("MakeEmptyGeneratingEdge",
             (TopoDS_Shape (BRepSweep_Rotation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<TopoDS_Shape (BRepSweep_Rotation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_Rotation::MakeEmptyGeneratingEdge),
             R"#(Builds the edge addressed by [aGenE,aDirV], with its geometric part, but without subcomponents.)#"  , py::arg("aGenE"),  py::arg("aDirV"))
        .def("SetParameters",
             (void (BRepSweep_Rotation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<void (BRepSweep_Rotation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_Rotation::SetParameters),
             R"#(Sets the parameters of the new vertex on the new face. The new face and new vertex where generated from aGenF, aGenV and aDirV .)#"  , py::arg("aNewFace"),  py::arg("aNewVertex"),  py::arg("aGenF"),  py::arg("aGenV"),  py::arg("aDirV"))
        .def("SetDirectingParameter",
             (void (BRepSweep_Rotation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & ) ) static_cast<void (BRepSweep_Rotation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & ) >(&BRepSweep_Rotation::SetDirectingParameter),
             R"#(Sets the parameter of the new vertex on the new edge. The new edge and new vertex where generated from aGenV aDirE, and aDirV.)#"  , py::arg("aNewEdge"),  py::arg("aNewVertex"),  py::arg("aGenV"),  py::arg("aDirE"),  py::arg("aDirV"))
        .def("SetGeneratingParameter",
             (void (BRepSweep_Rotation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<void (BRepSweep_Rotation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_Rotation::SetGeneratingParameter),
             R"#(Sets the parameter of the new vertex on the new edge. The new edge and new vertex where generated from aGenE, aGenV and aDirV .)#"  , py::arg("aNewEdge"),  py::arg("aNewVertex"),  py::arg("aGenE"),  py::arg("aGenV"),  py::arg("aDirV"))
        .def("MakeEmptyFace",
             (TopoDS_Shape (BRepSweep_Rotation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<TopoDS_Shape (BRepSweep_Rotation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_Rotation::MakeEmptyFace),
             R"#(Builds the face addressed by [aGenS,aDirS], with its geometric part, but without subcomponents. The couple aGenS, aDirS can be a "generating face and a directing vertex" or "a generating edge and a directing edge".)#"  , py::arg("aGenS"),  py::arg("aDirS"))
        .def("SetPCurve",
             (void (BRepSweep_Rotation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const TopAbs_Orientation ) ) static_cast<void (BRepSweep_Rotation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const TopAbs_Orientation ) >(&BRepSweep_Rotation::SetPCurve),
             R"#(Sets the PCurve for a new edge on a new face. The new edge and the new face were generated using aGenF, aGenE and aDirV.)#"  , py::arg("aNewFace"),  py::arg("aNewEdge"),  py::arg("aGenF"),  py::arg("aGenE"),  py::arg("aDirV"),  py::arg("orien"))
        .def("SetGeneratingPCurve",
             (void (BRepSweep_Rotation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & , const TopAbs_Orientation ) ) static_cast<void (BRepSweep_Rotation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & , const TopAbs_Orientation ) >(&BRepSweep_Rotation::SetGeneratingPCurve),
             R"#(Sets the PCurve for a new edge on a new face. The new edge and the new face were generated using aGenE, aDirE and aDirV.)#"  , py::arg("aNewFace"),  py::arg("aNewEdge"),  py::arg("aGenE"),  py::arg("aDirE"),  py::arg("aDirV"),  py::arg("orien"))
        .def("SetDirectingPCurve",
             (void (BRepSweep_Rotation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const TopAbs_Orientation ) ) static_cast<void (BRepSweep_Rotation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const TopAbs_Orientation ) >(&BRepSweep_Rotation::SetDirectingPCurve),
             R"#(Sets the PCurve for a new edge on a new face. The new edge and the new face were generated using aGenE, aDirE and aGenV.)#"  , py::arg("aNewFace"),  py::arg("aNewEdge"),  py::arg("aGenE"),  py::arg("aGenV"),  py::arg("aDirE"),  py::arg("orien"))
        .def("DirectSolid",
             (TopAbs_Orientation (BRepSweep_Rotation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<TopAbs_Orientation (BRepSweep_Rotation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_Rotation::DirectSolid),
             R"#(Returns the Orientation of the shell in the solid generated by the face aGenS with the edge aDirS. It is REVERSED if the surface is swept in the direction of the normal.)#"  , py::arg("aGenS"),  py::arg("aDirS"))
        .def("GGDShapeIsToAdd",
             (Standard_Boolean (BRepSweep_Rotation::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) const) static_cast<Standard_Boolean (BRepSweep_Rotation::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) const>(&BRepSweep_Rotation::GGDShapeIsToAdd),
             R"#(Returns true if aNewSubShape (addressed by aSubGenS and aDirS) must be added in aNewShape (addressed by aGenS and aDirS).)#"  , py::arg("aNewShape"),  py::arg("aNewSubShape"),  py::arg("aGenS"),  py::arg("aSubGenS"),  py::arg("aDirS"))
        .def("GDDShapeIsToAdd",
             (Standard_Boolean (BRepSweep_Rotation::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & ) const) static_cast<Standard_Boolean (BRepSweep_Rotation::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & ) const>(&BRepSweep_Rotation::GDDShapeIsToAdd),
             R"#(Returns true if aNewSubShape (addressed by aGenS and aSubDirS) must be added in aNewShape (addressed by aGenS and aDirS).)#"  , py::arg("aNewShape"),  py::arg("aNewSubShape"),  py::arg("aGenS"),  py::arg("aDirS"),  py::arg("aSubDirS"))
        .def("SeparatedWires",
             (Standard_Boolean (BRepSweep_Rotation::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) const) static_cast<Standard_Boolean (BRepSweep_Rotation::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) const>(&BRepSweep_Rotation::SeparatedWires),
             R"#(In some particular cases the topology of a generated face must be composed of independant closed wires, in this case this function returns true. The only case in whitch the function may return true is a planar face in a closed revol.)#"  , py::arg("aNewShape"),  py::arg("aNewSubShape"),  py::arg("aGenS"),  py::arg("aSubGenS"),  py::arg("aDirS"))
        .def("SplitShell",
             (TopoDS_Shape (BRepSweep_Rotation::*)( const TopoDS_Shape & ) const) static_cast<TopoDS_Shape (BRepSweep_Rotation::*)( const TopoDS_Shape & ) const>(&BRepSweep_Rotation::SplitShell),
             R"#(In some particular cases the topology of a generated Shell must be composed of independant closed Shells, in this case this function returns a Compound of independant Shells.)#"  , py::arg("aNewShape"))
        .def("HasShape",
             (Standard_Boolean (BRepSweep_Rotation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) const) static_cast<Standard_Boolean (BRepSweep_Rotation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) const>(&BRepSweep_Rotation::HasShape),
             R"#(Returns true if aDirS and aGenS addresses a resulting Shape. In some specific cases the shape can be geometrically inexsistant, then this function returns false.)#"  , py::arg("aGenS"),  py::arg("aDirS"))
        .def("IsInvariant",
             (Standard_Boolean (BRepSweep_Rotation::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (BRepSweep_Rotation::*)( const TopoDS_Shape & ) const>(&BRepSweep_Rotation::IsInvariant),
             R"#(Returns true when the geometry of aGenS is not modified by the rotation.)#"  , py::arg("aGenS"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepSweep_Translation , shared_ptr<BRepSweep_Translation> , BRepSweep_Trsf>>(m.attr("BRepSweep_Translation"))
    // constructors
    // custom constructors
    // methods
        .def("MakeEmptyVertex",
             (TopoDS_Shape (BRepSweep_Translation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<TopoDS_Shape (BRepSweep_Translation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_Translation::MakeEmptyVertex),
             R"#(Builds the vertex addressed by [aGenV,aDirV], with its geometric part, but without subcomponents.)#"  , py::arg("aGenV"),  py::arg("aDirV"))
        .def("MakeEmptyDirectingEdge",
             (TopoDS_Shape (BRepSweep_Translation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<TopoDS_Shape (BRepSweep_Translation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_Translation::MakeEmptyDirectingEdge),
             R"#(Builds the edge addressed by [aGenV,aDirE], with its geometric part, but without subcomponents.)#"  , py::arg("aGenV"),  py::arg("aDirE"))
        .def("MakeEmptyGeneratingEdge",
             (TopoDS_Shape (BRepSweep_Translation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<TopoDS_Shape (BRepSweep_Translation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_Translation::MakeEmptyGeneratingEdge),
             R"#(Builds the edge addressed by [aGenE,aDirV], with its geometric part, but without subcomponents.)#"  , py::arg("aGenE"),  py::arg("aDirV"))
        .def("SetParameters",
             (void (BRepSweep_Translation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<void (BRepSweep_Translation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_Translation::SetParameters),
             R"#(Sets the parameters of the new vertex on the new face. The new face and new vertex where generated from aGenF, aGenV and aDirV .)#"  , py::arg("aNewFace"),  py::arg("aNewVertex"),  py::arg("aGenF"),  py::arg("aGenV"),  py::arg("aDirV"))
        .def("SetDirectingParameter",
             (void (BRepSweep_Translation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & ) ) static_cast<void (BRepSweep_Translation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & ) >(&BRepSweep_Translation::SetDirectingParameter),
             R"#(Sets the parameter of the new vertex on the new edge. The new edge and new vertex where generated from aGenV aDirE, and aDirV.)#"  , py::arg("aNewEdge"),  py::arg("aNewVertex"),  py::arg("aGenV"),  py::arg("aDirE"),  py::arg("aDirV"))
        .def("SetGeneratingParameter",
             (void (BRepSweep_Translation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<void (BRepSweep_Translation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_Translation::SetGeneratingParameter),
             R"#(Sets the parameter of the new vertex on the new edge. The new edge and new vertex where generated from aGenE, aGenV and aDirV .)#"  , py::arg("aNewEdge"),  py::arg("aNewVertex"),  py::arg("aGenE"),  py::arg("aGenV"),  py::arg("aDirV"))
        .def("MakeEmptyFace",
             (TopoDS_Shape (BRepSweep_Translation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<TopoDS_Shape (BRepSweep_Translation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_Translation::MakeEmptyFace),
             R"#(Builds the face addressed by [aGenS,aDirS], with its geometric part, but without subcomponents. The couple aGenS, aDirS can be a "generating face and a directing vertex" or "a generating edge and a directing edge".)#"  , py::arg("aGenS"),  py::arg("aDirS"))
        .def("SetPCurve",
             (void (BRepSweep_Translation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const TopAbs_Orientation ) ) static_cast<void (BRepSweep_Translation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const TopAbs_Orientation ) >(&BRepSweep_Translation::SetPCurve),
             R"#(Sets the PCurve for a new edge on a new face. The new edge and the new face were generated using aGenF, aGenE and aDirV.)#"  , py::arg("aNewFace"),  py::arg("aNewEdge"),  py::arg("aGenF"),  py::arg("aGenE"),  py::arg("aDirV"),  py::arg("orien"))
        .def("SetGeneratingPCurve",
             (void (BRepSweep_Translation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & , const TopAbs_Orientation ) ) static_cast<void (BRepSweep_Translation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & , const TopAbs_Orientation ) >(&BRepSweep_Translation::SetGeneratingPCurve),
             R"#(Sets the PCurve for a new edge on a new face. The new edge and the new face were generated using aGenE, aDirE and aDirV.)#"  , py::arg("aNewFace"),  py::arg("aNewEdge"),  py::arg("aGenE"),  py::arg("aDirE"),  py::arg("aDirV"),  py::arg("orien"))
        .def("SetDirectingPCurve",
             (void (BRepSweep_Translation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const TopAbs_Orientation ) ) static_cast<void (BRepSweep_Translation::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const TopAbs_Orientation ) >(&BRepSweep_Translation::SetDirectingPCurve),
             R"#(Sets the PCurve for a new edge on a new face. The new edge and the new face were generated using aGenE, aDirE and aGenV.)#"  , py::arg("aNewFace"),  py::arg("aNewEdge"),  py::arg("aGenE"),  py::arg("aGenV"),  py::arg("aDirE"),  py::arg("orien"))
        .def("DirectSolid",
             (TopAbs_Orientation (BRepSweep_Translation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) ) static_cast<TopAbs_Orientation (BRepSweep_Translation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) >(&BRepSweep_Translation::DirectSolid),
             R"#(Returns the Orientation of the shell in the solid generated by the face aGenS with the edge aDirS. It is REVERSED if the surface is swept in the direction of the normal.)#"  , py::arg("aGenS"),  py::arg("aDirS"))
        .def("GGDShapeIsToAdd",
             (Standard_Boolean (BRepSweep_Translation::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) const) static_cast<Standard_Boolean (BRepSweep_Translation::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) const>(&BRepSweep_Translation::GGDShapeIsToAdd),
             R"#(Returns true if aNewSubShape (addressed by aSubGenS and aDirS) must be added in aNewShape (addressed by aGenS and aDirS).)#"  , py::arg("aNewShape"),  py::arg("aNewSubShape"),  py::arg("aGenS"),  py::arg("aSubGenS"),  py::arg("aDirS"))
        .def("GDDShapeIsToAdd",
             (Standard_Boolean (BRepSweep_Translation::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & ) const) static_cast<Standard_Boolean (BRepSweep_Translation::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & , const Sweep_NumShape & ) const>(&BRepSweep_Translation::GDDShapeIsToAdd),
             R"#(Returns true if aNewSubShape (addressed by aGenS and aSubDirS) must be added in aNewShape (addressed by aGenS and aDirS).)#"  , py::arg("aNewShape"),  py::arg("aNewSubShape"),  py::arg("aGenS"),  py::arg("aDirS"),  py::arg("aSubDirS"))
        .def("SeparatedWires",
             (Standard_Boolean (BRepSweep_Translation::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) const) static_cast<Standard_Boolean (BRepSweep_Translation::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Sweep_NumShape & ) const>(&BRepSweep_Translation::SeparatedWires),
             R"#(In some particular cases the topology of a generated face must be composed of independant closed wires, in this case this function returns true. Here it always returns false.)#"  , py::arg("aNewShape"),  py::arg("aNewSubShape"),  py::arg("aGenS"),  py::arg("aSubGenS"),  py::arg("aDirS"))
        .def("HasShape",
             (Standard_Boolean (BRepSweep_Translation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) const) static_cast<Standard_Boolean (BRepSweep_Translation::*)( const TopoDS_Shape & , const Sweep_NumShape & ) const>(&BRepSweep_Translation::HasShape),
             R"#(Returns true if aDirS and aGenS addresses a resulting Shape. In some specific cases the shape can be geometrically inexsistant, then this function returns false.)#"  , py::arg("aGenS"),  py::arg("aDirS"))
        .def("IsInvariant",
             (Standard_Boolean (BRepSweep_Translation::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (BRepSweep_Translation::*)( const TopoDS_Shape & ) const>(&BRepSweep_Translation::IsInvariant),
             R"#(Returns always false because here the transformation is a translation.)#"  , py::arg("aGenS"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepSweep_Revol.hxx
// ./opencascade/BRepSweep_Prism.hxx
// ./opencascade/BRepSweep_Builder.hxx
// ./opencascade/BRepSweep_NumLinearRegularSweep.hxx
// ./opencascade/BRepSweep_Rotation.hxx
// ./opencascade/BRepSweep_Tool.hxx
// ./opencascade/BRepSweep_Trsf.hxx
// ./opencascade/BRepSweep_Iterator.hxx
// ./opencascade/BRepSweep_Translation.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
