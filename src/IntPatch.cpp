
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <gp_Pnt2d.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <gp_Pnt.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pnt.hxx>
#include <gp_XYZ.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <IntSurf_LineOn2S.hxx>
#include <IntPatch_Point.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntPatch_HInterTool.hxx>
#include <IntPatch_TheSurfFunction.hxx>
#include <Standard_OutOfRange.hxx>
#include <IntSurf_PathPointTool.hxx>
#include <IntSurf_InteriorPointTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntPatch_TheSurfFunction.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <IntPatch_Polyhedron.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntPatch_PrmPrmIntersection_T3Bits.hxx>
#include <IntSurf_LineOn2S.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <IntPatch_Point.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <math_Vector.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <math_Matrix.hxx>
#include <Standard_DomainError.hxx>
#include <IntPatch_Line.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntPatch_Polyhedron.hxx>
#include <gp_Pnt.hxx>
#include <IntPatch_Polyhedron.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <IntPatch_HCurve2dTool.hxx>
#include <IntPatch_HInterTool.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntPatch_ArcFunction.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <IntPatch_ALine.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <IntPatch_HCurve2dTool.hxx>
#include <math_FunctionSetRoot.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntSurf_Quadric.hxx>
#include <IntSurf_QuadricTool.hxx>
#include <math_Matrix.hxx>
#include <IntPatch_WLine.hxx>
#include <IntPatch_RLine.hxx>

// module includes
#include <IntPatch_ALine.hxx>
#include <IntPatch_ALineToWLine.hxx>
#include <IntPatch_ArcFunction.hxx>
#include <IntPatch_CSFunction.hxx>
#include <IntPatch_CurvIntSurf.hxx>
#include <IntPatch_GLine.hxx>
#include <IntPatch_HCurve2dTool.hxx>
#include <IntPatch_HInterTool.hxx>
#include <IntPatch_ImpImpIntersection.hxx>
#include <IntPatch_ImpPrmIntersection.hxx>
#include <IntPatch_InterferencePolyhedron.hxx>
#include <IntPatch_Intersection.hxx>
#include <IntPatch_IType.hxx>
#include <IntPatch_Line.hxx>
#include <IntPatch_LineConstructor.hxx>
#include <IntPatch_Point.hxx>
#include <IntPatch_PointLine.hxx>
#include <IntPatch_PolyArc.hxx>
#include <IntPatch_Polygo.hxx>
#include <IntPatch_Polyhedron.hxx>
#include <IntPatch_PolyhedronTool.hxx>
#include <IntPatch_PolyLine.hxx>
#include <IntPatch_PrmPrmIntersection.hxx>
#include <IntPatch_PrmPrmIntersection_T3Bits.hxx>
#include <IntPatch_RLine.hxx>
#include <IntPatch_RstInt.hxx>
#include <IntPatch_SearchPnt.hxx>
#include <IntPatch_SequenceOfIWLineOfTheIWalking.hxx>
#include <IntPatch_SequenceOfLine.hxx>
#include <IntPatch_SequenceOfPathPointOfTheSOnBounds.hxx>
#include <IntPatch_SequenceOfPoint.hxx>
#include <IntPatch_SequenceOfSegmentOfTheSOnBounds.hxx>
#include <IntPatch_SpecialPoints.hxx>
#include <IntPatch_SpecPntType.hxx>
#include <IntPatch_TheIWalking.hxx>
#include <IntPatch_TheIWLineOfTheIWalking.hxx>
#include <IntPatch_ThePathPointOfTheSOnBounds.hxx>
#include <IntPatch_TheSearchInside.hxx>
#include <IntPatch_TheSegmentOfTheSOnBounds.hxx>
#include <IntPatch_TheSOnBounds.hxx>
#include <IntPatch_TheSurfFunction.hxx>
#include <IntPatch_WLine.hxx>
#include <IntPatch_WLineTool.hxx>

// template related includes
// ./opencascade/IntPatch_SequenceOfPoint.hxx
#include "NCollection.hxx"
// ./opencascade/IntPatch_SequenceOfPathPointOfTheSOnBounds.hxx
#include "NCollection.hxx"
// ./opencascade/IntPatch_SequenceOfIWLineOfTheIWalking.hxx
#include "NCollection.hxx"
// ./opencascade/IntPatch_SequenceOfLine.hxx
#include "NCollection.hxx"
// ./opencascade/IntPatch_SequenceOfSegmentOfTheSOnBounds.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntPatch(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IntPatch"));


