
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shape.hxx>
#include <LocOpe_SplitShape.hxx>
#include <LocOpe_WiresOnShape.hxx>
#include <LocOpe_Spliter.hxx>
#include <LocOpe_Generator.hxx>
#include <LocOpe_GeneratedShape.hxx>
#include <LocOpe_GluedShape.hxx>
#include <LocOpe_Prism.hxx>
#include <LocOpe_Revol.hxx>
#include <LocOpe_Pipe.hxx>
#include <LocOpe_DPrism.hxx>
#include <LocOpe_LinearForm.hxx>
#include <LocOpe_RevolutionForm.hxx>
#include <LocOpe_Gluer.hxx>
#include <LocOpe_FindEdges.hxx>
#include <LocOpe_FindEdgesInFace.hxx>
#include <LocOpe_PntFace.hxx>
#include <LocOpe_CurveShapeIntersector.hxx>
#include <LocOpe_CSIntersector.hxx>
#include <LocOpe_BuildShape.hxx>
#include <LocOpe_SplitDrafts.hxx>
#include <LocOpe_BuildWires.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <StdFail_NotDone.hxx>
#include <LocOpe_WiresOnShape.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TopoDS_Edge.hxx>
#include <LocOpe_GeneratedShape.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Face.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Wire.hxx>
#include <gp_Pln.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TopoDS_Edge.hxx>
#include <LocOpe_PntFace.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <Standard_NullObject.hxx>
#include <LocOpe_WiresOnShape.hxx>
#include <gp_Ax1.hxx>
#include <gp_Circ.hxx>

// module includes
#include <LocOpe.hxx>
#include <LocOpe_BuildShape.hxx>
#include <LocOpe_BuildWires.hxx>
#include <LocOpe_CSIntersector.hxx>
#include <LocOpe_CurveShapeIntersector.hxx>
#include <LocOpe_DataMapIteratorOfDataMapOfShapePnt.hxx>
#include <LocOpe_DataMapOfShapePnt.hxx>
#include <LocOpe_DPrism.hxx>
#include <LocOpe_FindEdges.hxx>
#include <LocOpe_FindEdgesInFace.hxx>
#include <LocOpe_GeneratedShape.hxx>
#include <LocOpe_Generator.hxx>
#include <LocOpe_GluedShape.hxx>
#include <LocOpe_Gluer.hxx>
#include <LocOpe_LinearForm.hxx>
#include <LocOpe_Operation.hxx>
#include <LocOpe_Pipe.hxx>
#include <LocOpe_PntFace.hxx>
#include <LocOpe_Prism.hxx>
#include <LocOpe_Revol.hxx>
#include <LocOpe_RevolutionForm.hxx>
#include <LocOpe_SequenceOfCirc.hxx>
#include <LocOpe_SequenceOfLin.hxx>
#include <LocOpe_SequenceOfPntFace.hxx>
#include <LocOpe_SplitDrafts.hxx>
#include <LocOpe_Spliter.hxx>
#include <LocOpe_SplitShape.hxx>
#include <LocOpe_WiresOnShape.hxx>

// template related includes
// ./opencascade/LocOpe_SequenceOfCirc.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/LocOpe_DataMapOfShapePnt.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/LocOpe_DataMapOfShapePnt.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/LocOpe_SequenceOfPntFace.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/LocOpe_SequenceOfLin.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_LocOpe(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("LocOpe"));


//Python trampoline classes
    class Py_LocOpe_GeneratedShape : public LocOpe_GeneratedShape{
    public:
        using LocOpe_GeneratedShape::LocOpe_GeneratedShape;


        // public pure virtual
        const TopTools_ListOfShape & GeneratingEdges() override { PYBIND11_OVERLOAD_PURE(const TopTools_ListOfShape &,LocOpe_GeneratedShape,GeneratingEdges,) };
        TopoDS_Edge Generated(const TopoDS_Vertex & V) override { PYBIND11_OVERLOAD_PURE(TopoDS_Edge,LocOpe_GeneratedShape,Generated,V) };
        TopoDS_Face Generated(const TopoDS_Edge & E) override { PYBIND11_OVERLOAD_PURE(TopoDS_Face,LocOpe_GeneratedShape,Generated,E) };
        const TopTools_ListOfShape & OrientedFaces() override { PYBIND11_OVERLOAD_PURE(const TopTools_ListOfShape &,LocOpe_GeneratedShape,OrientedFaces,) };


        // protected pure virtual


        // private pure virtual

    };

