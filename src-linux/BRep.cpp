
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Poly_PolygonOnTriangulation.hxx>
#include <Poly_Triangulation.hxx>
#include <Geom_Surface.hxx>
#include <Poly_Triangulation.hxx>
#include <Poly_Polygon2D.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Surface.hxx>
#include <Standard_NullObject.hxx>
#include <Poly_Polygon3D.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Face.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <Poly_Triangulation.hxx>
#include <Poly_Polygon2D.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Surface.hxx>
#include <Poly_Triangulation.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Poly_Polygon3D.hxx>
#include <Poly_Polygon2D.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Surface.hxx>

// module includes
#include <BRep_Builder.hxx>
#include <BRep_Curve3D.hxx>
#include <BRep_CurveOn2Surfaces.hxx>
#include <BRep_CurveOnClosedSurface.hxx>
#include <BRep_CurveOnSurface.hxx>
#include <BRep_CurveRepresentation.hxx>
#include <BRep_GCurve.hxx>
#include <BRep_ListIteratorOfListOfCurveRepresentation.hxx>
#include <BRep_ListIteratorOfListOfPointRepresentation.hxx>
#include <BRep_ListOfCurveRepresentation.hxx>
#include <BRep_ListOfPointRepresentation.hxx>
#include <BRep_PointOnCurve.hxx>
#include <BRep_PointOnCurveOnSurface.hxx>
#include <BRep_PointOnSurface.hxx>
#include <BRep_PointRepresentation.hxx>
#include <BRep_PointsOnSurface.hxx>
#include <BRep_Polygon3D.hxx>
#include <BRep_PolygonOnClosedSurface.hxx>
#include <BRep_PolygonOnClosedTriangulation.hxx>
#include <BRep_PolygonOnSurface.hxx>
#include <BRep_PolygonOnTriangulation.hxx>
#include <BRep_TEdge.hxx>
#include <BRep_TFace.hxx>
#include <BRep_Tool.hxx>
#include <BRep_TVertex.hxx>

// template related includes
// ./opencascade/BRep_ListOfPointRepresentation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRep_ListOfPointRepresentation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRep_ListOfCurveRepresentation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRep_ListOfCurveRepresentation.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRep(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRep"));


//Python trampoline classes
    class Py_BRep_CurveRepresentation : public BRep_CurveRepresentation{
    public:
        using BRep_CurveRepresentation::BRep_CurveRepresentation;


        // public pure virtual
        opencascade::handle<BRep_CurveRepresentation> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<BRep_CurveRepresentation>,BRep_CurveRepresentation,Copy,) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_BRep_GCurve : public BRep_GCurve{
    public:
        using BRep_GCurve::BRep_GCurve;


        // public pure virtual
        void D0(const Standard_Real U,gp_Pnt & P) const  override { PYBIND11_OVERLOAD_PURE(void,BRep_GCurve,D0,U,P) };

        opencascade::handle<BRep_CurveRepresentation> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<BRep_CurveRepresentation>,BRep_CurveRepresentation,Copy,) };

        // protected pure virtual


        // private pure virtual

    };