//Python trampoline classes
    class Py_IntPatch_Polygo : public IntPatch_Polygo{
    public:
        using IntPatch_Polygo::IntPatch_Polygo;
        
        // public pure virtual
        Standard_Integer NbPoints() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,IntPatch_Polygo,NbPoints,) };
        gp_Pnt2d Point(const Standard_Integer Index) const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt2d,IntPatch_Polygo,Point,Index) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_IntPatch_PointLine : public IntPatch_PointLine{
    public:
        using IntPatch_PointLine::IntPatch_PointLine;
        
        // public pure virtual
        void AddVertex(const IntPatch_Point & Pnt,const Standard_Boolean theIsPrepend) override { PYBIND11_OVERLOAD_PURE(void,IntPatch_PointLine,AddVertex,Pnt,theIsPrepend) };
        Standard_Integer NbPnts() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,IntPatch_PointLine,NbPnts,) };
        Standard_Integer NbVertex() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,IntPatch_PointLine,NbVertex,) };
        const IntSurf_PntOn2S & Point(const Standard_Integer Index) const  override { PYBIND11_OVERLOAD_PURE(const IntSurf_PntOn2S &,IntPatch_PointLine,Point,Index) };
        const IntPatch_Point & Vertex(const Standard_Integer Index) const  override { PYBIND11_OVERLOAD_PURE(const IntPatch_Point &,IntPatch_PointLine,Vertex,Index) };
        IntPatch_Point & ChangeVertex(const Standard_Integer Index) override { PYBIND11_OVERLOAD_PURE(IntPatch_Point &,IntPatch_PointLine,ChangeVertex,Index) };
        void ClearVertexes() override { PYBIND11_OVERLOAD_PURE(void,IntPatch_PointLine,ClearVertexes,) };
        void RemoveVertex(const Standard_Integer theIndex) override { PYBIND11_OVERLOAD_PURE(void,IntPatch_PointLine,RemoveVertex,theIndex) };
        opencascade::handle<IntSurf_LineOn2S> Curve() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<IntSurf_LineOn2S>,IntPatch_PointLine,Curve,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes


    static_cast<py::class_<IntPatch_HInterTool ,std::unique_ptr<IntPatch_HInterTool>  >>(m.attr("IntPatch_HInterTool"))
        .def(py::init<  >()  )
        .def("NbSamplePoints",
             (Standard_Integer (IntPatch_HInterTool::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<Standard_Integer (IntPatch_HInterTool::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&IntPatch_HInterTool::NbSamplePoints),
             R"#(None)#"  , py::arg("S"))
        .def("SamplePoint",
             (void (IntPatch_HInterTool::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntPatch_HInterTool::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const>(&IntPatch_HInterTool::SamplePoint),
             R"#(None)#"  , py::arg("S"),  py::arg("Index"),  py::arg("U"),  py::arg("V"))
        .def_static("SingularOnUMin_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&IntPatch_HInterTool::SingularOnUMin),
                    R"#(None)#"  , py::arg("S"))
        .def_static("SingularOnUMax_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&IntPatch_HInterTool::SingularOnUMax),
                    R"#(None)#"  , py::arg("S"))
        .def_static("SingularOnVMin_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&IntPatch_HInterTool::SingularOnVMin),
                    R"#(None)#"  , py::arg("S"))
        .def_static("SingularOnVMax_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&IntPatch_HInterTool::SingularOnVMax),
                    R"#(None)#"  , py::arg("S"))
        .def_static("NbSamplesU_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real  ) >(&IntPatch_HInterTool::NbSamplesU),
                    R"#(None)#"  , py::arg("S"),  py::arg("u1"),  py::arg("u2"))
        .def_static("NbSamplesV_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real  ) >(&IntPatch_HInterTool::NbSamplesV),
                    R"#(None)#"  , py::arg("S"),  py::arg("v1"),  py::arg("v2"))
        .def_static("HasBeenSeen_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_HInterTool::HasBeenSeen),
                    R"#(Returns True if all the intersection point and edges are known on the Arc. The intersection point are given as vertices. The intersection edges are given as intervals between two vertices.)#"  , py::arg("C"))
        .def_static("NbSamplesOnArc_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_HInterTool::NbSamplesOnArc),
                    R"#(returns the number of points which is used to make a sample on the arc. this number is a function of the Surface and the CurveOnSurface complexity.)#"  , py::arg("A"))
        .def_static("Bounds_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  Standard_Real & ,  Standard_Real &  ) >(&IntPatch_HInterTool::Bounds),
                    R"#(Returns the parametric limits on the arc C. These limits must be finite : they are either the real limits of the arc, for a finite arc, or a bounding box for an infinite arc.)#"  , py::arg("C"),  py::arg("Ufirst"),  py::arg("Ulast"))
        .def_static("Project_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const gp_Pnt2d & ,  Standard_Real & ,  gp_Pnt2d &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const gp_Pnt2d & ,  Standard_Real & ,  gp_Pnt2d &  ) >(&IntPatch_HInterTool::Project),
                    R"#(Projects the point P on the arc C. If the methods returns Standard_True, the projection is successful, and Paramproj is the parameter on the arc of the projected point, Ptproj is the projected Point. If the method returns Standard_False, Param proj and Ptproj are not significant.)#"  , py::arg("C"),  py::arg("P"),  py::arg("Paramproj"),  py::arg("Ptproj"))
        .def_static("Tolerance_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HVertex> & ,  const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HVertex> & ,  const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_HInterTool::Tolerance),
                    R"#(Returns the parametric tolerance used to consider that the vertex and another point meet, i-e if Abs(parameter(Vertex) - parameter(OtherPnt))<= Tolerance, the points are "merged".)#"  , py::arg("V"),  py::arg("C"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HVertex> & ,  const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HVertex> & ,  const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_HInterTool::Parameter),
                    R"#(Returns the parameter of the vertex V on the arc A.)#"  , py::arg("V"),  py::arg("C"))
        .def_static("NbPoints_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_HInterTool::NbPoints),
                    R"#(Returns the number of intersection points on the arc A.)#"  , py::arg("C"))
        .def_static("Value_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Integer ,  gp_Pnt & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Integer ,  gp_Pnt & ,  Standard_Real & ,  Standard_Real &  ) >(&IntPatch_HInterTool::Value),
                    R"#(Returns the value (Pt), the tolerance (Tol), and the parameter (U) on the arc A , of the intersection point of range Index.)#"  , py::arg("C"),  py::arg("Index"),  py::arg("Pt"),  py::arg("Tol"),  py::arg("U"))
        .def_static("IsVertex_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Integer  ) >(&IntPatch_HInterTool::IsVertex),
                    R"#(Returns True if the intersection point of range Index corresponds with a vertex on the arc A.)#"  , py::arg("C"),  py::arg("Index"))
        .def_static("Vertex_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Integer ,  opencascade::handle<Adaptor3d_HVertex> &  ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Integer ,  opencascade::handle<Adaptor3d_HVertex> &  ) >(&IntPatch_HInterTool::Vertex),
                    R"#(When IsVertex returns True, this method returns the vertex on the arc A.)#"  , py::arg("C"),  py::arg("Index"),  py::arg("V"))
        .def_static("NbSegments_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_HInterTool::NbSegments),
                    R"#(returns the number of part of A solution of the of intersection problem.)#"  , py::arg("C"))
        .def_static("HasFirstPoint_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Integer ,  Standard_Integer &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Integer ,  Standard_Integer &  ) >(&IntPatch_HInterTool::HasFirstPoint),
                    R"#(Returns True when the segment of range Index is not open at the left side. In that case, IndFirst is the range in the list intersection points (see NbPoints) of the one which defines the left bound of the segment. Otherwise, the method has to return False, and IndFirst has no meaning.)#"  , py::arg("C"),  py::arg("Index"),  py::arg("IndFirst"))
        .def_static("HasLastPoint_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Integer ,  Standard_Integer &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Integer ,  Standard_Integer &  ) >(&IntPatch_HInterTool::HasLastPoint),
                    R"#(Returns True when the segment of range Index is not open at the right side. In that case, IndLast is the range in the list intersection points (see NbPoints) of the one which defines the right bound of the segment. Otherwise, the method has to return False, and IndLast has no meaning.)#"  , py::arg("C"),  py::arg("Index"),  py::arg("IndLast"))
        .def_static("IsAllSolution_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_HInterTool::IsAllSolution),
                    R"#(Returns True when the whole restriction is solution of the intersection problem.)#"  , py::arg("C"))
;


    static_cast<py::class_<IntPatch_ImpImpIntersection ,std::unique_ptr<IntPatch_ImpImpIntersection>  >>(m.attr("IntPatch_ImpImpIntersection"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_TopolTool> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_TopolTool> &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("S1"),  py::arg("D1"),  py::arg("S2"),  py::arg("D2"),  py::arg("TolArc"),  py::arg("TolTang"),  py::arg("theIsReqToKeepRLine")=static_cast<const Standard_Boolean>(Standard_False) )
        .def("Perform",
             (void (IntPatch_ImpImpIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (IntPatch_ImpImpIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&IntPatch_ImpImpIntersection::Perform),
             R"#(Flag theIsReqToKeepRLine has been entered only for compatibility with TopOpeBRep package. It shall be deleted after deleting TopOpeBRep. When intersection result returns IntPatch_RLine and another IntPatch_Line (not restriction) we (in case of theIsReqToKeepRLine==TRUE) will always keep both lines even if they are coincided.)#"  , py::arg("S1"),  py::arg("D1"),  py::arg("S2"),  py::arg("D2"),  py::arg("TolArc"),  py::arg("TolTang"),  py::arg("theIsReqToKeepRLine")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsDone",
             (Standard_Boolean (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::IsDone),
             R"#(Returns True if the calculus was successful.)#" )
        .def("GetStatus",
             (IntPatch_ImpImpIntersection::IntStatus (IntPatch_ImpImpIntersection::*)() const) static_cast<IntPatch_ImpImpIntersection::IntStatus (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::GetStatus),
             R"#(Returns status)#" )
        .def("IsEmpty",
             (Standard_Boolean (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::IsEmpty),
             R"#(Returns true if the is no intersection.)#" )
        .def("TangentFaces",
             (Standard_Boolean (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::TangentFaces),
             R"#(Returns True if the two patches are considered as entirely tangent, i.e every restriction arc of one patch is inside the geometric base of the other patch.)#" )
        .def("OppositeFaces",
             (Standard_Boolean (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::OppositeFaces),
             R"#(Returns True when the TangentFaces returns True and the normal vectors evaluated at a point on the first and the second surface are opposite. The exception DomainError is raised if TangentFaces returns False.)#" )
        .def("NbPnts",
             (Standard_Integer (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Integer (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::NbPnts),
             R"#(Returns the number of "single" points.)#" )
        .def("Point",
             (const IntPatch_Point & (IntPatch_ImpImpIntersection::*)( const Standard_Integer  ) const) static_cast<const IntPatch_Point & (IntPatch_ImpImpIntersection::*)( const Standard_Integer  ) const>(&IntPatch_ImpImpIntersection::Point),
             R"#(Returns the point of range Index. An exception is raised if Index<=0 or Index>NbPnt.)#"  , py::arg("Index"))
        .def("NbLines",
             (Standard_Integer (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Integer (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::NbLines),
             R"#(Returns the number of intersection lines.)#" )
        .def("Line",
             (const opencascade::handle<IntPatch_Line> & (IntPatch_ImpImpIntersection::*)( const Standard_Integer  ) const) static_cast<const opencascade::handle<IntPatch_Line> & (IntPatch_ImpImpIntersection::*)( const Standard_Integer  ) const>(&IntPatch_ImpImpIntersection::Line),
             R"#(Returns the line of range Index. An exception is raised if Index<=0 or Index>NbLine.)#"  , py::arg("Index"))
        .def("IsDone",
             (Standard_Boolean (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::IsDone),
             R"#(Returns True if the calculus was successful.)#" )
        .def("GetStatus",
             (IntPatch_ImpImpIntersection::IntStatus (IntPatch_ImpImpIntersection::*)() const) static_cast<IntPatch_ImpImpIntersection::IntStatus (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::GetStatus),
             R"#(Returns status)#" )
        .def("IsEmpty",
             (Standard_Boolean (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::IsEmpty),
             R"#(Returns true if the is no intersection.)#" )
        .def("TangentFaces",
             (Standard_Boolean (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::TangentFaces),
             R"#(Returns True if the two patches are considered as entirely tangent, i.e every restriction arc of one patch is inside the geometric base of the other patch.)#" )
        .def("OppositeFaces",
             (Standard_Boolean (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::OppositeFaces),
             R"#(Returns True when the TangentFaces returns True and the normal vectors evaluated at a point on the first and the second surface are opposite. The exception DomainError is raised if TangentFaces returns False.)#" )
        .def("NbPnts",
             (Standard_Integer (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Integer (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::NbPnts),
             R"#(Returns the number of "single" points.)#" )
        .def("Point",
             (const IntPatch_Point & (IntPatch_ImpImpIntersection::*)( const Standard_Integer  ) const) static_cast<const IntPatch_Point & (IntPatch_ImpImpIntersection::*)( const Standard_Integer  ) const>(&IntPatch_ImpImpIntersection::Point),
             R"#(Returns the point of range Index. An exception is raised if Index<=0 or Index>NbPnt.)#"  , py::arg("Index"))
        .def("NbLines",
             (Standard_Integer (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Integer (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::NbLines),
             R"#(Returns the number of intersection lines.)#" )
        .def("Line",
             (const opencascade::handle<IntPatch_Line> & (IntPatch_ImpImpIntersection::*)( const Standard_Integer  ) const) static_cast<const opencascade::handle<IntPatch_Line> & (IntPatch_ImpImpIntersection::*)( const Standard_Integer  ) const>(&IntPatch_ImpImpIntersection::Line),
             R"#(Returns the line of range Index. An exception is raised if Index<=0 or Index>NbLine.)#"  , py::arg("Index"))
;


    static_cast<py::class_<IntPatch_TheSearchInside ,std::unique_ptr<IntPatch_TheSearchInside>  >>(m.attr("IntPatch_TheSearchInside"))
        .def(py::init<  >()  )
        .def(py::init< IntPatch_TheSurfFunction &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_TopolTool> &,const Standard_Real >()  , py::arg("F"),  py::arg("Surf"),  py::arg("T"),  py::arg("Epsilon") )
        .def("Perform",
             (void (IntPatch_TheSearchInside::*)( IntPatch_TheSurfFunction & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real  ) ) static_cast<void (IntPatch_TheSearchInside::*)( IntPatch_TheSurfFunction & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real  ) >(&IntPatch_TheSearchInside::Perform),
             R"#(None)#"  , py::arg("F"),  py::arg("Surf"),  py::arg("T"),  py::arg("Epsilon"))
        .def("Perform",
             (void (IntPatch_TheSearchInside::*)( IntPatch_TheSurfFunction & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPatch_TheSearchInside::*)( IntPatch_TheSurfFunction & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real  ) >(&IntPatch_TheSearchInside::Perform),
             R"#(None)#"  , py::arg("F"),  py::arg("Surf"),  py::arg("UStart"),  py::arg("VStart"))
        .def("IsDone",
             (Standard_Boolean (IntPatch_TheSearchInside::*)() const) static_cast<Standard_Boolean (IntPatch_TheSearchInside::*)() const>(&IntPatch_TheSearchInside::IsDone),
             R"#(None)#" )
        .def("NbPoints",
             (Standard_Integer (IntPatch_TheSearchInside::*)() const) static_cast<Standard_Integer (IntPatch_TheSearchInside::*)() const>(&IntPatch_TheSearchInside::NbPoints),
             R"#(Returns the number of points. The exception NotDone if raised if IsDone returns False.)#" )
        .def("Value",
             (const IntSurf_InteriorPoint & (IntPatch_TheSearchInside::*)( const Standard_Integer  ) const) static_cast<const IntSurf_InteriorPoint & (IntPatch_TheSearchInside::*)( const Standard_Integer  ) const>(&IntPatch_TheSearchInside::Value),
             R"#(Returns the point of range Index. The exception NotDone if raised if IsDone returns False. The exception OutOfRange if raised if Index <= 0 or Index > NbPoints.)#"  , py::arg("Index"))
;


    static_cast<py::class_<IntPatch_TheIWLineOfTheIWalking ,opencascade::handle<IntPatch_TheIWLineOfTheIWalking>  , Standard_Transient >>(m.attr("IntPatch_TheIWLineOfTheIWalking"))
        .def(py::init<  const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator")=static_cast< const opencascade::handle<NCollection_BaseAllocator> &>(0) )
        .def("Reverse",
             (void (IntPatch_TheIWLineOfTheIWalking::*)() ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)() >(&IntPatch_TheIWLineOfTheIWalking::Reverse),
             R"#(reverse the points in the line. Hasfirst, HasLast are kept.)#" )
        .def("Cut",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Integer  ) >(&IntPatch_TheIWLineOfTheIWalking::Cut),
             R"#(Cut the line at the point of rank Index.)#"  , py::arg("Index"))
        .def("AddPoint",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const IntSurf_PntOn2S &  ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const IntSurf_PntOn2S &  ) >(&IntPatch_TheIWLineOfTheIWalking::AddPoint),
             R"#(Add a point in the line.)#"  , py::arg("P"))
        .def("AddStatusFirst",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean ,  const Standard_Boolean  ) >(&IntPatch_TheIWLineOfTheIWalking::AddStatusFirst),
             R"#(None)#"  , py::arg("Closed"),  py::arg("HasFirst"))
        .def("AddStatusFirst",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Integer ,  const IntSurf_PathPoint &  ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Integer ,  const IntSurf_PathPoint &  ) >(&IntPatch_TheIWLineOfTheIWalking::AddStatusFirst),
             R"#(None)#"  , py::arg("Closed"),  py::arg("HasLast"),  py::arg("Index"),  py::arg("P"))
        .def("AddStatusFirstLast",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&IntPatch_TheIWLineOfTheIWalking::AddStatusFirstLast),
             R"#(None)#"  , py::arg("Closed"),  py::arg("HasFirst"),  py::arg("HasLast"))
        .def("AddStatusLast",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean  ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean  ) >(&IntPatch_TheIWLineOfTheIWalking::AddStatusLast),
             R"#(None)#"  , py::arg("HasLast"))
        .def("AddStatusLast",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean ,  const Standard_Integer ,  const IntSurf_PathPoint &  ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean ,  const Standard_Integer ,  const IntSurf_PathPoint &  ) >(&IntPatch_TheIWLineOfTheIWalking::AddStatusLast),
             R"#(None)#"  , py::arg("HasLast"),  py::arg("Index"),  py::arg("P"))
        .def("AddIndexPassing",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Integer  ) >(&IntPatch_TheIWLineOfTheIWalking::AddIndexPassing),
             R"#(associer a l 'indice du point sur la ligne l'indice du point passant dans l'iterateur de depart)#"  , py::arg("Index"))
        .def("SetTangentVector",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const gp_Vec & ,  const Standard_Integer  ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const gp_Vec & ,  const Standard_Integer  ) >(&IntPatch_TheIWLineOfTheIWalking::SetTangentVector),
             R"#(None)#"  , py::arg("V"),  py::arg("Index"))
        .def("SetTangencyAtBegining",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean  ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean  ) >(&IntPatch_TheIWLineOfTheIWalking::SetTangencyAtBegining),
             R"#(None)#"  , py::arg("IsTangent"))
        .def("SetTangencyAtEnd",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean  ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean  ) >(&IntPatch_TheIWLineOfTheIWalking::SetTangencyAtEnd),
             R"#(None)#"  , py::arg("IsTangent"))
        .def("NbPoints",
             (Standard_Integer (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Integer (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::NbPoints),
             R"#(Returns the number of points of the line (including first point and end point : see HasLastPoint and HasFirstPoint).)#" )
        .def("Value",
             (const IntSurf_PntOn2S & (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Integer  ) const) static_cast<const IntSurf_PntOn2S & (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Integer  ) const>(&IntPatch_TheIWLineOfTheIWalking::Value),
             R"#(Returns the point of range Index. If index <= 0 or Index > NbPoints, an exception is raised.)#"  , py::arg("Index"))
        .def("Line",
             (const opencascade::handle<IntSurf_LineOn2S> & (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<const opencascade::handle<IntSurf_LineOn2S> & (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::Line),
             R"#(Returns the LineOn2S contained in the walking line.)#" )
        .def("IsClosed",
             (Standard_Boolean (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Boolean (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::IsClosed),
             R"#(Returns True if the line is closed.)#" )
        .def("HasFirstPoint",
             (Standard_Boolean (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Boolean (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::HasFirstPoint),
             R"#(Returns True if the first point of the line is a marching point . when is HasFirstPoint==False ,the line begins on the natural bound of the surface.the line can be too long)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Boolean (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::HasLastPoint),
             R"#(Returns True if the end point of the line is a marching point (Point from IntWS). when is HasFirstPoint==False ,the line ends on the natural bound of the surface.the line can be too long.)#" )
        .def("FirstPoint",
             (const IntSurf_PathPoint & (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<const IntSurf_PathPoint & (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::FirstPoint),
             R"#(Returns the first point of the line when it is a marching point. An exception is raised if HasFirstPoint returns False.)#" )
        .def("FirstPointIndex",
             (Standard_Integer (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Integer (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::FirstPointIndex),
             R"#(Returns the Index of first point of the line when it is a marching point.This index is the index in the PointStartIterator. An exception is raised if HasFirstPoint returns False.)#" )
        .def("LastPoint",
             (const IntSurf_PathPoint & (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<const IntSurf_PathPoint & (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::LastPoint),
             R"#(Returns the last point of the line when it is a marching point. An exception is raised if HasLastPoint returns False.)#" )
        .def("LastPointIndex",
             (Standard_Integer (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Integer (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::LastPointIndex),
             R"#(Returns the index of last point of the line when it is a marching point.This index is the index in the PointStartIterator. An exception is raised if HasLastPoint returns False.)#" )
        .def("NbPassingPoint",
             (Standard_Integer (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Integer (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::NbPassingPoint),
             R"#(returns the number of points belonging to Pnts1 which are passing point.)#" )
        .def("PassingPoint",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Integer ,  Standard_Integer & ,  Standard_Integer &  ) const) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Integer ,  Standard_Integer & ,  Standard_Integer &  ) const>(&IntPatch_TheIWLineOfTheIWalking::PassingPoint),
             R"#(returns the index of the point belonging to the line which is associated to the passing point belonging to Pnts1 an exception is raised if Index > NbPassingPoint())#"  , py::arg("Index"),  py::arg("IndexLine"),  py::arg("IndexPnts"))
        .def("TangentVector",
             (const gp_Vec & (IntPatch_TheIWLineOfTheIWalking::*)( Standard_Integer &  ) const) static_cast<const gp_Vec & (IntPatch_TheIWLineOfTheIWalking::*)( Standard_Integer &  ) const>(&IntPatch_TheIWLineOfTheIWalking::TangentVector),
             R"#(None)#"  , py::arg("Index"))
        .def("IsTangentAtBegining",
             (Standard_Boolean (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Boolean (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::IsTangentAtBegining),
             R"#(None)#" )
        .def("IsTangentAtEnd",
             (Standard_Boolean (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Boolean (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::IsTangentAtEnd),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IntPatch_TheIWLineOfTheIWalking::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IntPatch_TheIWLineOfTheIWalking::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IntPatch_TheIWalking ,std::unique_ptr<IntPatch_TheIWalking>  >>(m.attr("IntPatch_TheIWalking"))
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("Epsilon"),  py::arg("Deflection"),  py::arg("Step"),  py::arg("theToFillHoles")=static_cast<const Standard_Boolean>(Standard_False) )
        .def("SetTolerance",
             (void (IntPatch_TheIWalking::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPatch_TheIWalking::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntPatch_TheIWalking::SetTolerance),
             R"#(Deflection is the maximum deflection admitted between two consecutive points on a resulting polyline. Step is the maximum increment admitted between two consecutive points (in 2d space). Epsilon is the tolerance beyond which 2 points are confused)#"  , py::arg("Epsilon"),  py::arg("Deflection"),  py::arg("Step"))
        .def("Perform",
             (void (IntPatch_TheIWalking::*)(  const NCollection_Sequence<IntSurf_PathPoint> & ,   const NCollection_Sequence<IntSurf_InteriorPoint> & ,  IntPatch_TheSurfFunction & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Boolean  ) ) static_cast<void (IntPatch_TheIWalking::*)(  const NCollection_Sequence<IntSurf_PathPoint> & ,   const NCollection_Sequence<IntSurf_InteriorPoint> & ,  IntPatch_TheSurfFunction & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Boolean  ) >(&IntPatch_TheIWalking::Perform),
             R"#(Searches a set of polylines starting on a point of Pnts1 or Pnts2. Each point on a resulting polyline verifies F(u,v)=0)#"  , py::arg("Pnts1"),  py::arg("Pnts2"),  py::arg("Func"),  py::arg("S"),  py::arg("Reversed")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perform",
             (void (IntPatch_TheIWalking::*)(  const NCollection_Sequence<IntSurf_PathPoint> & ,  IntPatch_TheSurfFunction & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Boolean  ) ) static_cast<void (IntPatch_TheIWalking::*)(  const NCollection_Sequence<IntSurf_PathPoint> & ,  IntPatch_TheSurfFunction & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Boolean  ) >(&IntPatch_TheIWalking::Perform),
             R"#(Searches a set of polylines starting on a point of Pnts1. Each point on a resulting polyline verifies F(u,v)=0)#"  , py::arg("Pnts1"),  py::arg("Func"),  py::arg("S"),  py::arg("Reversed")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsDone",
             (Standard_Boolean (IntPatch_TheIWalking::*)() const) static_cast<Standard_Boolean (IntPatch_TheIWalking::*)() const>(&IntPatch_TheIWalking::IsDone),
             R"#(Returns true if the calculus was successful.)#" )
        .def("NbLines",
             (Standard_Integer (IntPatch_TheIWalking::*)() const) static_cast<Standard_Integer (IntPatch_TheIWalking::*)() const>(&IntPatch_TheIWalking::NbLines),
             R"#(Returns the number of resulting polylines. An exception is raised if IsDone returns False.)#" )
        .def("Value",
             (const opencascade::handle<IntPatch_TheIWLineOfTheIWalking> & (IntPatch_TheIWalking::*)( const Standard_Integer  ) const) static_cast<const opencascade::handle<IntPatch_TheIWLineOfTheIWalking> & (IntPatch_TheIWalking::*)( const Standard_Integer  ) const>(&IntPatch_TheIWalking::Value),
             R"#(Returns the polyline of range Index. An exception is raised if IsDone is False. An exception is raised if Index<=0 or Index>NbLines.)#"  , py::arg("Index"))
        .def("NbSinglePnts",
             (Standard_Integer (IntPatch_TheIWalking::*)() const) static_cast<Standard_Integer (IntPatch_TheIWalking::*)() const>(&IntPatch_TheIWalking::NbSinglePnts),
             R"#(Returns the number of points belonging to Pnts on which no line starts or ends. An exception is raised if IsDone returns False.)#" )
        .def("SinglePnt",
             (const IntSurf_PathPoint & (IntPatch_TheIWalking::*)( const Standard_Integer  ) const) static_cast<const IntSurf_PathPoint & (IntPatch_TheIWalking::*)( const Standard_Integer  ) const>(&IntPatch_TheIWalking::SinglePnt),
             R"#(Returns the point of range Index . An exception is raised if IsDone returns False. An exception is raised if Index<=0 or Index > NbSinglePnts.)#"  , py::arg("Index"))
;


    static_cast<py::class_<IntPatch_ArcFunction ,std::unique_ptr<IntPatch_ArcFunction>  , math_FunctionWithDerivative >>(m.attr("IntPatch_ArcFunction"))
        .def(py::init<  >()  )
        .def("SetQuadric",
             (void (IntPatch_ArcFunction::*)( const IntSurf_Quadric &  ) ) static_cast<void (IntPatch_ArcFunction::*)( const IntSurf_Quadric &  ) >(&IntPatch_ArcFunction::SetQuadric),
             R"#(None)#"  , py::arg("Q"))
        .def("Set",
             (void (IntPatch_ArcFunction::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<void (IntPatch_ArcFunction::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_ArcFunction::Set),
             R"#(None)#"  , py::arg("A"))
        .def("Set",
             (void (IntPatch_ArcFunction::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<void (IntPatch_ArcFunction::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&IntPatch_ArcFunction::Set),
             R"#(None)#"  , py::arg("S"))
        .def("Value",
             (Standard_Boolean (IntPatch_ArcFunction::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (IntPatch_ArcFunction::*)( const Standard_Real ,  Standard_Real &  ) >(&IntPatch_ArcFunction::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (IntPatch_ArcFunction::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (IntPatch_ArcFunction::*)( const Standard_Real ,  Standard_Real &  ) >(&IntPatch_ArcFunction::Derivative),
             R"#(None)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (IntPatch_ArcFunction::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (IntPatch_ArcFunction::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) >(&IntPatch_ArcFunction::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("NbSamples",
             (Standard_Integer (IntPatch_ArcFunction::*)() const) static_cast<Standard_Integer (IntPatch_ArcFunction::*)() const>(&IntPatch_ArcFunction::NbSamples),
             R"#(None)#" )
        .def("GetStateNumber",
             (Standard_Integer (IntPatch_ArcFunction::*)() ) static_cast<Standard_Integer (IntPatch_ArcFunction::*)() >(&IntPatch_ArcFunction::GetStateNumber),
             R"#(None)#" )
        .def("Valpoint",
             (const gp_Pnt & (IntPatch_ArcFunction::*)( const Standard_Integer  ) const) static_cast<const gp_Pnt & (IntPatch_ArcFunction::*)( const Standard_Integer  ) const>(&IntPatch_ArcFunction::Valpoint),
             R"#(None)#"  , py::arg("Index"))
        .def("Quadric",
             (const IntSurf_Quadric & (IntPatch_ArcFunction::*)() const) static_cast<const IntSurf_Quadric & (IntPatch_ArcFunction::*)() const>(&IntPatch_ArcFunction::Quadric),
             R"#(None)#" )
        .def("Arc",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_ArcFunction::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_ArcFunction::*)() const>(&IntPatch_ArcFunction::Arc),
             R"#(None)#" )
        .def("Surface",
             (const opencascade::handle<Adaptor3d_HSurface> & (IntPatch_ArcFunction::*)() const) static_cast<const opencascade::handle<Adaptor3d_HSurface> & (IntPatch_ArcFunction::*)() const>(&IntPatch_ArcFunction::Surface),
             R"#(None)#" )
        .def("LastComputedPoint",
             (const gp_Pnt & (IntPatch_ArcFunction::*)() const) static_cast<const gp_Pnt & (IntPatch_ArcFunction::*)() const>(&IntPatch_ArcFunction::LastComputedPoint),
             R"#(Returns the point, which has been computed while the last calling Value() method)#" )
        .def("Valpoint",
             (const gp_Pnt & (IntPatch_ArcFunction::*)( const Standard_Integer  ) const) static_cast<const gp_Pnt & (IntPatch_ArcFunction::*)( const Standard_Integer  ) const>(&IntPatch_ArcFunction::Valpoint),
             R"#(None)#"  , py::arg("Index"))
        .def("Set",
             (void (IntPatch_ArcFunction::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<void (IntPatch_ArcFunction::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_ArcFunction::Set),
             R"#(None)#"  , py::arg("A"))
        .def("Set",
             (void (IntPatch_ArcFunction::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<void (IntPatch_ArcFunction::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&IntPatch_ArcFunction::Set),
             R"#(None)#"  , py::arg("S"))
        .def("SetQuadric",
             (void (IntPatch_ArcFunction::*)( const IntSurf_Quadric &  ) ) static_cast<void (IntPatch_ArcFunction::*)( const IntSurf_Quadric &  ) >(&IntPatch_ArcFunction::SetQuadric),
             R"#(None)#"  , py::arg("Q"))
        .def("Quadric",
             (const IntSurf_Quadric & (IntPatch_ArcFunction::*)() const) static_cast<const IntSurf_Quadric & (IntPatch_ArcFunction::*)() const>(&IntPatch_ArcFunction::Quadric),
             R"#(None)#" )
        .def("Arc",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_ArcFunction::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_ArcFunction::*)() const>(&IntPatch_ArcFunction::Arc),
             R"#(None)#" )
        .def("Surface",
             (const opencascade::handle<Adaptor3d_HSurface> & (IntPatch_ArcFunction::*)() const) static_cast<const opencascade::handle<Adaptor3d_HSurface> & (IntPatch_ArcFunction::*)() const>(&IntPatch_ArcFunction::Surface),
             R"#(None)#" )
        .def("LastComputedPoint",
             (const gp_Pnt & (IntPatch_ArcFunction::*)() const) static_cast<const gp_Pnt & (IntPatch_ArcFunction::*)() const>(&IntPatch_ArcFunction::LastComputedPoint),
             R"#(Returns the point, which has been computed while the last calling Value() method)#" )
;


    static_cast<py::class_<IntPatch_Polygo ,std::unique_ptr<IntPatch_Polygo> ,Py_IntPatch_Polygo , Intf_Polygon2d >>(m.attr("IntPatch_Polygo"))
        .def("Error",
             (Standard_Real (IntPatch_Polygo::*)() const) static_cast<Standard_Real (IntPatch_Polygo::*)() const>(&IntPatch_Polygo::Error),
             R"#(None)#" )
        .def("NbPoints",
             (Standard_Integer (IntPatch_Polygo::*)() const) static_cast<Standard_Integer (IntPatch_Polygo::*)() const>(&IntPatch_Polygo::NbPoints),
             R"#(None)#" )
        .def("Point",
             (gp_Pnt2d (IntPatch_Polygo::*)( const Standard_Integer  ) const) static_cast<gp_Pnt2d (IntPatch_Polygo::*)( const Standard_Integer  ) const>(&IntPatch_Polygo::Point),
             R"#(None)#"  , py::arg("Index"))
        .def("DeflectionOverEstimation",
             (Standard_Real (IntPatch_Polygo::*)() const) static_cast<Standard_Real (IntPatch_Polygo::*)() const>(&IntPatch_Polygo::DeflectionOverEstimation),
             R"#(Returns the tolerance of the polygon.)#" )
        .def("NbSegments",
             (Standard_Integer (IntPatch_Polygo::*)() const) static_cast<Standard_Integer (IntPatch_Polygo::*)() const>(&IntPatch_Polygo::NbSegments),
             R"#(Returns the number of Segments in the polyline.)#" )
        .def("Segment",
             (void (IntPatch_Polygo::*)( const Standard_Integer ,  gp_Pnt2d & ,  gp_Pnt2d &  ) const) static_cast<void (IntPatch_Polygo::*)( const Standard_Integer ,  gp_Pnt2d & ,  gp_Pnt2d &  ) const>(&IntPatch_Polygo::Segment),
             R"#(Returns the points of the segment <Index> in the Polygon.)#"  , py::arg("theIndex"),  py::arg("theBegin"),  py::arg("theEnd"))
        .def("Dump",
             (void (IntPatch_Polygo::*)() const) static_cast<void (IntPatch_Polygo::*)() const>(&IntPatch_Polygo::Dump),
             R"#(None)#" )
        .def("Error",
             (Standard_Real (IntPatch_Polygo::*)() const) static_cast<Standard_Real (IntPatch_Polygo::*)() const>(&IntPatch_Polygo::Error),
             R"#(None)#" )
        .def("DeflectionOverEstimation",
             (Standard_Real (IntPatch_Polygo::*)() const) static_cast<Standard_Real (IntPatch_Polygo::*)() const>(&IntPatch_Polygo::DeflectionOverEstimation),
             R"#(Returns the tolerance of the polygon.)#" )
        .def("NbSegments",
             (Standard_Integer (IntPatch_Polygo::*)() const) static_cast<Standard_Integer (IntPatch_Polygo::*)() const>(&IntPatch_Polygo::NbSegments),
             R"#(Returns the number of Segments in the polyline.)#" )
        .def("Segment",
             (void (IntPatch_Polygo::*)( const Standard_Integer ,  gp_Pnt2d & ,  gp_Pnt2d &  ) const) static_cast<void (IntPatch_Polygo::*)( const Standard_Integer ,  gp_Pnt2d & ,  gp_Pnt2d &  ) const>(&IntPatch_Polygo::Segment),
             R"#(Returns the points of the segment <Index> in the Polygon.)#"  , py::arg("theIndex"),  py::arg("theBegin"),  py::arg("theEnd"))
;

    register_default_constructor<IntPatch_HCurve2dTool ,std::unique_ptr<IntPatch_HCurve2dTool>>(m,"IntPatch_HCurve2dTool");

    static_cast<py::class_<IntPatch_HCurve2dTool ,std::unique_ptr<IntPatch_HCurve2dTool>  >>(m.attr("IntPatch_HCurve2dTool"))
        .def_static("FirstParameter_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_HCurve2dTool::FirstParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("LastParameter_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_HCurve2dTool::LastParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Continuity_s",
                    (GeomAbs_Shape (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<GeomAbs_Shape (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_HCurve2dTool::Continuity),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbIntervals_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const GeomAbs_Shape  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const GeomAbs_Shape  ) >(&IntPatch_HCurve2dTool::NbIntervals),
                    R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(myclass) >= <S>)#"  , py::arg("C"),  py::arg("S"))
        .def_static("Intervals_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) >(&IntPatch_HCurve2dTool::Intervals),
                    R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("C"),  py::arg("T"),  py::arg("S"))
        .def_static("IsClosed_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_HCurve2dTool::IsClosed),
                    R"#(None)#"  , py::arg("C"))
        .def_static("IsPeriodic_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_HCurve2dTool::IsPeriodic),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Period_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_HCurve2dTool::Period),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real  ) ) static_cast<gp_Pnt2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real  ) >(&IntPatch_HCurve2dTool::Value),
                    R"#(Computes the point of parameter U on the curve.)#"  , py::arg("C"),  py::arg("U"))
        .def_static("D0_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real ,  gp_Pnt2d &  ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real ,  gp_Pnt2d &  ) >(&IntPatch_HCurve2dTool::D0),
                    R"#(Computes the point of parameter U on the curve.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) >(&IntPatch_HCurve2dTool::D1),
                    R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def_static("D2_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&IntPatch_HCurve2dTool::D2),
                    R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D3_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&IntPatch_HCurve2dTool::D3),
                    R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("DN_s",
                    (gp_Vec2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<gp_Vec2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real ,  const Standard_Integer  ) >(&IntPatch_HCurve2dTool::DN),
                    R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("C"),  py::arg("U"),  py::arg("N"))
        .def_static("Resolution_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real  ) >(&IntPatch_HCurve2dTool::Resolution),
                    R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("C"),  py::arg("R3d"))
        .def_static("GetType_s",
                    (GeomAbs_CurveType (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<GeomAbs_CurveType (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_HCurve2dTool::GetType),
                    R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#"  , py::arg("C"))
        .def_static("Line_s",
                    (gp_Lin2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<gp_Lin2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_HCurve2dTool::Line),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Circle_s",
                    (gp_Circ2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<gp_Circ2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_HCurve2dTool::Circle),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Ellipse_s",
                    (gp_Elips2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<gp_Elips2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_HCurve2dTool::Ellipse),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Hyperbola_s",
                    (gp_Hypr2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<gp_Hypr2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_HCurve2dTool::Hyperbola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Parabola_s",
                    (gp_Parab2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<gp_Parab2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_HCurve2dTool::Parabola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Bezier_s",
                    (opencascade::handle<Geom2d_BezierCurve> (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<opencascade::handle<Geom2d_BezierCurve> (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_HCurve2dTool::Bezier),
                    R"#(None)#"  , py::arg("C"))
        .def_static("BSpline_s",
                    (opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_HCurve2dTool::BSpline),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbSamples_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real ,  const Standard_Real  ) >(&IntPatch_HCurve2dTool::NbSamples),
                    R"#(None)#"  , py::arg("C"),  py::arg("U0"),  py::arg("U1"))
;


    static_cast<py::class_<IntPatch_Intersection ,std::unique_ptr<IntPatch_Intersection>  >>(m.attr("IntPatch_Intersection"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_TopolTool> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_TopolTool> &,const Standard_Real,const Standard_Real >()  , py::arg("S1"),  py::arg("D1"),  py::arg("S2"),  py::arg("D2"),  py::arg("TolArc"),  py::arg("TolTang") )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_TopolTool> &,const Standard_Real,const Standard_Real >()  , py::arg("S1"),  py::arg("D1"),  py::arg("TolArc"),  py::arg("TolTang") )
        .def("SetTolerances",
             (void (IntPatch_Intersection::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPatch_Intersection::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntPatch_Intersection::SetTolerances),
             R"#(Set the tolerances used by the algorithms: --- Implicit - Parametric --- Parametric - Parametric --- Implicit - Implicit)#"  , py::arg("TolArc"),  py::arg("TolTang"),  py::arg("UVMaxStep"),  py::arg("Fleche"))
        .def("Perform",
             (void (IntPatch_Intersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (IntPatch_Intersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&IntPatch_Intersection::Perform),
             R"#(Flag theIsReqToKeepRLine has been entered only for compatibility with TopOpeBRep package. It shall be deleted after deleting TopOpeBRep. When intersection result returns IntPatch_RLine and another IntPatch_Line (not restriction) we (in case of theIsReqToKeepRLine==TRUE) will always keep both lines even if they are coincided. Flag theIsReqToPostWLProc has been entered only for compatibility with TopOpeBRep package. It shall be deleted after deleting TopOpeBRep. If theIsReqToPostWLProc == FALSE, then we will work with Walking-line obtained after intersection algorithm directly (wothout any post-processing).)#"  , py::arg("S1"),  py::arg("D1"),  py::arg("S2"),  py::arg("D2"),  py::arg("TolArc"),  py::arg("TolTang"),  py::arg("isGeomInt")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("theIsReqToKeepRLine")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theIsReqToPostWLProc")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Perform",
             (void (IntPatch_Intersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  NCollection_List<IntSurf_PntOn2S> & ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (IntPatch_Intersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  NCollection_List<IntSurf_PntOn2S> & ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&IntPatch_Intersection::Perform),
             R"#(If isGeomInt == Standard_False, then method Param-Param intersection will be used. Flag theIsReqToKeepRLine has been entered only for compatibility with TopOpeBRep package. It shall be deleted after deleting TopOpeBRep. When intersection result returns IntPatch_RLine and another IntPatch_Line (not restriction) we (in case of theIsReqToKeepRLine==TRUE) will always keep both lines even if they are coincided. Flag theIsReqToPostWLProc has been entered only for compatibility with TopOpeBRep package. It shall be deleted after deleting TopOpeBRep. If theIsReqToPostWLProc == FALSE, then we will work with Walking-line obtained after intersection algorithm directly (without any post-processing).)#"  , py::arg("S1"),  py::arg("D1"),  py::arg("S2"),  py::arg("D2"),  py::arg("TolArc"),  py::arg("TolTang"),  py::arg("LOfPnts"),  py::arg("isGeomInt")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("theIsReqToKeepRLine")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theIsReqToPostWLProc")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Perform",
             (void (IntPatch_Intersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPatch_Intersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntPatch_Intersection::Perform),
             R"#(Perform with start point)#"  , py::arg("S1"),  py::arg("D1"),  py::arg("S2"),  py::arg("D2"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("TolArc"),  py::arg("TolTang"))
        .def("Perform",
             (void (IntPatch_Intersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPatch_Intersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real  ) >(&IntPatch_Intersection::Perform),
             R"#(Uses for finding self-intersected surfaces.)#"  , py::arg("S1"),  py::arg("D1"),  py::arg("TolArc"),  py::arg("TolTang"))
        .def("IsDone",
             (Standard_Boolean (IntPatch_Intersection::*)() const) static_cast<Standard_Boolean (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::IsDone),
             R"#(Returns True if the calculus was successful.)#" )
        .def("IsEmpty",
             (Standard_Boolean (IntPatch_Intersection::*)() const) static_cast<Standard_Boolean (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::IsEmpty),
             R"#(Returns true if the is no intersection.)#" )
        .def("TangentFaces",
             (Standard_Boolean (IntPatch_Intersection::*)() const) static_cast<Standard_Boolean (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::TangentFaces),
             R"#(Returns True if the two patches are considered as entirely tangent, i-e every restriction arc of one patch is inside the geometric base of the other patch.)#" )
        .def("OppositeFaces",
             (Standard_Boolean (IntPatch_Intersection::*)() const) static_cast<Standard_Boolean (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::OppositeFaces),
             R"#(Returns True when the TangentFaces returns True and the normal vectors evaluated at a point on the first and the second surface are opposite. The exception DomainError is raised if TangentFaces returns False.)#" )
        .def("NbPnts",
             (Standard_Integer (IntPatch_Intersection::*)() const) static_cast<Standard_Integer (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::NbPnts),
             R"#(Returns the number of "single" points.)#" )
        .def("Point",
             (const IntPatch_Point & (IntPatch_Intersection::*)( const Standard_Integer  ) const) static_cast<const IntPatch_Point & (IntPatch_Intersection::*)( const Standard_Integer  ) const>(&IntPatch_Intersection::Point),
             R"#(Returns the point of range Index. An exception is raised if Index<=0 or Index>NbPnt.)#"  , py::arg("Index"))
        .def("NbLines",
             (Standard_Integer (IntPatch_Intersection::*)() const) static_cast<Standard_Integer (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::NbLines),
             R"#(Returns the number of intersection lines.)#" )
        .def("Line",
             (const opencascade::handle<IntPatch_Line> & (IntPatch_Intersection::*)( const Standard_Integer  ) const) static_cast<const opencascade::handle<IntPatch_Line> & (IntPatch_Intersection::*)( const Standard_Integer  ) const>(&IntPatch_Intersection::Line),
             R"#(Returns the line of range Index. An exception is raised if Index<=0 or Index>NbLine.)#"  , py::arg("Index"))
        .def("SequenceOfLine",
             (const IntPatch_SequenceOfLine & (IntPatch_Intersection::*)() const) static_cast<const IntPatch_SequenceOfLine & (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::SequenceOfLine),
             R"#(None)#" )
        .def("Dump",
             (void (IntPatch_Intersection::*)( const Standard_Integer ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> &  ) const) static_cast<void (IntPatch_Intersection::*)( const Standard_Integer ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> &  ) const>(&IntPatch_Intersection::Dump),
             R"#(Dump of each result line. Mode for more accurate dumps.)#"  , py::arg("Mode"),  py::arg("S1"),  py::arg("D1"),  py::arg("S2"),  py::arg("D2"))
        .def("IsDone",
             (Standard_Boolean (IntPatch_Intersection::*)() const) static_cast<Standard_Boolean (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::IsDone),
             R"#(Returns True if the calculus was successful.)#" )
        .def("IsEmpty",
             (Standard_Boolean (IntPatch_Intersection::*)() const) static_cast<Standard_Boolean (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::IsEmpty),
             R"#(Returns true if the is no intersection.)#" )
        .def("TangentFaces",
             (Standard_Boolean (IntPatch_Intersection::*)() const) static_cast<Standard_Boolean (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::TangentFaces),
             R"#(Returns True if the two patches are considered as entirely tangent, i-e every restriction arc of one patch is inside the geometric base of the other patch.)#" )
        .def("OppositeFaces",
             (Standard_Boolean (IntPatch_Intersection::*)() const) static_cast<Standard_Boolean (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::OppositeFaces),
             R"#(Returns True when the TangentFaces returns True and the normal vectors evaluated at a point on the first and the second surface are opposite. The exception DomainError is raised if TangentFaces returns False.)#" )
        .def("NbPnts",
             (Standard_Integer (IntPatch_Intersection::*)() const) static_cast<Standard_Integer (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::NbPnts),
             R"#(Returns the number of "single" points.)#" )
        .def("Point",
             (const IntPatch_Point & (IntPatch_Intersection::*)( const Standard_Integer  ) const) static_cast<const IntPatch_Point & (IntPatch_Intersection::*)( const Standard_Integer  ) const>(&IntPatch_Intersection::Point),
             R"#(Returns the point of range Index. An exception is raised if Index<=0 or Index>NbPnt.)#"  , py::arg("Index"))
        .def("NbLines",
             (Standard_Integer (IntPatch_Intersection::*)() const) static_cast<Standard_Integer (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::NbLines),
             R"#(Returns the number of intersection lines.)#" )
        .def("Line",
             (const opencascade::handle<IntPatch_Line> & (IntPatch_Intersection::*)( const Standard_Integer  ) const) static_cast<const opencascade::handle<IntPatch_Line> & (IntPatch_Intersection::*)( const Standard_Integer  ) const>(&IntPatch_Intersection::Line),
             R"#(Returns the line of range Index. An exception is raised if Index<=0 or Index>NbLine.)#"  , py::arg("Index"))
;


    static_cast<py::class_<IntPatch_ImpPrmIntersection ,std::unique_ptr<IntPatch_ImpPrmIntersection>  >>(m.attr("IntPatch_ImpPrmIntersection"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_TopolTool> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_TopolTool> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Surf1"),  py::arg("D1"),  py::arg("Surf2"),  py::arg("D2"),  py::arg("TolArc"),  py::arg("TolTang"),  py::arg("Fleche"),  py::arg("Pas") )
        .def("SetStartPoint",
             (void (IntPatch_ImpPrmIntersection::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPatch_ImpPrmIntersection::*)( const Standard_Real ,  const Standard_Real  ) >(&IntPatch_ImpPrmIntersection::SetStartPoint),
             R"#(to search for solution from the given point)#"  , py::arg("U"),  py::arg("V"))
        .def("Perform",
             (void (IntPatch_ImpPrmIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPatch_ImpPrmIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntPatch_ImpPrmIntersection::Perform),
             R"#(None)#"  , py::arg("Surf1"),  py::arg("D1"),  py::arg("Surf2"),  py::arg("D2"),  py::arg("TolArc"),  py::arg("TolTang"),  py::arg("Fleche"),  py::arg("Pas"))
        .def("IsDone",
             (Standard_Boolean (IntPatch_ImpPrmIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpPrmIntersection::*)() const>(&IntPatch_ImpPrmIntersection::IsDone),
             R"#(Returns true if the calculus was succesfull.)#" )
        .def("IsEmpty",
             (Standard_Boolean (IntPatch_ImpPrmIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpPrmIntersection::*)() const>(&IntPatch_ImpPrmIntersection::IsEmpty),
             R"#(Returns true if the is no intersection.)#" )
        .def("NbPnts",
             (Standard_Integer (IntPatch_ImpPrmIntersection::*)() const) static_cast<Standard_Integer (IntPatch_ImpPrmIntersection::*)() const>(&IntPatch_ImpPrmIntersection::NbPnts),
             R"#(Returns the number of "single" points.)#" )
        .def("Point",
             (const IntPatch_Point & (IntPatch_ImpPrmIntersection::*)( const Standard_Integer  ) const) static_cast<const IntPatch_Point & (IntPatch_ImpPrmIntersection::*)( const Standard_Integer  ) const>(&IntPatch_ImpPrmIntersection::Point),
             R"#(Returns the point of range Index. An exception is raised if Index<=0 or Index>NbPnt.)#"  , py::arg("Index"))
        .def("NbLines",
             (Standard_Integer (IntPatch_ImpPrmIntersection::*)() const) static_cast<Standard_Integer (IntPatch_ImpPrmIntersection::*)() const>(&IntPatch_ImpPrmIntersection::NbLines),
             R"#(Returns the number of intersection lines.)#" )
        .def("Line",
             (const opencascade::handle<IntPatch_Line> & (IntPatch_ImpPrmIntersection::*)( const Standard_Integer  ) const) static_cast<const opencascade::handle<IntPatch_Line> & (IntPatch_ImpPrmIntersection::*)( const Standard_Integer  ) const>(&IntPatch_ImpPrmIntersection::Line),
             R"#(Returns the line of range Index. An exception is raised if Index<=0 or Index>NbLine.)#"  , py::arg("Index"))
        .def("IsDone",
             (Standard_Boolean (IntPatch_ImpPrmIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpPrmIntersection::*)() const>(&IntPatch_ImpPrmIntersection::IsDone),
             R"#(Returns true if the calculus was succesfull.)#" )
        .def("IsEmpty",
             (Standard_Boolean (IntPatch_ImpPrmIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpPrmIntersection::*)() const>(&IntPatch_ImpPrmIntersection::IsEmpty),
             R"#(Returns true if the is no intersection.)#" )
        .def("NbPnts",
             (Standard_Integer (IntPatch_ImpPrmIntersection::*)() const) static_cast<Standard_Integer (IntPatch_ImpPrmIntersection::*)() const>(&IntPatch_ImpPrmIntersection::NbPnts),
             R"#(Returns the number of "single" points.)#" )
        .def("Point",
             (const IntPatch_Point & (IntPatch_ImpPrmIntersection::*)( const Standard_Integer  ) const) static_cast<const IntPatch_Point & (IntPatch_ImpPrmIntersection::*)( const Standard_Integer  ) const>(&IntPatch_ImpPrmIntersection::Point),
             R"#(Returns the point of range Index. An exception is raised if Index<=0 or Index>NbPnt.)#"  , py::arg("Index"))
        .def("NbLines",
             (Standard_Integer (IntPatch_ImpPrmIntersection::*)() const) static_cast<Standard_Integer (IntPatch_ImpPrmIntersection::*)() const>(&IntPatch_ImpPrmIntersection::NbLines),
             R"#(Returns the number of intersection lines.)#" )
        .def("Line",
             (const opencascade::handle<IntPatch_Line> & (IntPatch_ImpPrmIntersection::*)( const Standard_Integer  ) const) static_cast<const opencascade::handle<IntPatch_Line> & (IntPatch_ImpPrmIntersection::*)( const Standard_Integer  ) const>(&IntPatch_ImpPrmIntersection::Line),
             R"#(Returns the line of range Index. An exception is raised if Index<=0 or Index>NbLine.)#"  , py::arg("Index"))
;


    static_cast<py::class_<IntPatch_Point ,std::unique_ptr<IntPatch_Point>  >>(m.attr("IntPatch_Point"))
        .def(py::init<  >()  )
        .def("SetValue",
             (void (IntPatch_Point::*)( const gp_Pnt & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (IntPatch_Point::*)( const gp_Pnt & ,  const Standard_Real ,  const Standard_Boolean  ) >(&IntPatch_Point::SetValue),
             R"#(Sets the values of a point which is on no domain, when both surfaces are implicit ones. If Tangent is True, the point is a point of tangency between the surfaces.)#"  , py::arg("Pt"),  py::arg("Tol"),  py::arg("Tangent"))
        .def("SetValue",
             (void (IntPatch_Point::*)( const gp_Pnt &  ) ) static_cast<void (IntPatch_Point::*)( const gp_Pnt &  ) >(&IntPatch_Point::SetValue),
             R"#(None)#"  , py::arg("Pt"))
        .def("SetValue",
             (void (IntPatch_Point::*)( const IntSurf_PntOn2S &  ) ) static_cast<void (IntPatch_Point::*)( const IntSurf_PntOn2S &  ) >(&IntPatch_Point::SetValue),
             R"#(Sets the value of <pt> member)#"  , py::arg("thePOn2S"))
        .def("SetTolerance",
             (void (IntPatch_Point::*)( const Standard_Real  ) ) static_cast<void (IntPatch_Point::*)( const Standard_Real  ) >(&IntPatch_Point::SetTolerance),
             R"#(None)#"  , py::arg("Tol"))
        .def("SetParameters",
             (void (IntPatch_Point::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPatch_Point::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntPatch_Point::SetParameters),
             R"#(Sets the values of the parameters of the point on each surface.)#"  , py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"))
        .def("SetParameter",
             (void (IntPatch_Point::*)( const Standard_Real  ) ) static_cast<void (IntPatch_Point::*)( const Standard_Real  ) >(&IntPatch_Point::SetParameter),
             R"#(Set the value of the parameter on the intersection line.)#"  , py::arg("Para"))
        .def("SetVertex",
             (void (IntPatch_Point::*)( const Standard_Boolean ,  const opencascade::handle<Adaptor3d_HVertex> &  ) ) static_cast<void (IntPatch_Point::*)( const Standard_Boolean ,  const opencascade::handle<Adaptor3d_HVertex> &  ) >(&IntPatch_Point::SetVertex),
             R"#(Sets the values of a point which is a vertex on the initial facet of restriction of one of the surface. If OnFirst is True, the point is on the domain of the first patch, otherwise the point is on the domain of the second surface.)#"  , py::arg("OnFirst"),  py::arg("V"))
        .def("SetArc",
             (void (IntPatch_Point::*)( const Standard_Boolean ,  const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real ,  const IntSurf_Transition & ,  const IntSurf_Transition &  ) ) static_cast<void (IntPatch_Point::*)( const Standard_Boolean ,  const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real ,  const IntSurf_Transition & ,  const IntSurf_Transition &  ) >(&IntPatch_Point::SetArc),
             R"#(Sets the values of a point which is on one of the domain, when both surfaces are implicit ones. If OnFirst is True, the point is on the domain of the first patch, otherwise the point is on the domain of the second surface.)#"  , py::arg("OnFirst"),  py::arg("A"),  py::arg("Param"),  py::arg("TLine"),  py::arg("TArc"))
        .def("SetMultiple",
             (void (IntPatch_Point::*)( const Standard_Boolean  ) ) static_cast<void (IntPatch_Point::*)( const Standard_Boolean  ) >(&IntPatch_Point::SetMultiple),
             R"#(Sets (or unsets) the point as a point on several intersection line.)#"  , py::arg("IsMult"))
        .def("Value",
             (const gp_Pnt & (IntPatch_Point::*)() const) static_cast<const gp_Pnt & (IntPatch_Point::*)() const>(&IntPatch_Point::Value),
             R"#(Returns the intersection point (geometric information).)#" )
        .def("ParameterOnLine",
             (Standard_Real (IntPatch_Point::*)() const) static_cast<Standard_Real (IntPatch_Point::*)() const>(&IntPatch_Point::ParameterOnLine),
             R"#(This method returns the parameter of the point on the intersection line. If the points does not belong to an intersection line, the value returned does not have any sens.)#" )
        .def("Tolerance",
             (Standard_Real (IntPatch_Point::*)() const) static_cast<Standard_Real (IntPatch_Point::*)() const>(&IntPatch_Point::Tolerance),
             R"#(This method returns the fuzziness on the point.)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsTangencyPoint),
             R"#(Returns True if the Point is a tangency point between the surfaces. If the Point is on one of the domain (IsOnDomS1 returns True or IsOnDomS2 returns True), an exception is raised.)#" )
        .def("ParametersOnS1",
             (void (IntPatch_Point::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntPatch_Point::*)( Standard_Real & ,  Standard_Real &  ) const>(&IntPatch_Point::ParametersOnS1),
             R"#(Returns the parameters on the first surface of the point.)#"  , py::arg("U1"),  py::arg("V1"))
        .def("ParametersOnS2",
             (void (IntPatch_Point::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntPatch_Point::*)( Standard_Real & ,  Standard_Real &  ) const>(&IntPatch_Point::ParametersOnS2),
             R"#(Returns the parameters on the second surface of the point.)#"  , py::arg("U2"),  py::arg("V2"))
        .def("IsMultiple",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsMultiple),
             R"#(Returns True if the point belongs to several intersection lines.)#" )
        .def("IsOnDomS1",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsOnDomS1),
             R"#(Returns TRUE if the point is on a boundary of the domain of the first patch.)#" )
        .def("IsVertexOnS1",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsVertexOnS1),
             R"#(Returns TRUE if the point is a vertex on the initial restriction facet of the first surface.)#" )
        .def("VertexOnS1",
             (const opencascade::handle<Adaptor3d_HVertex> & (IntPatch_Point::*)() const) static_cast<const opencascade::handle<Adaptor3d_HVertex> & (IntPatch_Point::*)() const>(&IntPatch_Point::VertexOnS1),
             R"#(Returns the information about the point when it is on the domain of the first patch, i-e when the function IsVertexOnS1 returns True. Otherwise, an exception is raised.)#" )
        .def("ArcOnS1",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_Point::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_Point::*)() const>(&IntPatch_Point::ArcOnS1),
             R"#(Returns the arc of restriction containing the vertex. The exception DomainError is raised if IsOnDomS1 returns False.)#" )
        .def("TransitionLineArc1",
             (const IntSurf_Transition & (IntPatch_Point::*)() const) static_cast<const IntSurf_Transition & (IntPatch_Point::*)() const>(&IntPatch_Point::TransitionLineArc1),
             R"#(Returns the transition of the point on the intersection line with the arc on S1. The exception DomainError is raised if IsOnDomS1 returns False.)#" )
        .def("TransitionOnS1",
             (const IntSurf_Transition & (IntPatch_Point::*)() const) static_cast<const IntSurf_Transition & (IntPatch_Point::*)() const>(&IntPatch_Point::TransitionOnS1),
             R"#(Returns the transition between the intersection line returned by the method Line and the arc on S1 returned by ArcOnS1(). The exception DomainError is raised if IsOnDomS1 returns False.)#" )
        .def("ParameterOnArc1",
             (Standard_Real (IntPatch_Point::*)() const) static_cast<Standard_Real (IntPatch_Point::*)() const>(&IntPatch_Point::ParameterOnArc1),
             R"#(Returns the parameter of the point on the arc returned by the method ArcOnS2. The exception DomainError is raised if IsOnDomS1 returns False.)#" )
        .def("IsOnDomS2",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsOnDomS2),
             R"#(Returns TRUE if the point is on a boundary of the domain of the second patch.)#" )
        .def("IsVertexOnS2",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsVertexOnS2),
             R"#(Returns TRUE if the point is a vertex on the initial restriction facet of the first surface.)#" )
        .def("VertexOnS2",
             (const opencascade::handle<Adaptor3d_HVertex> & (IntPatch_Point::*)() const) static_cast<const opencascade::handle<Adaptor3d_HVertex> & (IntPatch_Point::*)() const>(&IntPatch_Point::VertexOnS2),
             R"#(Returns the information about the point when it is on the domain of the second patch, i-e when the function IsVertexOnS2 returns True. Otherwise, an exception is raised.)#" )
        .def("ArcOnS2",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_Point::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_Point::*)() const>(&IntPatch_Point::ArcOnS2),
             R"#(Returns the arc of restriction containing the vertex. The exception DomainError is raised if IsOnDomS2 returns False.)#" )
        .def("TransitionLineArc2",
             (const IntSurf_Transition & (IntPatch_Point::*)() const) static_cast<const IntSurf_Transition & (IntPatch_Point::*)() const>(&IntPatch_Point::TransitionLineArc2),
             R"#(Returns the transition of the point on the intersection line with the arc on S2. The exception DomainError is raised if IsOnDomS2 returns False.)#" )
        .def("TransitionOnS2",
             (const IntSurf_Transition & (IntPatch_Point::*)() const) static_cast<const IntSurf_Transition & (IntPatch_Point::*)() const>(&IntPatch_Point::TransitionOnS2),
             R"#(Returns the transition between the intersection line returned by the method Line and the arc on S2 returned by ArcOnS2. The exception DomainError is raised if IsOnDomS2 returns False.)#" )
        .def("ParameterOnArc2",
             (Standard_Real (IntPatch_Point::*)() const) static_cast<Standard_Real (IntPatch_Point::*)() const>(&IntPatch_Point::ParameterOnArc2),
             R"#(Returns the parameter of the point on the arc returned by the method ArcOnS2. The exception DomainError is raised if IsOnDomS2 returns False.)#" )
        .def("PntOn2S",
             (const IntSurf_PntOn2S & (IntPatch_Point::*)() const) static_cast<const IntSurf_PntOn2S & (IntPatch_Point::*)() const>(&IntPatch_Point::PntOn2S),
             R"#(Returns the PntOn2S (geometric Point and the parameters))#" )
        .def("Parameters",
             (void (IntPatch_Point::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntPatch_Point::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const>(&IntPatch_Point::Parameters),
             R"#(Returns the parameters on the first and on the second surface of the point.)#"  , py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"))
        .def("ReverseTransition",
             (void (IntPatch_Point::*)() ) static_cast<void (IntPatch_Point::*)() >(&IntPatch_Point::ReverseTransition),
             R"#(None)#" )
        .def("Dump",
             (void (IntPatch_Point::*)() const) static_cast<void (IntPatch_Point::*)() const>(&IntPatch_Point::Dump),
             R"#(None)#" )
        .def("SetValue",
             (void (IntPatch_Point::*)( const gp_Pnt &  ) ) static_cast<void (IntPatch_Point::*)( const gp_Pnt &  ) >(&IntPatch_Point::SetValue),
             R"#(None)#"  , py::arg("Pt"))
        .def("SetValue",
             (void (IntPatch_Point::*)( const IntSurf_PntOn2S &  ) ) static_cast<void (IntPatch_Point::*)( const IntSurf_PntOn2S &  ) >(&IntPatch_Point::SetValue),
             R"#(Sets the value of <pt> member)#"  , py::arg("thePOn2S"))
        .def("SetTolerance",
             (void (IntPatch_Point::*)( const Standard_Real  ) ) static_cast<void (IntPatch_Point::*)( const Standard_Real  ) >(&IntPatch_Point::SetTolerance),
             R"#(None)#"  , py::arg("Tol"))
        .def("SetParameters",
             (void (IntPatch_Point::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPatch_Point::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntPatch_Point::SetParameters),
             R"#(Sets the values of the parameters of the point on each surface.)#"  , py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"))
        .def("SetParameter",
             (void (IntPatch_Point::*)( const Standard_Real  ) ) static_cast<void (IntPatch_Point::*)( const Standard_Real  ) >(&IntPatch_Point::SetParameter),
             R"#(Set the value of the parameter on the intersection line.)#"  , py::arg("Para"))
        .def("SetMultiple",
             (void (IntPatch_Point::*)( const Standard_Boolean  ) ) static_cast<void (IntPatch_Point::*)( const Standard_Boolean  ) >(&IntPatch_Point::SetMultiple),
             R"#(Sets (or unsets) the point as a point on several intersection line.)#"  , py::arg("IsMult"))
        .def("Value",
             (const gp_Pnt & (IntPatch_Point::*)() const) static_cast<const gp_Pnt & (IntPatch_Point::*)() const>(&IntPatch_Point::Value),
             R"#(Returns the intersection point (geometric information).)#" )
        .def("Tolerance",
             (Standard_Real (IntPatch_Point::*)() const) static_cast<Standard_Real (IntPatch_Point::*)() const>(&IntPatch_Point::Tolerance),
             R"#(This method returns the fuzziness on the point.)#" )
        .def("ParameterOnLine",
             (Standard_Real (IntPatch_Point::*)() const) static_cast<Standard_Real (IntPatch_Point::*)() const>(&IntPatch_Point::ParameterOnLine),
             R"#(This method returns the parameter of the point on the intersection line. If the points does not belong to an intersection line, the value returned does not have any sens.)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsTangencyPoint),
             R"#(Returns True if the Point is a tangency point between the surfaces. If the Point is on one of the domain (IsOnDomS1 returns True or IsOnDomS2 returns True), an exception is raised.)#" )
        .def("ParametersOnS1",
             (void (IntPatch_Point::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntPatch_Point::*)( Standard_Real & ,  Standard_Real &  ) const>(&IntPatch_Point::ParametersOnS1),
             R"#(Returns the parameters on the first surface of the point.)#"  , py::arg("U1"),  py::arg("V1"))
        .def("ParametersOnS2",
             (void (IntPatch_Point::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntPatch_Point::*)( Standard_Real & ,  Standard_Real &  ) const>(&IntPatch_Point::ParametersOnS2),
             R"#(Returns the parameters on the second surface of the point.)#"  , py::arg("U2"),  py::arg("V2"))
        .def("IsMultiple",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsMultiple),
             R"#(Returns True if the point belongs to several intersection lines.)#" )
        .def("IsOnDomS1",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsOnDomS1),
             R"#(Returns TRUE if the point is on a boundary of the domain of the first patch.)#" )
        .def("IsVertexOnS1",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsVertexOnS1),
             R"#(Returns TRUE if the point is a vertex on the initial restriction facet of the first surface.)#" )
        .def("VertexOnS1",
             (const opencascade::handle<Adaptor3d_HVertex> & (IntPatch_Point::*)() const) static_cast<const opencascade::handle<Adaptor3d_HVertex> & (IntPatch_Point::*)() const>(&IntPatch_Point::VertexOnS1),
             R"#(Returns the information about the point when it is on the domain of the first patch, i-e when the function IsVertexOnS1 returns True. Otherwise, an exception is raised.)#" )
        .def("ArcOnS1",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_Point::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_Point::*)() const>(&IntPatch_Point::ArcOnS1),
             R"#(Returns the arc of restriction containing the vertex. The exception DomainError is raised if IsOnDomS1 returns False.)#" )
        .def("TransitionLineArc1",
             (const IntSurf_Transition & (IntPatch_Point::*)() const) static_cast<const IntSurf_Transition & (IntPatch_Point::*)() const>(&IntPatch_Point::TransitionLineArc1),
             R"#(Returns the transition of the point on the intersection line with the arc on S1. The exception DomainError is raised if IsOnDomS1 returns False.)#" )
        .def("TransitionOnS1",
             (const IntSurf_Transition & (IntPatch_Point::*)() const) static_cast<const IntSurf_Transition & (IntPatch_Point::*)() const>(&IntPatch_Point::TransitionOnS1),
             R"#(Returns the transition between the intersection line returned by the method Line and the arc on S1 returned by ArcOnS1(). The exception DomainError is raised if IsOnDomS1 returns False.)#" )
        .def("ParameterOnArc1",
             (Standard_Real (IntPatch_Point::*)() const) static_cast<Standard_Real (IntPatch_Point::*)() const>(&IntPatch_Point::ParameterOnArc1),
             R"#(Returns the parameter of the point on the arc returned by the method ArcOnS2. The exception DomainError is raised if IsOnDomS1 returns False.)#" )
        .def("IsOnDomS2",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsOnDomS2),
             R"#(Returns TRUE if the point is on a boundary of the domain of the second patch.)#" )
        .def("IsVertexOnS2",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsVertexOnS2),
             R"#(Returns TRUE if the point is a vertex on the initial restriction facet of the first surface.)#" )
        .def("VertexOnS2",
             (const opencascade::handle<Adaptor3d_HVertex> & (IntPatch_Point::*)() const) static_cast<const opencascade::handle<Adaptor3d_HVertex> & (IntPatch_Point::*)() const>(&IntPatch_Point::VertexOnS2),
             R"#(Returns the information about the point when it is on the domain of the second patch, i-e when the function IsVertexOnS2 returns True. Otherwise, an exception is raised.)#" )
        .def("ArcOnS2",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_Point::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_Point::*)() const>(&IntPatch_Point::ArcOnS2),
             R"#(Returns the arc of restriction containing the vertex. The exception DomainError is raised if IsOnDomS2 returns False.)#" )
        .def("TransitionLineArc2",
             (const IntSurf_Transition & (IntPatch_Point::*)() const) static_cast<const IntSurf_Transition & (IntPatch_Point::*)() const>(&IntPatch_Point::TransitionLineArc2),
             R"#(Returns the transition of the point on the intersection line with the arc on S2. The exception DomainError is raised if IsOnDomS2 returns False.)#" )
        .def("TransitionOnS2",
             (const IntSurf_Transition & (IntPatch_Point::*)() const) static_cast<const IntSurf_Transition & (IntPatch_Point::*)() const>(&IntPatch_Point::TransitionOnS2),
             R"#(Returns the transition between the intersection line returned by the method Line and the arc on S2 returned by ArcOnS2. The exception DomainError is raised if IsOnDomS2 returns False.)#" )
        .def("ParameterOnArc2",
             (Standard_Real (IntPatch_Point::*)() const) static_cast<Standard_Real (IntPatch_Point::*)() const>(&IntPatch_Point::ParameterOnArc2),
             R"#(Returns the parameter of the point on the arc returned by the method ArcOnS2. The exception DomainError is raised if IsOnDomS2 returns False.)#" )
        .def("PntOn2S",
             (const IntSurf_PntOn2S & (IntPatch_Point::*)() const) static_cast<const IntSurf_PntOn2S & (IntPatch_Point::*)() const>(&IntPatch_Point::PntOn2S),
             R"#(Returns the PntOn2S (geometric Point and the parameters))#" )
        .def("Parameters",
             (void (IntPatch_Point::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntPatch_Point::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const>(&IntPatch_Point::Parameters),
             R"#(Returns the parameters on the first and on the second surface of the point.)#"  , py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"))
;


    static_cast<py::class_<IntPatch_PrmPrmIntersection_T3Bits ,std::unique_ptr<IntPatch_PrmPrmIntersection_T3Bits>  >>(m.attr("IntPatch_PrmPrmIntersection_T3Bits"))
        .def(py::init< const Standard_Integer >()  , py::arg("size") )
        .def("Destroy",
             (void (IntPatch_PrmPrmIntersection_T3Bits::*)() ) static_cast<void (IntPatch_PrmPrmIntersection_T3Bits::*)() >(&IntPatch_PrmPrmIntersection_T3Bits::Destroy),
             R"#(None)#" )
        .def("Add",
             (void (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer  ) >(&IntPatch_PrmPrmIntersection_T3Bits::Add),
             R"#(None)#"  , py::arg("t"))
        .def("Val",
             (Standard_Integer (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer  ) const>(&IntPatch_PrmPrmIntersection_T3Bits::Val),
             R"#(None)#"  , py::arg("t"))
        .def("Raz",
             (void (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer  ) >(&IntPatch_PrmPrmIntersection_T3Bits::Raz),
             R"#(None)#"  , py::arg("t"))
        .def("ResetAnd",
             (void (IntPatch_PrmPrmIntersection_T3Bits::*)() ) static_cast<void (IntPatch_PrmPrmIntersection_T3Bits::*)() >(&IntPatch_PrmPrmIntersection_T3Bits::ResetAnd),
             R"#(None)#" )
        .def("And",
             (Standard_Integer (IntPatch_PrmPrmIntersection_T3Bits::*)( IntPatch_PrmPrmIntersection_T3Bits & ,  Standard_Integer &  ) ) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection_T3Bits::*)( IntPatch_PrmPrmIntersection_T3Bits & ,  Standard_Integer &  ) >(&IntPatch_PrmPrmIntersection_T3Bits::And),
             R"#(None)#"  , py::arg("Oth"),  py::arg("indiceprecedent"))
        .def("Add",
             (void (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer  ) >(&IntPatch_PrmPrmIntersection_T3Bits::Add),
             R"#(None)#"  , py::arg("t"))
        .def("Val",
             (Standard_Integer (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer  ) const>(&IntPatch_PrmPrmIntersection_T3Bits::Val),
             R"#(None)#"  , py::arg("t"))
        .def("Raz",
             (void (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer  ) >(&IntPatch_PrmPrmIntersection_T3Bits::Raz),
             R"#(None)#"  , py::arg("t"))
;

    register_default_constructor<IntPatch_PolyhedronTool ,std::unique_ptr<IntPatch_PolyhedronTool>>(m,"IntPatch_PolyhedronTool");

    static_cast<py::class_<IntPatch_PolyhedronTool ,std::unique_ptr<IntPatch_PolyhedronTool>  >>(m.attr("IntPatch_PolyhedronTool"))
        .def_static("Bounding_s",
                    (const Bnd_Box & (*)( const IntPatch_Polyhedron &  ) ) static_cast<const Bnd_Box & (*)( const IntPatch_Polyhedron &  ) >(&IntPatch_PolyhedronTool::Bounding),
                    R"#(Give the bounding box of the Polyhedron.)#"  , py::arg("thePolyh"))
        .def_static("ComponentsBounding_s",
                    (const opencascade::handle<Bnd_HArray1OfBox> & (*)( const IntPatch_Polyhedron &  ) ) static_cast<const opencascade::handle<Bnd_HArray1OfBox> & (*)( const IntPatch_Polyhedron &  ) >(&IntPatch_PolyhedronTool::ComponentsBounding),
                    R"#(Give the array of boxes. The box <n> corresponding to the triangle <n>.)#"  , py::arg("thePolyh"))
        .def_static("DeflectionOverEstimation_s",
                    (Standard_Real (*)( const IntPatch_Polyhedron &  ) ) static_cast<Standard_Real (*)( const IntPatch_Polyhedron &  ) >(&IntPatch_PolyhedronTool::DeflectionOverEstimation),
                    R"#(Give the tolerance of the polygon.)#"  , py::arg("thePolyh"))
        .def_static("NbTriangles_s",
                    (Standard_Integer (*)( const IntPatch_Polyhedron &  ) ) static_cast<Standard_Integer (*)( const IntPatch_Polyhedron &  ) >(&IntPatch_PolyhedronTool::NbTriangles),
                    R"#(Give the number of triangles in this polyedral surface.)#"  , py::arg("thePolyh"))
        .def_static("Triangle_s",
                    (void (*)( const IntPatch_Polyhedron & ,  const Standard_Integer ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) ) static_cast<void (*)( const IntPatch_Polyhedron & ,  const Standard_Integer ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) >(&IntPatch_PolyhedronTool::Triangle),
                    R"#(Give the indices of the 3 points of the triangle of address Index in the Polyhedron.)#"  , py::arg("thePolyh"),  py::arg("Index"),  py::arg("P1"),  py::arg("P2"),  py::arg("P3"))
        .def_static("Point_s",
                    (const gp_Pnt & (*)( const IntPatch_Polyhedron & ,  const Standard_Integer  ) ) static_cast<const gp_Pnt & (*)( const IntPatch_Polyhedron & ,  const Standard_Integer  ) >(&IntPatch_PolyhedronTool::Point),
                    R"#(Give the point of index i in the polyedral surface.)#"  , py::arg("thePolyh"),  py::arg("Index"))
        .def_static("TriConnex_s",
                    (Standard_Integer (*)( const IntPatch_Polyhedron & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  Standard_Integer & ,  Standard_Integer &  ) ) static_cast<Standard_Integer (*)( const IntPatch_Polyhedron & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  Standard_Integer & ,  Standard_Integer &  ) >(&IntPatch_PolyhedronTool::TriConnex),
                    R"#(Gives the addresse Tricon of the triangle connexe to the triangle of address Triang by the edge Pivot Pedge and the third point of this connexe triangle. When we are on a free edge TriCon==0 but the function return the value of the triangle in the other side of Pivot on the free edge. Used to turn around a vertex.)#"  , py::arg("thePolyh"),  py::arg("Triang"),  py::arg("Pivot"),  py::arg("Pedge"),  py::arg("TriCon"),  py::arg("OtherP"))
;


    static_cast<py::class_<IntPatch_TheSOnBounds ,std::unique_ptr<IntPatch_TheSOnBounds>  >>(m.attr("IntPatch_TheSOnBounds"))
        .def(py::init<  >()  )
        .def("Perform",
             (void (IntPatch_TheSOnBounds::*)( IntPatch_ArcFunction & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (IntPatch_TheSOnBounds::*)( IntPatch_ArcFunction & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&IntPatch_TheSOnBounds::Perform),
             R"#(Algorithm to find the points and parts of curves of Domain (domain of of restriction of a surface) which verify F = 0. TolBoundary defines if a curve is on Q. TolTangency defines if a point is on Q.)#"  , py::arg("F"),  py::arg("Domain"),  py::arg("TolBoundary"),  py::arg("TolTangency"),  py::arg("RecheckOnRegularity")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsDone",
             (Standard_Boolean (IntPatch_TheSOnBounds::*)() const) static_cast<Standard_Boolean (IntPatch_TheSOnBounds::*)() const>(&IntPatch_TheSOnBounds::IsDone),
             R"#(Returns True if the calculus was successful.)#" )
        .def("AllArcSolution",
             (Standard_Boolean (IntPatch_TheSOnBounds::*)() const) static_cast<Standard_Boolean (IntPatch_TheSOnBounds::*)() const>(&IntPatch_TheSOnBounds::AllArcSolution),
             R"#(Returns true if all arc of the Arcs are solution (inside the surface). An exception is raised if IsDone returns False.)#" )
        .def("NbPoints",
             (Standard_Integer (IntPatch_TheSOnBounds::*)() const) static_cast<Standard_Integer (IntPatch_TheSOnBounds::*)() const>(&IntPatch_TheSOnBounds::NbPoints),
             R"#(Returns the number of resulting points. An exception is raised if IsDone returns False (NotDone).)#" )
        .def("Point",
             (const IntPatch_ThePathPointOfTheSOnBounds & (IntPatch_TheSOnBounds::*)( const Standard_Integer  ) const) static_cast<const IntPatch_ThePathPointOfTheSOnBounds & (IntPatch_TheSOnBounds::*)( const Standard_Integer  ) const>(&IntPatch_TheSOnBounds::Point),
             R"#(Returns the resulting point of range Index. The exception NotDone is raised if IsDone() returns False. The exception OutOfRange is raised if Index <= 0 or Index > NbPoints.)#"  , py::arg("Index"))
        .def("NbSegments",
             (Standard_Integer (IntPatch_TheSOnBounds::*)() const) static_cast<Standard_Integer (IntPatch_TheSOnBounds::*)() const>(&IntPatch_TheSOnBounds::NbSegments),
             R"#(Returns the number of the resulting segments. An exception is raised if IsDone returns False (NotDone).)#" )
        .def("Segment",
             (const IntPatch_TheSegmentOfTheSOnBounds & (IntPatch_TheSOnBounds::*)( const Standard_Integer  ) const) static_cast<const IntPatch_TheSegmentOfTheSOnBounds & (IntPatch_TheSOnBounds::*)( const Standard_Integer  ) const>(&IntPatch_TheSOnBounds::Segment),
             R"#(Returns the resulting segment of range Index. The exception NotDone is raised if IsDone() returns False. The exception OutOfRange is raised if Index <= 0 or Index > NbPoints.)#"  , py::arg("Index"))
;


    static_cast<py::class_<IntPatch_CurvIntSurf ,std::unique_ptr<IntPatch_CurvIntSurf>  >>(m.attr("IntPatch_CurvIntSurf"))
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const IntPatch_CSFunction &,const Standard_Real,const Standard_Real >()  , py::arg("U"),  py::arg("V"),  py::arg("W"),  py::arg("F"),  py::arg("TolTangency"),  py::arg("MarginCoef")=static_cast<const Standard_Real>(0.0) )
        .def(py::init< const IntPatch_CSFunction &,const Standard_Real >()  , py::arg("F"),  py::arg("TolTangency") )
        .def("Perform",
             (void (IntPatch_CurvIntSurf::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_FunctionSetRoot & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPatch_CurvIntSurf::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_FunctionSetRoot & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntPatch_CurvIntSurf::Perform),
             R"#(compute the solution it's possible to write to optimize: IntImp_IntCS inter(S1,C1,Toltangency) math_FunctionSetRoot rsnld(Inter.function()) while ...{ u=... v=... w=... inter.Perform(u,v,w,rsnld) } or IntImp_IntCS inter(Toltangency) inter.SetSurface(S); math_FunctionSetRoot rsnld(Inter.function()) while ...{ C=... inter.SetCurve(C); u=... v=... w=... inter.Perform(u,v,w,rsnld) })#"  , py::arg("U"),  py::arg("V"),  py::arg("W"),  py::arg("Rsnld"),  py::arg("u0"),  py::arg("v0"),  py::arg("u1"),  py::arg("v1"),  py::arg("w0"),  py::arg("w1"))
        .def("IsDone",
             (Standard_Boolean (IntPatch_CurvIntSurf::*)() const) static_cast<Standard_Boolean (IntPatch_CurvIntSurf::*)() const>(&IntPatch_CurvIntSurf::IsDone),
             R"#(Returns TRUE if the creation completed without failure.)#" )
        .def("IsEmpty",
             (Standard_Boolean (IntPatch_CurvIntSurf::*)() const) static_cast<Standard_Boolean (IntPatch_CurvIntSurf::*)() const>(&IntPatch_CurvIntSurf::IsEmpty),
             R"#(None)#" )
        .def("Point",
             (const gp_Pnt & (IntPatch_CurvIntSurf::*)() const) static_cast<const gp_Pnt & (IntPatch_CurvIntSurf::*)() const>(&IntPatch_CurvIntSurf::Point),
             R"#(returns the intersection point The exception NotDone is raised if IsDone is false. The exception DomainError is raised if IsEmpty is true.)#" )
        .def("ParameterOnCurve",
             (Standard_Real (IntPatch_CurvIntSurf::*)() const) static_cast<Standard_Real (IntPatch_CurvIntSurf::*)() const>(&IntPatch_CurvIntSurf::ParameterOnCurve),
             R"#(None)#" )
        .def("ParameterOnSurface",
             (void (IntPatch_CurvIntSurf::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntPatch_CurvIntSurf::*)( Standard_Real & ,  Standard_Real &  ) const>(&IntPatch_CurvIntSurf::ParameterOnSurface),
             R"#(None)#"  , py::arg("U"),  py::arg("V"))
        .def("Function",
             (IntPatch_CSFunction & (IntPatch_CurvIntSurf::*)() ) static_cast<IntPatch_CSFunction & (IntPatch_CurvIntSurf::*)() >(&IntPatch_CurvIntSurf::Function),
             R"#(return the math function which is used to compute the intersection)#" )
;


    static_cast<py::class_<IntPatch_LineConstructor ,std::unique_ptr<IntPatch_LineConstructor>  >>(m.attr("IntPatch_LineConstructor"))
        .def(py::init< const Standard_Integer >()  , py::arg("mode") )
        .def("Perform",
             (void (IntPatch_LineConstructor::*)(  const NCollection_Sequence<opencascade::handle<IntPatch_Line> > & ,  const opencascade::handle<IntPatch_Line> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real  ) ) static_cast<void (IntPatch_LineConstructor::*)(  const NCollection_Sequence<opencascade::handle<IntPatch_Line> > & ,  const opencascade::handle<IntPatch_Line> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real  ) >(&IntPatch_LineConstructor::Perform),
             R"#(None)#"  , py::arg("SL"),  py::arg("L"),  py::arg("S1"),  py::arg("D1"),  py::arg("S2"),  py::arg("D2"),  py::arg("Tol"))
        .def("NbLines",
             (Standard_Integer (IntPatch_LineConstructor::*)() const) static_cast<Standard_Integer (IntPatch_LineConstructor::*)() const>(&IntPatch_LineConstructor::NbLines),
             R"#(None)#" )
        .def("Line",
             (opencascade::handle<IntPatch_Line> (IntPatch_LineConstructor::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IntPatch_Line> (IntPatch_LineConstructor::*)( const Standard_Integer  ) const>(&IntPatch_LineConstructor::Line),
             R"#(None)#"  , py::arg("index"))
;


    static_cast<py::class_<IntPatch_PolyLine ,std::unique_ptr<IntPatch_PolyLine>  , IntPatch_Polygo >>(m.attr("IntPatch_PolyLine"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real >()  , py::arg("InitDefle") )
        .def("SetWLine",
             (void (IntPatch_PolyLine::*)( const Standard_Boolean ,  const opencascade::handle<IntPatch_WLine> &  ) ) static_cast<void (IntPatch_PolyLine::*)( const Standard_Boolean ,  const opencascade::handle<IntPatch_WLine> &  ) >(&IntPatch_PolyLine::SetWLine),
             R"#(None)#"  , py::arg("OnFirst"),  py::arg("Line"))
        .def("SetRLine",
             (void (IntPatch_PolyLine::*)( const Standard_Boolean ,  const opencascade::handle<IntPatch_RLine> &  ) ) static_cast<void (IntPatch_PolyLine::*)( const Standard_Boolean ,  const opencascade::handle<IntPatch_RLine> &  ) >(&IntPatch_PolyLine::SetRLine),
             R"#(None)#"  , py::arg("OnFirst"),  py::arg("Line"))
        .def("ResetError",
             (void (IntPatch_PolyLine::*)() ) static_cast<void (IntPatch_PolyLine::*)() >(&IntPatch_PolyLine::ResetError),
             R"#(None)#" )
        .def("NbPoints",
             (Standard_Integer (IntPatch_PolyLine::*)() const) static_cast<Standard_Integer (IntPatch_PolyLine::*)() const>(&IntPatch_PolyLine::NbPoints),
             R"#(None)#" )
        .def("Point",
             (gp_Pnt2d (IntPatch_PolyLine::*)( const Standard_Integer  ) const) static_cast<gp_Pnt2d (IntPatch_PolyLine::*)( const Standard_Integer  ) const>(&IntPatch_PolyLine::Point),
             R"#(None)#"  , py::arg("Index"))
;


    static_cast<py::class_<IntPatch_PolyArc ,std::unique_ptr<IntPatch_PolyArc>  , IntPatch_Polygo >>(m.attr("IntPatch_PolyArc"))
        .def(py::init< const opencascade::handle<Adaptor2d_HCurve2d> &,const Standard_Integer,const Standard_Real,const Standard_Real,const Bnd_Box2d & >()  , py::arg("A"),  py::arg("NbSample"),  py::arg("Pfirst"),  py::arg("Plast"),  py::arg("BoxOtherPolygon") )
        .def("Closed",
             (Standard_Boolean (IntPatch_PolyArc::*)() const) static_cast<Standard_Boolean (IntPatch_PolyArc::*)() const>(&IntPatch_PolyArc::Closed),
             R"#(None)#" )
        .def("NbPoints",
             (Standard_Integer (IntPatch_PolyArc::*)() const) static_cast<Standard_Integer (IntPatch_PolyArc::*)() const>(&IntPatch_PolyArc::NbPoints),
             R"#(None)#" )
        .def("Point",
             (gp_Pnt2d (IntPatch_PolyArc::*)( const Standard_Integer  ) const) static_cast<gp_Pnt2d (IntPatch_PolyArc::*)( const Standard_Integer  ) const>(&IntPatch_PolyArc::Point),
             R"#(None)#"  , py::arg("Index"))
        .def("Parameter",
             (Standard_Real (IntPatch_PolyArc::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IntPatch_PolyArc::*)( const Standard_Integer  ) const>(&IntPatch_PolyArc::Parameter),
             R"#(None)#"  , py::arg("Index"))
        .def("SetOffset",
             (void (IntPatch_PolyArc::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPatch_PolyArc::*)( const Standard_Real ,  const Standard_Real  ) >(&IntPatch_PolyArc::SetOffset),
             R"#(None)#"  , py::arg("OffsetX"),  py::arg("OffsetY"))
;

    register_default_constructor<IntPatch_Line ,opencascade::handle<IntPatch_Line>>(m,"IntPatch_Line");

    static_cast<py::class_<IntPatch_Line ,opencascade::handle<IntPatch_Line>  , Standard_Transient >>(m.attr("IntPatch_Line"))
        .def("SetValue",
             (void (IntPatch_Line::*)( const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (IntPatch_Line::*)( const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&IntPatch_Line::SetValue),
             R"#(To set the values returned by IsUIsoS1,.... The default values are False.)#"  , py::arg("Uiso1"),  py::arg("Viso1"),  py::arg("Uiso2"),  py::arg("Viso2"))
        .def("ArcType",
             (IntPatch_IType (IntPatch_Line::*)() const) static_cast<IntPatch_IType (IntPatch_Line::*)() const>(&IntPatch_Line::ArcType),
             R"#(Returns the type of geometry 3d (Line, Circle, Parabola, Hyperbola, Ellipse, Analytic, Walking, Restriction))#" )
        .def("IsTangent",
             (Standard_Boolean (IntPatch_Line::*)() const) static_cast<Standard_Boolean (IntPatch_Line::*)() const>(&IntPatch_Line::IsTangent),
             R"#(Returns TRUE if the intersection is a line of tangency between the 2 patches.)#" )
        .def("TransitionOnS1",
             (IntSurf_TypeTrans (IntPatch_Line::*)() const) static_cast<IntSurf_TypeTrans (IntPatch_Line::*)() const>(&IntPatch_Line::TransitionOnS1),
             R"#(Returns the type of the transition of the line for the first surface. The transition is "constant" along the line. The transition is IN if the line is oriented in such a way that the system of vector (N1,N2,T) is right-handed, where N1 is the normal to the first surface at a point P, N2 is the normal to the second surface at a point P, T is the tangent to the intersection line at P. If the system of vector is left-handed, the transition is OUT. When N1 and N2 are colinear all along the intersection line, the transition will be - TOUCH, if it is possible to use the 2nd derivatives to determine the position of one surafce compared to the other (see Situation) - UNDECIDED otherwise.)#" )
        .def("TransitionOnS2",
             (IntSurf_TypeTrans (IntPatch_Line::*)() const) static_cast<IntSurf_TypeTrans (IntPatch_Line::*)() const>(&IntPatch_Line::TransitionOnS2),
             R"#(Returns the type of the transition of the line for the second surface. The transition is "constant" along the line.)#" )
        .def("SituationS1",
             (IntSurf_Situation (IntPatch_Line::*)() const) static_cast<IntSurf_Situation (IntPatch_Line::*)() const>(&IntPatch_Line::SituationS1),
             R"#(Returns the situation (INSIDE/OUTSIDE/UNKNOWN) of the first patch compared to the second one, when TransitionOnS1 or TransitionOnS2 returns TOUCH. Otherwise, an exception is raised.)#" )
        .def("SituationS2",
             (IntSurf_Situation (IntPatch_Line::*)() const) static_cast<IntSurf_Situation (IntPatch_Line::*)() const>(&IntPatch_Line::SituationS2),
             R"#(Returns the situation (INSIDE/OUTSIDE/UNKNOWN) of the second patch compared to the first one, when TransitionOnS1 or TransitionOnS2 returns TOUCH. Otherwise, an exception is raised.)#" )
        .def("IsUIsoOnS1",
             (Standard_Boolean (IntPatch_Line::*)() const) static_cast<Standard_Boolean (IntPatch_Line::*)() const>(&IntPatch_Line::IsUIsoOnS1),
             R"#(Returns TRUE if the intersection is a U isoparametric curve on the first patch.)#" )
        .def("IsVIsoOnS1",
             (Standard_Boolean (IntPatch_Line::*)() const) static_cast<Standard_Boolean (IntPatch_Line::*)() const>(&IntPatch_Line::IsVIsoOnS1),
             R"#(Returns TRUE if the intersection is a V isoparametric curve on the first patch.)#" )
        .def("IsUIsoOnS2",
             (Standard_Boolean (IntPatch_Line::*)() const) static_cast<Standard_Boolean (IntPatch_Line::*)() const>(&IntPatch_Line::IsUIsoOnS2),
             R"#(Returns TRUE if the intersection is a U isoparametric curve on the second patch.)#" )
        .def("IsVIsoOnS2",
             (Standard_Boolean (IntPatch_Line::*)() const) static_cast<Standard_Boolean (IntPatch_Line::*)() const>(&IntPatch_Line::IsVIsoOnS2),
             R"#(Returns TRUE if the intersection is a V isoparametric curve on the second patch.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IntPatch_Line::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IntPatch_Line::*)() const>(&IntPatch_Line::DynamicType),
             R"#(None)#" )
        .def("SetValue",
             (void (IntPatch_Line::*)( const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (IntPatch_Line::*)( const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&IntPatch_Line::SetValue),
             R"#(To set the values returned by IsUIsoS1,.... The default values are False.)#"  , py::arg("Uiso1"),  py::arg("Viso1"),  py::arg("Uiso2"),  py::arg("Viso2"))
        .def("ArcType",
             (IntPatch_IType (IntPatch_Line::*)() const) static_cast<IntPatch_IType (IntPatch_Line::*)() const>(&IntPatch_Line::ArcType),
             R"#(Returns the type of geometry 3d (Line, Circle, Parabola, Hyperbola, Ellipse, Analytic, Walking, Restriction))#" )
        .def("IsTangent",
             (Standard_Boolean (IntPatch_Line::*)() const) static_cast<Standard_Boolean (IntPatch_Line::*)() const>(&IntPatch_Line::IsTangent),
             R"#(Returns TRUE if the intersection is a line of tangency between the 2 patches.)#" )
        .def("TransitionOnS1",
             (IntSurf_TypeTrans (IntPatch_Line::*)() const) static_cast<IntSurf_TypeTrans (IntPatch_Line::*)() const>(&IntPatch_Line::TransitionOnS1),
             R"#(Returns the type of the transition of the line for the first surface. The transition is "constant" along the line. The transition is IN if the line is oriented in such a way that the system of vector (N1,N2,T) is right-handed, where N1 is the normal to the first surface at a point P, N2 is the normal to the second surface at a point P, T is the tangent to the intersection line at P. If the system of vector is left-handed, the transition is OUT. When N1 and N2 are colinear all along the intersection line, the transition will be - TOUCH, if it is possible to use the 2nd derivatives to determine the position of one surafce compared to the other (see Situation) - UNDECIDED otherwise.)#" )
        .def("TransitionOnS2",
             (IntSurf_TypeTrans (IntPatch_Line::*)() const) static_cast<IntSurf_TypeTrans (IntPatch_Line::*)() const>(&IntPatch_Line::TransitionOnS2),
             R"#(Returns the type of the transition of the line for the second surface. The transition is "constant" along the line.)#" )
        .def("SituationS1",
             (IntSurf_Situation (IntPatch_Line::*)() const) static_cast<IntSurf_Situation (IntPatch_Line::*)() const>(&IntPatch_Line::SituationS1),
             R"#(Returns the situation (INSIDE/OUTSIDE/UNKNOWN) of the first patch compared to the second one, when TransitionOnS1 or TransitionOnS2 returns TOUCH. Otherwise, an exception is raised.)#" )
        .def("SituationS2",
             (IntSurf_Situation (IntPatch_Line::*)() const) static_cast<IntSurf_Situation (IntPatch_Line::*)() const>(&IntPatch_Line::SituationS2),
             R"#(Returns the situation (INSIDE/OUTSIDE/UNKNOWN) of the second patch compared to the first one, when TransitionOnS1 or TransitionOnS2 returns TOUCH. Otherwise, an exception is raised.)#" )
        .def("IsUIsoOnS1",
             (Standard_Boolean (IntPatch_Line::*)() const) static_cast<Standard_Boolean (IntPatch_Line::*)() const>(&IntPatch_Line::IsUIsoOnS1),
             R"#(Returns TRUE if the intersection is a U isoparametric curve on the first patch.)#" )
        .def("IsVIsoOnS1",
             (Standard_Boolean (IntPatch_Line::*)() const) static_cast<Standard_Boolean (IntPatch_Line::*)() const>(&IntPatch_Line::IsVIsoOnS1),
             R"#(Returns TRUE if the intersection is a V isoparametric curve on the first patch.)#" )
        .def("IsUIsoOnS2",
             (Standard_Boolean (IntPatch_Line::*)() const) static_cast<Standard_Boolean (IntPatch_Line::*)() const>(&IntPatch_Line::IsUIsoOnS2),
             R"#(Returns TRUE if the intersection is a U isoparametric curve on the second patch.)#" )
        .def("IsVIsoOnS2",
             (Standard_Boolean (IntPatch_Line::*)() const) static_cast<Standard_Boolean (IntPatch_Line::*)() const>(&IntPatch_Line::IsVIsoOnS2),
             R"#(Returns TRUE if the intersection is a V isoparametric curve on the second patch.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IntPatch_Line::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IntPatch_Line::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IntPatch_TheSegmentOfTheSOnBounds ,std::unique_ptr<IntPatch_TheSegmentOfTheSOnBounds>  >>(m.attr("IntPatch_TheSegmentOfTheSOnBounds"))
        .def(py::init<  >()  )
        .def("SetValue",
             (void (IntPatch_TheSegmentOfTheSOnBounds::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<void (IntPatch_TheSegmentOfTheSOnBounds::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_TheSegmentOfTheSOnBounds::SetValue),
             R"#(Defines the concerned arc.)#"  , py::arg("A"))
        .def("SetLimitPoint",
             (void (IntPatch_TheSegmentOfTheSOnBounds::*)( const IntPatch_ThePathPointOfTheSOnBounds & ,  const Standard_Boolean  ) ) static_cast<void (IntPatch_TheSegmentOfTheSOnBounds::*)( const IntPatch_ThePathPointOfTheSOnBounds & ,  const Standard_Boolean  ) >(&IntPatch_TheSegmentOfTheSOnBounds::SetLimitPoint),
             R"#(Defines the first point or the last point, depending on the value of the boolean First.)#"  , py::arg("V"),  py::arg("First"))
        .def("Curve",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_TheSegmentOfTheSOnBounds::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_TheSegmentOfTheSOnBounds::*)() const>(&IntPatch_TheSegmentOfTheSOnBounds::Curve),
             R"#(Returns the geometric curve on the surface 's domain which is solution.)#" )
        .def("HasFirstPoint",
             (Standard_Boolean (IntPatch_TheSegmentOfTheSOnBounds::*)() const) static_cast<Standard_Boolean (IntPatch_TheSegmentOfTheSOnBounds::*)() const>(&IntPatch_TheSegmentOfTheSOnBounds::HasFirstPoint),
             R"#(Returns True if there is a vertex (ThePathPoint) defining the lowest valid parameter on the arc.)#" )
        .def("FirstPoint",
             (const IntPatch_ThePathPointOfTheSOnBounds & (IntPatch_TheSegmentOfTheSOnBounds::*)() const) static_cast<const IntPatch_ThePathPointOfTheSOnBounds & (IntPatch_TheSegmentOfTheSOnBounds::*)() const>(&IntPatch_TheSegmentOfTheSOnBounds::FirstPoint),
             R"#(Returns the first point.)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntPatch_TheSegmentOfTheSOnBounds::*)() const) static_cast<Standard_Boolean (IntPatch_TheSegmentOfTheSOnBounds::*)() const>(&IntPatch_TheSegmentOfTheSOnBounds::HasLastPoint),
             R"#(Returns True if there is a vertex (ThePathPoint) defining the greatest valid parameter on the arc.)#" )
        .def("LastPoint",
             (const IntPatch_ThePathPointOfTheSOnBounds & (IntPatch_TheSegmentOfTheSOnBounds::*)() const) static_cast<const IntPatch_ThePathPointOfTheSOnBounds & (IntPatch_TheSegmentOfTheSOnBounds::*)() const>(&IntPatch_TheSegmentOfTheSOnBounds::LastPoint),
             R"#(Returns the last point.)#" )
;


    static_cast<py::class_<IntPatch_ALine ,opencascade::handle<IntPatch_ALine>  , IntPatch_Line >>(m.attr("IntPatch_ALine"))
        .def(py::init< const IntAna_Curve &,const Standard_Boolean,const IntSurf_TypeTrans,const IntSurf_TypeTrans >()  , py::arg("C"),  py::arg("Tang"),  py::arg("Trans1"),  py::arg("Trans2") )
        .def(py::init< const IntAna_Curve &,const Standard_Boolean,const IntSurf_Situation,const IntSurf_Situation >()  , py::arg("C"),  py::arg("Tang"),  py::arg("Situ1"),  py::arg("Situ2") )
        .def(py::init< const IntAna_Curve &,const Standard_Boolean >()  , py::arg("C"),  py::arg("Tang") )
        .def("AddVertex",
             (void (IntPatch_ALine::*)( const IntPatch_Point &  ) ) static_cast<void (IntPatch_ALine::*)( const IntPatch_Point &  ) >(&IntPatch_ALine::AddVertex),
             R"#(To add a vertex in the list.)#"  , py::arg("Pnt"))
        .def("Replace",
             (void (IntPatch_ALine::*)( const Standard_Integer ,  const IntPatch_Point &  ) ) static_cast<void (IntPatch_ALine::*)( const Standard_Integer ,  const IntPatch_Point &  ) >(&IntPatch_ALine::Replace),
             R"#(Replaces the element of range Index in the list of points.)#"  , py::arg("Index"),  py::arg("Pnt"))
        .def("SetFirstPoint",
             (void (IntPatch_ALine::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_ALine::*)( const Standard_Integer  ) >(&IntPatch_ALine::SetFirstPoint),
             R"#(None)#"  , py::arg("IndFirst"))
        .def("SetLastPoint",
             (void (IntPatch_ALine::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_ALine::*)( const Standard_Integer  ) >(&IntPatch_ALine::SetLastPoint),
             R"#(None)#"  , py::arg("IndLast"))
        .def("FirstParameter",
             (Standard_Real (IntPatch_ALine::*)( Standard_Boolean &  ) const) static_cast<Standard_Real (IntPatch_ALine::*)( Standard_Boolean &  ) const>(&IntPatch_ALine::FirstParameter),
             R"#(Returns the first parameter on the intersection line. If IsIncluded returns True, Value and D1 methods can be call with a parameter equal to FirstParamater. Otherwise, the parameter must be greater than FirstParameter.)#"  , py::arg("IsIncluded"))
        .def("LastParameter",
             (Standard_Real (IntPatch_ALine::*)( Standard_Boolean &  ) const) static_cast<Standard_Real (IntPatch_ALine::*)( Standard_Boolean &  ) const>(&IntPatch_ALine::LastParameter),
             R"#(Returns the last parameter on the intersection line. If IsIncluded returns True, Value and D1 methods can be call with a parameter equal to LastParamater. Otherwise, the parameter must be less than LastParameter.)#"  , py::arg("IsIncluded"))
        .def("Value",
             (gp_Pnt (IntPatch_ALine::*)( const Standard_Real  ) ) static_cast<gp_Pnt (IntPatch_ALine::*)( const Standard_Real  ) >(&IntPatch_ALine::Value),
             R"#(Returns the point of parameter U on the analytic intersection line.)#"  , py::arg("U"))
        .def("D1",
             (Standard_Boolean (IntPatch_ALine::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) ) static_cast<Standard_Boolean (IntPatch_ALine::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) >(&IntPatch_ALine::D1),
             R"#(Returns Standard_True when the derivative at parameter U is defined on the analytic intersection line. In that case, Du is the derivative. Returns Standard_False when it is not possible to evaluate the derivative. In both cases, P is the point at parameter U on the intersection.)#"  , py::arg("U"),  py::arg("P"),  py::arg("Du"))
        .def("FindParameter",
             (Standard_Boolean (IntPatch_ALine::*)( const gp_Pnt & ,  Standard_Real &  ) const) static_cast<Standard_Boolean (IntPatch_ALine::*)( const gp_Pnt & ,  Standard_Real &  ) const>(&IntPatch_ALine::FindParameter),
             R"#(Tries to find the parameter of the point P on the curve. If the method returns False, the "projection" is impossible, and the value of Para is not significant. If the method returns True, Para is the parameter of the nearest intersection between the curve and the iso-theta containing P.)#"  , py::arg("P"),  py::arg("Para"))
        .def("HasFirstPoint",
             (Standard_Boolean (IntPatch_ALine::*)() const) static_cast<Standard_Boolean (IntPatch_ALine::*)() const>(&IntPatch_ALine::HasFirstPoint),
             R"#(Returns True if the line has a known First point. This point is given by the method FirstPoint().)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntPatch_ALine::*)() const) static_cast<Standard_Boolean (IntPatch_ALine::*)() const>(&IntPatch_ALine::HasLastPoint),
             R"#(Returns True if the line has a known Last point. This point is given by the method LastPoint().)#" )
        .def("FirstPoint",
             (const IntPatch_Point & (IntPatch_ALine::*)() const) static_cast<const IntPatch_Point & (IntPatch_ALine::*)() const>(&IntPatch_ALine::FirstPoint),
             R"#(Returns the IntPoint corresponding to the FirstPoint. An exception is raised when HasFirstPoint returns False.)#" )
        .def("LastPoint",
             (const IntPatch_Point & (IntPatch_ALine::*)() const) static_cast<const IntPatch_Point & (IntPatch_ALine::*)() const>(&IntPatch_ALine::LastPoint),
             R"#(Returns the IntPoint corresponding to the LastPoint. An exception is raised when HasLastPoint returns False.)#" )
        .def("NbVertex",
             (Standard_Integer (IntPatch_ALine::*)() const) static_cast<Standard_Integer (IntPatch_ALine::*)() const>(&IntPatch_ALine::NbVertex),
             R"#(None)#" )
        .def("Vertex",
             (const IntPatch_Point & (IntPatch_ALine::*)( const Standard_Integer  ) const) static_cast<const IntPatch_Point & (IntPatch_ALine::*)( const Standard_Integer  ) const>(&IntPatch_ALine::Vertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("ComputeVertexParameters",
             (void (IntPatch_ALine::*)( const Standard_Real  ) ) static_cast<void (IntPatch_ALine::*)( const Standard_Real  ) >(&IntPatch_ALine::ComputeVertexParameters),
             R"#(Set the parameters of all the vertex on the line. if a vertex is already in the line, its parameter is modified else a new point in the line is inserted.)#"  , py::arg("Tol"))
        .def("Curve",
             (const IntAna_Curve & (IntPatch_ALine::*)() const) static_cast<const IntAna_Curve & (IntPatch_ALine::*)() const>(&IntPatch_ALine::Curve),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IntPatch_ALine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IntPatch_ALine::*)() const>(&IntPatch_ALine::DynamicType),
             R"#(None)#" )
        .def("Replace",
             (void (IntPatch_ALine::*)( const Standard_Integer ,  const IntPatch_Point &  ) ) static_cast<void (IntPatch_ALine::*)( const Standard_Integer ,  const IntPatch_Point &  ) >(&IntPatch_ALine::Replace),
             R"#(Replaces the element of range Index in the list of points.)#"  , py::arg("Index"),  py::arg("Pnt"))
        .def("SetFirstPoint",
             (void (IntPatch_ALine::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_ALine::*)( const Standard_Integer  ) >(&IntPatch_ALine::SetFirstPoint),
             R"#(None)#"  , py::arg("IndFirst"))
        .def("SetLastPoint",
             (void (IntPatch_ALine::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_ALine::*)( const Standard_Integer  ) >(&IntPatch_ALine::SetLastPoint),
             R"#(None)#"  , py::arg("IndLast"))
        .def("FirstParameter",
             (Standard_Real (IntPatch_ALine::*)( Standard_Boolean &  ) const) static_cast<Standard_Real (IntPatch_ALine::*)( Standard_Boolean &  ) const>(&IntPatch_ALine::FirstParameter),
             R"#(Returns the first parameter on the intersection line. If IsIncluded returns True, Value and D1 methods can be call with a parameter equal to FirstParamater. Otherwise, the parameter must be greater than FirstParameter.)#"  , py::arg("IsIncluded"))
        .def("LastParameter",
             (Standard_Real (IntPatch_ALine::*)( Standard_Boolean &  ) const) static_cast<Standard_Real (IntPatch_ALine::*)( Standard_Boolean &  ) const>(&IntPatch_ALine::LastParameter),
             R"#(Returns the last parameter on the intersection line. If IsIncluded returns True, Value and D1 methods can be call with a parameter equal to LastParamater. Otherwise, the parameter must be less than LastParameter.)#"  , py::arg("IsIncluded"))
        .def("Value",
             (gp_Pnt (IntPatch_ALine::*)( const Standard_Real  ) ) static_cast<gp_Pnt (IntPatch_ALine::*)( const Standard_Real  ) >(&IntPatch_ALine::Value),
             R"#(Returns the point of parameter U on the analytic intersection line.)#"  , py::arg("U"))
        .def("D1",
             (Standard_Boolean (IntPatch_ALine::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) ) static_cast<Standard_Boolean (IntPatch_ALine::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) >(&IntPatch_ALine::D1),
             R"#(Returns Standard_True when the derivative at parameter U is defined on the analytic intersection line. In that case, Du is the derivative. Returns Standard_False when it is not possible to evaluate the derivative. In both cases, P is the point at parameter U on the intersection.)#"  , py::arg("U"),  py::arg("P"),  py::arg("Du"))
        .def("FindParameter",
             (Standard_Boolean (IntPatch_ALine::*)( const gp_Pnt & ,  Standard_Real &  ) const) static_cast<Standard_Boolean (IntPatch_ALine::*)( const gp_Pnt & ,  Standard_Real &  ) const>(&IntPatch_ALine::FindParameter),
             R"#(Tries to find the parameter of the point P on the curve. If the method returns False, the "projection" is impossible, and the value of Para is not significant. If the method returns True, Para is the parameter of the nearest intersection between the curve and the iso-theta containing P.)#"  , py::arg("P"),  py::arg("Para"))
        .def("HasFirstPoint",
             (Standard_Boolean (IntPatch_ALine::*)() const) static_cast<Standard_Boolean (IntPatch_ALine::*)() const>(&IntPatch_ALine::HasFirstPoint),
             R"#(Returns True if the line has a known First point. This point is given by the method FirstPoint().)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntPatch_ALine::*)() const) static_cast<Standard_Boolean (IntPatch_ALine::*)() const>(&IntPatch_ALine::HasLastPoint),
             R"#(Returns True if the line has a known Last point. This point is given by the method LastPoint().)#" )
        .def("FirstPoint",
             (const IntPatch_Point & (IntPatch_ALine::*)() const) static_cast<const IntPatch_Point & (IntPatch_ALine::*)() const>(&IntPatch_ALine::FirstPoint),
             R"#(Returns the IntPoint corresponding to the FirstPoint. An exception is raised when HasFirstPoint returns False.)#" )
        .def("LastPoint",
             (const IntPatch_Point & (IntPatch_ALine::*)() const) static_cast<const IntPatch_Point & (IntPatch_ALine::*)() const>(&IntPatch_ALine::LastPoint),
             R"#(Returns the IntPoint corresponding to the LastPoint. An exception is raised when HasLastPoint returns False.)#" )
        .def("NbVertex",
             (Standard_Integer (IntPatch_ALine::*)() const) static_cast<Standard_Integer (IntPatch_ALine::*)() const>(&IntPatch_ALine::NbVertex),
             R"#(None)#" )
        .def("Vertex",
             (const IntPatch_Point & (IntPatch_ALine::*)( const Standard_Integer  ) const) static_cast<const IntPatch_Point & (IntPatch_ALine::*)( const Standard_Integer  ) const>(&IntPatch_ALine::Vertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IntPatch_ALine::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IntPatch_ALine::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IntPatch_CSFunction ,std::unique_ptr<IntPatch_CSFunction>  , math_FunctionSetWithDerivatives >>(m.attr("IntPatch_CSFunction"))
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor3d_HSurface> & >()  , py::arg("S1"),  py::arg("C"),  py::arg("S2") )
        .def("NbVariables",
             (Standard_Integer (IntPatch_CSFunction::*)() const) static_cast<Standard_Integer (IntPatch_CSFunction::*)() const>(&IntPatch_CSFunction::NbVariables),
             R"#(None)#" )
        .def("NbEquations",
             (Standard_Integer (IntPatch_CSFunction::*)() const) static_cast<Standard_Integer (IntPatch_CSFunction::*)() const>(&IntPatch_CSFunction::NbEquations),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (IntPatch_CSFunction::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (IntPatch_CSFunction::*)( const math_Vector & ,  math_Vector &  ) >(&IntPatch_CSFunction::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (IntPatch_CSFunction::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (IntPatch_CSFunction::*)( const math_Vector & ,  math_Matrix &  ) >(&IntPatch_CSFunction::Derivatives),
             R"#(None)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (IntPatch_CSFunction::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (IntPatch_CSFunction::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&IntPatch_CSFunction::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Point",
             (const gp_Pnt & (IntPatch_CSFunction::*)() const) static_cast<const gp_Pnt & (IntPatch_CSFunction::*)() const>(&IntPatch_CSFunction::Point),
             R"#(None)#" )
        .def("Root",
             (Standard_Real (IntPatch_CSFunction::*)() const) static_cast<Standard_Real (IntPatch_CSFunction::*)() const>(&IntPatch_CSFunction::Root),
             R"#(None)#" )
        .def("AuxillarSurface",
             (const opencascade::handle<Adaptor3d_HSurface> & (IntPatch_CSFunction::*)() const) static_cast<const opencascade::handle<Adaptor3d_HSurface> & (IntPatch_CSFunction::*)() const>(&IntPatch_CSFunction::AuxillarSurface),
             R"#(None)#" )
        .def("AuxillarCurve",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_CSFunction::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_CSFunction::*)() const>(&IntPatch_CSFunction::AuxillarCurve),
             R"#(None)#" )
;


    static_cast<py::class_<IntPatch_InterferencePolyhedron ,std::unique_ptr<IntPatch_InterferencePolyhedron>  , Intf_Interference >>(m.attr("IntPatch_InterferencePolyhedron"))
        .def(py::init<  >()  )
        .def(py::init< const IntPatch_Polyhedron &,const IntPatch_Polyhedron & >()  , py::arg("Obje1"),  py::arg("Obje2") )
        .def(py::init< const IntPatch_Polyhedron & >()  , py::arg("Obje") )
        .def("Perform",
             (void (IntPatch_InterferencePolyhedron::*)( const IntPatch_Polyhedron & ,  const IntPatch_Polyhedron &  ) ) static_cast<void (IntPatch_InterferencePolyhedron::*)( const IntPatch_Polyhedron & ,  const IntPatch_Polyhedron &  ) >(&IntPatch_InterferencePolyhedron::Perform),
             R"#(Computes the interference between the two Polyhedra.)#"  , py::arg("Obje1"),  py::arg("Obje2"))
        .def("Perform",
             (void (IntPatch_InterferencePolyhedron::*)( const IntPatch_Polyhedron &  ) ) static_cast<void (IntPatch_InterferencePolyhedron::*)( const IntPatch_Polyhedron &  ) >(&IntPatch_InterferencePolyhedron::Perform),
             R"#(Computes the self interference of a Polyhedron.)#"  , py::arg("Obje"))
;

    register_default_constructor<IntPatch_WLineTool ,std::unique_ptr<IntPatch_WLineTool>>(m,"IntPatch_WLineTool");

    static_cast<py::class_<IntPatch_WLineTool ,std::unique_ptr<IntPatch_WLineTool>  >>(m.attr("IntPatch_WLineTool"))
        .def_static("ComputePurgedWLine_s",
                    (opencascade::handle<IntPatch_WLine> (*)( const opencascade::handle<IntPatch_WLine> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_TopolTool> &  ) ) static_cast<opencascade::handle<IntPatch_WLine> (*)( const opencascade::handle<IntPatch_WLine> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_TopolTool> &  ) >(&IntPatch_WLineTool::ComputePurgedWLine),
                    R"#(I Removes equal points (leave one of equal points) from theWLine and recompute vertex parameters.)#"  , py::arg("theWLine"),  py::arg("theS1"),  py::arg("theS2"),  py::arg("theDom1"),  py::arg("theDom2"))
        .def_static("JoinWLines_s",
                    (void (*)( NCollection_Sequence<opencascade::handle<IntPatch_Line> > & ,  NCollection_Sequence<IntPatch_Point> & ,  opencascade::handle<Adaptor3d_HSurface> ,  opencascade::handle<Adaptor3d_HSurface> ,  const Standard_Real  ) ) static_cast<void (*)( NCollection_Sequence<opencascade::handle<IntPatch_Line> > & ,  NCollection_Sequence<IntPatch_Point> & ,  opencascade::handle<Adaptor3d_HSurface> ,  opencascade::handle<Adaptor3d_HSurface> ,  const Standard_Real  ) >(&IntPatch_WLineTool::JoinWLines),
                    R"#(Joins all WLines from theSlin to one if it is possible and records the result into theSlin again. Lines will be kept to be splitted if: a) they are separated (has no common points); b) resulted line (after joining) go through seam-edges or surface boundaries.)#"  , py::arg("theSlin"),  py::arg("theSPnt"),  py::arg("theS1"),  py::arg("theS2"),  py::arg("theTol3D"))
        .def_static("ExtendTwoWLines_s",
                    (void (*)( NCollection_Sequence<opencascade::handle<IntPatch_Line> > & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real *const ,  const Bnd_Box2d & ,  const Bnd_Box2d &  ) ) static_cast<void (*)( NCollection_Sequence<opencascade::handle<IntPatch_Line> > & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real *const ,  const Bnd_Box2d & ,  const Bnd_Box2d &  ) >(&IntPatch_WLineTool::ExtendTwoWLines),
                    R"#(Extends every line from theSlin (if it is possible) to be started/finished in strictly determined point (in the place of joint of two lines). As result, some gaps between two lines will vanish. The Walking lines are supposed (algorithm will do nothing for not-Walking line) to be computed as a result of intersection. Both theS1 and theS2 must be quadrics. Other cases are not supported. theArrPeriods must be filled as follows (every value must not be negative; if the surface is not periodic the period must be equal to 0.0 strictly): {<U-period of 1st surface>, <V-period of 1st surface>, <U-period of 2nd surface>, <V-period of 2nd surface>}.)#"  , py::arg("theSlin"),  py::arg("theS1"),  py::arg("theS2"),  py::arg("theToler3D"),  py::arg("theArrPeriods"),  py::arg("theBoxS1"),  py::arg("theBoxS2"))
;


    static_cast<py::class_<IntPatch_Polyhedron ,std::unique_ptr<IntPatch_Polyhedron>  >>(m.attr("IntPatch_Polyhedron"))
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Integer,const Standard_Integer >()  , py::arg("Surface"),  py::arg("nbdU"),  py::arg("nbdV") )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> & >()  , py::arg("Surface") )
        .def("Destroy",
             (void (IntPatch_Polyhedron::*)() ) static_cast<void (IntPatch_Polyhedron::*)() >(&IntPatch_Polyhedron::Destroy),
             R"#(None)#" )
        .def("DeflectionOverEstimation",
             (void (IntPatch_Polyhedron::*)( const Standard_Real  ) ) static_cast<void (IntPatch_Polyhedron::*)( const Standard_Real  ) >(&IntPatch_Polyhedron::DeflectionOverEstimation),
             R"#(None)#"  , py::arg("flec"))
        .def("DeflectionOnTriangle",
             (Standard_Real (IntPatch_Polyhedron::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Integer  ) const) static_cast<Standard_Real (IntPatch_Polyhedron::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Integer  ) const>(&IntPatch_Polyhedron::DeflectionOnTriangle),
             R"#(None)#"  , py::arg("Surface"),  py::arg("Index"))
        .def("Size",
             (void (IntPatch_Polyhedron::*)( Standard_Integer & ,  Standard_Integer &  ) const) static_cast<void (IntPatch_Polyhedron::*)( Standard_Integer & ,  Standard_Integer &  ) const>(&IntPatch_Polyhedron::Size),
             R"#(Get the size of the MaTriangle.)#"  , py::arg("nbdu"),  py::arg("nbdv"))
        .def("NbTriangles",
             (Standard_Integer (IntPatch_Polyhedron::*)() const) static_cast<Standard_Integer (IntPatch_Polyhedron::*)() const>(&IntPatch_Polyhedron::NbTriangles),
             R"#(Give the number of triangles in this double array of triangles (nbdu*nbdv*2).)#" )
        .def("Triangle",
             (void (IntPatch_Polyhedron::*)( const Standard_Integer ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const) static_cast<void (IntPatch_Polyhedron::*)( const Standard_Integer ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const>(&IntPatch_Polyhedron::Triangle),
             R"#(Give the 3 points of the triangle of addresse Index in the double array of triangles.)#"  , py::arg("Index"),  py::arg("P1"),  py::arg("P2"),  py::arg("P3"))
        .def("TriConnex",
             (Standard_Integer (IntPatch_Polyhedron::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  Standard_Integer & ,  Standard_Integer &  ) const) static_cast<Standard_Integer (IntPatch_Polyhedron::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  Standard_Integer & ,  Standard_Integer &  ) const>(&IntPatch_Polyhedron::TriConnex),
             R"#(Give the addresse Tricon of the triangle connexe to the triangle of address Triang by the edge Pivot Pedge and the third point of this connexe triangle. When we are on a free edge TriCon==0 but the function return the value of the triangle in the other side of Pivot on the free edge. Used to turn around a vertex.)#"  , py::arg("Triang"),  py::arg("Pivot"),  py::arg("Pedge"),  py::arg("TriCon"),  py::arg("OtherP"))
        .def("NbPoints",
             (Standard_Integer (IntPatch_Polyhedron::*)() const) static_cast<Standard_Integer (IntPatch_Polyhedron::*)() const>(&IntPatch_Polyhedron::NbPoints),
             R"#(Give the number of point in the double array of triangles ((nbdu+1)*(nbdv+1)).)#" )
        .def("Point",
             (void (IntPatch_Polyhedron::*)( const gp_Pnt & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPatch_Polyhedron::*)( const gp_Pnt & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) >(&IntPatch_Polyhedron::Point),
             R"#(Set the value of a field of the double array of points.)#"  , py::arg("thePnt"),  py::arg("lig"),  py::arg("col"),  py::arg("U"),  py::arg("V"))
        .def("Point",
             (const gp_Pnt & (IntPatch_Polyhedron::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<const gp_Pnt & (IntPatch_Polyhedron::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const>(&IntPatch_Polyhedron::Point),
             R"#(Give the point of index i in the MaTriangle.)#"  , py::arg("Index"),  py::arg("U"),  py::arg("V"))
        .def("Point",
             (const gp_Pnt & (IntPatch_Polyhedron::*)( const Standard_Integer  ) const) static_cast<const gp_Pnt & (IntPatch_Polyhedron::*)( const Standard_Integer  ) const>(&IntPatch_Polyhedron::Point),
             R"#(Give the point of index i in the MaTriangle.)#"  , py::arg("Index"))
        .def("Point",
             (void (IntPatch_Polyhedron::*)( const Standard_Integer ,  gp_Pnt &  ) const) static_cast<void (IntPatch_Polyhedron::*)( const Standard_Integer ,  gp_Pnt &  ) const>(&IntPatch_Polyhedron::Point),
             R"#(Give the point of index i in the MaTriangle.)#"  , py::arg("Index"),  py::arg("P"))
        .def("Bounding",
             (const Bnd_Box & (IntPatch_Polyhedron::*)() const) static_cast<const Bnd_Box & (IntPatch_Polyhedron::*)() const>(&IntPatch_Polyhedron::Bounding),
             R"#(Give the bounding box of the MaTriangle.)#" )
        .def("FillBounding",
             (void (IntPatch_Polyhedron::*)() ) static_cast<void (IntPatch_Polyhedron::*)() >(&IntPatch_Polyhedron::FillBounding),
             R"#(Compute the array of boxes. The box <n> corresponding to the triangle <n>.)#" )
        .def("ComponentsBounding",
             (const opencascade::handle<Bnd_HArray1OfBox> & (IntPatch_Polyhedron::*)() const) static_cast<const opencascade::handle<Bnd_HArray1OfBox> & (IntPatch_Polyhedron::*)() const>(&IntPatch_Polyhedron::ComponentsBounding),
             R"#(Give the array of boxes. The box <n> corresponding to the triangle <n>.)#" )
        .def("DeflectionOverEstimation",
             (Standard_Real (IntPatch_Polyhedron::*)() const) static_cast<Standard_Real (IntPatch_Polyhedron::*)() const>(&IntPatch_Polyhedron::DeflectionOverEstimation),
             R"#(None)#" )
        .def("PlaneEquation",
             (void (IntPatch_Polyhedron::*)( const Standard_Integer ,  gp_XYZ & ,  Standard_Real &  ) const) static_cast<void (IntPatch_Polyhedron::*)( const Standard_Integer ,  gp_XYZ & ,  Standard_Real &  ) const>(&IntPatch_Polyhedron::PlaneEquation),
             R"#(Give the plane equation of the triangle of addresse Triang.)#"  , py::arg("Triang"),  py::arg("NormalVector"),  py::arg("PolarDistance"))
        .def("Contain",
             (Standard_Boolean (IntPatch_Polyhedron::*)( const Standard_Integer ,  const gp_Pnt &  ) const) static_cast<Standard_Boolean (IntPatch_Polyhedron::*)( const Standard_Integer ,  const gp_Pnt &  ) const>(&IntPatch_Polyhedron::Contain),
             R"#(Give the plane equation of the triangle of addresse Triang.)#"  , py::arg("Triang"),  py::arg("ThePnt"))
        .def("Parameters",
             (void (IntPatch_Polyhedron::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntPatch_Polyhedron::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const>(&IntPatch_Polyhedron::Parameters),
             R"#(None)#"  , py::arg("Index"),  py::arg("U"),  py::arg("V"))
        .def("Dump",
             (void (IntPatch_Polyhedron::*)() const) static_cast<void (IntPatch_Polyhedron::*)() const>(&IntPatch_Polyhedron::Dump),
             R"#(None)#" )
;


    static_cast<py::class_<IntPatch_PrmPrmIntersection ,std::unique_ptr<IntPatch_PrmPrmIntersection>  >>(m.attr("IntPatch_PrmPrmIntersection"))
        .def(py::init<  >()  )
        .def("Perform",
             (void (IntPatch_PrmPrmIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const IntPatch_Polyhedron & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const IntPatch_Polyhedron & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPatch_PrmPrmIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const IntPatch_Polyhedron & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const IntPatch_Polyhedron & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntPatch_PrmPrmIntersection::Perform),
             R"#(Performs the intersection between <Caro1> and <Caro2>. Associated Polyhedrons <Polyhedron1> and <Polyhedron2> are given.)#"  , py::arg("Caro1"),  py::arg("Polyhedron1"),  py::arg("Domain1"),  py::arg("Caro2"),  py::arg("Polyhedron2"),  py::arg("Domain2"),  py::arg("TolTangency"),  py::arg("Epsilon"),  py::arg("Deflection"),  py::arg("Increment"))
        .def("Perform",
             (void (IntPatch_PrmPrmIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const IntPatch_Polyhedron & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPatch_PrmPrmIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const IntPatch_Polyhedron & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntPatch_PrmPrmIntersection::Perform),
             R"#(None)#"  , py::arg("Caro1"),  py::arg("Polyhedron1"),  py::arg("Domain1"),  py::arg("TolTangency"),  py::arg("Epsilon"),  py::arg("Deflection"),  py::arg("Increment"))
        .def("Perform",
             (void (IntPatch_PrmPrmIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (IntPatch_PrmPrmIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&IntPatch_PrmPrmIntersection::Perform),
             R"#(Performs the intersection between <Caro1> and <Caro2>. The method computes the polyhedron on each surface.)#"  , py::arg("Caro1"),  py::arg("Domain1"),  py::arg("Caro2"),  py::arg("Domain2"),  py::arg("TolTangency"),  py::arg("Epsilon"),  py::arg("Deflection"),  py::arg("Increment"),  py::arg("ClearFlag")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Perform",
             (void (IntPatch_PrmPrmIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  NCollection_List<IntSurf_PntOn2S> &  ) ) static_cast<void (IntPatch_PrmPrmIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  NCollection_List<IntSurf_PntOn2S> &  ) >(&IntPatch_PrmPrmIntersection::Perform),
             R"#(Performs the intersection between <Caro1> and <Caro2>. The method computes the polyhedron on each surface.)#"  , py::arg("Caro1"),  py::arg("Domain1"),  py::arg("Caro2"),  py::arg("Domain2"),  py::arg("TolTangency"),  py::arg("Epsilon"),  py::arg("Deflection"),  py::arg("Increment"),  py::arg("ListOfPnts"))
        .def("Perform",
             (void (IntPatch_PrmPrmIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPatch_PrmPrmIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntPatch_PrmPrmIntersection::Perform),
             R"#(Performs the intersection between <Caro1> and <Caro2>. The method computes the polyhedron on each surface.)#"  , py::arg("Caro1"),  py::arg("Domain1"),  py::arg("Caro2"),  py::arg("Domain2"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("TolTangency"),  py::arg("Epsilon"),  py::arg("Deflection"),  py::arg("Increment"))
        .def("Perform",
             (void (IntPatch_PrmPrmIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPatch_PrmPrmIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntPatch_PrmPrmIntersection::Perform),
             R"#(Performs the intersection between <Caro1> and <Caro2>. The method computes the polyhedron on each surface.)#"  , py::arg("Caro1"),  py::arg("Domain1"),  py::arg("TolTangency"),  py::arg("Epsilon"),  py::arg("Deflection"),  py::arg("Increment"))
        .def("Perform",
             (void (IntPatch_PrmPrmIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const IntPatch_Polyhedron & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPatch_PrmPrmIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const IntPatch_Polyhedron & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntPatch_PrmPrmIntersection::Perform),
             R"#(Performs the intersection between <Caro1> and <Caro2>.)#"  , py::arg("Caro1"),  py::arg("Domain1"),  py::arg("Caro2"),  py::arg("Polyhedron2"),  py::arg("Domain2"),  py::arg("TolTangency"),  py::arg("Epsilon"),  py::arg("Deflection"),  py::arg("Increment"))
        .def("Perform",
             (void (IntPatch_PrmPrmIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const IntPatch_Polyhedron & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPatch_PrmPrmIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const IntPatch_Polyhedron & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntPatch_PrmPrmIntersection::Perform),
             R"#(Performs the intersection between <Caro1> and <Caro2>.)#"  , py::arg("Caro1"),  py::arg("Polyhedron1"),  py::arg("Domain1"),  py::arg("Caro2"),  py::arg("Domain2"),  py::arg("TolTangency"),  py::arg("Epsilon"),  py::arg("Deflection"),  py::arg("Increment"))
        .def("IsDone",
             (Standard_Boolean (IntPatch_PrmPrmIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_PrmPrmIntersection::*)() const>(&IntPatch_PrmPrmIntersection::IsDone),
             R"#(Returns true if the calculus was succesfull.)#" )
        .def("IsEmpty",
             (Standard_Boolean (IntPatch_PrmPrmIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_PrmPrmIntersection::*)() const>(&IntPatch_PrmPrmIntersection::IsEmpty),
             R"#(Returns true if the is no intersection.)#" )
        .def("NbLines",
             (Standard_Integer (IntPatch_PrmPrmIntersection::*)() const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection::*)() const>(&IntPatch_PrmPrmIntersection::NbLines),
             R"#(Returns the number of intersection lines.)#" )
        .def("Line",
             (const opencascade::handle<IntPatch_Line> & (IntPatch_PrmPrmIntersection::*)( const Standard_Integer  ) const) static_cast<const opencascade::handle<IntPatch_Line> & (IntPatch_PrmPrmIntersection::*)( const Standard_Integer  ) const>(&IntPatch_PrmPrmIntersection::Line),
             R"#(Returns the line of range Index. An exception is raised if Index<=0 or Index>NbLine.)#"  , py::arg("Index"))
        .def("NewLine",
             (opencascade::handle<IntPatch_Line> (IntPatch_PrmPrmIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<opencascade::handle<IntPatch_Line> (IntPatch_PrmPrmIntersection::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const>(&IntPatch_PrmPrmIntersection::NewLine),
             R"#(Computes about <NbPoints> Intersection Points on the Line <IndexLine> between the Points of Index <LowPoint> and <HighPoint>.)#"  , py::arg("Caro1"),  py::arg("Caro2"),  py::arg("IndexLine"),  py::arg("LowPoint"),  py::arg("HighPoint"),  py::arg("NbPoints"))
        .def("GrilleInteger",
             (Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const>(&IntPatch_PrmPrmIntersection::GrilleInteger),
             R"#(None)#"  , py::arg("ix"),  py::arg("iy"),  py::arg("iz"))
        .def("IntegerGrille",
             (void (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const) static_cast<void (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const>(&IntPatch_PrmPrmIntersection::IntegerGrille),
             R"#(None)#"  , py::arg("t"),  py::arg("ix"),  py::arg("iy"),  py::arg("iz"))
        .def("DansGrille",
             (Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Integer  ) const>(&IntPatch_PrmPrmIntersection::DansGrille),
             R"#(None)#"  , py::arg("t"))
        .def("NbPointsGrille",
             (Standard_Integer (IntPatch_PrmPrmIntersection::*)() const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection::*)() const>(&IntPatch_PrmPrmIntersection::NbPointsGrille),
             R"#(None)#" )
        .def("RemplitLin",
             (void (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  IntPatch_PrmPrmIntersection_T3Bits &  ) const) static_cast<void (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  IntPatch_PrmPrmIntersection_T3Bits &  ) const>(&IntPatch_PrmPrmIntersection::RemplitLin),
             R"#(None)#"  , py::arg("x1"),  py::arg("y1"),  py::arg("z1"),  py::arg("x2"),  py::arg("y2"),  py::arg("z2"),  py::arg("Map"))
        .def("RemplitTri",
             (void (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  IntPatch_PrmPrmIntersection_T3Bits &  ) const) static_cast<void (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  IntPatch_PrmPrmIntersection_T3Bits &  ) const>(&IntPatch_PrmPrmIntersection::RemplitTri),
             R"#(None)#"  , py::arg("x1"),  py::arg("y1"),  py::arg("z1"),  py::arg("x2"),  py::arg("y2"),  py::arg("z2"),  py::arg("x3"),  py::arg("y3"),  py::arg("z3"),  py::arg("Map"))
        .def("Remplit",
             (void (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  IntPatch_PrmPrmIntersection_T3Bits &  ) const) static_cast<void (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  IntPatch_PrmPrmIntersection_T3Bits &  ) const>(&IntPatch_PrmPrmIntersection::Remplit),
             R"#(None)#"  , py::arg("a"),  py::arg("b"),  py::arg("c"),  py::arg("Map"))
        .def("CodeReject",
             (Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&IntPatch_PrmPrmIntersection::CodeReject),
             R"#(None)#"  , py::arg("x1"),  py::arg("y1"),  py::arg("z1"),  py::arg("x2"),  py::arg("y2"),  py::arg("z2"),  py::arg("x3"),  py::arg("y3"),  py::arg("z3"))
        .def("PointDepart",
             (void (IntPatch_PrmPrmIntersection::*)( opencascade::handle<IntSurf_LineOn2S> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<void (IntPatch_PrmPrmIntersection::*)( opencascade::handle<IntSurf_LineOn2S> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Integer ,  const Standard_Integer  ) const>(&IntPatch_PrmPrmIntersection::PointDepart),
             R"#(None)#"  , py::arg("LineOn2S"),  py::arg("S1"),  py::arg("SU1"),  py::arg("SV1"),  py::arg("S2"),  py::arg("SU2"),  py::arg("SV2"))
        .def("NbLines",
             (Standard_Integer (IntPatch_PrmPrmIntersection::*)() const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection::*)() const>(&IntPatch_PrmPrmIntersection::NbLines),
             R"#(Returns the number of intersection lines.)#" )
        .def("Line",
             (const opencascade::handle<IntPatch_Line> & (IntPatch_PrmPrmIntersection::*)( const Standard_Integer  ) const) static_cast<const opencascade::handle<IntPatch_Line> & (IntPatch_PrmPrmIntersection::*)( const Standard_Integer  ) const>(&IntPatch_PrmPrmIntersection::Line),
             R"#(Returns the line of range Index. An exception is raised if Index<=0 or Index>NbLine.)#"  , py::arg("n"))
        .def("IsEmpty",
             (Standard_Boolean (IntPatch_PrmPrmIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_PrmPrmIntersection::*)() const>(&IntPatch_PrmPrmIntersection::IsEmpty),
             R"#(Returns true if the is no intersection.)#" )
        .def("IsDone",
             (Standard_Boolean (IntPatch_PrmPrmIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_PrmPrmIntersection::*)() const>(&IntPatch_PrmPrmIntersection::IsDone),
             R"#(Returns true if the calculus was succesfull.)#" )
        .def("GrilleInteger",
             (Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const>(&IntPatch_PrmPrmIntersection::GrilleInteger),
             R"#(None)#"  , py::arg("ix"),  py::arg("iy"),  py::arg("iz"))
        .def("IntegerGrille",
             (void (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const) static_cast<void (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const>(&IntPatch_PrmPrmIntersection::IntegerGrille),
             R"#(None)#"  , py::arg("tt"),  py::arg("ix"),  py::arg("iy"),  py::arg("iz"))
        .def("DansGrille",
             (Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Integer  ) const>(&IntPatch_PrmPrmIntersection::DansGrille),
             R"#(None)#"  , py::arg("t"))
        .def("NbPointsGrille",
             (Standard_Integer (IntPatch_PrmPrmIntersection::*)() const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection::*)() const>(&IntPatch_PrmPrmIntersection::NbPointsGrille),
             R"#(None)#" )
        .def("CodeReject",
             (Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&IntPatch_PrmPrmIntersection::CodeReject),
             R"#(None)#"  , py::arg("x0"),  py::arg("y0"),  py::arg("z0"),  py::arg("x1"),  py::arg("y1"),  py::arg("z1"),  py::arg("x"),  py::arg("y"),  py::arg("z"))
;


    static_cast<py::class_<IntPatch_GLine ,opencascade::handle<IntPatch_GLine>  , IntPatch_Line >>(m.attr("IntPatch_GLine"))
        .def(py::init< const gp_Lin &,const Standard_Boolean,const IntSurf_TypeTrans,const IntSurf_TypeTrans >()  , py::arg("L"),  py::arg("Tang"),  py::arg("Trans1"),  py::arg("Trans2") )
        .def(py::init< const gp_Lin &,const Standard_Boolean,const IntSurf_Situation,const IntSurf_Situation >()  , py::arg("L"),  py::arg("Tang"),  py::arg("Situ1"),  py::arg("Situ2") )
        .def(py::init< const gp_Lin &,const Standard_Boolean >()  , py::arg("L"),  py::arg("Tang") )
        .def(py::init< const gp_Circ &,const Standard_Boolean,const IntSurf_TypeTrans,const IntSurf_TypeTrans >()  , py::arg("C"),  py::arg("Tang"),  py::arg("Trans1"),  py::arg("Trans2") )
        .def(py::init< const gp_Circ &,const Standard_Boolean,const IntSurf_Situation,const IntSurf_Situation >()  , py::arg("C"),  py::arg("Tang"),  py::arg("Situ1"),  py::arg("Situ2") )
        .def(py::init< const gp_Circ &,const Standard_Boolean >()  , py::arg("C"),  py::arg("Tang") )
        .def(py::init< const gp_Elips &,const Standard_Boolean,const IntSurf_TypeTrans,const IntSurf_TypeTrans >()  , py::arg("E"),  py::arg("Tang"),  py::arg("Trans1"),  py::arg("Trans2") )
        .def(py::init< const gp_Elips &,const Standard_Boolean,const IntSurf_Situation,const IntSurf_Situation >()  , py::arg("E"),  py::arg("Tang"),  py::arg("Situ1"),  py::arg("Situ2") )
        .def(py::init< const gp_Elips &,const Standard_Boolean >()  , py::arg("E"),  py::arg("Tang") )
        .def(py::init< const gp_Parab &,const Standard_Boolean,const IntSurf_TypeTrans,const IntSurf_TypeTrans >()  , py::arg("P"),  py::arg("Tang"),  py::arg("Trans1"),  py::arg("Trans2") )
        .def(py::init< const gp_Parab &,const Standard_Boolean,const IntSurf_Situation,const IntSurf_Situation >()  , py::arg("P"),  py::arg("Tang"),  py::arg("Situ1"),  py::arg("Situ2") )
        .def(py::init< const gp_Parab &,const Standard_Boolean >()  , py::arg("P"),  py::arg("Tang") )
        .def(py::init< const gp_Hypr &,const Standard_Boolean,const IntSurf_TypeTrans,const IntSurf_TypeTrans >()  , py::arg("H"),  py::arg("Tang"),  py::arg("Trans1"),  py::arg("Trans2") )
        .def(py::init< const gp_Hypr &,const Standard_Boolean,const IntSurf_Situation,const IntSurf_Situation >()  , py::arg("H"),  py::arg("Tang"),  py::arg("Situ1"),  py::arg("Situ2") )
        .def(py::init< const gp_Hypr &,const Standard_Boolean >()  , py::arg("H"),  py::arg("Tang") )
        .def("AddVertex",
             (void (IntPatch_GLine::*)( const IntPatch_Point &  ) ) static_cast<void (IntPatch_GLine::*)( const IntPatch_Point &  ) >(&IntPatch_GLine::AddVertex),
             R"#(To add a vertex in the list.)#"  , py::arg("Pnt"))
        .def("Replace",
             (void (IntPatch_GLine::*)( const Standard_Integer ,  const IntPatch_Point &  ) ) static_cast<void (IntPatch_GLine::*)( const Standard_Integer ,  const IntPatch_Point &  ) >(&IntPatch_GLine::Replace),
             R"#(To replace the element of range Index in the list of points.)#"  , py::arg("Index"),  py::arg("Pnt"))
        .def("SetFirstPoint",
             (void (IntPatch_GLine::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_GLine::*)( const Standard_Integer  ) >(&IntPatch_GLine::SetFirstPoint),
             R"#(None)#"  , py::arg("IndFirst"))
        .def("SetLastPoint",
             (void (IntPatch_GLine::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_GLine::*)( const Standard_Integer  ) >(&IntPatch_GLine::SetLastPoint),
             R"#(None)#"  , py::arg("IndLast"))
        .def("Line",
             (gp_Lin (IntPatch_GLine::*)() const) static_cast<gp_Lin (IntPatch_GLine::*)() const>(&IntPatch_GLine::Line),
             R"#(Returns the Lin from gp corresponding to the intersection when ArcType returns IntPatch_Line.)#" )
        .def("Circle",
             (gp_Circ (IntPatch_GLine::*)() const) static_cast<gp_Circ (IntPatch_GLine::*)() const>(&IntPatch_GLine::Circle),
             R"#(Returns the Circ from gp corrsponding to the intersection when ArcType returns IntPatch_Circle.)#" )
        .def("Ellipse",
             (gp_Elips (IntPatch_GLine::*)() const) static_cast<gp_Elips (IntPatch_GLine::*)() const>(&IntPatch_GLine::Ellipse),
             R"#(Returns the Elips from gp corrsponding to the intersection when ArcType returns IntPatch_Ellipse.)#" )
        .def("Parabola",
             (gp_Parab (IntPatch_GLine::*)() const) static_cast<gp_Parab (IntPatch_GLine::*)() const>(&IntPatch_GLine::Parabola),
             R"#(Returns the Parab from gp corrsponding to the intersection when ArcType returns IntPatch_Parabola.)#" )
        .def("Hyperbola",
             (gp_Hypr (IntPatch_GLine::*)() const) static_cast<gp_Hypr (IntPatch_GLine::*)() const>(&IntPatch_GLine::Hyperbola),
             R"#(Returns the Hypr from gp corrsponding to the intersection when ArcType returns IntPatch_Hyperbola.)#" )
        .def("HasFirstPoint",
             (Standard_Boolean (IntPatch_GLine::*)() const) static_cast<Standard_Boolean (IntPatch_GLine::*)() const>(&IntPatch_GLine::HasFirstPoint),
             R"#(Returns True if the line has a known First point. This point is given by the method FirstPoint().)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntPatch_GLine::*)() const) static_cast<Standard_Boolean (IntPatch_GLine::*)() const>(&IntPatch_GLine::HasLastPoint),
             R"#(Returns True if the line has a known Last point. This point is given by the method LastPoint().)#" )
        .def("FirstPoint",
             (const IntPatch_Point & (IntPatch_GLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_GLine::*)() const>(&IntPatch_GLine::FirstPoint),
             R"#(Returns the IntPoint corresponding to the FirstPoint. An exception is raised when HasFirstPoint returns False.)#" )
        .def("LastPoint",
             (const IntPatch_Point & (IntPatch_GLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_GLine::*)() const>(&IntPatch_GLine::LastPoint),
             R"#(Returns the IntPoint corresponding to the LastPoint. An exception is raised when HasLastPoint returns False.)#" )
        .def("NbVertex",
             (Standard_Integer (IntPatch_GLine::*)() const) static_cast<Standard_Integer (IntPatch_GLine::*)() const>(&IntPatch_GLine::NbVertex),
             R"#(None)#" )
        .def("Vertex",
             (const IntPatch_Point & (IntPatch_GLine::*)( const Standard_Integer  ) const) static_cast<const IntPatch_Point & (IntPatch_GLine::*)( const Standard_Integer  ) const>(&IntPatch_GLine::Vertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("ComputeVertexParameters",
             (void (IntPatch_GLine::*)( const Standard_Real  ) ) static_cast<void (IntPatch_GLine::*)( const Standard_Real  ) >(&IntPatch_GLine::ComputeVertexParameters),
             R"#(Set the parameters of all the vertex on the line. if a vertex is already in the line, its parameter is modified else a new point in the line is inserted.)#"  , py::arg("Tol"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IntPatch_GLine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IntPatch_GLine::*)() const>(&IntPatch_GLine::DynamicType),
             R"#(None)#" )
        .def("SetFirstPoint",
             (void (IntPatch_GLine::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_GLine::*)( const Standard_Integer  ) >(&IntPatch_GLine::SetFirstPoint),
             R"#(None)#"  , py::arg("IndFirst"))
        .def("SetLastPoint",
             (void (IntPatch_GLine::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_GLine::*)( const Standard_Integer  ) >(&IntPatch_GLine::SetLastPoint),
             R"#(None)#"  , py::arg("IndLast"))
        .def("Line",
             (gp_Lin (IntPatch_GLine::*)() const) static_cast<gp_Lin (IntPatch_GLine::*)() const>(&IntPatch_GLine::Line),
             R"#(Returns the Lin from gp corresponding to the intersection when ArcType returns IntPatch_Line.)#" )
        .def("Circle",
             (gp_Circ (IntPatch_GLine::*)() const) static_cast<gp_Circ (IntPatch_GLine::*)() const>(&IntPatch_GLine::Circle),
             R"#(Returns the Circ from gp corrsponding to the intersection when ArcType returns IntPatch_Circle.)#" )
        .def("Ellipse",
             (gp_Elips (IntPatch_GLine::*)() const) static_cast<gp_Elips (IntPatch_GLine::*)() const>(&IntPatch_GLine::Ellipse),
             R"#(Returns the Elips from gp corrsponding to the intersection when ArcType returns IntPatch_Ellipse.)#" )
        .def("Parabola",
             (gp_Parab (IntPatch_GLine::*)() const) static_cast<gp_Parab (IntPatch_GLine::*)() const>(&IntPatch_GLine::Parabola),
             R"#(Returns the Parab from gp corrsponding to the intersection when ArcType returns IntPatch_Parabola.)#" )
        .def("Hyperbola",
             (gp_Hypr (IntPatch_GLine::*)() const) static_cast<gp_Hypr (IntPatch_GLine::*)() const>(&IntPatch_GLine::Hyperbola),
             R"#(Returns the Hypr from gp corrsponding to the intersection when ArcType returns IntPatch_Hyperbola.)#" )
        .def("HasFirstPoint",
             (Standard_Boolean (IntPatch_GLine::*)() const) static_cast<Standard_Boolean (IntPatch_GLine::*)() const>(&IntPatch_GLine::HasFirstPoint),
             R"#(Returns True if the line has a known First point. This point is given by the method FirstPoint().)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntPatch_GLine::*)() const) static_cast<Standard_Boolean (IntPatch_GLine::*)() const>(&IntPatch_GLine::HasLastPoint),
             R"#(Returns True if the line has a known Last point. This point is given by the method LastPoint().)#" )
        .def("FirstPoint",
             (const IntPatch_Point & (IntPatch_GLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_GLine::*)() const>(&IntPatch_GLine::FirstPoint),
             R"#(Returns the IntPoint corresponding to the FirstPoint. An exception is raised when HasFirstPoint returns False.)#" )
        .def("LastPoint",
             (const IntPatch_Point & (IntPatch_GLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_GLine::*)() const>(&IntPatch_GLine::LastPoint),
             R"#(Returns the IntPoint corresponding to the LastPoint. An exception is raised when HasLastPoint returns False.)#" )
        .def("NbVertex",
             (Standard_Integer (IntPatch_GLine::*)() const) static_cast<Standard_Integer (IntPatch_GLine::*)() const>(&IntPatch_GLine::NbVertex),
             R"#(None)#" )
        .def("Vertex",
             (const IntPatch_Point & (IntPatch_GLine::*)( const Standard_Integer  ) const) static_cast<const IntPatch_Point & (IntPatch_GLine::*)( const Standard_Integer  ) const>(&IntPatch_GLine::Vertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IntPatch_GLine::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IntPatch_GLine::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IntPatch_ALineToWLine ,std::unique_ptr<IntPatch_ALineToWLine>  >>(m.attr("IntPatch_ALineToWLine"))
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Integer >()  , py::arg("theS1"),  py::arg("theS2"),  py::arg("theNbPoints")=static_cast<const Standard_Integer>(200) )
        .def("SetTolOpenDomain",
             (void (IntPatch_ALineToWLine::*)( const Standard_Real  ) ) static_cast<void (IntPatch_ALineToWLine::*)( const Standard_Real  ) >(&IntPatch_ALineToWLine::SetTolOpenDomain),
             R"#(None)#"  , py::arg("aT"))
        .def("TolOpenDomain",
             (Standard_Real (IntPatch_ALineToWLine::*)() const) static_cast<Standard_Real (IntPatch_ALineToWLine::*)() const>(&IntPatch_ALineToWLine::TolOpenDomain),
             R"#(None)#" )
        .def("SetTolTransition",
             (void (IntPatch_ALineToWLine::*)( const Standard_Real  ) ) static_cast<void (IntPatch_ALineToWLine::*)( const Standard_Real  ) >(&IntPatch_ALineToWLine::SetTolTransition),
             R"#(None)#"  , py::arg("aT"))
        .def("TolTransition",
             (Standard_Real (IntPatch_ALineToWLine::*)() const) static_cast<Standard_Real (IntPatch_ALineToWLine::*)() const>(&IntPatch_ALineToWLine::TolTransition),
             R"#(None)#" )
        .def("SetTol3D",
             (void (IntPatch_ALineToWLine::*)( const Standard_Real  ) ) static_cast<void (IntPatch_ALineToWLine::*)( const Standard_Real  ) >(&IntPatch_ALineToWLine::SetTol3D),
             R"#(None)#"  , py::arg("aT"))
        .def("Tol3D",
             (Standard_Real (IntPatch_ALineToWLine::*)() const) static_cast<Standard_Real (IntPatch_ALineToWLine::*)() const>(&IntPatch_ALineToWLine::Tol3D),
             R"#(None)#" )
        .def("MakeWLine",
             (void (IntPatch_ALineToWLine::*)( const opencascade::handle<IntPatch_ALine> & ,  NCollection_Sequence<opencascade::handle<IntPatch_Line> > &  ) const) static_cast<void (IntPatch_ALineToWLine::*)( const opencascade::handle<IntPatch_ALine> & ,  NCollection_Sequence<opencascade::handle<IntPatch_Line> > &  ) const>(&IntPatch_ALineToWLine::MakeWLine),
             R"#(Converts aline to the set of Walking-lines and adds them in theLines.)#"  , py::arg("aline"),  py::arg("theLines"))
        .def("MakeWLine",
             (void (IntPatch_ALineToWLine::*)( const opencascade::handle<IntPatch_ALine> & ,  const Standard_Real ,  const Standard_Real ,  NCollection_Sequence<opencascade::handle<IntPatch_Line> > &  ) const) static_cast<void (IntPatch_ALineToWLine::*)( const opencascade::handle<IntPatch_ALine> & ,  const Standard_Real ,  const Standard_Real ,  NCollection_Sequence<opencascade::handle<IntPatch_Line> > &  ) const>(&IntPatch_ALineToWLine::MakeWLine),
             R"#(Converts aline (limitted by paraminf and paramsup) to the set of Walking-lines and adds them in theLines.)#"  , py::arg("aline"),  py::arg("paraminf"),  py::arg("paramsup"),  py::arg("theLines"))
;


    static_cast<py::class_<IntPatch_PointLine ,opencascade::handle<IntPatch_PointLine> ,Py_IntPatch_PointLine , IntPatch_Line >>(m.attr("IntPatch_PointLine"))
        .def("AddVertex",
             (void (IntPatch_PointLine::*)( const IntPatch_Point & ,  const Standard_Boolean  ) ) static_cast<void (IntPatch_PointLine::*)( const IntPatch_Point & ,  const Standard_Boolean  ) >(&IntPatch_PointLine::AddVertex),
             R"#(Adds a vertex in the list. If theIsPrepend == TRUE the new vertex will be added before the first element of vertices sequence. Otherwise, to the end of the sequence)#"  , py::arg("Pnt"),  py::arg("theIsPrepend")=static_cast<const Standard_Boolean>(Standard_False))
        .def("NbPnts",
             (Standard_Integer (IntPatch_PointLine::*)() const) static_cast<Standard_Integer (IntPatch_PointLine::*)() const>(&IntPatch_PointLine::NbPnts),
             R"#(Returns the number of intersection points.)#" )
        .def("NbVertex",
             (Standard_Integer (IntPatch_PointLine::*)() const) static_cast<Standard_Integer (IntPatch_PointLine::*)() const>(&IntPatch_PointLine::NbVertex),
             R"#(Returns number of vertices (IntPatch_Point) of the line)#" )
        .def("Point",
             (const IntSurf_PntOn2S & (IntPatch_PointLine::*)( const Standard_Integer  ) const) static_cast<const IntSurf_PntOn2S & (IntPatch_PointLine::*)( const Standard_Integer  ) const>(&IntPatch_PointLine::Point),
             R"#(Returns the intersection point of range Index.)#"  , py::arg("Index"))
        .def("Vertex",
             (const IntPatch_Point & (IntPatch_PointLine::*)( const Standard_Integer  ) const) static_cast<const IntPatch_Point & (IntPatch_PointLine::*)( const Standard_Integer  ) const>(&IntPatch_PointLine::Vertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("ChangeVertex",
             (IntPatch_Point & (IntPatch_PointLine::*)( const Standard_Integer  ) ) static_cast<IntPatch_Point & (IntPatch_PointLine::*)( const Standard_Integer  ) >(&IntPatch_PointLine::ChangeVertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("ClearVertexes",
             (void (IntPatch_PointLine::*)() ) static_cast<void (IntPatch_PointLine::*)() >(&IntPatch_PointLine::ClearVertexes),
             R"#(Removes vertices from the line)#" )
        .def("RemoveVertex",
             (void (IntPatch_PointLine::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_PointLine::*)( const Standard_Integer  ) >(&IntPatch_PointLine::RemoveVertex),
             R"#(Removes single vertex from the line)#"  , py::arg("theIndex"))
        .def("Curve",
             (opencascade::handle<IntSurf_LineOn2S> (IntPatch_PointLine::*)() const) static_cast<opencascade::handle<IntSurf_LineOn2S> (IntPatch_PointLine::*)() const>(&IntPatch_PointLine::Curve),
             R"#(Returns set of intersection points)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IntPatch_PointLine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IntPatch_PointLine::*)() const>(&IntPatch_PointLine::DynamicType),
             R"#(None)#" )
        .def_static("CurvatureRadiusOfIntersLine_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const IntSurf_PntOn2S &  ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const IntSurf_PntOn2S &  ) >(&IntPatch_PointLine::CurvatureRadiusOfIntersLine),
                    R"#(Returns the radius of curvature of the intersection line in given point. Returns negative value if computation is not possible.)#"  , py::arg("theS1"),  py::arg("theS2"),  py::arg("theUVPoint"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IntPatch_PointLine::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IntPatch_PointLine::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IntPatch_WLine ,opencascade::handle<IntPatch_WLine>  , IntPatch_PointLine >>(m.attr("IntPatch_WLine"))
        .def(py::init< const opencascade::handle<IntSurf_LineOn2S> &,const Standard_Boolean,const IntSurf_TypeTrans,const IntSurf_TypeTrans >()  , py::arg("Line"),  py::arg("Tang"),  py::arg("Trans1"),  py::arg("Trans2") )
        .def(py::init< const opencascade::handle<IntSurf_LineOn2S> &,const Standard_Boolean,const IntSurf_Situation,const IntSurf_Situation >()  , py::arg("Line"),  py::arg("Tang"),  py::arg("Situ1"),  py::arg("Situ2") )
        .def(py::init< const opencascade::handle<IntSurf_LineOn2S> &,const Standard_Boolean >()  , py::arg("Line"),  py::arg("Tang") )
        .def("AddVertex",
             (void (IntPatch_WLine::*)( const IntPatch_Point & ,  const Standard_Boolean  ) ) static_cast<void (IntPatch_WLine::*)( const IntPatch_Point & ,  const Standard_Boolean  ) >(&IntPatch_WLine::AddVertex),
             R"#(Adds a vertex in the list. If theIsPrepend == TRUE the new vertex will be added before the first element of vertices sequence. Otherwise, to the end of the sequence)#"  , py::arg("Pnt"),  py::arg("theIsPrepend")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetPoint",
             (void (IntPatch_WLine::*)( const Standard_Integer ,  const IntPatch_Point &  ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Integer ,  const IntPatch_Point &  ) >(&IntPatch_WLine::SetPoint),
             R"#(Set the Point of index <Index> in the LineOn2S)#"  , py::arg("Index"),  py::arg("Pnt"))
        .def("Replace",
             (void (IntPatch_WLine::*)( const Standard_Integer ,  const IntPatch_Point &  ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Integer ,  const IntPatch_Point &  ) >(&IntPatch_WLine::Replace),
             R"#(Replaces the element of range Index in the list of points. The exception OutOfRange is raised when Index <= 0 or Index > NbVertex.)#"  , py::arg("Index"),  py::arg("Pnt"))
        .def("SetFirstPoint",
             (void (IntPatch_WLine::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Integer  ) >(&IntPatch_WLine::SetFirstPoint),
             R"#(None)#"  , py::arg("IndFirst"))
        .def("SetLastPoint",
             (void (IntPatch_WLine::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Integer  ) >(&IntPatch_WLine::SetLastPoint),
             R"#(None)#"  , py::arg("IndLast"))
        .def("NbPnts",
             (Standard_Integer (IntPatch_WLine::*)() const) static_cast<Standard_Integer (IntPatch_WLine::*)() const>(&IntPatch_WLine::NbPnts),
             R"#(Returns the number of intersection points.)#" )
        .def("Point",
             (const IntSurf_PntOn2S & (IntPatch_WLine::*)( const Standard_Integer  ) const) static_cast<const IntSurf_PntOn2S & (IntPatch_WLine::*)( const Standard_Integer  ) const>(&IntPatch_WLine::Point),
             R"#(Returns the intersection point of range Index.)#"  , py::arg("Index"))
        .def("HasFirstPoint",
             (Standard_Boolean (IntPatch_WLine::*)() const) static_cast<Standard_Boolean (IntPatch_WLine::*)() const>(&IntPatch_WLine::HasFirstPoint),
             R"#(Returns True if the line has a known First point. This point is given by the method FirstPoint().)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntPatch_WLine::*)() const) static_cast<Standard_Boolean (IntPatch_WLine::*)() const>(&IntPatch_WLine::HasLastPoint),
             R"#(Returns True if the line has a known Last point. This point is given by the method LastPoint().)#" )
        .def("FirstPoint",
             (const IntPatch_Point & (IntPatch_WLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_WLine::*)() const>(&IntPatch_WLine::FirstPoint),
             R"#(Returns the Point corresponding to the FirstPoint.)#" )
        .def("LastPoint",
             (const IntPatch_Point & (IntPatch_WLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_WLine::*)() const>(&IntPatch_WLine::LastPoint),
             R"#(Returns the Point corresponding to the LastPoint.)#" )
        .def("FirstPoint",
             (const IntPatch_Point & (IntPatch_WLine::*)( Standard_Integer &  ) const) static_cast<const IntPatch_Point & (IntPatch_WLine::*)( Standard_Integer &  ) const>(&IntPatch_WLine::FirstPoint),
             R"#(Returns the Point corresponding to the FirstPoint. Indfirst is the index of the first in the list of vertices.)#"  , py::arg("Indfirst"))
        .def("LastPoint",
             (const IntPatch_Point & (IntPatch_WLine::*)( Standard_Integer &  ) const) static_cast<const IntPatch_Point & (IntPatch_WLine::*)( Standard_Integer &  ) const>(&IntPatch_WLine::LastPoint),
             R"#(Returns the Point corresponding to the LastPoint. Indlast is the index of the last in the list of vertices.)#"  , py::arg("Indlast"))
        .def("NbVertex",
             (Standard_Integer (IntPatch_WLine::*)() const) static_cast<Standard_Integer (IntPatch_WLine::*)() const>(&IntPatch_WLine::NbVertex),
             R"#(Returns number of vertices (IntPatch_Point) of the line)#" )
        .def("Vertex",
             (const IntPatch_Point & (IntPatch_WLine::*)( const Standard_Integer  ) const) static_cast<const IntPatch_Point & (IntPatch_WLine::*)( const Standard_Integer  ) const>(&IntPatch_WLine::Vertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("ChangeVertex",
             (IntPatch_Point & (IntPatch_WLine::*)( const Standard_Integer  ) ) static_cast<IntPatch_Point & (IntPatch_WLine::*)( const Standard_Integer  ) >(&IntPatch_WLine::ChangeVertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("ComputeVertexParameters",
             (void (IntPatch_WLine::*)( const Standard_Real  ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Real  ) >(&IntPatch_WLine::ComputeVertexParameters),
             R"#(Set the parameters of all the vertex on the line. if a vertex is already in the line, its parameter is modified else a new point in the line is inserted.)#"  , py::arg("Tol"))
        .def("Curve",
             (opencascade::handle<IntSurf_LineOn2S> (IntPatch_WLine::*)() const) static_cast<opencascade::handle<IntSurf_LineOn2S> (IntPatch_WLine::*)() const>(&IntPatch_WLine::Curve),
             R"#(Returns set of intersection points)#" )
        .def("IsOutSurf1Box",
             (Standard_Boolean (IntPatch_WLine::*)( const gp_Pnt2d &  ) ) static_cast<Standard_Boolean (IntPatch_WLine::*)( const gp_Pnt2d &  ) >(&IntPatch_WLine::IsOutSurf1Box),
             R"#(None)#"  , py::arg("P1"))
        .def("IsOutSurf2Box",
             (Standard_Boolean (IntPatch_WLine::*)( const gp_Pnt2d &  ) ) static_cast<Standard_Boolean (IntPatch_WLine::*)( const gp_Pnt2d &  ) >(&IntPatch_WLine::IsOutSurf2Box),
             R"#(None)#"  , py::arg("P1"))
        .def("IsOutBox",
             (Standard_Boolean (IntPatch_WLine::*)( const gp_Pnt &  ) ) static_cast<Standard_Boolean (IntPatch_WLine::*)( const gp_Pnt &  ) >(&IntPatch_WLine::IsOutBox),
             R"#(None)#"  , py::arg("P"))
        .def("SetPeriod",
             (void (IntPatch_WLine::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntPatch_WLine::SetPeriod),
             R"#(None)#"  , py::arg("pu1"),  py::arg("pv1"),  py::arg("pu2"),  py::arg("pv2"))
        .def("U1Period",
             (Standard_Real (IntPatch_WLine::*)() const) static_cast<Standard_Real (IntPatch_WLine::*)() const>(&IntPatch_WLine::U1Period),
             R"#(None)#" )
        .def("V1Period",
             (Standard_Real (IntPatch_WLine::*)() const) static_cast<Standard_Real (IntPatch_WLine::*)() const>(&IntPatch_WLine::V1Period),
             R"#(None)#" )
        .def("U2Period",
             (Standard_Real (IntPatch_WLine::*)() const) static_cast<Standard_Real (IntPatch_WLine::*)() const>(&IntPatch_WLine::U2Period),
             R"#(None)#" )
        .def("V2Period",
             (Standard_Real (IntPatch_WLine::*)() const) static_cast<Standard_Real (IntPatch_WLine::*)() const>(&IntPatch_WLine::V2Period),
             R"#(None)#" )
        .def("SetArcOnS1",
             (void (IntPatch_WLine::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<void (IntPatch_WLine::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_WLine::SetArcOnS1),
             R"#(None)#"  , py::arg("A"))
        .def("HasArcOnS1",
             (Standard_Boolean (IntPatch_WLine::*)() const) static_cast<Standard_Boolean (IntPatch_WLine::*)() const>(&IntPatch_WLine::HasArcOnS1),
             R"#(None)#" )
        .def("GetArcOnS1",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_WLine::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_WLine::*)() const>(&IntPatch_WLine::GetArcOnS1),
             R"#(None)#" )
        .def("SetArcOnS2",
             (void (IntPatch_WLine::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<void (IntPatch_WLine::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_WLine::SetArcOnS2),
             R"#(None)#"  , py::arg("A"))
        .def("HasArcOnS2",
             (Standard_Boolean (IntPatch_WLine::*)() const) static_cast<Standard_Boolean (IntPatch_WLine::*)() const>(&IntPatch_WLine::HasArcOnS2),
             R"#(None)#" )
        .def("GetArcOnS2",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_WLine::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_WLine::*)() const>(&IntPatch_WLine::GetArcOnS2),
             R"#(None)#" )
        .def("ClearVertexes",
             (void (IntPatch_WLine::*)() ) static_cast<void (IntPatch_WLine::*)() >(&IntPatch_WLine::ClearVertexes),
             R"#(Removes vertices from the line (i.e. cleans svtx member))#" )
        .def("RemoveVertex",
             (void (IntPatch_WLine::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Integer  ) >(&IntPatch_WLine::RemoveVertex),
             R"#(Removes single vertex from the line)#"  , py::arg("theIndex"))
        .def("InsertVertexBefore",
             (void (IntPatch_WLine::*)( const Standard_Integer ,  const IntPatch_Point &  ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Integer ,  const IntPatch_Point &  ) >(&IntPatch_WLine::InsertVertexBefore),
             R"#(None)#"  , py::arg("theIndex"),  py::arg("thePnt"))
        .def("Dump",
             (void (IntPatch_WLine::*)( const Standard_Integer  ) const) static_cast<void (IntPatch_WLine::*)( const Standard_Integer  ) const>(&IntPatch_WLine::Dump),
             R"#(if (theMode == 0) then prints the information about WLine if (theMode == 1) then prints the list of 3d-points if (theMode == 2) then prints the list of 2d-points on the 1st surface Otherwise, prints list of 2d-points on the 2nd surface)#"  , py::arg("theMode"))
        .def("EnablePurging",
             (void (IntPatch_WLine::*)( const Standard_Boolean  ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Boolean  ) >(&IntPatch_WLine::EnablePurging),
             R"#(Allows or forbides purging of existing WLine)#"  , py::arg("theIsEnabled"))
        .def("IsPurgingAllowed",
             (Standard_Boolean (IntPatch_WLine::*)() ) static_cast<Standard_Boolean (IntPatch_WLine::*)() >(&IntPatch_WLine::IsPurgingAllowed),
             R"#(Returns TRUE if purging is allowed or forbiden for existing WLine)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IntPatch_WLine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IntPatch_WLine::*)() const>(&IntPatch_WLine::DynamicType),
             R"#(None)#" )
        .def("AddVertex",
             (void (IntPatch_WLine::*)( const IntPatch_Point & ,  const Standard_Boolean  ) ) static_cast<void (IntPatch_WLine::*)( const IntPatch_Point & ,  const Standard_Boolean  ) >(&IntPatch_WLine::AddVertex),
             R"#(Adds a vertex in the list. If theIsPrepend == TRUE the new vertex will be added before the first element of vertices sequence. Otherwise, to the end of the sequence)#"  , py::arg("thePnt"),  py::arg("theIsPrepend"))
        .def("Replace",
             (void (IntPatch_WLine::*)( const Standard_Integer ,  const IntPatch_Point &  ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Integer ,  const IntPatch_Point &  ) >(&IntPatch_WLine::Replace),
             R"#(Replaces the element of range Index in the list of points. The exception OutOfRange is raised when Index <= 0 or Index > NbVertex.)#"  , py::arg("Index"),  py::arg("Pnt"))
        .def("SetFirstPoint",
             (void (IntPatch_WLine::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Integer  ) >(&IntPatch_WLine::SetFirstPoint),
             R"#(None)#"  , py::arg("IndFirst"))
        .def("SetLastPoint",
             (void (IntPatch_WLine::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Integer  ) >(&IntPatch_WLine::SetLastPoint),
             R"#(None)#"  , py::arg("IndLast"))
        .def("NbPnts",
             (Standard_Integer (IntPatch_WLine::*)() const) static_cast<Standard_Integer (IntPatch_WLine::*)() const>(&IntPatch_WLine::NbPnts),
             R"#(Returns the number of intersection points.)#" )
        .def("Point",
             (const IntSurf_PntOn2S & (IntPatch_WLine::*)( const Standard_Integer  ) const) static_cast<const IntSurf_PntOn2S & (IntPatch_WLine::*)( const Standard_Integer  ) const>(&IntPatch_WLine::Point),
             R"#(Returns the intersection point of range Index.)#"  , py::arg("Index"))
        .def("HasFirstPoint",
             (Standard_Boolean (IntPatch_WLine::*)() const) static_cast<Standard_Boolean (IntPatch_WLine::*)() const>(&IntPatch_WLine::HasFirstPoint),
             R"#(Returns True if the line has a known First point. This point is given by the method FirstPoint().)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntPatch_WLine::*)() const) static_cast<Standard_Boolean (IntPatch_WLine::*)() const>(&IntPatch_WLine::HasLastPoint),
             R"#(Returns True if the line has a known Last point. This point is given by the method LastPoint().)#" )
        .def("FirstPoint",
             (const IntPatch_Point & (IntPatch_WLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_WLine::*)() const>(&IntPatch_WLine::FirstPoint),
             R"#(Returns the Point corresponding to the FirstPoint.)#" )
        .def("LastPoint",
             (const IntPatch_Point & (IntPatch_WLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_WLine::*)() const>(&IntPatch_WLine::LastPoint),
             R"#(Returns the Point corresponding to the LastPoint.)#" )
        .def("FirstPoint",
             (const IntPatch_Point & (IntPatch_WLine::*)( Standard_Integer &  ) const) static_cast<const IntPatch_Point & (IntPatch_WLine::*)( Standard_Integer &  ) const>(&IntPatch_WLine::FirstPoint),
             R"#(Returns the Point corresponding to the FirstPoint. Indfirst is the index of the first in the list of vertices.)#"  , py::arg("Indfirst"))
        .def("LastPoint",
             (const IntPatch_Point & (IntPatch_WLine::*)( Standard_Integer &  ) const) static_cast<const IntPatch_Point & (IntPatch_WLine::*)( Standard_Integer &  ) const>(&IntPatch_WLine::LastPoint),
             R"#(Returns the Point corresponding to the LastPoint. Indlast is the index of the last in the list of vertices.)#"  , py::arg("Indlast"))
        .def("NbVertex",
             (Standard_Integer (IntPatch_WLine::*)() const) static_cast<Standard_Integer (IntPatch_WLine::*)() const>(&IntPatch_WLine::NbVertex),
             R"#(Returns number of vertices (IntPatch_Point) of the line)#" )
        .def("Vertex",
             (const IntPatch_Point & (IntPatch_WLine::*)( const Standard_Integer  ) const) static_cast<const IntPatch_Point & (IntPatch_WLine::*)( const Standard_Integer  ) const>(&IntPatch_WLine::Vertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("ChangeVertex",
             (IntPatch_Point & (IntPatch_WLine::*)( const Standard_Integer  ) ) static_cast<IntPatch_Point & (IntPatch_WLine::*)( const Standard_Integer  ) >(&IntPatch_WLine::ChangeVertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("ClearVertexes",
             (void (IntPatch_WLine::*)() ) static_cast<void (IntPatch_WLine::*)() >(&IntPatch_WLine::ClearVertexes),
             R"#(Removes vertices from the line (i.e. cleans svtx member))#" )
        .def("RemoveVertex",
             (void (IntPatch_WLine::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Integer  ) >(&IntPatch_WLine::RemoveVertex),
             R"#(Removes single vertex from the line)#"  , py::arg("theIndex"))
        .def("InsertVertexBefore",
             (void (IntPatch_WLine::*)( const Standard_Integer ,  const IntPatch_Point &  ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Integer ,  const IntPatch_Point &  ) >(&IntPatch_WLine::InsertVertexBefore),
             R"#(None)#"  , py::arg("theIndex"),  py::arg("thePnt"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IntPatch_WLine::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IntPatch_WLine::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<IntPatch_RstInt ,std::unique_ptr<IntPatch_RstInt>>(m,"IntPatch_RstInt");

    static_cast<py::class_<IntPatch_RstInt ,std::unique_ptr<IntPatch_RstInt>  >>(m.attr("IntPatch_RstInt"))
        .def_static("PutVertexOnLine_s",
                    (void (*)( const opencascade::handle<IntPatch_Line> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Boolean ,  const Standard_Real  ) ) static_cast<void (*)( const opencascade::handle<IntPatch_Line> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_TopolTool> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Boolean ,  const Standard_Real  ) >(&IntPatch_RstInt::PutVertexOnLine),
                    R"#(None)#"  , py::arg("L"),  py::arg("Surf"),  py::arg("Domain"),  py::arg("OtherSurf"),  py::arg("OnFirst"),  py::arg("Tol"))
;


    static_cast<py::class_<IntPatch_RLine ,opencascade::handle<IntPatch_RLine>  , IntPatch_PointLine >>(m.attr("IntPatch_RLine"))
        .def(py::init< const Standard_Boolean,const IntSurf_TypeTrans,const IntSurf_TypeTrans >()  , py::arg("Tang"),  py::arg("Trans1"),  py::arg("Trans2") )
        .def(py::init< const Standard_Boolean,const IntSurf_Situation,const IntSurf_Situation >()  , py::arg("Tang"),  py::arg("Situ1"),  py::arg("Situ2") )
        .def(py::init< const Standard_Boolean >()  , py::arg("Tang") )
        .def("AddVertex",
             (void (IntPatch_RLine::*)( const IntPatch_Point & ,  const Standard_Boolean  ) ) static_cast<void (IntPatch_RLine::*)( const IntPatch_Point & ,  const Standard_Boolean  ) >(&IntPatch_RLine::AddVertex),
             R"#(Adds a vertex in the list. If theIsPrepend == TRUE the new vertex will be added before the first element of vertices sequence. Otherwise, to the end of the sequence)#"  , py::arg("Pnt"),  py::arg("theIsPrepend")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Replace",
             (void (IntPatch_RLine::*)( const Standard_Integer ,  const IntPatch_Point &  ) ) static_cast<void (IntPatch_RLine::*)( const Standard_Integer ,  const IntPatch_Point &  ) >(&IntPatch_RLine::Replace),
             R"#(Replaces the element of range Index in the list of points.)#"  , py::arg("Index"),  py::arg("Pnt"))
        .def("SetFirstPoint",
             (void (IntPatch_RLine::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_RLine::*)( const Standard_Integer  ) >(&IntPatch_RLine::SetFirstPoint),
             R"#(None)#"  , py::arg("IndFirst"))
        .def("SetLastPoint",
             (void (IntPatch_RLine::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_RLine::*)( const Standard_Integer  ) >(&IntPatch_RLine::SetLastPoint),
             R"#(None)#"  , py::arg("IndLast"))
        .def("Add",
             (void (IntPatch_RLine::*)( const opencascade::handle<IntSurf_LineOn2S> &  ) ) static_cast<void (IntPatch_RLine::*)( const opencascade::handle<IntSurf_LineOn2S> &  ) >(&IntPatch_RLine::Add),
             R"#(None)#"  , py::arg("L"))
        .def("IsArcOnS1",
             (Standard_Boolean (IntPatch_RLine::*)() const) static_cast<Standard_Boolean (IntPatch_RLine::*)() const>(&IntPatch_RLine::IsArcOnS1),
             R"#(Returns True if the intersection is on the domain of the first patch. Returns False if the intersection is on the domain of the second patch.)#" )
        .def("IsArcOnS2",
             (Standard_Boolean (IntPatch_RLine::*)() const) static_cast<Standard_Boolean (IntPatch_RLine::*)() const>(&IntPatch_RLine::IsArcOnS2),
             R"#(Returns True if the intersection is on the domain of the first patch. Returns False if the intersection is on the domain of the second patch.)#" )
        .def("SetArcOnS1",
             (void (IntPatch_RLine::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<void (IntPatch_RLine::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_RLine::SetArcOnS1),
             R"#(None)#"  , py::arg("A"))
        .def("SetArcOnS2",
             (void (IntPatch_RLine::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<void (IntPatch_RLine::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&IntPatch_RLine::SetArcOnS2),
             R"#(None)#"  , py::arg("A"))
        .def("ArcOnS1",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_RLine::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_RLine::*)() const>(&IntPatch_RLine::ArcOnS1),
             R"#(Returns the concerned arc.)#" )
        .def("ArcOnS2",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_RLine::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_RLine::*)() const>(&IntPatch_RLine::ArcOnS2),
             R"#(Returns the concerned arc.)#" )
        .def("ParamOnS1",
             (void (IntPatch_RLine::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntPatch_RLine::*)( Standard_Real & ,  Standard_Real &  ) const>(&IntPatch_RLine::ParamOnS1),
             R"#(None)#"  , py::arg("p1"),  py::arg("p2"))
        .def("ParamOnS2",
             (void (IntPatch_RLine::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntPatch_RLine::*)( Standard_Real & ,  Standard_Real &  ) const>(&IntPatch_RLine::ParamOnS2),
             R"#(None)#"  , py::arg("p1"),  py::arg("p2"))
        .def("HasFirstPoint",
             (Standard_Boolean (IntPatch_RLine::*)() const) static_cast<Standard_Boolean (IntPatch_RLine::*)() const>(&IntPatch_RLine::HasFirstPoint),
             R"#(Returns True if the line has a known First point. This point is given by the method FirstPoint().)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntPatch_RLine::*)() const) static_cast<Standard_Boolean (IntPatch_RLine::*)() const>(&IntPatch_RLine::HasLastPoint),
             R"#(Returns True if the line has a known Last point. This point is given by the method LastPoint().)#" )
        .def("FirstPoint",
             (const IntPatch_Point & (IntPatch_RLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_RLine::*)() const>(&IntPatch_RLine::FirstPoint),
             R"#(Returns the IntPoint corresponding to the FirstPoint. An exception is raised when HasFirstPoint returns False.)#" )
        .def("LastPoint",
             (const IntPatch_Point & (IntPatch_RLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_RLine::*)() const>(&IntPatch_RLine::LastPoint),
             R"#(Returns the IntPoint corresponding to the LastPoint. An exception is raised when HasLastPoint returns False.)#" )
        .def("NbVertex",
             (Standard_Integer (IntPatch_RLine::*)() const) static_cast<Standard_Integer (IntPatch_RLine::*)() const>(&IntPatch_RLine::NbVertex),
             R"#(Returns number of vertices (IntPatch_Point) of the line)#" )
        .def("Vertex",
             (const IntPatch_Point & (IntPatch_RLine::*)( const Standard_Integer  ) const) static_cast<const IntPatch_Point & (IntPatch_RLine::*)( const Standard_Integer  ) const>(&IntPatch_RLine::Vertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("ChangeVertex",
             (IntPatch_Point & (IntPatch_RLine::*)( const Standard_Integer  ) ) static_cast<IntPatch_Point & (IntPatch_RLine::*)( const Standard_Integer  ) >(&IntPatch_RLine::ChangeVertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("RemoveVertex",
             (void (IntPatch_RLine::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_RLine::*)( const Standard_Integer  ) >(&IntPatch_RLine::RemoveVertex),
             R"#(Removes single vertex from the line)#"  , py::arg("theIndex"))
        .def("HasPolygon",
             (Standard_Boolean (IntPatch_RLine::*)() const) static_cast<Standard_Boolean (IntPatch_RLine::*)() const>(&IntPatch_RLine::HasPolygon),
             R"#(None)#" )
        .def("NbPnts",
             (Standard_Integer (IntPatch_RLine::*)() const) static_cast<Standard_Integer (IntPatch_RLine::*)() const>(&IntPatch_RLine::NbPnts),
             R"#(Returns the number of intersection points.)#" )
        .def("Point",
             (const IntSurf_PntOn2S & (IntPatch_RLine::*)( const Standard_Integer  ) const) static_cast<const IntSurf_PntOn2S & (IntPatch_RLine::*)( const Standard_Integer  ) const>(&IntPatch_RLine::Point),
             R"#(Returns the intersection point of range Index.)#"  , py::arg("Index"))
        .def("SetPoint",
             (void (IntPatch_RLine::*)( const Standard_Integer ,  const IntPatch_Point &  ) ) static_cast<void (IntPatch_RLine::*)( const Standard_Integer ,  const IntPatch_Point &  ) >(&IntPatch_RLine::SetPoint),
             R"#(Set the Point of index <Index> in the LineOn2S)#"  , py::arg("Index"),  py::arg("Pnt"))
        .def("ComputeVertexParameters",
             (void (IntPatch_RLine::*)( const Standard_Real  ) ) static_cast<void (IntPatch_RLine::*)( const Standard_Real  ) >(&IntPatch_RLine::ComputeVertexParameters),
             R"#(Set the parameters of all the vertex on the line. if a vertex is already in the line, its parameter is modified else a new point in the line is inserted.)#"  , py::arg("Tol"))
        .def("Curve",
             (opencascade::handle<IntSurf_LineOn2S> (IntPatch_RLine::*)() const) static_cast<opencascade::handle<IntSurf_LineOn2S> (IntPatch_RLine::*)() const>(&IntPatch_RLine::Curve),
             R"#(Returns set of intersection points)#" )
        .def("ClearVertexes",
             (void (IntPatch_RLine::*)() ) static_cast<void (IntPatch_RLine::*)() >(&IntPatch_RLine::ClearVertexes),
             R"#(Removes vertices from the line (i.e. cleans svtx member))#" )
        .def("SetCurve",
             (void (IntPatch_RLine::*)( const opencascade::handle<IntSurf_LineOn2S> &  ) ) static_cast<void (IntPatch_RLine::*)( const opencascade::handle<IntSurf_LineOn2S> &  ) >(&IntPatch_RLine::SetCurve),
             R"#(None)#"  , py::arg("theNewCurve"))
        .def("Dump",
             (void (IntPatch_RLine::*)( const Standard_Integer  ) const) static_cast<void (IntPatch_RLine::*)( const Standard_Integer  ) const>(&IntPatch_RLine::Dump),
             R"#(if (theMode == 0) then prints the information about WLine if (theMode == 1) then prints the list of 3d-points if (theMode == 2) then prints the list of 2d-points on the 1st surface Otherwise, prints list of 2d-points on the 2nd surface)#"  , py::arg("theMode"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IntPatch_RLine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IntPatch_RLine::*)() const>(&IntPatch_RLine::DynamicType),
             R"#(None)#" )
        .def("ArcOnS1",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_RLine::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_RLine::*)() const>(&IntPatch_RLine::ArcOnS1),
             R"#(Returns the concerned arc.)#" )
        .def("ArcOnS2",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_RLine::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_RLine::*)() const>(&IntPatch_RLine::ArcOnS2),
             R"#(Returns the concerned arc.)#" )
        .def("AddVertex",
             (void (IntPatch_RLine::*)( const IntPatch_Point & ,  const Standard_Boolean  ) ) static_cast<void (IntPatch_RLine::*)( const IntPatch_Point & ,  const Standard_Boolean  ) >(&IntPatch_RLine::AddVertex),
             R"#(Adds a vertex in the list. If theIsPrepend == TRUE the new vertex will be added before the first element of vertices sequence. Otherwise, to the end of the sequence)#"  , py::arg("thePnt"),  py::arg("theIsPrepend"))
        .def("Replace",
             (void (IntPatch_RLine::*)( const Standard_Integer ,  const IntPatch_Point &  ) ) static_cast<void (IntPatch_RLine::*)( const Standard_Integer ,  const IntPatch_Point &  ) >(&IntPatch_RLine::Replace),
             R"#(Replaces the element of range Index in the list of points.)#"  , py::arg("Index"),  py::arg("Pnt"))
        .def("SetFirstPoint",
             (void (IntPatch_RLine::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_RLine::*)( const Standard_Integer  ) >(&IntPatch_RLine::SetFirstPoint),
             R"#(None)#"  , py::arg("IndFirst"))
        .def("SetLastPoint",
             (void (IntPatch_RLine::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_RLine::*)( const Standard_Integer  ) >(&IntPatch_RLine::SetLastPoint),
             R"#(None)#"  , py::arg("IndLast"))
        .def("Add",
             (void (IntPatch_RLine::*)( const opencascade::handle<IntSurf_LineOn2S> &  ) ) static_cast<void (IntPatch_RLine::*)( const opencascade::handle<IntSurf_LineOn2S> &  ) >(&IntPatch_RLine::Add),
             R"#(None)#"  , py::arg("L"))
        .def("IsArcOnS1",
             (Standard_Boolean (IntPatch_RLine::*)() const) static_cast<Standard_Boolean (IntPatch_RLine::*)() const>(&IntPatch_RLine::IsArcOnS1),
             R"#(Returns True if the intersection is on the domain of the first patch. Returns False if the intersection is on the domain of the second patch.)#" )
        .def("IsArcOnS2",
             (Standard_Boolean (IntPatch_RLine::*)() const) static_cast<Standard_Boolean (IntPatch_RLine::*)() const>(&IntPatch_RLine::IsArcOnS2),
             R"#(Returns True if the intersection is on the domain of the first patch. Returns False if the intersection is on the domain of the second patch.)#" )
        .def("HasFirstPoint",
             (Standard_Boolean (IntPatch_RLine::*)() const) static_cast<Standard_Boolean (IntPatch_RLine::*)() const>(&IntPatch_RLine::HasFirstPoint),
             R"#(Returns True if the line has a known First point. This point is given by the method FirstPoint().)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntPatch_RLine::*)() const) static_cast<Standard_Boolean (IntPatch_RLine::*)() const>(&IntPatch_RLine::HasLastPoint),
             R"#(Returns True if the line has a known Last point. This point is given by the method LastPoint().)#" )
        .def("FirstPoint",
             (const IntPatch_Point & (IntPatch_RLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_RLine::*)() const>(&IntPatch_RLine::FirstPoint),
             R"#(Returns the IntPoint corresponding to the FirstPoint. An exception is raised when HasFirstPoint returns False.)#" )
        .def("LastPoint",
             (const IntPatch_Point & (IntPatch_RLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_RLine::*)() const>(&IntPatch_RLine::LastPoint),
             R"#(Returns the IntPoint corresponding to the LastPoint. An exception is raised when HasLastPoint returns False.)#" )
        .def("NbVertex",
             (Standard_Integer (IntPatch_RLine::*)() const) static_cast<Standard_Integer (IntPatch_RLine::*)() const>(&IntPatch_RLine::NbVertex),
             R"#(Returns number of vertices (IntPatch_Point) of the line)#" )
        .def("Vertex",
             (const IntPatch_Point & (IntPatch_RLine::*)( const Standard_Integer  ) const) static_cast<const IntPatch_Point & (IntPatch_RLine::*)( const Standard_Integer  ) const>(&IntPatch_RLine::Vertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("ChangeVertex",
             (IntPatch_Point & (IntPatch_RLine::*)( const Standard_Integer  ) ) static_cast<IntPatch_Point & (IntPatch_RLine::*)( const Standard_Integer  ) >(&IntPatch_RLine::ChangeVertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("RemoveVertex",
             (void (IntPatch_RLine::*)( const Standard_Integer  ) ) static_cast<void (IntPatch_RLine::*)( const Standard_Integer  ) >(&IntPatch_RLine::RemoveVertex),
             R"#(Removes single vertex from the line)#"  , py::arg("theIndex"))
        .def("HasPolygon",
             (Standard_Boolean (IntPatch_RLine::*)() const) static_cast<Standard_Boolean (IntPatch_RLine::*)() const>(&IntPatch_RLine::HasPolygon),
             R"#(None)#" )
        .def("NbPnts",
             (Standard_Integer (IntPatch_RLine::*)() const) static_cast<Standard_Integer (IntPatch_RLine::*)() const>(&IntPatch_RLine::NbPnts),
             R"#(Returns the number of intersection points.)#" )
        .def("Point",
             (const IntSurf_PntOn2S & (IntPatch_RLine::*)( const Standard_Integer  ) const) static_cast<const IntSurf_PntOn2S & (IntPatch_RLine::*)( const Standard_Integer  ) const>(&IntPatch_RLine::Point),
             R"#(Returns the intersection point of range Index.)#"  , py::arg("Index"))
        .def("Curve",
             (opencascade::handle<IntSurf_LineOn2S> (IntPatch_RLine::*)() const) static_cast<opencascade::handle<IntSurf_LineOn2S> (IntPatch_RLine::*)() const>(&IntPatch_RLine::Curve),
             R"#(Returns set of intersection points)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IntPatch_RLine::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IntPatch_RLine::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IntPatch_TheSurfFunction ,std::unique_ptr<IntPatch_TheSurfFunction>  , math_FunctionSetWithDerivatives >>(m.attr("IntPatch_TheSurfFunction"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const IntSurf_Quadric & >()  , py::arg("PS"),  py::arg("IS") )
        .def(py::init< const IntSurf_Quadric & >()  , py::arg("IS") )
        .def("Set",
             (void (IntPatch_TheSurfFunction::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<void (IntPatch_TheSurfFunction::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&IntPatch_TheSurfFunction::Set),
             R"#(None)#"  , py::arg("PS"))
        .def("SetImplicitSurface",
             (void (IntPatch_TheSurfFunction::*)( const IntSurf_Quadric &  ) ) static_cast<void (IntPatch_TheSurfFunction::*)( const IntSurf_Quadric &  ) >(&IntPatch_TheSurfFunction::SetImplicitSurface),
             R"#(None)#"  , py::arg("IS"))
        .def("Set",
             (void (IntPatch_TheSurfFunction::*)( const Standard_Real  ) ) static_cast<void (IntPatch_TheSurfFunction::*)( const Standard_Real  ) >(&IntPatch_TheSurfFunction::Set),
             R"#(None)#"  , py::arg("Tolerance"))
        .def("NbVariables",
             (Standard_Integer (IntPatch_TheSurfFunction::*)() const) static_cast<Standard_Integer (IntPatch_TheSurfFunction::*)() const>(&IntPatch_TheSurfFunction::NbVariables),
             R"#(None)#" )
        .def("NbEquations",
             (Standard_Integer (IntPatch_TheSurfFunction::*)() const) static_cast<Standard_Integer (IntPatch_TheSurfFunction::*)() const>(&IntPatch_TheSurfFunction::NbEquations),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (IntPatch_TheSurfFunction::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (IntPatch_TheSurfFunction::*)( const math_Vector & ,  math_Vector &  ) >(&IntPatch_TheSurfFunction::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (IntPatch_TheSurfFunction::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (IntPatch_TheSurfFunction::*)( const math_Vector & ,  math_Matrix &  ) >(&IntPatch_TheSurfFunction::Derivatives),
             R"#(None)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (IntPatch_TheSurfFunction::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (IntPatch_TheSurfFunction::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&IntPatch_TheSurfFunction::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Root",
             (Standard_Real (IntPatch_TheSurfFunction::*)() const) static_cast<Standard_Real (IntPatch_TheSurfFunction::*)() const>(&IntPatch_TheSurfFunction::Root),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_Real (IntPatch_TheSurfFunction::*)() const) static_cast<Standard_Real (IntPatch_TheSurfFunction::*)() const>(&IntPatch_TheSurfFunction::Tolerance),
             R"#(Returns the value Tol so that if Abs(Func.Root())<Tol the function is considered null.)#" )
        .def("Point",
             (const gp_Pnt & (IntPatch_TheSurfFunction::*)() const) static_cast<const gp_Pnt & (IntPatch_TheSurfFunction::*)() const>(&IntPatch_TheSurfFunction::Point),
             R"#(None)#" )
        .def("IsTangent",
             (Standard_Boolean (IntPatch_TheSurfFunction::*)() ) static_cast<Standard_Boolean (IntPatch_TheSurfFunction::*)() >(&IntPatch_TheSurfFunction::IsTangent),
             R"#(None)#" )
        .def("Direction3d",
             (const gp_Vec & (IntPatch_TheSurfFunction::*)() ) static_cast<const gp_Vec & (IntPatch_TheSurfFunction::*)() >(&IntPatch_TheSurfFunction::Direction3d),
             R"#(None)#" )
        .def("Direction2d",
             (const gp_Dir2d & (IntPatch_TheSurfFunction::*)() ) static_cast<const gp_Dir2d & (IntPatch_TheSurfFunction::*)() >(&IntPatch_TheSurfFunction::Direction2d),
             R"#(None)#" )
        .def("PSurface",
             (const opencascade::handle<Adaptor3d_HSurface> & (IntPatch_TheSurfFunction::*)() const) static_cast<const opencascade::handle<Adaptor3d_HSurface> & (IntPatch_TheSurfFunction::*)() const>(&IntPatch_TheSurfFunction::PSurface),
             R"#(None)#" )
        .def("ISurface",
             (const IntSurf_Quadric & (IntPatch_TheSurfFunction::*)() const) static_cast<const IntSurf_Quadric & (IntPatch_TheSurfFunction::*)() const>(&IntPatch_TheSurfFunction::ISurface),
             R"#(None)#" )
;


    static_cast<py::class_<IntPatch_ThePathPointOfTheSOnBounds ,std::unique_ptr<IntPatch_ThePathPointOfTheSOnBounds>  >>(m.attr("IntPatch_ThePathPointOfTheSOnBounds"))
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const Standard_Real,const opencascade::handle<Adaptor3d_HVertex> &,const opencascade::handle<Adaptor2d_HCurve2d> &,const Standard_Real >()  , py::arg("P"),  py::arg("Tol"),  py::arg("V"),  py::arg("A"),  py::arg("Parameter") )
        .def(py::init< const gp_Pnt &,const Standard_Real,const opencascade::handle<Adaptor2d_HCurve2d> &,const Standard_Real >()  , py::arg("P"),  py::arg("Tol"),  py::arg("A"),  py::arg("Parameter") )
        .def("SetValue",
             (void (IntPatch_ThePathPointOfTheSOnBounds::*)( const gp_Pnt & ,  const Standard_Real ,  const opencascade::handle<Adaptor3d_HVertex> & ,  const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real  ) ) static_cast<void (IntPatch_ThePathPointOfTheSOnBounds::*)( const gp_Pnt & ,  const Standard_Real ,  const opencascade::handle<Adaptor3d_HVertex> & ,  const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real  ) >(&IntPatch_ThePathPointOfTheSOnBounds::SetValue),
             R"#(None)#"  , py::arg("P"),  py::arg("Tol"),  py::arg("V"),  py::arg("A"),  py::arg("Parameter"))
        .def("SetValue",
             (void (IntPatch_ThePathPointOfTheSOnBounds::*)( const gp_Pnt & ,  const Standard_Real ,  const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real  ) ) static_cast<void (IntPatch_ThePathPointOfTheSOnBounds::*)( const gp_Pnt & ,  const Standard_Real ,  const opencascade::handle<Adaptor2d_HCurve2d> & ,  const Standard_Real  ) >(&IntPatch_ThePathPointOfTheSOnBounds::SetValue),
             R"#(None)#"  , py::arg("P"),  py::arg("Tol"),  py::arg("A"),  py::arg("Parameter"))
        .def("Value",
             (const gp_Pnt & (IntPatch_ThePathPointOfTheSOnBounds::*)() const) static_cast<const gp_Pnt & (IntPatch_ThePathPointOfTheSOnBounds::*)() const>(&IntPatch_ThePathPointOfTheSOnBounds::Value),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_Real (IntPatch_ThePathPointOfTheSOnBounds::*)() const) static_cast<Standard_Real (IntPatch_ThePathPointOfTheSOnBounds::*)() const>(&IntPatch_ThePathPointOfTheSOnBounds::Tolerance),
             R"#(None)#" )
        .def("IsNew",
             (Standard_Boolean (IntPatch_ThePathPointOfTheSOnBounds::*)() const) static_cast<Standard_Boolean (IntPatch_ThePathPointOfTheSOnBounds::*)() const>(&IntPatch_ThePathPointOfTheSOnBounds::IsNew),
             R"#(None)#" )
        .def("Vertex",
             (const opencascade::handle<Adaptor3d_HVertex> & (IntPatch_ThePathPointOfTheSOnBounds::*)() const) static_cast<const opencascade::handle<Adaptor3d_HVertex> & (IntPatch_ThePathPointOfTheSOnBounds::*)() const>(&IntPatch_ThePathPointOfTheSOnBounds::Vertex),
             R"#(None)#" )
        .def("Arc",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_ThePathPointOfTheSOnBounds::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_ThePathPointOfTheSOnBounds::*)() const>(&IntPatch_ThePathPointOfTheSOnBounds::Arc),
             R"#(None)#" )
        .def("Parameter",
             (Standard_Real (IntPatch_ThePathPointOfTheSOnBounds::*)() const) static_cast<Standard_Real (IntPatch_ThePathPointOfTheSOnBounds::*)() const>(&IntPatch_ThePathPointOfTheSOnBounds::Parameter),
             R"#(None)#" )
;

// functions
// ./opencascade/IntPatch_PolyArc.hxx
// ./opencascade/IntPatch_HInterTool.hxx
// ./opencascade/IntPatch_Polyhedron.hxx
// ./opencascade/IntPatch_ImpImpIntersection.hxx
// ./opencascade/IntPatch_PointLine.hxx
// ./opencascade/IntPatch_TheSearchInside.hxx
// ./opencascade/IntPatch_SpecPntType.hxx
// ./opencascade/IntPatch_RLine.hxx
// ./opencascade/IntPatch_SequenceOfPoint.hxx
// ./opencascade/IntPatch_SequenceOfPathPointOfTheSOnBounds.hxx
// ./opencascade/IntPatch_TheIWLineOfTheIWalking.hxx
// ./opencascade/IntPatch_SearchPnt.hxx
// ./opencascade/IntPatch_Line.hxx
// ./opencascade/IntPatch_WLine.hxx
// ./opencascade/IntPatch_TheIWalking.hxx
// ./opencascade/IntPatch_TheSegmentOfTheSOnBounds.hxx
// ./opencascade/IntPatch_ArcFunction.hxx
// ./opencascade/IntPatch_PrmPrmIntersection.hxx
// ./opencascade/IntPatch_Polygo.hxx
// ./opencascade/IntPatch_SpecialPoints.hxx
// ./opencascade/IntPatch_HCurve2dTool.hxx
// ./opencascade/IntPatch_IType.hxx
// ./opencascade/IntPatch_ThePathPointOfTheSOnBounds.hxx
// ./opencascade/IntPatch_Intersection.hxx
// ./opencascade/IntPatch_ALine.hxx
// ./opencascade/IntPatch_ImpPrmIntersection.hxx
// ./opencascade/IntPatch_GLine.hxx
// ./opencascade/IntPatch_Point.hxx
// ./opencascade/IntPatch_CSFunction.hxx
// ./opencascade/IntPatch_PrmPrmIntersection_T3Bits.hxx
// ./opencascade/IntPatch_RstInt.hxx
// ./opencascade/IntPatch_PolyhedronTool.hxx
// ./opencascade/IntPatch_InterferencePolyhedron.hxx
// ./opencascade/IntPatch_TheSOnBounds.hxx
// ./opencascade/IntPatch_SequenceOfIWLineOfTheIWalking.hxx
// ./opencascade/IntPatch_ALineToWLine.hxx
// ./opencascade/IntPatch_CurvIntSurf.hxx
// ./opencascade/IntPatch_WLineTool.hxx
// ./opencascade/IntPatch_LineConstructor.hxx
// ./opencascade/IntPatch_TheSurfFunction.hxx
// ./opencascade/IntPatch_SequenceOfLine.hxx
// ./opencascade/IntPatch_PolyLine.hxx
// ./opencascade/IntPatch_SequenceOfSegmentOfTheSOnBounds.hxx

// operators

// register typdefs
// ./opencascade/IntPatch_PolyArc.hxx
// ./opencascade/IntPatch_HInterTool.hxx
// ./opencascade/IntPatch_Polyhedron.hxx
// ./opencascade/IntPatch_ImpImpIntersection.hxx
// ./opencascade/IntPatch_PointLine.hxx
// ./opencascade/IntPatch_TheSearchInside.hxx
// ./opencascade/IntPatch_SpecPntType.hxx
// ./opencascade/IntPatch_RLine.hxx
// ./opencascade/IntPatch_SequenceOfPoint.hxx
    register_template_NCollection_Sequence<IntPatch_Point>(m,"IntPatch_SequenceOfPoint");  
// ./opencascade/IntPatch_SequenceOfPathPointOfTheSOnBounds.hxx
    register_template_NCollection_Sequence<IntPatch_ThePathPointOfTheSOnBounds>(m,"IntPatch_SequenceOfPathPointOfTheSOnBounds");  
// ./opencascade/IntPatch_TheIWLineOfTheIWalking.hxx
// ./opencascade/IntPatch_SearchPnt.hxx
// ./opencascade/IntPatch_Line.hxx
// ./opencascade/IntPatch_WLine.hxx
// ./opencascade/IntPatch_TheIWalking.hxx
// ./opencascade/IntPatch_TheSegmentOfTheSOnBounds.hxx
// ./opencascade/IntPatch_ArcFunction.hxx
// ./opencascade/IntPatch_PrmPrmIntersection.hxx
// ./opencascade/IntPatch_Polygo.hxx
// ./opencascade/IntPatch_SpecialPoints.hxx
// ./opencascade/IntPatch_HCurve2dTool.hxx
// ./opencascade/IntPatch_IType.hxx
// ./opencascade/IntPatch_ThePathPointOfTheSOnBounds.hxx
// ./opencascade/IntPatch_Intersection.hxx
// ./opencascade/IntPatch_ALine.hxx
// ./opencascade/IntPatch_ImpPrmIntersection.hxx
// ./opencascade/IntPatch_GLine.hxx
// ./opencascade/IntPatch_Point.hxx
// ./opencascade/IntPatch_CSFunction.hxx
// ./opencascade/IntPatch_PrmPrmIntersection_T3Bits.hxx
// ./opencascade/IntPatch_RstInt.hxx
// ./opencascade/IntPatch_PolyhedronTool.hxx
// ./opencascade/IntPatch_InterferencePolyhedron.hxx
// ./opencascade/IntPatch_TheSOnBounds.hxx
// ./opencascade/IntPatch_SequenceOfIWLineOfTheIWalking.hxx
    register_template_NCollection_Sequence<opencascade::handle<IntPatch_TheIWLineOfTheIWalking> >(m,"IntPatch_SequenceOfIWLineOfTheIWalking");  
// ./opencascade/IntPatch_ALineToWLine.hxx
// ./opencascade/IntPatch_CurvIntSurf.hxx
// ./opencascade/IntPatch_WLineTool.hxx
// ./opencascade/IntPatch_LineConstructor.hxx
// ./opencascade/IntPatch_TheSurfFunction.hxx
// ./opencascade/IntPatch_SequenceOfLine.hxx
    register_template_NCollection_Sequence<opencascade::handle<IntPatch_Line> >(m,"IntPatch_SequenceOfLine");  
// ./opencascade/IntPatch_PolyLine.hxx
// ./opencascade/IntPatch_SequenceOfSegmentOfTheSOnBounds.hxx
    register_template_NCollection_Sequence<IntPatch_TheSegmentOfTheSOnBounds>(m,"IntPatch_SequenceOfSegmentOfTheSOnBounds");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post