// classes

    // default constructor
    register_default_constructor<LocOpe , shared_ptr<LocOpe>>(m,"LocOpe");

    static_cast<py::class_<LocOpe , shared_ptr<LocOpe> >>(m.attr("LocOpe"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_BuildShape , shared_ptr<LocOpe_BuildShape> >>(m.attr("LocOpe_BuildShape"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_List<TopoDS_Shape> & >()  , py::arg("L") )
    // custom constructors
    // methods
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_BuildShape::*)() const) static_cast<const TopoDS_Shape & (LocOpe_BuildShape::*)() const>(&LocOpe_BuildShape::Shape),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_BuildShape::*)() const) static_cast<const TopoDS_Shape & (LocOpe_BuildShape::*)() const>(&LocOpe_BuildShape::Shape),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_BuildWires , shared_ptr<LocOpe_BuildWires> >>(m.attr("LocOpe_BuildWires"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_CSIntersector , shared_ptr<LocOpe_CSIntersector> >>(m.attr("LocOpe_CSIntersector"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (LocOpe_CSIntersector::*)() const) static_cast<Standard_Boolean (LocOpe_CSIntersector::*)() const>(&LocOpe_CSIntersector::IsDone),
             R"#(Returns <Standard_True> if the intersection has been done.)#" )
        .def("IsDone",
             (Standard_Boolean (LocOpe_CSIntersector::*)() const) static_cast<Standard_Boolean (LocOpe_CSIntersector::*)() const>(&LocOpe_CSIntersector::IsDone),
             R"#(Returns <Standard_True> if the intersection has been done.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_CurveShapeIntersector , shared_ptr<LocOpe_CurveShapeIntersector> >>(m.attr("LocOpe_CurveShapeIntersector"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax1 &,const TopoDS_Shape & >()  , py::arg("Axis"),  py::arg("S") )
        .def(py::init< const gp_Circ &,const TopoDS_Shape & >()  , py::arg("C"),  py::arg("S") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (LocOpe_CurveShapeIntersector::*)() const) static_cast<Standard_Boolean (LocOpe_CurveShapeIntersector::*)() const>(&LocOpe_CurveShapeIntersector::IsDone),
             R"#(Returns <Standard_True> if the intersection has been done.)#" )
        .def("NbPoints",
             (Standard_Integer (LocOpe_CurveShapeIntersector::*)() const) static_cast<Standard_Integer (LocOpe_CurveShapeIntersector::*)() const>(&LocOpe_CurveShapeIntersector::NbPoints),
             R"#(Returns the number of intersection point.)#" )
        .def("Point",
             (const LocOpe_PntFace & (LocOpe_CurveShapeIntersector::*)( const Standard_Integer ) const) static_cast<const LocOpe_PntFace & (LocOpe_CurveShapeIntersector::*)( const Standard_Integer ) const>(&LocOpe_CurveShapeIntersector::Point),
             R"#(Returns the intersection point of range <Index>. The points are sorted in increasing order of parameter along the axis.)#"  , py::arg("Index"))
        .def("IsDone",
             (Standard_Boolean (LocOpe_CurveShapeIntersector::*)() const) static_cast<Standard_Boolean (LocOpe_CurveShapeIntersector::*)() const>(&LocOpe_CurveShapeIntersector::IsDone),
             R"#(Returns <Standard_True> if the intersection has been done.)#" )
        .def("NbPoints",
             (Standard_Integer (LocOpe_CurveShapeIntersector::*)() const) static_cast<Standard_Integer (LocOpe_CurveShapeIntersector::*)() const>(&LocOpe_CurveShapeIntersector::NbPoints),
             R"#(Returns the number of intersection point.)#" )
        .def("Point",
             (const LocOpe_PntFace & (LocOpe_CurveShapeIntersector::*)( const Standard_Integer ) const) static_cast<const LocOpe_PntFace & (LocOpe_CurveShapeIntersector::*)( const Standard_Integer ) const>(&LocOpe_CurveShapeIntersector::Point),
             R"#(Returns the intersection point of range <Index>. The points are sorted in increasing order of parameter along the axis.)#"  , py::arg("I"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_DPrism , shared_ptr<LocOpe_DPrism> >>(m.attr("LocOpe_DPrism"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_FindEdges , shared_ptr<LocOpe_FindEdges> >>(m.attr("LocOpe_FindEdges"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape & >()  , py::arg("FFrom"),  py::arg("FTo") )
    // custom constructors
    // methods
        .def("InitIterator",
             (void (LocOpe_FindEdges::*)() ) static_cast<void (LocOpe_FindEdges::*)() >(&LocOpe_FindEdges::InitIterator),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (LocOpe_FindEdges::*)() const) static_cast<Standard_Boolean (LocOpe_FindEdges::*)() const>(&LocOpe_FindEdges::More),
             R"#(None)#" )
        .def("EdgeFrom",
             (const TopoDS_Edge & (LocOpe_FindEdges::*)() const) static_cast<const TopoDS_Edge & (LocOpe_FindEdges::*)() const>(&LocOpe_FindEdges::EdgeFrom),
             R"#(None)#" )
        .def("EdgeTo",
             (const TopoDS_Edge & (LocOpe_FindEdges::*)() const) static_cast<const TopoDS_Edge & (LocOpe_FindEdges::*)() const>(&LocOpe_FindEdges::EdgeTo),
             R"#(None)#" )
        .def("Next",
             (void (LocOpe_FindEdges::*)() ) static_cast<void (LocOpe_FindEdges::*)() >(&LocOpe_FindEdges::Next),
             R"#(None)#" )
        .def("InitIterator",
             (void (LocOpe_FindEdges::*)() ) static_cast<void (LocOpe_FindEdges::*)() >(&LocOpe_FindEdges::InitIterator),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (LocOpe_FindEdges::*)() const) static_cast<Standard_Boolean (LocOpe_FindEdges::*)() const>(&LocOpe_FindEdges::More),
             R"#(None)#" )
        .def("EdgeFrom",
             (const TopoDS_Edge & (LocOpe_FindEdges::*)() const) static_cast<const TopoDS_Edge & (LocOpe_FindEdges::*)() const>(&LocOpe_FindEdges::EdgeFrom),
             R"#(None)#" )
        .def("EdgeTo",
             (const TopoDS_Edge & (LocOpe_FindEdges::*)() const) static_cast<const TopoDS_Edge & (LocOpe_FindEdges::*)() const>(&LocOpe_FindEdges::EdgeTo),
             R"#(None)#" )
        .def("Next",
             (void (LocOpe_FindEdges::*)() ) static_cast<void (LocOpe_FindEdges::*)() >(&LocOpe_FindEdges::Next),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_FindEdgesInFace , shared_ptr<LocOpe_FindEdgesInFace> >>(m.attr("LocOpe_FindEdgesInFace"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Face & >()  , py::arg("S"),  py::arg("F") )
    // custom constructors
    // methods
        .def("Init",
             (void (LocOpe_FindEdgesInFace::*)() ) static_cast<void (LocOpe_FindEdgesInFace::*)() >(&LocOpe_FindEdgesInFace::Init),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (LocOpe_FindEdgesInFace::*)() const) static_cast<Standard_Boolean (LocOpe_FindEdgesInFace::*)() const>(&LocOpe_FindEdgesInFace::More),
             R"#(None)#" )
        .def("Edge",
             (const TopoDS_Edge & (LocOpe_FindEdgesInFace::*)() const) static_cast<const TopoDS_Edge & (LocOpe_FindEdgesInFace::*)() const>(&LocOpe_FindEdgesInFace::Edge),
             R"#(None)#" )
        .def("Next",
             (void (LocOpe_FindEdgesInFace::*)() ) static_cast<void (LocOpe_FindEdgesInFace::*)() >(&LocOpe_FindEdgesInFace::Next),
             R"#(None)#" )
        .def("Init",
             (void (LocOpe_FindEdgesInFace::*)() ) static_cast<void (LocOpe_FindEdgesInFace::*)() >(&LocOpe_FindEdgesInFace::Init),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (LocOpe_FindEdgesInFace::*)() const) static_cast<Standard_Boolean (LocOpe_FindEdgesInFace::*)() const>(&LocOpe_FindEdgesInFace::More),
             R"#(None)#" )
        .def("Edge",
             (const TopoDS_Edge & (LocOpe_FindEdgesInFace::*)() const) static_cast<const TopoDS_Edge & (LocOpe_FindEdgesInFace::*)() const>(&LocOpe_FindEdgesInFace::Edge),
             R"#(None)#" )
        .def("Next",
             (void (LocOpe_FindEdgesInFace::*)() ) static_cast<void (LocOpe_FindEdgesInFace::*)() >(&LocOpe_FindEdgesInFace::Next),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_GeneratedShape ,opencascade::handle<LocOpe_GeneratedShape>,Py_LocOpe_GeneratedShape , Standard_Transient>>(m.attr("LocOpe_GeneratedShape"))
    // constructors
    // custom constructors
    // methods
        .def("GeneratingEdges",
             (const TopTools_ListOfShape & (LocOpe_GeneratedShape::*)() ) static_cast<const TopTools_ListOfShape & (LocOpe_GeneratedShape::*)() >(&LocOpe_GeneratedShape::GeneratingEdges),
             R"#(None)#" )
        .def("Generated",
             (TopoDS_Edge (LocOpe_GeneratedShape::*)( const TopoDS_Vertex & ) ) static_cast<TopoDS_Edge (LocOpe_GeneratedShape::*)( const TopoDS_Vertex & ) >(&LocOpe_GeneratedShape::Generated),
             R"#(Returns the edge created by the vertex <V>. If none, must return a null shape.)#"  , py::arg("V"))
        .def("Generated",
             (TopoDS_Face (LocOpe_GeneratedShape::*)( const TopoDS_Edge & ) ) static_cast<TopoDS_Face (LocOpe_GeneratedShape::*)( const TopoDS_Edge & ) >(&LocOpe_GeneratedShape::Generated),
             R"#(Returns the face created by the edge <E>. If none, must return a null shape.)#"  , py::arg("E"))
        .def("OrientedFaces",
             (const TopTools_ListOfShape & (LocOpe_GeneratedShape::*)() ) static_cast<const TopTools_ListOfShape & (LocOpe_GeneratedShape::*)() >(&LocOpe_GeneratedShape::OrientedFaces),
             R"#(Returns the list of correctly oriented generated faces.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (LocOpe_GeneratedShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (LocOpe_GeneratedShape::*)() const>(&LocOpe_GeneratedShape::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&LocOpe_GeneratedShape::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_Generator , shared_ptr<LocOpe_Generator> >>(m.attr("LocOpe_Generator"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
    // custom constructors
    // methods
        .def("Init",
             (void (LocOpe_Generator::*)( const TopoDS_Shape & ) ) static_cast<void (LocOpe_Generator::*)( const TopoDS_Shape & ) >(&LocOpe_Generator::Init),
             R"#(Initializes the algorithm on the shape <S>.)#"  , py::arg("S"))
        .def("IsDone",
             (Standard_Boolean (LocOpe_Generator::*)() const) static_cast<Standard_Boolean (LocOpe_Generator::*)() const>(&LocOpe_Generator::IsDone),
             R"#(None)#" )
        .def("ResultingShape",
             (const TopoDS_Shape & (LocOpe_Generator::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Generator::*)() const>(&LocOpe_Generator::ResultingShape),
             R"#(Returns the new shape)#" )
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_Generator::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Generator::*)() const>(&LocOpe_Generator::Shape),
             R"#(Returns the initial shape)#" )
        .def("Init",
             (void (LocOpe_Generator::*)( const TopoDS_Shape & ) ) static_cast<void (LocOpe_Generator::*)( const TopoDS_Shape & ) >(&LocOpe_Generator::Init),
             R"#(Initializes the algorithm on the shape <S>.)#"  , py::arg("S"))
        .def("IsDone",
             (Standard_Boolean (LocOpe_Generator::*)() const) static_cast<Standard_Boolean (LocOpe_Generator::*)() const>(&LocOpe_Generator::IsDone),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_Generator::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Generator::*)() const>(&LocOpe_Generator::Shape),
             R"#(Returns the initial shape)#" )
        .def("ResultingShape",
             (const TopoDS_Shape & (LocOpe_Generator::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Generator::*)() const>(&LocOpe_Generator::ResultingShape),
             R"#(Returns the new shape)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_Gluer , shared_ptr<LocOpe_Gluer> >>(m.attr("LocOpe_Gluer"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape & >()  , py::arg("Sbase"),  py::arg("Snew") )
    // custom constructors
    // methods
        .def("OpeType",
             (LocOpe_Operation (LocOpe_Gluer::*)() const) static_cast<LocOpe_Operation (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::OpeType),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (LocOpe_Gluer::*)() const) static_cast<Standard_Boolean (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::IsDone),
             R"#(None)#" )
        .def("ResultingShape",
             (const TopoDS_Shape & (LocOpe_Gluer::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::ResultingShape),
             R"#(None)#" )
        .def("BasisShape",
             (const TopoDS_Shape & (LocOpe_Gluer::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::BasisShape),
             R"#(None)#" )
        .def("GluedShape",
             (const TopoDS_Shape & (LocOpe_Gluer::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::GluedShape),
             R"#(None)#" )
        .def("Edges",
             (const TopTools_ListOfShape & (LocOpe_Gluer::*)() const) static_cast<const TopTools_ListOfShape & (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::Edges),
             R"#(None)#" )
        .def("TgtEdges",
             (const TopTools_ListOfShape & (LocOpe_Gluer::*)() const) static_cast<const TopTools_ListOfShape & (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::TgtEdges),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (LocOpe_Gluer::*)() const) static_cast<Standard_Boolean (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::IsDone),
             R"#(None)#" )
        .def("ResultingShape",
             (const TopoDS_Shape & (LocOpe_Gluer::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::ResultingShape),
             R"#(None)#" )
        .def("BasisShape",
             (const TopoDS_Shape & (LocOpe_Gluer::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::BasisShape),
             R"#(None)#" )
        .def("GluedShape",
             (const TopoDS_Shape & (LocOpe_Gluer::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::GluedShape),
             R"#(None)#" )
        .def("OpeType",
             (LocOpe_Operation (LocOpe_Gluer::*)() const) static_cast<LocOpe_Operation (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::OpeType),
             R"#(None)#" )
        .def("Edges",
             (const TopTools_ListOfShape & (LocOpe_Gluer::*)() const) static_cast<const TopTools_ListOfShape & (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::Edges),
             R"#(None)#" )
        .def("TgtEdges",
             (const TopTools_ListOfShape & (LocOpe_Gluer::*)() const) static_cast<const TopTools_ListOfShape & (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::TgtEdges),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_LinearForm , shared_ptr<LocOpe_LinearForm> >>(m.attr("LocOpe_LinearForm"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const gp_Vec &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("Base"),  py::arg("V"),  py::arg("Pnt1"),  py::arg("Pnt2") )
        .def(py::init< const TopoDS_Shape &,const gp_Vec &,const gp_Vec &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("Base"),  py::arg("V"),  py::arg("Vectra"),  py::arg("Pnt1"),  py::arg("Pnt2") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_Pipe , shared_ptr<LocOpe_Pipe> >>(m.attr("LocOpe_Pipe"))
    // constructors
    // custom constructors
    // methods
        .def("Spine",
             (const TopoDS_Shape & (LocOpe_Pipe::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Pipe::*)() const>(&LocOpe_Pipe::Spine),
             R"#(None)#" )
        .def("Profile",
             (const TopoDS_Shape & (LocOpe_Pipe::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Pipe::*)() const>(&LocOpe_Pipe::Profile),
             R"#(None)#" )
        .def("FirstShape",
             (const TopoDS_Shape & (LocOpe_Pipe::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Pipe::*)() const>(&LocOpe_Pipe::FirstShape),
             R"#(None)#" )
        .def("LastShape",
             (const TopoDS_Shape & (LocOpe_Pipe::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Pipe::*)() const>(&LocOpe_Pipe::LastShape),
             R"#(None)#" )
        .def("Spine",
             (const TopoDS_Shape & (LocOpe_Pipe::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Pipe::*)() const>(&LocOpe_Pipe::Spine),
             R"#(None)#" )
        .def("Profile",
             (const TopoDS_Shape & (LocOpe_Pipe::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Pipe::*)() const>(&LocOpe_Pipe::Profile),
             R"#(None)#" )
        .def("FirstShape",
             (const TopoDS_Shape & (LocOpe_Pipe::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Pipe::*)() const>(&LocOpe_Pipe::FirstShape),
             R"#(None)#" )
        .def("LastShape",
             (const TopoDS_Shape & (LocOpe_Pipe::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Pipe::*)() const>(&LocOpe_Pipe::LastShape),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_PntFace , shared_ptr<LocOpe_PntFace> >>(m.attr("LocOpe_PntFace"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const TopoDS_Face &,const TopAbs_Orientation,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("F"),  py::arg("Or"),  py::arg("Param"),  py::arg("UPar"),  py::arg("VPar") )
    // custom constructors
    // methods
        .def("Pnt",
             (const gp_Pnt & (LocOpe_PntFace::*)() const) static_cast<const gp_Pnt & (LocOpe_PntFace::*)() const>(&LocOpe_PntFace::Pnt),
             R"#(None)#" )
        .def("Face",
             (const TopoDS_Face & (LocOpe_PntFace::*)() const) static_cast<const TopoDS_Face & (LocOpe_PntFace::*)() const>(&LocOpe_PntFace::Face),
             R"#(None)#" )
        .def("Orientation",
             (TopAbs_Orientation (LocOpe_PntFace::*)() const) static_cast<TopAbs_Orientation (LocOpe_PntFace::*)() const>(&LocOpe_PntFace::Orientation),
             R"#(None)#" )
        .def("ChangeOrientation",
             (TopAbs_Orientation & (LocOpe_PntFace::*)() ) static_cast<TopAbs_Orientation & (LocOpe_PntFace::*)() >(&LocOpe_PntFace::ChangeOrientation),
             R"#(None)#" )
        .def("Parameter",
             (Standard_Real (LocOpe_PntFace::*)() const) static_cast<Standard_Real (LocOpe_PntFace::*)() const>(&LocOpe_PntFace::Parameter),
             R"#(None)#" )
        .def("UParameter",
             (Standard_Real (LocOpe_PntFace::*)() const) static_cast<Standard_Real (LocOpe_PntFace::*)() const>(&LocOpe_PntFace::UParameter),
             R"#(None)#" )
        .def("VParameter",
             (Standard_Real (LocOpe_PntFace::*)() const) static_cast<Standard_Real (LocOpe_PntFace::*)() const>(&LocOpe_PntFace::VParameter),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_Prism , shared_ptr<LocOpe_Prism> >>(m.attr("LocOpe_Prism"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_Revol , shared_ptr<LocOpe_Revol> >>(m.attr("LocOpe_Revol"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_RevolutionForm , shared_ptr<LocOpe_RevolutionForm> >>(m.attr("LocOpe_RevolutionForm"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_SplitDrafts , shared_ptr<LocOpe_SplitDrafts> >>(m.attr("LocOpe_SplitDrafts"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (LocOpe_SplitDrafts::*)() const) static_cast<Standard_Boolean (LocOpe_SplitDrafts::*)() const>(&LocOpe_SplitDrafts::IsDone),
             R"#(Returns <Standard_True> if the modification has been succesfully performed.)#" )
        .def("OriginalShape",
             (const TopoDS_Shape & (LocOpe_SplitDrafts::*)() const) static_cast<const TopoDS_Shape & (LocOpe_SplitDrafts::*)() const>(&LocOpe_SplitDrafts::OriginalShape),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (LocOpe_SplitDrafts::*)() const) static_cast<Standard_Boolean (LocOpe_SplitDrafts::*)() const>(&LocOpe_SplitDrafts::IsDone),
             R"#(Returns <Standard_True> if the modification has been succesfully performed.)#" )
        .def("OriginalShape",
             (const TopoDS_Shape & (LocOpe_SplitDrafts::*)() const) static_cast<const TopoDS_Shape & (LocOpe_SplitDrafts::*)() const>(&LocOpe_SplitDrafts::OriginalShape),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_SplitShape , shared_ptr<LocOpe_SplitShape> >>(m.attr("LocOpe_SplitShape"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
    // custom constructors
    // methods
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_SplitShape::*)() const) static_cast<const TopoDS_Shape & (LocOpe_SplitShape::*)() const>(&LocOpe_SplitShape::Shape),
             R"#(Returns the "original" shape.)#" )
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_SplitShape::*)() const) static_cast<const TopoDS_Shape & (LocOpe_SplitShape::*)() const>(&LocOpe_SplitShape::Shape),
             R"#(Returns the "original" shape.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_Spliter , shared_ptr<LocOpe_Spliter> >>(m.attr("LocOpe_Spliter"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
    // custom constructors
    // methods
        .def("Init",
             (void (LocOpe_Spliter::*)( const TopoDS_Shape & ) ) static_cast<void (LocOpe_Spliter::*)( const TopoDS_Shape & ) >(&LocOpe_Spliter::Init),
             R"#(Initializes the algorithm on the shape <S>.)#"  , py::arg("S"))
        .def("IsDone",
             (Standard_Boolean (LocOpe_Spliter::*)() const) static_cast<Standard_Boolean (LocOpe_Spliter::*)() const>(&LocOpe_Spliter::IsDone),
             R"#(None)#" )
        .def("ResultingShape",
             (const TopoDS_Shape & (LocOpe_Spliter::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Spliter::*)() const>(&LocOpe_Spliter::ResultingShape),
             R"#(Returns the new shape)#" )
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_Spliter::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Spliter::*)() const>(&LocOpe_Spliter::Shape),
             R"#(Returns the initial shape)#" )
        .def("Init",
             (void (LocOpe_Spliter::*)( const TopoDS_Shape & ) ) static_cast<void (LocOpe_Spliter::*)( const TopoDS_Shape & ) >(&LocOpe_Spliter::Init),
             R"#(Initializes the algorithm on the shape <S>.)#"  , py::arg("S"))
        .def("IsDone",
             (Standard_Boolean (LocOpe_Spliter::*)() const) static_cast<Standard_Boolean (LocOpe_Spliter::*)() const>(&LocOpe_Spliter::IsDone),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_Spliter::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Spliter::*)() const>(&LocOpe_Spliter::Shape),
             R"#(Returns the initial shape)#" )
        .def("ResultingShape",
             (const TopoDS_Shape & (LocOpe_Spliter::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Spliter::*)() const>(&LocOpe_Spliter::ResultingShape),
             R"#(Returns the new shape)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_WiresOnShape ,opencascade::handle<LocOpe_WiresOnShape> , Standard_Transient>>(m.attr("LocOpe_WiresOnShape"))
    // constructors
    // custom constructors
    // methods
        .def("SetCheckInterior",
             (void (LocOpe_WiresOnShape::*)( const Standard_Boolean ) ) static_cast<void (LocOpe_WiresOnShape::*)( const Standard_Boolean ) >(&LocOpe_WiresOnShape::SetCheckInterior),
             R"#(Set the flag of check internal intersections default value is True (to check))#"  , py::arg("ToCheckInterior"))
        .def("IsDone",
             (Standard_Boolean (LocOpe_WiresOnShape::*)() const) static_cast<Standard_Boolean (LocOpe_WiresOnShape::*)() const>(&LocOpe_WiresOnShape::IsDone),
             R"#(None)#" )
        .def("IsFaceWithSection",
             (Standard_Boolean (LocOpe_WiresOnShape::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (LocOpe_WiresOnShape::*)( const TopoDS_Shape & ) const>(&LocOpe_WiresOnShape::IsFaceWithSection),
             R"#(tells is the face to be split by section or not)#"  , py::arg("aFace"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (LocOpe_WiresOnShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (LocOpe_WiresOnShape::*)() const>(&LocOpe_WiresOnShape::DynamicType),
             R"#(None)#" )
        .def("SetCheckInterior",
             (void (LocOpe_WiresOnShape::*)( const Standard_Boolean ) ) static_cast<void (LocOpe_WiresOnShape::*)( const Standard_Boolean ) >(&LocOpe_WiresOnShape::SetCheckInterior),
             R"#(Set the flag of check internal intersections default value is True (to check))#"  , py::arg("ToCheckInterior"))
        .def("IsDone",
             (Standard_Boolean (LocOpe_WiresOnShape::*)() const) static_cast<Standard_Boolean (LocOpe_WiresOnShape::*)() const>(&LocOpe_WiresOnShape::IsDone),
             R"#(None)#" )
        .def("IsFaceWithSection",
             (Standard_Boolean (LocOpe_WiresOnShape::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (LocOpe_WiresOnShape::*)( const TopoDS_Shape & ) const>(&LocOpe_WiresOnShape::IsFaceWithSection),
             R"#(tells is the face to be split by section or not)#"  , py::arg("aFace"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&LocOpe_WiresOnShape::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_GluedShape ,opencascade::handle<LocOpe_GluedShape> , LocOpe_GeneratedShape>>(m.attr("LocOpe_GluedShape"))
    // constructors
    // custom constructors
    // methods
        .def("GeneratingEdges",
             (const TopTools_ListOfShape & (LocOpe_GluedShape::*)() ) static_cast<const TopTools_ListOfShape & (LocOpe_GluedShape::*)() >(&LocOpe_GluedShape::GeneratingEdges),
             R"#(None)#" )
        .def("Generated",
             (TopoDS_Edge (LocOpe_GluedShape::*)( const TopoDS_Vertex & ) ) static_cast<TopoDS_Edge (LocOpe_GluedShape::*)( const TopoDS_Vertex & ) >(&LocOpe_GluedShape::Generated),
             R"#(Returns the edge created by the vertex <V>. If none, must return a null shape.)#"  , py::arg("V"))
        .def("Generated",
             (TopoDS_Face (LocOpe_GluedShape::*)( const TopoDS_Edge & ) ) static_cast<TopoDS_Face (LocOpe_GluedShape::*)( const TopoDS_Edge & ) >(&LocOpe_GluedShape::Generated),
             R"#(Returns the face created by the edge <E>. If none, must return a null shape.)#"  , py::arg("E"))
        .def("OrientedFaces",
             (const TopTools_ListOfShape & (LocOpe_GluedShape::*)() ) static_cast<const TopTools_ListOfShape & (LocOpe_GluedShape::*)() >(&LocOpe_GluedShape::OrientedFaces),
             R"#(Returns the list of correctly oriented generated faces.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (LocOpe_GluedShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (LocOpe_GluedShape::*)() const>(&LocOpe_GluedShape::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&LocOpe_GluedShape::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/LocOpe_RevolutionForm.hxx
// ./opencascade/LocOpe.hxx
// ./opencascade/LocOpe_Prism.hxx
// ./opencascade/LocOpe_SequenceOfCirc.hxx
// ./opencascade/LocOpe_DPrism.hxx
// ./opencascade/LocOpe_GluedShape.hxx
// ./opencascade/LocOpe_Operation.hxx
// ./opencascade/LocOpe_DataMapOfShapePnt.hxx
// ./opencascade/LocOpe_Gluer.hxx
// ./opencascade/LocOpe_BuildShape.hxx
// ./opencascade/LocOpe_SequenceOfPntFace.hxx
// ./opencascade/LocOpe_PntFace.hxx
// ./opencascade/LocOpe_LinearForm.hxx
// ./opencascade/LocOpe_Pipe.hxx
// ./opencascade/LocOpe_DataMapIteratorOfDataMapOfShapePnt.hxx
// ./opencascade/LocOpe_Revol.hxx
// ./opencascade/LocOpe_WiresOnShape.hxx
// ./opencascade/LocOpe_BuildWires.hxx
// ./opencascade/LocOpe_FindEdgesInFace.hxx
// ./opencascade/LocOpe_Generator.hxx
// ./opencascade/LocOpe_SplitDrafts.hxx
// ./opencascade/LocOpe_SequenceOfLin.hxx
// ./opencascade/LocOpe_GeneratedShape.hxx
// ./opencascade/LocOpe_FindEdges.hxx
// ./opencascade/LocOpe_CSIntersector.hxx
// ./opencascade/LocOpe_SplitShape.hxx
// ./opencascade/LocOpe_Spliter.hxx
// ./opencascade/LocOpe_CurveShapeIntersector.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<gp_Circ>(m,"LocOpe_SequenceOfCirc");
    register_template_NCollection_DataMap<TopoDS_Shape, gp_Pnt, TopTools_ShapeMapHasher>(m,"LocOpe_DataMapOfShapePnt");
    register_template_NCollection_Sequence<LocOpe_PntFace>(m,"LocOpe_SequenceOfPntFace");
    register_template_NCollection_Sequence<gp_Lin>(m,"LocOpe_SequenceOfLin");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