// classes

    // default constructor
    register_default_constructor<BRep_Builder , shared_ptr<BRep_Builder>>(m,"BRep_Builder");

    static_cast<py::class_<BRep_Builder , shared_ptr<BRep_Builder> , TopoDS_Builder>>(m.attr("BRep_Builder"))
    // constructors
    // custom constructors
    // methods
        .def("MakeFace",
             (void (BRep_Builder::*)( TopoDS_Face & ) const) static_cast<void (BRep_Builder::*)( TopoDS_Face & ) const>(&BRep_Builder::MakeFace),
             R"#(Makes an undefined Face.)#"  , py::arg("F"))
        .def("MakeFace",
             (void (BRep_Builder::*)( TopoDS_Face & , const opencascade::handle<Geom_Surface> & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( TopoDS_Face & , const opencascade::handle<Geom_Surface> & , const Standard_Real ) const>(&BRep_Builder::MakeFace),
             R"#(Makes a Face with a surface.)#"  , py::arg("F"),  py::arg("S"),  py::arg("Tol"))
        .def("MakeFace",
             (void (BRep_Builder::*)( TopoDS_Face & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( TopoDS_Face & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Real ) const>(&BRep_Builder::MakeFace),
             R"#(Makes a Face with a surface and a location.)#"  , py::arg("F"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"))
        .def("MakeFace",
             (void (BRep_Builder::*)( TopoDS_Face & , const opencascade::handle<Poly_Triangulation> & ) const) static_cast<void (BRep_Builder::*)( TopoDS_Face & , const opencascade::handle<Poly_Triangulation> & ) const>(&BRep_Builder::MakeFace),
             R"#(Makes a Face with a triangulation. The triangulation is in the same reference system than the TFace.)#"  , py::arg("F"),  py::arg("T"))
        .def("UpdateFace",
             (void (BRep_Builder::*)( const TopoDS_Face & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Face & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Real ) const>(&BRep_Builder::UpdateFace),
             R"#(Updates the face F using the tolerance value Tol, surface S and location Location.)#"  , py::arg("F"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"))
        .def("UpdateFace",
             (void (BRep_Builder::*)( const TopoDS_Face & , const opencascade::handle<Poly_Triangulation> & ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Face & , const opencascade::handle<Poly_Triangulation> & ) const>(&BRep_Builder::UpdateFace),
             R"#(Changes a face triangulation.)#"  , py::arg("F"),  py::arg("T"))
        .def("UpdateFace",
             (void (BRep_Builder::*)( const TopoDS_Face & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Face & , const Standard_Real ) const>(&BRep_Builder::UpdateFace),
             R"#(Updates the face Tolerance.)#"  , py::arg("F"),  py::arg("Tol"))
        .def("NaturalRestriction",
             (void (BRep_Builder::*)( const TopoDS_Face & , const Standard_Boolean ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Face & , const Standard_Boolean ) const>(&BRep_Builder::NaturalRestriction),
             R"#(Sets the NaturalRestriction flag of the face.)#"  , py::arg("F"),  py::arg("N"))
        .def("MakeEdge",
             (void (BRep_Builder::*)( TopoDS_Edge & ) const) static_cast<void (BRep_Builder::*)( TopoDS_Edge & ) const>(&BRep_Builder::MakeEdge),
             R"#(Makes an undefined Edge (no geometry).)#"  , py::arg("E"))
        .def("MakeEdge",
             (void (BRep_Builder::*)( TopoDS_Edge & , const opencascade::handle<Geom_Curve> & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( TopoDS_Edge & , const opencascade::handle<Geom_Curve> & , const Standard_Real ) const>(&BRep_Builder::MakeEdge),
             R"#(Makes an Edge with a curve.)#"  , py::arg("E"),  py::arg("C"),  py::arg("Tol"))
        .def("MakeEdge",
             (void (BRep_Builder::*)( TopoDS_Edge & , const opencascade::handle<Geom_Curve> & , const TopLoc_Location & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( TopoDS_Edge & , const opencascade::handle<Geom_Curve> & , const TopLoc_Location & , const Standard_Real ) const>(&BRep_Builder::MakeEdge),
             R"#(Makes an Edge with a curve and a location.)#"  , py::arg("E"),  py::arg("C"),  py::arg("L"),  py::arg("Tol"))
        .def("MakeEdge",
             (void (BRep_Builder::*)( TopoDS_Edge & , const opencascade::handle<Poly_Polygon3D> & ) const) static_cast<void (BRep_Builder::*)( TopoDS_Edge & , const opencascade::handle<Poly_Polygon3D> & ) const>(&BRep_Builder::MakeEdge),
             R"#(Makes an Edge with a polygon 3d.)#"  , py::arg("E"),  py::arg("P"))
        .def("MakeEdge",
             (void (BRep_Builder::*)( TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & ) const) static_cast<void (BRep_Builder::*)( TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & ) const>(&BRep_Builder::MakeEdge),
             R"#(makes an Edge polygon on Triangulation.)#"  , py::arg("E"),  py::arg("N"),  py::arg("T"))
        .def("MakeEdge",
             (void (BRep_Builder::*)( TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) const) static_cast<void (BRep_Builder::*)( TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) const>(&BRep_Builder::MakeEdge),
             R"#(makes an Edge polygon on Triangulation.)#"  , py::arg("E"),  py::arg("N"),  py::arg("T"),  py::arg("L"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Curve> & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Curve> & , const Standard_Real ) const>(&BRep_Builder::UpdateEdge),
             R"#(Sets a 3D curve for the edge. If <C> is a null handle, remove any existing 3d curve.)#"  , py::arg("E"),  py::arg("C"),  py::arg("Tol"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Curve> & , const TopLoc_Location & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Curve> & , const TopLoc_Location & , const Standard_Real ) const>(&BRep_Builder::UpdateEdge),
             R"#(Sets a 3D curve for the edge. If <C> is a null handle, remove any existing 3d curve.)#"  , py::arg("E"),  py::arg("C"),  py::arg("L"),  py::arg("Tol"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const TopoDS_Face & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const TopoDS_Face & , const Standard_Real ) const>(&BRep_Builder::UpdateEdge),
             R"#(Sets a pcurve for the edge on the face. If <C> is a null handle, remove any existing pcurve.)#"  , py::arg("E"),  py::arg("C"),  py::arg("F"),  py::arg("Tol"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom2d_Curve> & , const TopoDS_Face & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom2d_Curve> & , const TopoDS_Face & , const Standard_Real ) const>(&BRep_Builder::UpdateEdge),
             R"#(Sets pcurves for the edge on the closed face. If <C1> or <C2> is a null handle, remove any existing pcurve.)#"  , py::arg("E"),  py::arg("C1"),  py::arg("C2"),  py::arg("F"),  py::arg("Tol"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Real ) const>(&BRep_Builder::UpdateEdge),
             R"#(Sets a pcurve for the edge on the face. If <C> is a null handle, remove any existing pcurve.)#"  , py::arg("E"),  py::arg("C"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Real , const gp_Pnt2d & , const gp_Pnt2d & ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Real , const gp_Pnt2d & , const gp_Pnt2d & ) const>(&BRep_Builder::UpdateEdge),
             R"#(Sets a pcurve for the edge on the face. If <C> is a null handle, remove any existing pcurve. Sets UV bounds for curve repsentation)#"  , py::arg("E"),  py::arg("C"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"),  py::arg("Pf"),  py::arg("Pl"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Real ) const>(&BRep_Builder::UpdateEdge),
             R"#(Sets pcurves for the edge on the closed surface. <C1> or <C2> is a null handle, remove any existing pcurve.)#"  , py::arg("E"),  py::arg("C1"),  py::arg("C2"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Real , const gp_Pnt2d & , const gp_Pnt2d & ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Real , const gp_Pnt2d & , const gp_Pnt2d & ) const>(&BRep_Builder::UpdateEdge),
             R"#(Sets pcurves for the edge on the closed surface. <C1> or <C2> is a null handle, remove any existing pcurve. Sets UV bounds for curve repsentation)#"  , py::arg("E"),  py::arg("C1"),  py::arg("C2"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"),  py::arg("Pf"),  py::arg("Pl"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_Polygon3D> & ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_Polygon3D> & ) const>(&BRep_Builder::UpdateEdge),
             R"#(Changes an Edge 3D polygon. A null Polygon removes the 3d Polygon.)#"  , py::arg("E"),  py::arg("P"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_Polygon3D> & , const TopLoc_Location & ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_Polygon3D> & , const TopLoc_Location & ) const>(&BRep_Builder::UpdateEdge),
             R"#(Changes an Edge 3D polygon. A null Polygon removes the 3d Polygon.)#"  , py::arg("E"),  py::arg("P"),  py::arg("L"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & ) const>(&BRep_Builder::UpdateEdge),
             R"#(Changes an Edge polygon on Triangulation.)#"  , py::arg("E"),  py::arg("N"),  py::arg("T"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) const>(&BRep_Builder::UpdateEdge),
             R"#(Changes an Edge polygon on Triangulation.)#"  , py::arg("E"),  py::arg("N"),  py::arg("T"),  py::arg("L"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & ) const>(&BRep_Builder::UpdateEdge),
             R"#(Changes an Edge polygon on Triangulation.)#"  , py::arg("E"),  py::arg("N1"),  py::arg("N2"),  py::arg("T"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) const>(&BRep_Builder::UpdateEdge),
             R"#(Changes an Edge polygon on Triangulation.)#"  , py::arg("E"),  py::arg("N1"),  py::arg("N2"),  py::arg("T"),  py::arg("L"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_Polygon2D> & , const TopoDS_Face & ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_Polygon2D> & , const TopoDS_Face & ) const>(&BRep_Builder::UpdateEdge),
             R"#(Changes Edge polygon on a face.)#"  , py::arg("E"),  py::arg("P"),  py::arg("S"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_Polygon2D> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_Polygon2D> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const>(&BRep_Builder::UpdateEdge),
             R"#(Changes Edge polygon on a face.)#"  , py::arg("E"),  py::arg("P"),  py::arg("S"),  py::arg("T"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_Polygon2D> & , const opencascade::handle<Poly_Polygon2D> & , const TopoDS_Face & ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_Polygon2D> & , const opencascade::handle<Poly_Polygon2D> & , const TopoDS_Face & ) const>(&BRep_Builder::UpdateEdge),
             R"#(Changes Edge polygons on a face.)#"  , py::arg("E"),  py::arg("P1"),  py::arg("P2"),  py::arg("S"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_Polygon2D> & , const opencascade::handle<Poly_Polygon2D> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_Polygon2D> & , const opencascade::handle<Poly_Polygon2D> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const>(&BRep_Builder::UpdateEdge),
             R"#(Changes Edge polygons on a face.)#"  , py::arg("E"),  py::arg("P1"),  py::arg("P2"),  py::arg("S"),  py::arg("L"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const Standard_Real ) const>(&BRep_Builder::UpdateEdge),
             R"#(Updates the edge tolerance.)#"  , py::arg("E"),  py::arg("Tol"))
        .def("Continuity",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const GeomAbs_Shape ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const GeomAbs_Shape ) const>(&BRep_Builder::Continuity),
             R"#(Sets the geometric continuity on the edge.)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"),  py::arg("C"))
        .def("Continuity",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const TopLoc_Location & , const GeomAbs_Shape ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const TopLoc_Location & , const GeomAbs_Shape ) const>(&BRep_Builder::Continuity),
             R"#(Sets the geometric continuity on the edge.)#"  , py::arg("E"),  py::arg("S1"),  py::arg("S2"),  py::arg("L1"),  py::arg("L2"),  py::arg("C"))
        .def("SameParameter",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const Standard_Boolean ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const Standard_Boolean ) const>(&BRep_Builder::SameParameter),
             R"#(Sets the same parameter flag for the edge <E>.)#"  , py::arg("E"),  py::arg("S"))
        .def("SameRange",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const Standard_Boolean ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const Standard_Boolean ) const>(&BRep_Builder::SameRange),
             R"#(Sets the same range flag for the edge <E>.)#"  , py::arg("E"),  py::arg("S"))
        .def("Degenerated",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const Standard_Boolean ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const Standard_Boolean ) const>(&BRep_Builder::Degenerated),
             R"#(Sets the degenerated flag for the edge <E>.)#"  , py::arg("E"),  py::arg("D"))
        .def("Range",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real , const Standard_Boolean ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real , const Standard_Boolean ) const>(&BRep_Builder::Range),
             R"#(Sets the range of the 3d curve if Only3d=TRUE, otherwise sets the range to all the representations)#"  , py::arg("E"),  py::arg("First"),  py::arg("Last"),  py::arg("Only3d")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Range",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Real , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Real , const Standard_Real ) const>(&BRep_Builder::Range),
             R"#(Sets the range of the edge on the pcurve on the surface.)#"  , py::arg("E"),  py::arg("S"),  py::arg("L"),  py::arg("First"),  py::arg("Last"))
        .def("Range",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const TopoDS_Face & , const Standard_Real , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const TopoDS_Face & , const Standard_Real , const Standard_Real ) const>(&BRep_Builder::Range),
             R"#(Sets the range of the edge on the pcurve on the face.)#"  , py::arg("E"),  py::arg("F"),  py::arg("First"),  py::arg("Last"))
        .def("Transfert",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const TopoDS_Edge & ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const TopoDS_Edge & ) const>(&BRep_Builder::Transfert),
             R"#(Add to <Eout> the geometric representations of <Ein>.)#"  , py::arg("Ein"),  py::arg("Eout"))
        .def("MakeVertex",
             (void (BRep_Builder::*)( TopoDS_Vertex & ) const) static_cast<void (BRep_Builder::*)( TopoDS_Vertex & ) const>(&BRep_Builder::MakeVertex),
             R"#(Makes an udefined vertex without geometry.)#"  , py::arg("V"))
        .def("MakeVertex",
             (void (BRep_Builder::*)( TopoDS_Vertex & , const gp_Pnt & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( TopoDS_Vertex & , const gp_Pnt & , const Standard_Real ) const>(&BRep_Builder::MakeVertex),
             R"#(Makes a vertex from a 3D point.)#"  , py::arg("V"),  py::arg("P"),  py::arg("Tol"))
        .def("UpdateVertex",
             (void (BRep_Builder::*)( const TopoDS_Vertex & , const gp_Pnt & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Vertex & , const gp_Pnt & , const Standard_Real ) const>(&BRep_Builder::UpdateVertex),
             R"#(Sets a 3D point on the vertex.)#"  , py::arg("V"),  py::arg("P"),  py::arg("Tol"))
        .def("UpdateVertex",
             (void (BRep_Builder::*)( const TopoDS_Vertex & , const Standard_Real , const TopoDS_Edge & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Vertex & , const Standard_Real , const TopoDS_Edge & , const Standard_Real ) const>(&BRep_Builder::UpdateVertex),
             R"#(Sets the parameter for the vertex on the edge curves.)#"  , py::arg("V"),  py::arg("P"),  py::arg("E"),  py::arg("Tol"))
        .def("UpdateVertex",
             (void (BRep_Builder::*)( const TopoDS_Vertex & , const Standard_Real , const TopoDS_Edge & , const TopoDS_Face & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Vertex & , const Standard_Real , const TopoDS_Edge & , const TopoDS_Face & , const Standard_Real ) const>(&BRep_Builder::UpdateVertex),
             R"#(Sets the parameter for the vertex on the edge pcurve on the face.)#"  , py::arg("V"),  py::arg("P"),  py::arg("E"),  py::arg("F"),  py::arg("Tol"))
        .def("UpdateVertex",
             (void (BRep_Builder::*)( const TopoDS_Vertex & , const Standard_Real , const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Vertex & , const Standard_Real , const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Real ) const>(&BRep_Builder::UpdateVertex),
             R"#(Sets the parameter for the vertex on the edge pcurve on the surface.)#"  , py::arg("V"),  py::arg("P"),  py::arg("E"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"))
        .def("UpdateVertex",
             (void (BRep_Builder::*)( const TopoDS_Vertex & , const Standard_Real , const Standard_Real , const TopoDS_Face & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Vertex & , const Standard_Real , const Standard_Real , const TopoDS_Face & , const Standard_Real ) const>(&BRep_Builder::UpdateVertex),
             R"#(Sets the parameters for the vertex on the face.)#"  , py::arg("Ve"),  py::arg("U"),  py::arg("V"),  py::arg("F"),  py::arg("Tol"))
        .def("UpdateVertex",
             (void (BRep_Builder::*)( const TopoDS_Vertex & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Vertex & , const Standard_Real ) const>(&BRep_Builder::UpdateVertex),
             R"#(Updates the vertex tolerance.)#"  , py::arg("V"),  py::arg("Tol"))
        .def("Transfert",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const TopoDS_Edge & , const TopoDS_Vertex & , const TopoDS_Vertex & ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const TopoDS_Edge & , const TopoDS_Vertex & , const TopoDS_Vertex & ) const>(&BRep_Builder::Transfert),
             R"#(Transfert the parameters of Vin on Ein as the parameter of Vout on Eout.)#"  , py::arg("Ein"),  py::arg("Eout"),  py::arg("Vin"),  py::arg("Vout"))
        .def("MakeFace",
             (void (BRep_Builder::*)( TopoDS_Face & ) const) static_cast<void (BRep_Builder::*)( TopoDS_Face & ) const>(&BRep_Builder::MakeFace),
             R"#(Makes an undefined Face.)#"  , py::arg("F"))
        .def("MakeEdge",
             (void (BRep_Builder::*)( TopoDS_Edge & , const opencascade::handle<Geom_Curve> & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( TopoDS_Edge & , const opencascade::handle<Geom_Curve> & , const Standard_Real ) const>(&BRep_Builder::MakeEdge),
             R"#(Makes an Edge with a curve.)#"  , py::arg("E"),  py::arg("C"),  py::arg("Tol"))
        .def("MakeEdge",
             (void (BRep_Builder::*)( TopoDS_Edge & , const opencascade::handle<Poly_Polygon3D> & ) const) static_cast<void (BRep_Builder::*)( TopoDS_Edge & , const opencascade::handle<Poly_Polygon3D> & ) const>(&BRep_Builder::MakeEdge),
             R"#(Makes an Edge with a polygon 3d.)#"  , py::arg("E"),  py::arg("P"))
        .def("MakeEdge",
             (void (BRep_Builder::*)( TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & ) const) static_cast<void (BRep_Builder::*)( TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & ) const>(&BRep_Builder::MakeEdge),
             R"#(makes an Edge polygon on Triangulation.)#"  , py::arg("E"),  py::arg("P"),  py::arg("T"))
        .def("MakeEdge",
             (void (BRep_Builder::*)( TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) const) static_cast<void (BRep_Builder::*)( TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) const>(&BRep_Builder::MakeEdge),
             R"#(makes an Edge polygon on Triangulation.)#"  , py::arg("E"),  py::arg("P"),  py::arg("T"),  py::arg("L"))
        .def("MakeEdge",
             (void (BRep_Builder::*)( TopoDS_Edge & , const opencascade::handle<Geom_Curve> & , const TopLoc_Location & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( TopoDS_Edge & , const opencascade::handle<Geom_Curve> & , const TopLoc_Location & , const Standard_Real ) const>(&BRep_Builder::MakeEdge),
             R"#(Makes an Edge with a curve and a location.)#"  , py::arg("E"),  py::arg("C"),  py::arg("L"),  py::arg("Tol"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Curve> & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Curve> & , const Standard_Real ) const>(&BRep_Builder::UpdateEdge),
             R"#(Sets a 3D curve for the edge. If <C> is a null handle, remove any existing 3d curve.)#"  , py::arg("E"),  py::arg("C"),  py::arg("Tol"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const TopoDS_Face & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const TopoDS_Face & , const Standard_Real ) const>(&BRep_Builder::UpdateEdge),
             R"#(Sets a pcurve for the edge on the face. If <C> is a null handle, remove any existing pcurve.)#"  , py::arg("E"),  py::arg("C"),  py::arg("F"),  py::arg("Tol"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom2d_Curve> & , const TopoDS_Face & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom2d_Curve> & , const TopoDS_Face & , const Standard_Real ) const>(&BRep_Builder::UpdateEdge),
             R"#(Sets pcurves for the edge on the closed face. If <C1> or <C2> is a null handle, remove any existing pcurve.)#"  , py::arg("E"),  py::arg("C1"),  py::arg("C2"),  py::arg("F"),  py::arg("Tol"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_Polygon3D> & ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_Polygon3D> & ) const>(&BRep_Builder::UpdateEdge),
             R"#(Changes an Edge 3D polygon. A null Polygon removes the 3d Polygon.)#"  , py::arg("E"),  py::arg("P"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & ) const>(&BRep_Builder::UpdateEdge),
             R"#(Changes an Edge polygon on Triangulation.)#"  , py::arg("E"),  py::arg("P"),  py::arg("T"))
        .def("UpdateEdge",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & ) const>(&BRep_Builder::UpdateEdge),
             R"#(Changes an Edge polygon on Triangulation.)#"  , py::arg("E"),  py::arg("P1"),  py::arg("P2"),  py::arg("T"))
        .def("Range",
             (void (BRep_Builder::*)( const TopoDS_Edge & , const TopoDS_Face & , const Standard_Real , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Edge & , const TopoDS_Face & , const Standard_Real , const Standard_Real ) const>(&BRep_Builder::Range),
             R"#(Sets the range of the edge on the pcurve on the face.)#"  , py::arg("E"),  py::arg("F"),  py::arg("First"),  py::arg("Last"))
        .def("MakeVertex",
             (void (BRep_Builder::*)( TopoDS_Vertex & ) const) static_cast<void (BRep_Builder::*)( TopoDS_Vertex & ) const>(&BRep_Builder::MakeVertex),
             R"#(Makes an udefined vertex without geometry.)#"  , py::arg("V"))
        .def("MakeVertex",
             (void (BRep_Builder::*)( TopoDS_Vertex & , const gp_Pnt & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( TopoDS_Vertex & , const gp_Pnt & , const Standard_Real ) const>(&BRep_Builder::MakeVertex),
             R"#(Makes a vertex from a 3D point.)#"  , py::arg("V"),  py::arg("P"),  py::arg("Tol"))
        .def("UpdateVertex",
             (void (BRep_Builder::*)( const TopoDS_Vertex & , const Standard_Real , const TopoDS_Edge & , const TopoDS_Face & , const Standard_Real ) const) static_cast<void (BRep_Builder::*)( const TopoDS_Vertex & , const Standard_Real , const TopoDS_Edge & , const TopoDS_Face & , const Standard_Real ) const>(&BRep_Builder::UpdateVertex),
             R"#(Sets the parameter for the vertex on the edge pcurve on the face.)#"  , py::arg("V"),  py::arg("Par"),  py::arg("E"),  py::arg("F"),  py::arg("Tol"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRep_CurveRepresentation ,opencascade::handle<BRep_CurveRepresentation>,Py_BRep_CurveRepresentation , Standard_Transient>>(m.attr("BRep_CurveRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("IsCurve3D",
             (Standard_Boolean (BRep_CurveRepresentation::*)() const) static_cast<Standard_Boolean (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::IsCurve3D),
             R"#(A 3D curve representation.)#" )
        .def("IsCurveOnSurface",
             (Standard_Boolean (BRep_CurveRepresentation::*)() const) static_cast<Standard_Boolean (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::IsCurveOnSurface),
             R"#(A curve in the parametric space of a surface.)#" )
        .def("IsRegularity",
             (Standard_Boolean (BRep_CurveRepresentation::*)() const) static_cast<Standard_Boolean (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::IsRegularity),
             R"#(A continuity between two surfaces.)#" )
        .def("IsCurveOnClosedSurface",
             (Standard_Boolean (BRep_CurveRepresentation::*)() const) static_cast<Standard_Boolean (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::IsCurveOnClosedSurface),
             R"#(A curve with two parametric curves on the same surface.)#" )
        .def("IsCurveOnSurface",
             (Standard_Boolean (BRep_CurveRepresentation::*)( const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const) static_cast<Standard_Boolean (BRep_CurveRepresentation::*)( const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const>(&BRep_CurveRepresentation::IsCurveOnSurface),
             R"#(Is it a curve in the parametric space of <S> with location <L>.)#"  , py::arg("S"),  py::arg("L"))
        .def("IsRegularity",
             (Standard_Boolean (BRep_CurveRepresentation::*)( const opencascade::handle<Geom_Surface> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const TopLoc_Location & ) const) static_cast<Standard_Boolean (BRep_CurveRepresentation::*)( const opencascade::handle<Geom_Surface> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const TopLoc_Location & ) const>(&BRep_CurveRepresentation::IsRegularity),
             R"#(Is it a regularity between <S1> and <S2> with location <L1> and <L2>.)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("L1"),  py::arg("L2"))
        .def("IsPolygon3D",
             (Standard_Boolean (BRep_CurveRepresentation::*)() const) static_cast<Standard_Boolean (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::IsPolygon3D),
             R"#(A 3D polygon representation.)#" )
        .def("IsPolygonOnTriangulation",
             (Standard_Boolean (BRep_CurveRepresentation::*)() const) static_cast<Standard_Boolean (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::IsPolygonOnTriangulation),
             R"#(A representation by an array of nodes on a triangulation.)#" )
        .def("IsPolygonOnTriangulation",
             (Standard_Boolean (BRep_CurveRepresentation::*)( const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) const) static_cast<Standard_Boolean (BRep_CurveRepresentation::*)( const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) const>(&BRep_CurveRepresentation::IsPolygonOnTriangulation),
             R"#(Is it a polygon in the definition of <T> with location <L>.)#"  , py::arg("T"),  py::arg("L"))
        .def("IsPolygonOnClosedTriangulation",
             (Standard_Boolean (BRep_CurveRepresentation::*)() const) static_cast<Standard_Boolean (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::IsPolygonOnClosedTriangulation),
             R"#(A representation by two arrays of nodes on a triangulation.)#" )
        .def("IsPolygonOnSurface",
             (Standard_Boolean (BRep_CurveRepresentation::*)() const) static_cast<Standard_Boolean (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::IsPolygonOnSurface),
             R"#(A polygon in the parametric space of a surface.)#" )
        .def("IsPolygonOnSurface",
             (Standard_Boolean (BRep_CurveRepresentation::*)( const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const) static_cast<Standard_Boolean (BRep_CurveRepresentation::*)( const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const>(&BRep_CurveRepresentation::IsPolygonOnSurface),
             R"#(Is it a polygon in the parametric space of <S> with location <L>.)#"  , py::arg("S"),  py::arg("L"))
        .def("IsPolygonOnClosedSurface",
             (Standard_Boolean (BRep_CurveRepresentation::*)() const) static_cast<Standard_Boolean (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::IsPolygonOnClosedSurface),
             R"#(Two 2D polygon representations in the parametric space of a surface.)#" )
        .def("Location",
             (const TopLoc_Location & (BRep_CurveRepresentation::*)() const) static_cast<const TopLoc_Location & (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::Location),
             R"#(None)#" )
        .def("Location",
             (void (BRep_CurveRepresentation::*)( const TopLoc_Location & ) ) static_cast<void (BRep_CurveRepresentation::*)( const TopLoc_Location & ) >(&BRep_CurveRepresentation::Location),
             R"#(None)#"  , py::arg("L"))
        .def("Curve3D",
             (const opencascade::handle<Geom_Curve> & (BRep_CurveRepresentation::*)() const) static_cast<const opencascade::handle<Geom_Curve> & (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::Curve3D),
             R"#(None)#" )
        .def("Curve3D",
             (void (BRep_CurveRepresentation::*)( const opencascade::handle<Geom_Curve> & ) ) static_cast<void (BRep_CurveRepresentation::*)( const opencascade::handle<Geom_Curve> & ) >(&BRep_CurveRepresentation::Curve3D),
             R"#(None)#"  , py::arg("C"))
        .def("Surface",
             (const opencascade::handle<Geom_Surface> & (BRep_CurveRepresentation::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::Surface),
             R"#(None)#" )
        .def("PCurve",
             (const opencascade::handle<Geom2d_Curve> & (BRep_CurveRepresentation::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::PCurve),
             R"#(None)#" )
        .def("PCurve",
             (void (BRep_CurveRepresentation::*)( const opencascade::handle<Geom2d_Curve> & ) ) static_cast<void (BRep_CurveRepresentation::*)( const opencascade::handle<Geom2d_Curve> & ) >(&BRep_CurveRepresentation::PCurve),
             R"#(None)#"  , py::arg("C"))
        .def("PCurve2",
             (const opencascade::handle<Geom2d_Curve> & (BRep_CurveRepresentation::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::PCurve2),
             R"#(None)#" )
        .def("PCurve2",
             (void (BRep_CurveRepresentation::*)( const opencascade::handle<Geom2d_Curve> & ) ) static_cast<void (BRep_CurveRepresentation::*)( const opencascade::handle<Geom2d_Curve> & ) >(&BRep_CurveRepresentation::PCurve2),
             R"#(None)#"  , py::arg("C"))
        .def("Polygon3D",
             (const opencascade::handle<Poly_Polygon3D> & (BRep_CurveRepresentation::*)() const) static_cast<const opencascade::handle<Poly_Polygon3D> & (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::Polygon3D),
             R"#(None)#" )
        .def("Polygon3D",
             (void (BRep_CurveRepresentation::*)( const opencascade::handle<Poly_Polygon3D> & ) ) static_cast<void (BRep_CurveRepresentation::*)( const opencascade::handle<Poly_Polygon3D> & ) >(&BRep_CurveRepresentation::Polygon3D),
             R"#(None)#"  , py::arg("P"))
        .def("Polygon",
             (const opencascade::handle<Poly_Polygon2D> & (BRep_CurveRepresentation::*)() const) static_cast<const opencascade::handle<Poly_Polygon2D> & (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::Polygon),
             R"#(None)#" )
        .def("Polygon",
             (void (BRep_CurveRepresentation::*)( const opencascade::handle<Poly_Polygon2D> & ) ) static_cast<void (BRep_CurveRepresentation::*)( const opencascade::handle<Poly_Polygon2D> & ) >(&BRep_CurveRepresentation::Polygon),
             R"#(None)#"  , py::arg("P"))
        .def("Polygon2",
             (const opencascade::handle<Poly_Polygon2D> & (BRep_CurveRepresentation::*)() const) static_cast<const opencascade::handle<Poly_Polygon2D> & (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::Polygon2),
             R"#(None)#" )
        .def("Polygon2",
             (void (BRep_CurveRepresentation::*)( const opencascade::handle<Poly_Polygon2D> & ) ) static_cast<void (BRep_CurveRepresentation::*)( const opencascade::handle<Poly_Polygon2D> & ) >(&BRep_CurveRepresentation::Polygon2),
             R"#(None)#"  , py::arg("P"))
        .def("Triangulation",
             (const opencascade::handle<Poly_Triangulation> & (BRep_CurveRepresentation::*)() const) static_cast<const opencascade::handle<Poly_Triangulation> & (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::Triangulation),
             R"#(None)#" )
        .def("PolygonOnTriangulation",
             (const opencascade::handle<Poly_PolygonOnTriangulation> & (BRep_CurveRepresentation::*)() const) static_cast<const opencascade::handle<Poly_PolygonOnTriangulation> & (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::PolygonOnTriangulation),
             R"#(None)#" )
        .def("PolygonOnTriangulation",
             (void (BRep_CurveRepresentation::*)( const opencascade::handle<Poly_PolygonOnTriangulation> & ) ) static_cast<void (BRep_CurveRepresentation::*)( const opencascade::handle<Poly_PolygonOnTriangulation> & ) >(&BRep_CurveRepresentation::PolygonOnTriangulation),
             R"#(None)#"  , py::arg("P"))
        .def("PolygonOnTriangulation2",
             (const opencascade::handle<Poly_PolygonOnTriangulation> & (BRep_CurveRepresentation::*)() const) static_cast<const opencascade::handle<Poly_PolygonOnTriangulation> & (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::PolygonOnTriangulation2),
             R"#(None)#" )
        .def("PolygonOnTriangulation2",
             (void (BRep_CurveRepresentation::*)( const opencascade::handle<Poly_PolygonOnTriangulation> & ) ) static_cast<void (BRep_CurveRepresentation::*)( const opencascade::handle<Poly_PolygonOnTriangulation> & ) >(&BRep_CurveRepresentation::PolygonOnTriangulation2),
             R"#(None)#"  , py::arg("P2"))
        .def("Surface2",
             (const opencascade::handle<Geom_Surface> & (BRep_CurveRepresentation::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::Surface2),
             R"#(None)#" )
        .def("Location2",
             (const TopLoc_Location & (BRep_CurveRepresentation::*)() const) static_cast<const TopLoc_Location & (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::Location2),
             R"#(None)#" )
        .def("Continuity",
             (const GeomAbs_Shape & (BRep_CurveRepresentation::*)() const) static_cast<const GeomAbs_Shape & (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::Continuity),
             R"#(None)#" )
        .def("Continuity",
             (void (BRep_CurveRepresentation::*)( const GeomAbs_Shape ) ) static_cast<void (BRep_CurveRepresentation::*)( const GeomAbs_Shape ) >(&BRep_CurveRepresentation::Continuity),
             R"#(None)#"  , py::arg("C"))
        .def("Copy",
             (opencascade::handle<BRep_CurveRepresentation> (BRep_CurveRepresentation::*)() const) static_cast<opencascade::handle<BRep_CurveRepresentation> (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::Copy),
             R"#(Return a copy of this representation.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRep_CurveRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::DynamicType),
             R"#(None)#" )
        .def("Location",
             (const TopLoc_Location & (BRep_CurveRepresentation::*)() const) static_cast<const TopLoc_Location & (BRep_CurveRepresentation::*)() const>(&BRep_CurveRepresentation::Location),
             R"#(None)#" )
        .def("Location",
             (void (BRep_CurveRepresentation::*)( const TopLoc_Location & ) ) static_cast<void (BRep_CurveRepresentation::*)( const TopLoc_Location & ) >(&BRep_CurveRepresentation::Location),
             R"#(None)#"  , py::arg("L"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRep_CurveRepresentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRep_CurveRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRep_PointRepresentation ,opencascade::handle<BRep_PointRepresentation> , Standard_Transient>>(m.attr("BRep_PointRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("IsPointOnCurve",
             (Standard_Boolean (BRep_PointRepresentation::*)() const) static_cast<Standard_Boolean (BRep_PointRepresentation::*)() const>(&BRep_PointRepresentation::IsPointOnCurve),
             R"#(A point on a 3d curve.)#" )
        .def("IsPointOnCurveOnSurface",
             (Standard_Boolean (BRep_PointRepresentation::*)() const) static_cast<Standard_Boolean (BRep_PointRepresentation::*)() const>(&BRep_PointRepresentation::IsPointOnCurveOnSurface),
             R"#(A point on a 2d curve on a surface.)#" )
        .def("IsPointOnSurface",
             (Standard_Boolean (BRep_PointRepresentation::*)() const) static_cast<Standard_Boolean (BRep_PointRepresentation::*)() const>(&BRep_PointRepresentation::IsPointOnSurface),
             R"#(A point on a surface.)#" )
        .def("IsPointOnCurve",
             (Standard_Boolean (BRep_PointRepresentation::*)( const opencascade::handle<Geom_Curve> & , const TopLoc_Location & ) const) static_cast<Standard_Boolean (BRep_PointRepresentation::*)( const opencascade::handle<Geom_Curve> & , const TopLoc_Location & ) const>(&BRep_PointRepresentation::IsPointOnCurve),
             R"#(A point on the curve <C>.)#"  , py::arg("C"),  py::arg("L"))
        .def("IsPointOnCurveOnSurface",
             (Standard_Boolean (BRep_PointRepresentation::*)( const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const) static_cast<Standard_Boolean (BRep_PointRepresentation::*)( const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const>(&BRep_PointRepresentation::IsPointOnCurveOnSurface),
             R"#(A point on the 2d curve <PC> on the surface <S>.)#"  , py::arg("PC"),  py::arg("S"),  py::arg("L"))
        .def("IsPointOnSurface",
             (Standard_Boolean (BRep_PointRepresentation::*)( const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const) static_cast<Standard_Boolean (BRep_PointRepresentation::*)( const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const>(&BRep_PointRepresentation::IsPointOnSurface),
             R"#(A point on the surface <S>.)#"  , py::arg("S"),  py::arg("L"))
        .def("Location",
             (const TopLoc_Location & (BRep_PointRepresentation::*)() const) static_cast<const TopLoc_Location & (BRep_PointRepresentation::*)() const>(&BRep_PointRepresentation::Location),
             R"#(None)#" )
        .def("Location",
             (void (BRep_PointRepresentation::*)( const TopLoc_Location & ) ) static_cast<void (BRep_PointRepresentation::*)( const TopLoc_Location & ) >(&BRep_PointRepresentation::Location),
             R"#(None)#"  , py::arg("L"))
        .def("Parameter",
             (Standard_Real (BRep_PointRepresentation::*)() const) static_cast<Standard_Real (BRep_PointRepresentation::*)() const>(&BRep_PointRepresentation::Parameter),
             R"#(None)#" )
        .def("Parameter",
             (void (BRep_PointRepresentation::*)( const Standard_Real ) ) static_cast<void (BRep_PointRepresentation::*)( const Standard_Real ) >(&BRep_PointRepresentation::Parameter),
             R"#(None)#"  , py::arg("P"))
        .def("Parameter2",
             (Standard_Real (BRep_PointRepresentation::*)() const) static_cast<Standard_Real (BRep_PointRepresentation::*)() const>(&BRep_PointRepresentation::Parameter2),
             R"#(None)#" )
        .def("Parameter2",
             (void (BRep_PointRepresentation::*)( const Standard_Real ) ) static_cast<void (BRep_PointRepresentation::*)( const Standard_Real ) >(&BRep_PointRepresentation::Parameter2),
             R"#(None)#"  , py::arg("P"))
        .def("Curve",
             (const opencascade::handle<Geom_Curve> & (BRep_PointRepresentation::*)() const) static_cast<const opencascade::handle<Geom_Curve> & (BRep_PointRepresentation::*)() const>(&BRep_PointRepresentation::Curve),
             R"#(None)#" )
        .def("Curve",
             (void (BRep_PointRepresentation::*)( const opencascade::handle<Geom_Curve> & ) ) static_cast<void (BRep_PointRepresentation::*)( const opencascade::handle<Geom_Curve> & ) >(&BRep_PointRepresentation::Curve),
             R"#(None)#"  , py::arg("C"))
        .def("PCurve",
             (const opencascade::handle<Geom2d_Curve> & (BRep_PointRepresentation::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (BRep_PointRepresentation::*)() const>(&BRep_PointRepresentation::PCurve),
             R"#(None)#" )
        .def("PCurve",
             (void (BRep_PointRepresentation::*)( const opencascade::handle<Geom2d_Curve> & ) ) static_cast<void (BRep_PointRepresentation::*)( const opencascade::handle<Geom2d_Curve> & ) >(&BRep_PointRepresentation::PCurve),
             R"#(None)#"  , py::arg("C"))
        .def("Surface",
             (const opencascade::handle<Geom_Surface> & (BRep_PointRepresentation::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (BRep_PointRepresentation::*)() const>(&BRep_PointRepresentation::Surface),
             R"#(None)#" )
        .def("Surface",
             (void (BRep_PointRepresentation::*)( const opencascade::handle<Geom_Surface> & ) ) static_cast<void (BRep_PointRepresentation::*)( const opencascade::handle<Geom_Surface> & ) >(&BRep_PointRepresentation::Surface),
             R"#(None)#"  , py::arg("S"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRep_PointRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRep_PointRepresentation::*)() const>(&BRep_PointRepresentation::DynamicType),
             R"#(None)#" )
        .def("Location",
             (const TopLoc_Location & (BRep_PointRepresentation::*)() const) static_cast<const TopLoc_Location & (BRep_PointRepresentation::*)() const>(&BRep_PointRepresentation::Location),
             R"#(None)#" )
        .def("Location",
             (void (BRep_PointRepresentation::*)( const TopLoc_Location & ) ) static_cast<void (BRep_PointRepresentation::*)( const TopLoc_Location & ) >(&BRep_PointRepresentation::Location),
             R"#(None)#"  , py::arg("L"))
        .def("Parameter",
             (Standard_Real (BRep_PointRepresentation::*)() const) static_cast<Standard_Real (BRep_PointRepresentation::*)() const>(&BRep_PointRepresentation::Parameter),
             R"#(None)#" )
        .def("Parameter",
             (void (BRep_PointRepresentation::*)( const Standard_Real ) ) static_cast<void (BRep_PointRepresentation::*)( const Standard_Real ) >(&BRep_PointRepresentation::Parameter),
             R"#(None)#"  , py::arg("P"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRep_PointRepresentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRep_PointRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRep_TEdge ,opencascade::handle<BRep_TEdge> , TopoDS_TEdge>>(m.attr("BRep_TEdge"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Tolerance",
             (Standard_Real (BRep_TEdge::*)() const) static_cast<Standard_Real (BRep_TEdge::*)() const>(&BRep_TEdge::Tolerance),
             R"#(None)#" )
        .def("Tolerance",
             (void (BRep_TEdge::*)( const Standard_Real ) ) static_cast<void (BRep_TEdge::*)( const Standard_Real ) >(&BRep_TEdge::Tolerance),
             R"#(None)#"  , py::arg("T"))
        .def("UpdateTolerance",
             (void (BRep_TEdge::*)( const Standard_Real ) ) static_cast<void (BRep_TEdge::*)( const Standard_Real ) >(&BRep_TEdge::UpdateTolerance),
             R"#(Sets the tolerance to the max of <T> and the current tolerance.)#"  , py::arg("T"))
        .def("SameParameter",
             (Standard_Boolean (BRep_TEdge::*)() const) static_cast<Standard_Boolean (BRep_TEdge::*)() const>(&BRep_TEdge::SameParameter),
             R"#(None)#" )
        .def("SameParameter",
             (void (BRep_TEdge::*)( const Standard_Boolean ) ) static_cast<void (BRep_TEdge::*)( const Standard_Boolean ) >(&BRep_TEdge::SameParameter),
             R"#(None)#"  , py::arg("S"))
        .def("SameRange",
             (Standard_Boolean (BRep_TEdge::*)() const) static_cast<Standard_Boolean (BRep_TEdge::*)() const>(&BRep_TEdge::SameRange),
             R"#(None)#" )
        .def("SameRange",
             (void (BRep_TEdge::*)( const Standard_Boolean ) ) static_cast<void (BRep_TEdge::*)( const Standard_Boolean ) >(&BRep_TEdge::SameRange),
             R"#(None)#"  , py::arg("S"))
        .def("Degenerated",
             (Standard_Boolean (BRep_TEdge::*)() const) static_cast<Standard_Boolean (BRep_TEdge::*)() const>(&BRep_TEdge::Degenerated),
             R"#(None)#" )
        .def("Degenerated",
             (void (BRep_TEdge::*)( const Standard_Boolean ) ) static_cast<void (BRep_TEdge::*)( const Standard_Boolean ) >(&BRep_TEdge::Degenerated),
             R"#(None)#"  , py::arg("S"))
        .def("Curves",
             (const BRep_ListOfCurveRepresentation & (BRep_TEdge::*)() const) static_cast<const BRep_ListOfCurveRepresentation & (BRep_TEdge::*)() const>(&BRep_TEdge::Curves),
             R"#(None)#" )
        .def("ChangeCurves",
             (BRep_ListOfCurveRepresentation & (BRep_TEdge::*)() ) static_cast<BRep_ListOfCurveRepresentation & (BRep_TEdge::*)() >(&BRep_TEdge::ChangeCurves),
             R"#(None)#" )
        .def("EmptyCopy",
             (opencascade::handle<TopoDS_TShape> (BRep_TEdge::*)() const) static_cast<opencascade::handle<TopoDS_TShape> (BRep_TEdge::*)() const>(&BRep_TEdge::EmptyCopy),
             R"#(Returns a copy of the TShape with no sub-shapes.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRep_TEdge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRep_TEdge::*)() const>(&BRep_TEdge::DynamicType),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_Real (BRep_TEdge::*)() const) static_cast<Standard_Real (BRep_TEdge::*)() const>(&BRep_TEdge::Tolerance),
             R"#(None)#" )
        .def("Tolerance",
             (void (BRep_TEdge::*)( const Standard_Real ) ) static_cast<void (BRep_TEdge::*)( const Standard_Real ) >(&BRep_TEdge::Tolerance),
             R"#(None)#"  , py::arg("T"))
        .def("UpdateTolerance",
             (void (BRep_TEdge::*)( const Standard_Real ) ) static_cast<void (BRep_TEdge::*)( const Standard_Real ) >(&BRep_TEdge::UpdateTolerance),
             R"#(Sets the tolerance to the max of <T> and the current tolerance.)#"  , py::arg("T"))
        .def("Curves",
             (const BRep_ListOfCurveRepresentation & (BRep_TEdge::*)() const) static_cast<const BRep_ListOfCurveRepresentation & (BRep_TEdge::*)() const>(&BRep_TEdge::Curves),
             R"#(None)#" )
        .def("ChangeCurves",
             (BRep_ListOfCurveRepresentation & (BRep_TEdge::*)() ) static_cast<BRep_ListOfCurveRepresentation & (BRep_TEdge::*)() >(&BRep_TEdge::ChangeCurves),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRep_TEdge::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRep_TEdge::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRep_TFace ,opencascade::handle<BRep_TFace> , TopoDS_TFace>>(m.attr("BRep_TFace"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Surface",
             (const opencascade::handle<Geom_Surface> & (BRep_TFace::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (BRep_TFace::*)() const>(&BRep_TFace::Surface),
             R"#(None)#" )
        .def("Triangulation",
             (const opencascade::handle<Poly_Triangulation> & (BRep_TFace::*)() const) static_cast<const opencascade::handle<Poly_Triangulation> & (BRep_TFace::*)() const>(&BRep_TFace::Triangulation),
             R"#(None)#" )
        .def("Location",
             (const TopLoc_Location & (BRep_TFace::*)() const) static_cast<const TopLoc_Location & (BRep_TFace::*)() const>(&BRep_TFace::Location),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_Real (BRep_TFace::*)() const) static_cast<Standard_Real (BRep_TFace::*)() const>(&BRep_TFace::Tolerance),
             R"#(None)#" )
        .def("Surface",
             (void (BRep_TFace::*)( const opencascade::handle<Geom_Surface> & ) ) static_cast<void (BRep_TFace::*)( const opencascade::handle<Geom_Surface> & ) >(&BRep_TFace::Surface),
             R"#(None)#"  , py::arg("S"))
        .def("Triangulation",
             (void (BRep_TFace::*)( const opencascade::handle<Poly_Triangulation> & ) ) static_cast<void (BRep_TFace::*)( const opencascade::handle<Poly_Triangulation> & ) >(&BRep_TFace::Triangulation),
             R"#(None)#"  , py::arg("T"))
        .def("Location",
             (void (BRep_TFace::*)( const TopLoc_Location & ) ) static_cast<void (BRep_TFace::*)( const TopLoc_Location & ) >(&BRep_TFace::Location),
             R"#(None)#"  , py::arg("L"))
        .def("Tolerance",
             (void (BRep_TFace::*)( const Standard_Real ) ) static_cast<void (BRep_TFace::*)( const Standard_Real ) >(&BRep_TFace::Tolerance),
             R"#(None)#"  , py::arg("T"))
        .def("NaturalRestriction",
             (Standard_Boolean (BRep_TFace::*)() const) static_cast<Standard_Boolean (BRep_TFace::*)() const>(&BRep_TFace::NaturalRestriction),
             R"#(None)#" )
        .def("NaturalRestriction",
             (void (BRep_TFace::*)( const Standard_Boolean ) ) static_cast<void (BRep_TFace::*)( const Standard_Boolean ) >(&BRep_TFace::NaturalRestriction),
             R"#(None)#"  , py::arg("N"))
        .def("EmptyCopy",
             (opencascade::handle<TopoDS_TShape> (BRep_TFace::*)() const) static_cast<opencascade::handle<TopoDS_TShape> (BRep_TFace::*)() const>(&BRep_TFace::EmptyCopy),
             R"#(Returns a copy of the TShape with no sub-shapes. The new Face has no triangulation.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRep_TFace::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRep_TFace::*)() const>(&BRep_TFace::DynamicType),
             R"#(None)#" )
        .def("Surface",
             (const opencascade::handle<Geom_Surface> & (BRep_TFace::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (BRep_TFace::*)() const>(&BRep_TFace::Surface),
             R"#(None)#" )
        .def("Triangulation",
             (const opencascade::handle<Poly_Triangulation> & (BRep_TFace::*)() const) static_cast<const opencascade::handle<Poly_Triangulation> & (BRep_TFace::*)() const>(&BRep_TFace::Triangulation),
             R"#(None)#" )
        .def("Location",
             (const TopLoc_Location & (BRep_TFace::*)() const) static_cast<const TopLoc_Location & (BRep_TFace::*)() const>(&BRep_TFace::Location),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_Real (BRep_TFace::*)() const) static_cast<Standard_Real (BRep_TFace::*)() const>(&BRep_TFace::Tolerance),
             R"#(None)#" )
        .def("Surface",
             (void (BRep_TFace::*)( const opencascade::handle<Geom_Surface> & ) ) static_cast<void (BRep_TFace::*)( const opencascade::handle<Geom_Surface> & ) >(&BRep_TFace::Surface),
             R"#(None)#"  , py::arg("S"))
        .def("Triangulation",
             (void (BRep_TFace::*)( const opencascade::handle<Poly_Triangulation> & ) ) static_cast<void (BRep_TFace::*)( const opencascade::handle<Poly_Triangulation> & ) >(&BRep_TFace::Triangulation),
             R"#(None)#"  , py::arg("T"))
        .def("Location",
             (void (BRep_TFace::*)( const TopLoc_Location & ) ) static_cast<void (BRep_TFace::*)( const TopLoc_Location & ) >(&BRep_TFace::Location),
             R"#(None)#"  , py::arg("L"))
        .def("Tolerance",
             (void (BRep_TFace::*)( const Standard_Real ) ) static_cast<void (BRep_TFace::*)( const Standard_Real ) >(&BRep_TFace::Tolerance),
             R"#(None)#"  , py::arg("T"))
        .def("NaturalRestriction",
             (Standard_Boolean (BRep_TFace::*)() const) static_cast<Standard_Boolean (BRep_TFace::*)() const>(&BRep_TFace::NaturalRestriction),
             R"#(None)#" )
        .def("NaturalRestriction",
             (void (BRep_TFace::*)( const Standard_Boolean ) ) static_cast<void (BRep_TFace::*)( const Standard_Boolean ) >(&BRep_TFace::NaturalRestriction),
             R"#(None)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRep_TFace::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRep_TFace::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRep_TVertex ,opencascade::handle<BRep_TVertex> , TopoDS_TVertex>>(m.attr("BRep_TVertex"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Tolerance",
             (Standard_Real (BRep_TVertex::*)() const) static_cast<Standard_Real (BRep_TVertex::*)() const>(&BRep_TVertex::Tolerance),
             R"#(None)#" )
        .def("Tolerance",
             (void (BRep_TVertex::*)( const Standard_Real ) ) static_cast<void (BRep_TVertex::*)( const Standard_Real ) >(&BRep_TVertex::Tolerance),
             R"#(None)#"  , py::arg("T"))
        .def("UpdateTolerance",
             (void (BRep_TVertex::*)( const Standard_Real ) ) static_cast<void (BRep_TVertex::*)( const Standard_Real ) >(&BRep_TVertex::UpdateTolerance),
             R"#(Sets the tolerance to the max of <T> and the current tolerance.)#"  , py::arg("T"))
        .def("Pnt",
             (const gp_Pnt & (BRep_TVertex::*)() const) static_cast<const gp_Pnt & (BRep_TVertex::*)() const>(&BRep_TVertex::Pnt),
             R"#(None)#" )
        .def("Pnt",
             (void (BRep_TVertex::*)( const gp_Pnt & ) ) static_cast<void (BRep_TVertex::*)( const gp_Pnt & ) >(&BRep_TVertex::Pnt),
             R"#(None)#"  , py::arg("P"))
        .def("Points",
             (const BRep_ListOfPointRepresentation & (BRep_TVertex::*)() const) static_cast<const BRep_ListOfPointRepresentation & (BRep_TVertex::*)() const>(&BRep_TVertex::Points),
             R"#(None)#" )
        .def("ChangePoints",
             (BRep_ListOfPointRepresentation & (BRep_TVertex::*)() ) static_cast<BRep_ListOfPointRepresentation & (BRep_TVertex::*)() >(&BRep_TVertex::ChangePoints),
             R"#(None)#" )
        .def("EmptyCopy",
             (opencascade::handle<TopoDS_TShape> (BRep_TVertex::*)() const) static_cast<opencascade::handle<TopoDS_TShape> (BRep_TVertex::*)() const>(&BRep_TVertex::EmptyCopy),
             R"#(Returns a copy of the TShape with no sub-shapes.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRep_TVertex::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRep_TVertex::*)() const>(&BRep_TVertex::DynamicType),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_Real (BRep_TVertex::*)() const) static_cast<Standard_Real (BRep_TVertex::*)() const>(&BRep_TVertex::Tolerance),
             R"#(None)#" )
        .def("Tolerance",
             (void (BRep_TVertex::*)( const Standard_Real ) ) static_cast<void (BRep_TVertex::*)( const Standard_Real ) >(&BRep_TVertex::Tolerance),
             R"#(None)#"  , py::arg("T"))
        .def("UpdateTolerance",
             (void (BRep_TVertex::*)( const Standard_Real ) ) static_cast<void (BRep_TVertex::*)( const Standard_Real ) >(&BRep_TVertex::UpdateTolerance),
             R"#(Sets the tolerance to the max of <T> and the current tolerance.)#"  , py::arg("T"))
        .def("Pnt",
             (const gp_Pnt & (BRep_TVertex::*)() const) static_cast<const gp_Pnt & (BRep_TVertex::*)() const>(&BRep_TVertex::Pnt),
             R"#(None)#" )
        .def("Pnt",
             (void (BRep_TVertex::*)( const gp_Pnt & ) ) static_cast<void (BRep_TVertex::*)( const gp_Pnt & ) >(&BRep_TVertex::Pnt),
             R"#(None)#"  , py::arg("P"))
        .def("Points",
             (const BRep_ListOfPointRepresentation & (BRep_TVertex::*)() const) static_cast<const BRep_ListOfPointRepresentation & (BRep_TVertex::*)() const>(&BRep_TVertex::Points),
             R"#(None)#" )
        .def("ChangePoints",
             (BRep_ListOfPointRepresentation & (BRep_TVertex::*)() ) static_cast<BRep_ListOfPointRepresentation & (BRep_TVertex::*)() >(&BRep_TVertex::ChangePoints),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRep_TVertex::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRep_TVertex::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BRep_Tool , shared_ptr<BRep_Tool>>(m,"BRep_Tool");

    static_cast<py::class_<BRep_Tool , shared_ptr<BRep_Tool> >>(m.attr("BRep_Tool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("IsClosed_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & ) >(&BRep_Tool::IsClosed),
                    R"#(If S is Shell, returns True if it has no free boundaries (edges). If S is Wire, returns True if it has no free ends (vertices). (Internal and External sub-shepes are ignored in these checks) If S is Edge, returns True if its vertices are the same. For other shape types returns S.Closed().)#"  , py::arg("S"))
        .def_static("Surface_s",
                    (const opencascade::handle<Geom_Surface> & (*)( const TopoDS_Face & , TopLoc_Location & ) ) static_cast<const opencascade::handle<Geom_Surface> & (*)( const TopoDS_Face & , TopLoc_Location & ) >(&BRep_Tool::Surface),
                    R"#(Returns the geometric surface of the face. Returns in <L> the location for the surface.)#"  , py::arg("F"),  py::arg("L"))
        .def_static("Surface_s",
                    (opencascade::handle<Geom_Surface> (*)( const TopoDS_Face & ) ) static_cast<opencascade::handle<Geom_Surface> (*)( const TopoDS_Face & ) >(&BRep_Tool::Surface),
                    R"#(Returns the geometric surface of the face. It can be a copy if there is a Location.)#"  , py::arg("F"))
        .def_static("Triangulation_s",
                    (const opencascade::handle<Poly_Triangulation> & (*)( const TopoDS_Face & , TopLoc_Location & ) ) static_cast<const opencascade::handle<Poly_Triangulation> & (*)( const TopoDS_Face & , TopLoc_Location & ) >(&BRep_Tool::Triangulation),
                    R"#(Returns the Triangulation of the face. It is a null handle if there is no triangulation.)#"  , py::arg("F"),  py::arg("L"))
        .def_static("Tolerance_s",
                    (Standard_Real (*)( const TopoDS_Face & ) ) static_cast<Standard_Real (*)( const TopoDS_Face & ) >(&BRep_Tool::Tolerance),
                    R"#(Returns the tolerance of the face.)#"  , py::arg("F"))
        .def_static("NaturalRestriction_s",
                    (Standard_Boolean (*)( const TopoDS_Face & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & ) >(&BRep_Tool::NaturalRestriction),
                    R"#(Returns the NaturalRestriction flag of the face.)#"  , py::arg("F"))
        .def_static("IsGeometric_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ) >(&BRep_Tool::IsGeometric),
                    R"#(Returns True if <E> is a 3d curve or a curve on surface.)#"  , py::arg("E"))
        .def_static("Curve_s",
                    (const opencascade::handle<Geom_Curve> & (*)( const TopoDS_Edge & , TopLoc_Location & , Standard_Real & , Standard_Real & ) ) static_cast<const opencascade::handle<Geom_Curve> & (*)( const TopoDS_Edge & , TopLoc_Location & , Standard_Real & , Standard_Real & ) >(&BRep_Tool::Curve),
                    R"#(Returns the 3D curve of the edge. May be a Null handle. Returns in <L> the location for the curve. In <First> and <Last> the parameter range.)#"  , py::arg("E"),  py::arg("L"),  py::arg("First"),  py::arg("Last"))
        .def_static("Curve_s",
                    (opencascade::handle<Geom_Curve> (*)( const TopoDS_Edge & , Standard_Real & , Standard_Real & ) ) static_cast<opencascade::handle<Geom_Curve> (*)( const TopoDS_Edge & , Standard_Real & , Standard_Real & ) >(&BRep_Tool::Curve),
                    R"#(Returns the 3D curve of the edge. May be a Null handle. In <First> and <Last> the parameter range. It can be a copy if there is a Location.)#"  , py::arg("E"),  py::arg("First"),  py::arg("Last"))
        .def_static("Polygon3D_s",
                    (const opencascade::handle<Poly_Polygon3D> & (*)( const TopoDS_Edge & , TopLoc_Location & ) ) static_cast<const opencascade::handle<Poly_Polygon3D> & (*)( const TopoDS_Edge & , TopLoc_Location & ) >(&BRep_Tool::Polygon3D),
                    R"#(Returns the 3D polygon of the edge. May be a Null handle. Returns in <L> the location for the polygon.)#"  , py::arg("E"),  py::arg("L"))
        .def_static("CurveOnSurface_s",
                    (opencascade::handle<Geom2d_Curve> (*)( const TopoDS_Edge & , const TopoDS_Face & , Standard_Real & , Standard_Real & , Standard_Boolean * ) ) static_cast<opencascade::handle<Geom2d_Curve> (*)( const TopoDS_Edge & , const TopoDS_Face & , Standard_Real & , Standard_Real & , Standard_Boolean * ) >(&BRep_Tool::CurveOnSurface),
                    R"#(Returns the curve associated to the edge in the parametric space of the face. Returns a NULL handle if this curve does not exist. Returns in <First> and <Last> the parameter range. If the surface is a plane the curve can be not stored but created a new each time. The flag pointed by <theIsStored> serves to indicate storage status. It is valued if the pointer is non-null.)#"  , py::arg("E"),  py::arg("F"),  py::arg("First"),  py::arg("Last"),  py::arg("theIsStored")=static_cast<Standard_Boolean *>(NULL))
        .def_static("CurveOnSurface_s",
                    (opencascade::handle<Geom2d_Curve> (*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , Standard_Real & , Standard_Real & , Standard_Boolean * ) ) static_cast<opencascade::handle<Geom2d_Curve> (*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , Standard_Real & , Standard_Real & , Standard_Boolean * ) >(&BRep_Tool::CurveOnSurface),
                    R"#(Returns the curve associated to the edge in the parametric space of the surface. Returns a NULL handle if this curve does not exist. Returns in <First> and <Last> the parameter range. If the surface is a plane the curve can be not stored but created a new each time. The flag pointed by <theIsStored> serves to indicate storage status. It is valued if the pointer is non-null.)#"  , py::arg("E"),  py::arg("S"),  py::arg("L"),  py::arg("First"),  py::arg("Last"),  py::arg("theIsStored")=static_cast<Standard_Boolean *>(NULL))
        .def_static("CurveOnPlane_s",
                    (opencascade::handle<Geom2d_Curve> (*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , Standard_Real & , Standard_Real & ) ) static_cast<opencascade::handle<Geom2d_Curve> (*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , Standard_Real & , Standard_Real & ) >(&BRep_Tool::CurveOnPlane),
                    R"#(For the planar surface builds the 2d curve for the edge by projection of the edge on plane. Returns a NULL handle if the surface is not planar or the projection failed.)#"  , py::arg("E"),  py::arg("S"),  py::arg("L"),  py::arg("First"),  py::arg("Last"))
        .def_static("PolygonOnSurface_s",
                    (opencascade::handle<Poly_Polygon2D> (*)( const TopoDS_Edge & , const TopoDS_Face & ) ) static_cast<opencascade::handle<Poly_Polygon2D> (*)( const TopoDS_Edge & , const TopoDS_Face & ) >(&BRep_Tool::PolygonOnSurface),
                    R"#(Returns the polygon associated to the edge in the parametric space of the face. Returns a NULL handle if this polygon does not exist.)#"  , py::arg("E"),  py::arg("F"))
        .def_static("PolygonOnSurface_s",
                    (opencascade::handle<Poly_Polygon2D> (*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) ) static_cast<opencascade::handle<Poly_Polygon2D> (*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) >(&BRep_Tool::PolygonOnSurface),
                    R"#(Returns the polygon associated to the edge in the parametric space of the surface. Returns a NULL handle if this polygon does not exist.)#"  , py::arg("E"),  py::arg("S"),  py::arg("L"))
        .def_static("PolygonOnSurface_s",
                    (void (*)( const TopoDS_Edge & , opencascade::handle<Poly_Polygon2D> & , opencascade::handle<Geom_Surface> & , TopLoc_Location & ) ) static_cast<void (*)( const TopoDS_Edge & , opencascade::handle<Poly_Polygon2D> & , opencascade::handle<Geom_Surface> & , TopLoc_Location & ) >(&BRep_Tool::PolygonOnSurface),
                    R"#(Returns in <C>, <S>, <L> a 2d curve, a surface and a location for the edge <E>. <C> and <S> are null if the edge has no polygon on surface.)#"  , py::arg("E"),  py::arg("C"),  py::arg("S"),  py::arg("L"))
        .def_static("PolygonOnSurface_s",
                    (void (*)( const TopoDS_Edge & , opencascade::handle<Poly_Polygon2D> & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , const Standard_Integer ) ) static_cast<void (*)( const TopoDS_Edge & , opencascade::handle<Poly_Polygon2D> & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , const Standard_Integer ) >(&BRep_Tool::PolygonOnSurface),
                    R"#(Returns in <C>, <S>, <L> the 2d curve, the surface and the location for the edge <E> of rank <Index>. <C> and <S> are null if the index is out of range.)#"  , py::arg("E"),  py::arg("C"),  py::arg("S"),  py::arg("L"),  py::arg("Index"))
        .def_static("PolygonOnTriangulation_s",
                    (const opencascade::handle<Poly_PolygonOnTriangulation> & (*)( const TopoDS_Edge & , const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) ) static_cast<const opencascade::handle<Poly_PolygonOnTriangulation> & (*)( const TopoDS_Edge & , const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) >(&BRep_Tool::PolygonOnTriangulation),
                    R"#(Returns the polygon associated to the edge in the parametric space of the face. Returns a NULL handle if this polygon does not exist.)#"  , py::arg("E"),  py::arg("T"),  py::arg("L"))
        .def_static("PolygonOnTriangulation_s",
                    (void (*)( const TopoDS_Edge & , opencascade::handle<Poly_PolygonOnTriangulation> & , opencascade::handle<Poly_Triangulation> & , TopLoc_Location & ) ) static_cast<void (*)( const TopoDS_Edge & , opencascade::handle<Poly_PolygonOnTriangulation> & , opencascade::handle<Poly_Triangulation> & , TopLoc_Location & ) >(&BRep_Tool::PolygonOnTriangulation),
                    R"#(Returns in <P>, <T>, <L> a polygon on triangulation, a triangulation and a location for the edge <E>. <P> and <T> are null if the edge has no polygon on triangulation.)#"  , py::arg("E"),  py::arg("P"),  py::arg("T"),  py::arg("L"))
        .def_static("PolygonOnTriangulation_s",
                    (void (*)( const TopoDS_Edge & , opencascade::handle<Poly_PolygonOnTriangulation> & , opencascade::handle<Poly_Triangulation> & , TopLoc_Location & , const Standard_Integer ) ) static_cast<void (*)( const TopoDS_Edge & , opencascade::handle<Poly_PolygonOnTriangulation> & , opencascade::handle<Poly_Triangulation> & , TopLoc_Location & , const Standard_Integer ) >(&BRep_Tool::PolygonOnTriangulation),
                    R"#(Returns in <P>, <T>, <L> a polygon on triangulation, a triangulation and a location for the edge <E> for the range index. <C> and <S> are null if the edge has no polygon on triangulation.)#"  , py::arg("E"),  py::arg("P"),  py::arg("T"),  py::arg("L"),  py::arg("Index"))
        .def_static("IsClosed_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & ) >(&BRep_Tool::IsClosed),
                    R"#(Returns True if <E> has two PCurves in the parametric space of <F>. i.e. <F> is on a closed surface and <E> is on the closing curve.)#"  , py::arg("E"),  py::arg("F"))
        .def_static("IsClosed_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) >(&BRep_Tool::IsClosed),
                    R"#(Returns True if <E> has two PCurves in the parametric space of <S>. i.e. <S> is a closed surface and <E> is on the closing curve.)#"  , py::arg("E"),  py::arg("S"),  py::arg("L"))
        .def_static("IsClosed_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & , const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) >(&BRep_Tool::IsClosed),
                    R"#(Returns True if <E> has two arrays of indices in the triangulation <T>.)#"  , py::arg("E"),  py::arg("T"),  py::arg("L"))
        .def_static("Tolerance_s",
                    (Standard_Real (*)( const TopoDS_Edge & ) ) static_cast<Standard_Real (*)( const TopoDS_Edge & ) >(&BRep_Tool::Tolerance),
                    R"#(Returns the tolerance for <E>.)#"  , py::arg("E"))
        .def_static("SameParameter_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ) >(&BRep_Tool::SameParameter),
                    R"#(Returns the SameParameter flag for the edge.)#"  , py::arg("E"))
        .def_static("SameRange_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ) >(&BRep_Tool::SameRange),
                    R"#(Returns the SameRange flag for the edge.)#"  , py::arg("E"))
        .def_static("Degenerated_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ) >(&BRep_Tool::Degenerated),
                    R"#(Returns True if the edge is degenerated.)#"  , py::arg("E"))
        .def_static("UVPoints_s",
                    (void (*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , gp_Pnt2d & , gp_Pnt2d & ) ) static_cast<void (*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , gp_Pnt2d & , gp_Pnt2d & ) >(&BRep_Tool::UVPoints),
                    R"#(Gets the UV locations of the extremities of the edge.)#"  , py::arg("E"),  py::arg("S"),  py::arg("L"),  py::arg("PFirst"),  py::arg("PLast"))
        .def_static("UVPoints_s",
                    (void (*)( const TopoDS_Edge & , const TopoDS_Face & , gp_Pnt2d & , gp_Pnt2d & ) ) static_cast<void (*)( const TopoDS_Edge & , const TopoDS_Face & , gp_Pnt2d & , gp_Pnt2d & ) >(&BRep_Tool::UVPoints),
                    R"#(Gets the UV locations of the extremities of the edge.)#"  , py::arg("E"),  py::arg("F"),  py::arg("PFirst"),  py::arg("PLast"))
        .def_static("SetUVPoints_s",
                    (void (*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const gp_Pnt2d & , const gp_Pnt2d & ) >(&BRep_Tool::SetUVPoints),
                    R"#(Sets the UV locations of the extremities of the edge.)#"  , py::arg("E"),  py::arg("S"),  py::arg("L"),  py::arg("PFirst"),  py::arg("PLast"))
        .def_static("SetUVPoints_s",
                    (void (*)( const TopoDS_Edge & , const TopoDS_Face & , const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (*)( const TopoDS_Edge & , const TopoDS_Face & , const gp_Pnt2d & , const gp_Pnt2d & ) >(&BRep_Tool::SetUVPoints),
                    R"#(Sets the UV locations of the extremities of the edge.)#"  , py::arg("E"),  py::arg("F"),  py::arg("PFirst"),  py::arg("PLast"))
        .def_static("HasContinuity_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) >(&BRep_Tool::HasContinuity),
                    R"#(Returns True if the edge is on the surfaces of the two faces.)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"))
        .def_static("Continuity_s",
                    (GeomAbs_Shape (*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<GeomAbs_Shape (*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) >(&BRep_Tool::Continuity),
                    R"#(Returns the continuity.)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"))
        .def_static("HasContinuity_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const TopLoc_Location & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const TopLoc_Location & ) >(&BRep_Tool::HasContinuity),
                    R"#(Returns True if the edge is on the surfaces.)#"  , py::arg("E"),  py::arg("S1"),  py::arg("S2"),  py::arg("L1"),  py::arg("L2"))
        .def_static("Continuity_s",
                    (GeomAbs_Shape (*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const TopLoc_Location & ) ) static_cast<GeomAbs_Shape (*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const TopLoc_Location & ) >(&BRep_Tool::Continuity),
                    R"#(Returns the continuity.)#"  , py::arg("E"),  py::arg("S1"),  py::arg("S2"),  py::arg("L1"),  py::arg("L2"))
        .def_static("HasContinuity_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ) >(&BRep_Tool::HasContinuity),
                    R"#(Returns True if the edge has regularity on some two surfaces)#"  , py::arg("E"))
        .def_static("MaxContinuity_s",
                    (GeomAbs_Shape (*)( const TopoDS_Edge & ) ) static_cast<GeomAbs_Shape (*)( const TopoDS_Edge & ) >(&BRep_Tool::MaxContinuity),
                    R"#(Returns the max continuity of edge between some surfaces or GeomAbs_C0 if there no such surfaces.)#"  , py::arg("theEdge"))
        .def_static("Pnt_s",
                    (gp_Pnt (*)( const TopoDS_Vertex & ) ) static_cast<gp_Pnt (*)( const TopoDS_Vertex & ) >(&BRep_Tool::Pnt),
                    R"#(Returns the 3d point.)#"  , py::arg("V"))
        .def_static("Tolerance_s",
                    (Standard_Real (*)( const TopoDS_Vertex & ) ) static_cast<Standard_Real (*)( const TopoDS_Vertex & ) >(&BRep_Tool::Tolerance),
                    R"#(Returns the tolerance.)#"  , py::arg("V"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const TopoDS_Vertex & , const TopoDS_Edge & ) ) static_cast<Standard_Real (*)( const TopoDS_Vertex & , const TopoDS_Edge & ) >(&BRep_Tool::Parameter),
                    R"#(Returns the parameter of <V> on <E>.)#"  , py::arg("V"),  py::arg("E"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const TopoDS_Vertex & , const TopoDS_Edge & , const TopoDS_Face & ) ) static_cast<Standard_Real (*)( const TopoDS_Vertex & , const TopoDS_Edge & , const TopoDS_Face & ) >(&BRep_Tool::Parameter),
                    R"#(Returns the parameters of the vertex on the pcurve of the edge on the face.)#"  , py::arg("V"),  py::arg("E"),  py::arg("F"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const TopoDS_Vertex & , const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) ) static_cast<Standard_Real (*)( const TopoDS_Vertex & , const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) >(&BRep_Tool::Parameter),
                    R"#(Returns the parameters of the vertex on the pcurve of the edge on the surface.)#"  , py::arg("V"),  py::arg("E"),  py::arg("S"),  py::arg("L"))
        .def_static("Parameters_s",
                    (gp_Pnt2d (*)( const TopoDS_Vertex & , const TopoDS_Face & ) ) static_cast<gp_Pnt2d (*)( const TopoDS_Vertex & , const TopoDS_Face & ) >(&BRep_Tool::Parameters),
                    R"#(Returns the parameters of the vertex on the face.)#"  , py::arg("V"),  py::arg("F"))
        .def_static("MaxTolerance_s",
                    (Standard_Real (*)( const TopoDS_Shape & , const TopAbs_ShapeEnum ) ) static_cast<Standard_Real (*)( const TopoDS_Shape & , const TopAbs_ShapeEnum ) >(&BRep_Tool::MaxTolerance),
                    R"#(None)#"  , py::arg("theShape"),  py::arg("theSubShape"))
    // static methods using call by reference i.s.o. return
        .def_static("CurveOnSurface_s",
                    []( const TopoDS_Edge & E,opencascade::handle<Geom2d_Curve> & C,opencascade::handle<Geom_Surface> & S,TopLoc_Location & L ){ Standard_Real  First; Standard_Real  Last; BRep_Tool::CurveOnSurface(E,C,S,L,First,Last); return std::make_tuple(First,Last); },
                    R"#(Returns in <C>, <S>, <L> a 2d curve, a surface and a location for the edge <E>. <C> and <S> are null if the edge has no curve on surface. Returns in <First> and <Last> the parameter range.)#"  , py::arg("E"),  py::arg("C"),  py::arg("S"),  py::arg("L"))
        .def_static("CurveOnSurface_s",
                    []( const TopoDS_Edge & E,opencascade::handle<Geom2d_Curve> & C,opencascade::handle<Geom_Surface> & S,TopLoc_Location & L,const Standard_Integer Index ){ Standard_Real  First; Standard_Real  Last; BRep_Tool::CurveOnSurface(E,C,S,L,First,Last,Index); return std::make_tuple(First,Last); },
                    R"#(Returns in <C>, <S>, <L> the 2d curve, the surface and the location for the edge <E> of rank <Index>. <C> and <S> are null if the index is out of range. Returns in <First> and <Last> the parameter range.)#"  , py::arg("E"),  py::arg("C"),  py::arg("S"),  py::arg("L"),  py::arg("Index"))
        .def_static("Range_s",
                    []( const TopoDS_Edge & E ){ Standard_Real  First; Standard_Real  Last; BRep_Tool::Range(E,First,Last); return std::make_tuple(First,Last); },
                    R"#(Gets the range of the 3d curve.)#"  , py::arg("E"))
        .def_static("Range_s",
                    []( const TopoDS_Edge & E,const opencascade::handle<Geom_Surface> & S,const TopLoc_Location & L ){ Standard_Real  First; Standard_Real  Last; BRep_Tool::Range(E,S,L,First,Last); return std::make_tuple(First,Last); },
                    R"#(Gets the range of the edge on the pcurve on the surface.)#"  , py::arg("E"),  py::arg("S"),  py::arg("L"))
        .def_static("Range_s",
                    []( const TopoDS_Edge & E,const TopoDS_Face & F ){ Standard_Real  First; Standard_Real  Last; BRep_Tool::Range(E,F,First,Last); return std::make_tuple(First,Last); },
                    R"#(Gets the range of the edge on the pcurve on the face.)#"  , py::arg("E"),  py::arg("F"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRep_CurveOn2Surfaces ,opencascade::handle<BRep_CurveOn2Surfaces> , BRep_CurveRepresentation>>(m.attr("BRep_CurveOn2Surfaces"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Surface> &,const opencascade::handle<Geom_Surface> &,const TopLoc_Location &,const TopLoc_Location &,const GeomAbs_Shape >()  , py::arg("S1"),  py::arg("S2"),  py::arg("L1"),  py::arg("L2"),  py::arg("C") )
    // custom constructors
    // methods
        .def("IsRegularity",
             (Standard_Boolean (BRep_CurveOn2Surfaces::*)() const) static_cast<Standard_Boolean (BRep_CurveOn2Surfaces::*)() const>(&BRep_CurveOn2Surfaces::IsRegularity),
             R"#(Returns True.)#" )
        .def("IsRegularity",
             (Standard_Boolean (BRep_CurveOn2Surfaces::*)( const opencascade::handle<Geom_Surface> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const TopLoc_Location & ) const) static_cast<Standard_Boolean (BRep_CurveOn2Surfaces::*)( const opencascade::handle<Geom_Surface> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const TopLoc_Location & ) const>(&BRep_CurveOn2Surfaces::IsRegularity),
             R"#(A curve on two surfaces (continuity).)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("L1"),  py::arg("L2"))
        .def("D0",
             (void (BRep_CurveOn2Surfaces::*)( const Standard_Real , gp_Pnt & ) const) static_cast<void (BRep_CurveOn2Surfaces::*)( const Standard_Real , gp_Pnt & ) const>(&BRep_CurveOn2Surfaces::D0),
             R"#(Raises an error.)#"  , py::arg("U"),  py::arg("P"))
        .def("Surface",
             (const opencascade::handle<Geom_Surface> & (BRep_CurveOn2Surfaces::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (BRep_CurveOn2Surfaces::*)() const>(&BRep_CurveOn2Surfaces::Surface),
             R"#(None)#" )
        .def("Surface2",
             (const opencascade::handle<Geom_Surface> & (BRep_CurveOn2Surfaces::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (BRep_CurveOn2Surfaces::*)() const>(&BRep_CurveOn2Surfaces::Surface2),
             R"#(None)#" )
        .def("Location2",
             (const TopLoc_Location & (BRep_CurveOn2Surfaces::*)() const) static_cast<const TopLoc_Location & (BRep_CurveOn2Surfaces::*)() const>(&BRep_CurveOn2Surfaces::Location2),
             R"#(None)#" )
        .def("Continuity",
             (const GeomAbs_Shape & (BRep_CurveOn2Surfaces::*)() const) static_cast<const GeomAbs_Shape & (BRep_CurveOn2Surfaces::*)() const>(&BRep_CurveOn2Surfaces::Continuity),
             R"#(None)#" )
        .def("Continuity",
             (void (BRep_CurveOn2Surfaces::*)( const GeomAbs_Shape ) ) static_cast<void (BRep_CurveOn2Surfaces::*)( const GeomAbs_Shape ) >(&BRep_CurveOn2Surfaces::Continuity),
             R"#(None)#"  , py::arg("C"))
        .def("Copy",
             (opencascade::handle<BRep_CurveRepresentation> (BRep_CurveOn2Surfaces::*)() const) static_cast<opencascade::handle<BRep_CurveRepresentation> (BRep_CurveOn2Surfaces::*)() const>(&BRep_CurveOn2Surfaces::Copy),
             R"#(Return a copy of this representation.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRep_CurveOn2Surfaces::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRep_CurveOn2Surfaces::*)() const>(&BRep_CurveOn2Surfaces::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRep_CurveOn2Surfaces::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRep_CurveOn2Surfaces::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRep_GCurve ,opencascade::handle<BRep_GCurve>,Py_BRep_GCurve , BRep_CurveRepresentation>>(m.attr("BRep_GCurve"))
    // constructors
    // custom constructors
    // methods
        .def("SetRange",
             (void (BRep_GCurve::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (BRep_GCurve::*)( const Standard_Real , const Standard_Real ) >(&BRep_GCurve::SetRange),
             R"#(None)#"  , py::arg("First"),  py::arg("Last"))
        .def("First",
             (Standard_Real (BRep_GCurve::*)() const) static_cast<Standard_Real (BRep_GCurve::*)() const>(&BRep_GCurve::First),
             R"#(None)#" )
        .def("Last",
             (Standard_Real (BRep_GCurve::*)() const) static_cast<Standard_Real (BRep_GCurve::*)() const>(&BRep_GCurve::Last),
             R"#(None)#" )
        .def("First",
             (void (BRep_GCurve::*)( const Standard_Real ) ) static_cast<void (BRep_GCurve::*)( const Standard_Real ) >(&BRep_GCurve::First),
             R"#(None)#"  , py::arg("F"))
        .def("Last",
             (void (BRep_GCurve::*)( const Standard_Real ) ) static_cast<void (BRep_GCurve::*)( const Standard_Real ) >(&BRep_GCurve::Last),
             R"#(None)#"  , py::arg("L"))
        .def("D0",
             (void (BRep_GCurve::*)( const Standard_Real , gp_Pnt & ) const) static_cast<void (BRep_GCurve::*)( const Standard_Real , gp_Pnt & ) const>(&BRep_GCurve::D0),
             R"#(Computes the point at parameter U.)#"  , py::arg("U"),  py::arg("P"))
        .def("Update",
             (void (BRep_GCurve::*)() ) static_cast<void (BRep_GCurve::*)() >(&BRep_GCurve::Update),
             R"#(Recomputes any derived data after a modification. This is called when the range is modified.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRep_GCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRep_GCurve::*)() const>(&BRep_GCurve::DynamicType),
             R"#(None)#" )
        .def("SetRange",
             (void (BRep_GCurve::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (BRep_GCurve::*)( const Standard_Real , const Standard_Real ) >(&BRep_GCurve::SetRange),
             R"#(None)#"  , py::arg("First"),  py::arg("Last"))
        .def("First",
             (Standard_Real (BRep_GCurve::*)() const) static_cast<Standard_Real (BRep_GCurve::*)() const>(&BRep_GCurve::First),
             R"#(None)#" )
        .def("Last",
             (Standard_Real (BRep_GCurve::*)() const) static_cast<Standard_Real (BRep_GCurve::*)() const>(&BRep_GCurve::Last),
             R"#(None)#" )
        .def("First",
             (void (BRep_GCurve::*)( const Standard_Real ) ) static_cast<void (BRep_GCurve::*)( const Standard_Real ) >(&BRep_GCurve::First),
             R"#(None)#"  , py::arg("F"))
        .def("Last",
             (void (BRep_GCurve::*)( const Standard_Real ) ) static_cast<void (BRep_GCurve::*)( const Standard_Real ) >(&BRep_GCurve::Last),
             R"#(None)#"  , py::arg("L"))
    // methods using call by reference i.s.o. return
        .def("Range",
             []( BRep_GCurve &self   ){ Standard_Real  First; Standard_Real  Last; self.Range(First,Last); return std::make_tuple(First,Last); },
             R"#(None)#" )
        .def("Range",
             []( BRep_GCurve &self   ){ Standard_Real  First; Standard_Real  Last; self.Range(First,Last); return std::make_tuple(First,Last); },
             R"#(None)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRep_GCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRep_GCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRep_PointOnCurve ,opencascade::handle<BRep_PointOnCurve> , BRep_PointRepresentation>>(m.attr("BRep_PointOnCurve"))
    // constructors
        .def(py::init< const Standard_Real,const opencascade::handle<Geom_Curve> &,const TopLoc_Location & >()  , py::arg("P"),  py::arg("C"),  py::arg("L") )
    // custom constructors
    // methods
        .def("IsPointOnCurve",
             (Standard_Boolean (BRep_PointOnCurve::*)() const) static_cast<Standard_Boolean (BRep_PointOnCurve::*)() const>(&BRep_PointOnCurve::IsPointOnCurve),
             R"#(Returns True)#" )
        .def("IsPointOnCurve",
             (Standard_Boolean (BRep_PointOnCurve::*)( const opencascade::handle<Geom_Curve> & , const TopLoc_Location & ) const) static_cast<Standard_Boolean (BRep_PointOnCurve::*)( const opencascade::handle<Geom_Curve> & , const TopLoc_Location & ) const>(&BRep_PointOnCurve::IsPointOnCurve),
             R"#(None)#"  , py::arg("C"),  py::arg("L"))
        .def("Curve",
             (const opencascade::handle<Geom_Curve> & (BRep_PointOnCurve::*)() const) static_cast<const opencascade::handle<Geom_Curve> & (BRep_PointOnCurve::*)() const>(&BRep_PointOnCurve::Curve),
             R"#(None)#" )
        .def("Curve",
             (void (BRep_PointOnCurve::*)( const opencascade::handle<Geom_Curve> & ) ) static_cast<void (BRep_PointOnCurve::*)( const opencascade::handle<Geom_Curve> & ) >(&BRep_PointOnCurve::Curve),
             R"#(None)#"  , py::arg("C"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRep_PointOnCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRep_PointOnCurve::*)() const>(&BRep_PointOnCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRep_PointOnCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRep_PointOnCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRep_PointsOnSurface ,opencascade::handle<BRep_PointsOnSurface> , BRep_PointRepresentation>>(m.attr("BRep_PointsOnSurface"))
    // constructors
    // custom constructors
    // methods
        .def("Surface",
             (const opencascade::handle<Geom_Surface> & (BRep_PointsOnSurface::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (BRep_PointsOnSurface::*)() const>(&BRep_PointsOnSurface::Surface),
             R"#(None)#" )
        .def("Surface",
             (void (BRep_PointsOnSurface::*)( const opencascade::handle<Geom_Surface> & ) ) static_cast<void (BRep_PointsOnSurface::*)( const opencascade::handle<Geom_Surface> & ) >(&BRep_PointsOnSurface::Surface),
             R"#(None)#"  , py::arg("S"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRep_PointsOnSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRep_PointsOnSurface::*)() const>(&BRep_PointsOnSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRep_PointsOnSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRep_PointsOnSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRep_Polygon3D ,opencascade::handle<BRep_Polygon3D> , BRep_CurveRepresentation>>(m.attr("BRep_Polygon3D"))
    // constructors
        .def(py::init< const opencascade::handle<Poly_Polygon3D> &,const TopLoc_Location & >()  , py::arg("P"),  py::arg("L") )
    // custom constructors
    // methods
        .def("IsPolygon3D",
             (Standard_Boolean (BRep_Polygon3D::*)() const) static_cast<Standard_Boolean (BRep_Polygon3D::*)() const>(&BRep_Polygon3D::IsPolygon3D),
             R"#(Returns True.)#" )
        .def("Polygon3D",
             (const opencascade::handle<Poly_Polygon3D> & (BRep_Polygon3D::*)() const) static_cast<const opencascade::handle<Poly_Polygon3D> & (BRep_Polygon3D::*)() const>(&BRep_Polygon3D::Polygon3D),
             R"#(None)#" )
        .def("Polygon3D",
             (void (BRep_Polygon3D::*)( const opencascade::handle<Poly_Polygon3D> & ) ) static_cast<void (BRep_Polygon3D::*)( const opencascade::handle<Poly_Polygon3D> & ) >(&BRep_Polygon3D::Polygon3D),
             R"#(None)#"  , py::arg("P"))
        .def("Copy",
             (opencascade::handle<BRep_CurveRepresentation> (BRep_Polygon3D::*)() const) static_cast<opencascade::handle<BRep_CurveRepresentation> (BRep_Polygon3D::*)() const>(&BRep_Polygon3D::Copy),
             R"#(Return a copy of this representation.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRep_Polygon3D::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRep_Polygon3D::*)() const>(&BRep_Polygon3D::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRep_Polygon3D::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRep_Polygon3D::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRep_PolygonOnSurface ,opencascade::handle<BRep_PolygonOnSurface> , BRep_CurveRepresentation>>(m.attr("BRep_PolygonOnSurface"))
    // constructors
        .def(py::init< const opencascade::handle<Poly_Polygon2D> &,const opencascade::handle<Geom_Surface> &,const TopLoc_Location & >()  , py::arg("P"),  py::arg("S"),  py::arg("L") )
    // custom constructors
    // methods
        .def("IsPolygonOnSurface",
             (Standard_Boolean (BRep_PolygonOnSurface::*)() const) static_cast<Standard_Boolean (BRep_PolygonOnSurface::*)() const>(&BRep_PolygonOnSurface::IsPolygonOnSurface),
             R"#(A 2D polygon representation in the parametric space of a surface.)#" )
        .def("IsPolygonOnSurface",
             (Standard_Boolean (BRep_PolygonOnSurface::*)( const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const) static_cast<Standard_Boolean (BRep_PolygonOnSurface::*)( const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const>(&BRep_PolygonOnSurface::IsPolygonOnSurface),
             R"#(A 2D polygon representation in the parametric space of a surface.)#"  , py::arg("S"),  py::arg("L"))
        .def("Surface",
             (const opencascade::handle<Geom_Surface> & (BRep_PolygonOnSurface::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (BRep_PolygonOnSurface::*)() const>(&BRep_PolygonOnSurface::Surface),
             R"#(None)#" )
        .def("Polygon",
             (const opencascade::handle<Poly_Polygon2D> & (BRep_PolygonOnSurface::*)() const) static_cast<const opencascade::handle<Poly_Polygon2D> & (BRep_PolygonOnSurface::*)() const>(&BRep_PolygonOnSurface::Polygon),
             R"#(None)#" )
        .def("Polygon",
             (void (BRep_PolygonOnSurface::*)( const opencascade::handle<Poly_Polygon2D> & ) ) static_cast<void (BRep_PolygonOnSurface::*)( const opencascade::handle<Poly_Polygon2D> & ) >(&BRep_PolygonOnSurface::Polygon),
             R"#(None)#"  , py::arg("P"))
        .def("Copy",
             (opencascade::handle<BRep_CurveRepresentation> (BRep_PolygonOnSurface::*)() const) static_cast<opencascade::handle<BRep_CurveRepresentation> (BRep_PolygonOnSurface::*)() const>(&BRep_PolygonOnSurface::Copy),
             R"#(Return a copy of this representation.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRep_PolygonOnSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRep_PolygonOnSurface::*)() const>(&BRep_PolygonOnSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRep_PolygonOnSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRep_PolygonOnSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRep_PolygonOnTriangulation ,opencascade::handle<BRep_PolygonOnTriangulation> , BRep_CurveRepresentation>>(m.attr("BRep_PolygonOnTriangulation"))
    // constructors
        .def(py::init< const opencascade::handle<Poly_PolygonOnTriangulation> &,const opencascade::handle<Poly_Triangulation> &,const TopLoc_Location & >()  , py::arg("P"),  py::arg("T"),  py::arg("L") )
    // custom constructors
    // methods
        .def("IsPolygonOnTriangulation",
             (Standard_Boolean (BRep_PolygonOnTriangulation::*)() const) static_cast<Standard_Boolean (BRep_PolygonOnTriangulation::*)() const>(&BRep_PolygonOnTriangulation::IsPolygonOnTriangulation),
             R"#(returns True.)#" )
        .def("IsPolygonOnTriangulation",
             (Standard_Boolean (BRep_PolygonOnTriangulation::*)( const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) const) static_cast<Standard_Boolean (BRep_PolygonOnTriangulation::*)( const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) const>(&BRep_PolygonOnTriangulation::IsPolygonOnTriangulation),
             R"#(Is it a polygon in the definition of <T> with location <L>.)#"  , py::arg("T"),  py::arg("L"))
        .def("PolygonOnTriangulation",
             (void (BRep_PolygonOnTriangulation::*)( const opencascade::handle<Poly_PolygonOnTriangulation> & ) ) static_cast<void (BRep_PolygonOnTriangulation::*)( const opencascade::handle<Poly_PolygonOnTriangulation> & ) >(&BRep_PolygonOnTriangulation::PolygonOnTriangulation),
             R"#(returns True.)#"  , py::arg("P"))
        .def("Triangulation",
             (const opencascade::handle<Poly_Triangulation> & (BRep_PolygonOnTriangulation::*)() const) static_cast<const opencascade::handle<Poly_Triangulation> & (BRep_PolygonOnTriangulation::*)() const>(&BRep_PolygonOnTriangulation::Triangulation),
             R"#(None)#" )
        .def("PolygonOnTriangulation",
             (const opencascade::handle<Poly_PolygonOnTriangulation> & (BRep_PolygonOnTriangulation::*)() const) static_cast<const opencascade::handle<Poly_PolygonOnTriangulation> & (BRep_PolygonOnTriangulation::*)() const>(&BRep_PolygonOnTriangulation::PolygonOnTriangulation),
             R"#(None)#" )
        .def("Copy",
             (opencascade::handle<BRep_CurveRepresentation> (BRep_PolygonOnTriangulation::*)() const) static_cast<opencascade::handle<BRep_CurveRepresentation> (BRep_PolygonOnTriangulation::*)() const>(&BRep_PolygonOnTriangulation::Copy),
             R"#(Return a copy of this representation.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRep_PolygonOnTriangulation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRep_PolygonOnTriangulation::*)() const>(&BRep_PolygonOnTriangulation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRep_PolygonOnTriangulation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRep_PolygonOnTriangulation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRep_Curve3D ,opencascade::handle<BRep_Curve3D> , BRep_GCurve>>(m.attr("BRep_Curve3D"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Curve> &,const TopLoc_Location & >()  , py::arg("C"),  py::arg("L") )
    // custom constructors
    // methods
        .def("D0",
             (void (BRep_Curve3D::*)( const Standard_Real , gp_Pnt & ) const) static_cast<void (BRep_Curve3D::*)( const Standard_Real , gp_Pnt & ) const>(&BRep_Curve3D::D0),
             R"#(Computes the point at parameter U.)#"  , py::arg("U"),  py::arg("P"))
        .def("IsCurve3D",
             (Standard_Boolean (BRep_Curve3D::*)() const) static_cast<Standard_Boolean (BRep_Curve3D::*)() const>(&BRep_Curve3D::IsCurve3D),
             R"#(Returns True.)#" )
        .def("Curve3D",
             (const opencascade::handle<Geom_Curve> & (BRep_Curve3D::*)() const) static_cast<const opencascade::handle<Geom_Curve> & (BRep_Curve3D::*)() const>(&BRep_Curve3D::Curve3D),
             R"#(None)#" )
        .def("Curve3D",
             (void (BRep_Curve3D::*)( const opencascade::handle<Geom_Curve> & ) ) static_cast<void (BRep_Curve3D::*)( const opencascade::handle<Geom_Curve> & ) >(&BRep_Curve3D::Curve3D),
             R"#(None)#"  , py::arg("C"))
        .def("Copy",
             (opencascade::handle<BRep_CurveRepresentation> (BRep_Curve3D::*)() const) static_cast<opencascade::handle<BRep_CurveRepresentation> (BRep_Curve3D::*)() const>(&BRep_Curve3D::Copy),
             R"#(Return a copy of this representation.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRep_Curve3D::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRep_Curve3D::*)() const>(&BRep_Curve3D::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRep_Curve3D::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRep_Curve3D::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRep_CurveOnSurface ,opencascade::handle<BRep_CurveOnSurface> , BRep_GCurve>>(m.attr("BRep_CurveOnSurface"))
    // constructors
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom_Surface> &,const TopLoc_Location & >()  , py::arg("PC"),  py::arg("S"),  py::arg("L") )
    // custom constructors
    // methods
        .def("SetUVPoints",
             (void (BRep_CurveOnSurface::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (BRep_CurveOnSurface::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&BRep_CurveOnSurface::SetUVPoints),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("UVPoints",
             (void (BRep_CurveOnSurface::*)( gp_Pnt2d & , gp_Pnt2d & ) const) static_cast<void (BRep_CurveOnSurface::*)( gp_Pnt2d & , gp_Pnt2d & ) const>(&BRep_CurveOnSurface::UVPoints),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("D0",
             (void (BRep_CurveOnSurface::*)( const Standard_Real , gp_Pnt & ) const) static_cast<void (BRep_CurveOnSurface::*)( const Standard_Real , gp_Pnt & ) const>(&BRep_CurveOnSurface::D0),
             R"#(Computes the point at parameter U.)#"  , py::arg("U"),  py::arg("P"))
        .def("IsCurveOnSurface",
             (Standard_Boolean (BRep_CurveOnSurface::*)() const) static_cast<Standard_Boolean (BRep_CurveOnSurface::*)() const>(&BRep_CurveOnSurface::IsCurveOnSurface),
             R"#(Returns True.)#" )
        .def("IsCurveOnSurface",
             (Standard_Boolean (BRep_CurveOnSurface::*)( const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const) static_cast<Standard_Boolean (BRep_CurveOnSurface::*)( const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const>(&BRep_CurveOnSurface::IsCurveOnSurface),
             R"#(A curve in the parametric space of a surface.)#"  , py::arg("S"),  py::arg("L"))
        .def("Surface",
             (const opencascade::handle<Geom_Surface> & (BRep_CurveOnSurface::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (BRep_CurveOnSurface::*)() const>(&BRep_CurveOnSurface::Surface),
             R"#(None)#" )
        .def("PCurve",
             (const opencascade::handle<Geom2d_Curve> & (BRep_CurveOnSurface::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (BRep_CurveOnSurface::*)() const>(&BRep_CurveOnSurface::PCurve),
             R"#(None)#" )
        .def("PCurve",
             (void (BRep_CurveOnSurface::*)( const opencascade::handle<Geom2d_Curve> & ) ) static_cast<void (BRep_CurveOnSurface::*)( const opencascade::handle<Geom2d_Curve> & ) >(&BRep_CurveOnSurface::PCurve),
             R"#(None)#"  , py::arg("C"))
        .def("Copy",
             (opencascade::handle<BRep_CurveRepresentation> (BRep_CurveOnSurface::*)() const) static_cast<opencascade::handle<BRep_CurveRepresentation> (BRep_CurveOnSurface::*)() const>(&BRep_CurveOnSurface::Copy),
             R"#(Return a copy of this representation.)#" )
        .def("Update",
             (void (BRep_CurveOnSurface::*)() ) static_cast<void (BRep_CurveOnSurface::*)() >(&BRep_CurveOnSurface::Update),
             R"#(Recomputes any derived data after a modification. This is called when the range is modified.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRep_CurveOnSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRep_CurveOnSurface::*)() const>(&BRep_CurveOnSurface::DynamicType),
             R"#(None)#" )
        .def("SetUVPoints",
             (void (BRep_CurveOnSurface::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (BRep_CurveOnSurface::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&BRep_CurveOnSurface::SetUVPoints),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("UVPoints",
             (void (BRep_CurveOnSurface::*)( gp_Pnt2d & , gp_Pnt2d & ) const) static_cast<void (BRep_CurveOnSurface::*)( gp_Pnt2d & , gp_Pnt2d & ) const>(&BRep_CurveOnSurface::UVPoints),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRep_CurveOnSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRep_CurveOnSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRep_PointOnCurveOnSurface ,opencascade::handle<BRep_PointOnCurveOnSurface> , BRep_PointsOnSurface>>(m.attr("BRep_PointOnCurveOnSurface"))
    // constructors
        .def(py::init< const Standard_Real,const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom_Surface> &,const TopLoc_Location & >()  , py::arg("P"),  py::arg("C"),  py::arg("S"),  py::arg("L") )
    // custom constructors
    // methods
        .def("IsPointOnCurveOnSurface",
             (Standard_Boolean (BRep_PointOnCurveOnSurface::*)() const) static_cast<Standard_Boolean (BRep_PointOnCurveOnSurface::*)() const>(&BRep_PointOnCurveOnSurface::IsPointOnCurveOnSurface),
             R"#(Returns True)#" )
        .def("IsPointOnCurveOnSurface",
             (Standard_Boolean (BRep_PointOnCurveOnSurface::*)( const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const) static_cast<Standard_Boolean (BRep_PointOnCurveOnSurface::*)( const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const>(&BRep_PointOnCurveOnSurface::IsPointOnCurveOnSurface),
             R"#(None)#"  , py::arg("PC"),  py::arg("S"),  py::arg("L"))
        .def("PCurve",
             (const opencascade::handle<Geom2d_Curve> & (BRep_PointOnCurveOnSurface::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (BRep_PointOnCurveOnSurface::*)() const>(&BRep_PointOnCurveOnSurface::PCurve),
             R"#(None)#" )
        .def("PCurve",
             (void (BRep_PointOnCurveOnSurface::*)( const opencascade::handle<Geom2d_Curve> & ) ) static_cast<void (BRep_PointOnCurveOnSurface::*)( const opencascade::handle<Geom2d_Curve> & ) >(&BRep_PointOnCurveOnSurface::PCurve),
             R"#(None)#"  , py::arg("C"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRep_PointOnCurveOnSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRep_PointOnCurveOnSurface::*)() const>(&BRep_PointOnCurveOnSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRep_PointOnCurveOnSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRep_PointOnCurveOnSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRep_PointOnSurface ,opencascade::handle<BRep_PointOnSurface> , BRep_PointsOnSurface>>(m.attr("BRep_PointOnSurface"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Real,const opencascade::handle<Geom_Surface> &,const TopLoc_Location & >()  , py::arg("P1"),  py::arg("P2"),  py::arg("S"),  py::arg("L") )
    // custom constructors
    // methods
        .def("IsPointOnSurface",
             (Standard_Boolean (BRep_PointOnSurface::*)() const) static_cast<Standard_Boolean (BRep_PointOnSurface::*)() const>(&BRep_PointOnSurface::IsPointOnSurface),
             R"#(None)#" )
        .def("IsPointOnSurface",
             (Standard_Boolean (BRep_PointOnSurface::*)( const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const) static_cast<Standard_Boolean (BRep_PointOnSurface::*)( const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const>(&BRep_PointOnSurface::IsPointOnSurface),
             R"#(None)#"  , py::arg("S"),  py::arg("L"))
        .def("Parameter2",
             (Standard_Real (BRep_PointOnSurface::*)() const) static_cast<Standard_Real (BRep_PointOnSurface::*)() const>(&BRep_PointOnSurface::Parameter2),
             R"#(None)#" )
        .def("Parameter2",
             (void (BRep_PointOnSurface::*)( const Standard_Real ) ) static_cast<void (BRep_PointOnSurface::*)( const Standard_Real ) >(&BRep_PointOnSurface::Parameter2),
             R"#(None)#"  , py::arg("P"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRep_PointOnSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRep_PointOnSurface::*)() const>(&BRep_PointOnSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRep_PointOnSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRep_PointOnSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRep_PolygonOnClosedSurface ,opencascade::handle<BRep_PolygonOnClosedSurface> , BRep_PolygonOnSurface>>(m.attr("BRep_PolygonOnClosedSurface"))
    // constructors
        .def(py::init< const opencascade::handle<Poly_Polygon2D> &,const opencascade::handle<Poly_Polygon2D> &,const opencascade::handle<Geom_Surface> &,const TopLoc_Location & >()  , py::arg("P1"),  py::arg("P2"),  py::arg("S"),  py::arg("L") )
    // custom constructors
    // methods
        .def("IsPolygonOnClosedSurface",
             (Standard_Boolean (BRep_PolygonOnClosedSurface::*)() const) static_cast<Standard_Boolean (BRep_PolygonOnClosedSurface::*)() const>(&BRep_PolygonOnClosedSurface::IsPolygonOnClosedSurface),
             R"#(returns True.)#" )
        .def("Polygon2",
             (const opencascade::handle<Poly_Polygon2D> & (BRep_PolygonOnClosedSurface::*)() const) static_cast<const opencascade::handle<Poly_Polygon2D> & (BRep_PolygonOnClosedSurface::*)() const>(&BRep_PolygonOnClosedSurface::Polygon2),
             R"#(None)#" )
        .def("Polygon2",
             (void (BRep_PolygonOnClosedSurface::*)( const opencascade::handle<Poly_Polygon2D> & ) ) static_cast<void (BRep_PolygonOnClosedSurface::*)( const opencascade::handle<Poly_Polygon2D> & ) >(&BRep_PolygonOnClosedSurface::Polygon2),
             R"#(None)#"  , py::arg("P"))
        .def("Copy",
             (opencascade::handle<BRep_CurveRepresentation> (BRep_PolygonOnClosedSurface::*)() const) static_cast<opencascade::handle<BRep_CurveRepresentation> (BRep_PolygonOnClosedSurface::*)() const>(&BRep_PolygonOnClosedSurface::Copy),
             R"#(Return a copy of this representation.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRep_PolygonOnClosedSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRep_PolygonOnClosedSurface::*)() const>(&BRep_PolygonOnClosedSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRep_PolygonOnClosedSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRep_PolygonOnClosedSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRep_PolygonOnClosedTriangulation ,opencascade::handle<BRep_PolygonOnClosedTriangulation> , BRep_PolygonOnTriangulation>>(m.attr("BRep_PolygonOnClosedTriangulation"))
    // constructors
        .def(py::init< const opencascade::handle<Poly_PolygonOnTriangulation> &,const opencascade::handle<Poly_PolygonOnTriangulation> &,const opencascade::handle<Poly_Triangulation> &,const TopLoc_Location & >()  , py::arg("P1"),  py::arg("P2"),  py::arg("Tr"),  py::arg("L") )
    // custom constructors
    // methods
        .def("IsPolygonOnClosedTriangulation",
             (Standard_Boolean (BRep_PolygonOnClosedTriangulation::*)() const) static_cast<Standard_Boolean (BRep_PolygonOnClosedTriangulation::*)() const>(&BRep_PolygonOnClosedTriangulation::IsPolygonOnClosedTriangulation),
             R"#(Returns True.)#" )
        .def("PolygonOnTriangulation2",
             (void (BRep_PolygonOnClosedTriangulation::*)( const opencascade::handle<Poly_PolygonOnTriangulation> & ) ) static_cast<void (BRep_PolygonOnClosedTriangulation::*)( const opencascade::handle<Poly_PolygonOnTriangulation> & ) >(&BRep_PolygonOnClosedTriangulation::PolygonOnTriangulation2),
             R"#(None)#"  , py::arg("P2"))
        .def("PolygonOnTriangulation2",
             (const opencascade::handle<Poly_PolygonOnTriangulation> & (BRep_PolygonOnClosedTriangulation::*)() const) static_cast<const opencascade::handle<Poly_PolygonOnTriangulation> & (BRep_PolygonOnClosedTriangulation::*)() const>(&BRep_PolygonOnClosedTriangulation::PolygonOnTriangulation2),
             R"#(None)#" )
        .def("Copy",
             (opencascade::handle<BRep_CurveRepresentation> (BRep_PolygonOnClosedTriangulation::*)() const) static_cast<opencascade::handle<BRep_CurveRepresentation> (BRep_PolygonOnClosedTriangulation::*)() const>(&BRep_PolygonOnClosedTriangulation::Copy),
             R"#(Return a copy of this representation.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRep_PolygonOnClosedTriangulation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRep_PolygonOnClosedTriangulation::*)() const>(&BRep_PolygonOnClosedTriangulation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRep_PolygonOnClosedTriangulation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRep_PolygonOnClosedTriangulation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRep_CurveOnClosedSurface ,opencascade::handle<BRep_CurveOnClosedSurface> , BRep_CurveOnSurface>>(m.attr("BRep_CurveOnClosedSurface"))
    // constructors
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom_Surface> &,const TopLoc_Location &,const GeomAbs_Shape >()  , py::arg("PC1"),  py::arg("PC2"),  py::arg("S"),  py::arg("L"),  py::arg("C") )
    // custom constructors
    // methods
        .def("SetUVPoints2",
             (void (BRep_CurveOnClosedSurface::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (BRep_CurveOnClosedSurface::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&BRep_CurveOnClosedSurface::SetUVPoints2),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("UVPoints2",
             (void (BRep_CurveOnClosedSurface::*)( gp_Pnt2d & , gp_Pnt2d & ) const) static_cast<void (BRep_CurveOnClosedSurface::*)( gp_Pnt2d & , gp_Pnt2d & ) const>(&BRep_CurveOnClosedSurface::UVPoints2),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("IsCurveOnClosedSurface",
             (Standard_Boolean (BRep_CurveOnClosedSurface::*)() const) static_cast<Standard_Boolean (BRep_CurveOnClosedSurface::*)() const>(&BRep_CurveOnClosedSurface::IsCurveOnClosedSurface),
             R"#(Returns True.)#" )
        .def("IsRegularity",
             (Standard_Boolean (BRep_CurveOnClosedSurface::*)() const) static_cast<Standard_Boolean (BRep_CurveOnClosedSurface::*)() const>(&BRep_CurveOnClosedSurface::IsRegularity),
             R"#(Returns True)#" )
        .def("IsRegularity",
             (Standard_Boolean (BRep_CurveOnClosedSurface::*)( const opencascade::handle<Geom_Surface> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const TopLoc_Location & ) const) static_cast<Standard_Boolean (BRep_CurveOnClosedSurface::*)( const opencascade::handle<Geom_Surface> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const TopLoc_Location & ) const>(&BRep_CurveOnClosedSurface::IsRegularity),
             R"#(A curve on two surfaces (continuity).)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("L1"),  py::arg("L2"))
        .def("PCurve2",
             (const opencascade::handle<Geom2d_Curve> & (BRep_CurveOnClosedSurface::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (BRep_CurveOnClosedSurface::*)() const>(&BRep_CurveOnClosedSurface::PCurve2),
             R"#(None)#" )
        .def("Surface2",
             (const opencascade::handle<Geom_Surface> & (BRep_CurveOnClosedSurface::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (BRep_CurveOnClosedSurface::*)() const>(&BRep_CurveOnClosedSurface::Surface2),
             R"#(Returns Surface())#" )
        .def("Location2",
             (const TopLoc_Location & (BRep_CurveOnClosedSurface::*)() const) static_cast<const TopLoc_Location & (BRep_CurveOnClosedSurface::*)() const>(&BRep_CurveOnClosedSurface::Location2),
             R"#(Returns Location())#" )
        .def("Continuity",
             (const GeomAbs_Shape & (BRep_CurveOnClosedSurface::*)() const) static_cast<const GeomAbs_Shape & (BRep_CurveOnClosedSurface::*)() const>(&BRep_CurveOnClosedSurface::Continuity),
             R"#(None)#" )
        .def("Continuity",
             (void (BRep_CurveOnClosedSurface::*)( const GeomAbs_Shape ) ) static_cast<void (BRep_CurveOnClosedSurface::*)( const GeomAbs_Shape ) >(&BRep_CurveOnClosedSurface::Continuity),
             R"#(None)#"  , py::arg("C"))
        .def("PCurve2",
             (void (BRep_CurveOnClosedSurface::*)( const opencascade::handle<Geom2d_Curve> & ) ) static_cast<void (BRep_CurveOnClosedSurface::*)( const opencascade::handle<Geom2d_Curve> & ) >(&BRep_CurveOnClosedSurface::PCurve2),
             R"#(None)#"  , py::arg("C"))
        .def("Copy",
             (opencascade::handle<BRep_CurveRepresentation> (BRep_CurveOnClosedSurface::*)() const) static_cast<opencascade::handle<BRep_CurveRepresentation> (BRep_CurveOnClosedSurface::*)() const>(&BRep_CurveOnClosedSurface::Copy),
             R"#(Return a copy of this representation.)#" )
        .def("Update",
             (void (BRep_CurveOnClosedSurface::*)() ) static_cast<void (BRep_CurveOnClosedSurface::*)() >(&BRep_CurveOnClosedSurface::Update),
             R"#(Recomputes any derived data after a modification. This is called when the range is modified.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRep_CurveOnClosedSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRep_CurveOnClosedSurface::*)() const>(&BRep_CurveOnClosedSurface::DynamicType),
             R"#(None)#" )
        .def("SetUVPoints2",
             (void (BRep_CurveOnClosedSurface::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (BRep_CurveOnClosedSurface::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&BRep_CurveOnClosedSurface::SetUVPoints2),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("UVPoints2",
             (void (BRep_CurveOnClosedSurface::*)( gp_Pnt2d & , gp_Pnt2d & ) const) static_cast<void (BRep_CurveOnClosedSurface::*)( gp_Pnt2d & , gp_Pnt2d & ) const>(&BRep_CurveOnClosedSurface::UVPoints2),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRep_CurveOnClosedSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRep_CurveOnClosedSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRep_PolygonOnClosedTriangulation.hxx
// ./opencascade/BRep_TEdge.hxx
// ./opencascade/BRep_TFace.hxx
// ./opencascade/BRep_TVertex.hxx
// ./opencascade/BRep_PolygonOnSurface.hxx
// ./opencascade/BRep_CurveOn2Surfaces.hxx
// ./opencascade/BRep_ListOfPointRepresentation.hxx
// ./opencascade/BRep_Polygon3D.hxx
// ./opencascade/BRep_ListIteratorOfListOfPointRepresentation.hxx
// ./opencascade/BRep_Tool.hxx
// ./opencascade/BRep_CurveOnSurface.hxx
// ./opencascade/BRep_ListOfCurveRepresentation.hxx
// ./opencascade/BRep_Curve3D.hxx
// ./opencascade/BRep_PointOnSurface.hxx
// ./opencascade/BRep_PointOnCurve.hxx
// ./opencascade/BRep_Builder.hxx
// ./opencascade/BRep_ListIteratorOfListOfCurveRepresentation.hxx
// ./opencascade/BRep_PointRepresentation.hxx
// ./opencascade/BRep_PointOnCurveOnSurface.hxx
// ./opencascade/BRep_PolygonOnTriangulation.hxx
// ./opencascade/BRep_PolygonOnClosedSurface.hxx
// ./opencascade/BRep_CurveRepresentation.hxx
// ./opencascade/BRep_CurveOnClosedSurface.hxx
// ./opencascade/BRep_PointsOnSurface.hxx
// ./opencascade/BRep_GCurve.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<opencascade::handle<BRep_PointRepresentation> >(m,"BRep_ListOfPointRepresentation");
    register_template_NCollection_List<opencascade::handle<BRep_CurveRepresentation> >(m,"BRep_ListOfCurveRepresentation");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
