#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <gp_Pnt2d.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <gp_Pnt.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntSurf_Quadric.hxx>
#include <IntSurf_QuadricTool.hxx>
#include <math_Matrix.hxx>
#include <IntPatch_WLine.hxx>
#include <IntPatch_RLine.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <IntPatch_Polyhedron.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntPatch_PrmPrmIntersection_T3Bits.hxx>
#include <IntSurf_LineOn2S.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntPatch_Polyhedron.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <IntSurf_LineOn2S.hxx>
#include <IntPatch_Point.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Standard_OutOfRange.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <IntPatch_Polyhedron.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <IntPatch_HCurve2dTool.hxx>
#include <IntPatch_HInterTool.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntPatch_ArcFunction.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <IntPatch_HCurve2dTool.hxx>
#include <math_FunctionSetRoot.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Standard_DomainError.hxx>
#include <IntPatch_Line.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntSurf_PathPointTool.hxx>
#include <IntSurf_InteriorPointTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntPatch_TheSurfFunction.hxx>
#include <math_FunctionSetRoot.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Cone.hxx>
#include <gp_Vec.hxx>
#include <gp_XYZ.hxx>
#include <IntPatch_Point.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <math_Vector.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntPatch_HInterTool.hxx>
#include <IntPatch_TheSurfFunction.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <IntPatch_ALine.hxx>
#include <IntSurf_PntOn2S.hxx>

// module includes
#include <IntPatch_SpecPntType.hxx>
#include <IntPatch_SearchPnt.hxx>
#include <IntPatch_ALine.hxx>
#include <IntPatch_SequenceOfIWLineOfTheIWalking.hxx>
#include <IntPatch_HInterTool.hxx>
#include <IntPatch_WLineTool.hxx>
#include <IntPatch_GLine.hxx>
#include <IntPatch_TheSurfFunction.hxx>
#include <IntPatch_SequenceOfSegmentOfTheSOnBounds.hxx>
#include <IntPatch_PolyLine.hxx>
#include <IntPatch_Polygo.hxx>
#include <IntPatch_SequenceOfPoint.hxx>
#include <IntPatch_PrmPrmIntersection.hxx>
#include <IntPatch_PrmPrmIntersection_T3Bits.hxx>
#include <IntPatch_Intersection.hxx>
#include <IntPatch_LineConstructor.hxx>
#include <IntPatch_PolyhedronTool.hxx>
#include <IntPatch_SequenceOfLine.hxx>
#include <IntPatch_ImpPrmIntersection.hxx>
#include <IntPatch_HCurve2dTool.hxx>
#include <IntPatch_WLine.hxx>
#include <IntPatch_SequenceOfPathPointOfTheSOnBounds.hxx>
#include <IntPatch_PointLine.hxx>
#include <IntPatch_Line.hxx>
#include <IntPatch_CSFunction.hxx>
#include <IntPatch_ThePathPointOfTheSOnBounds.hxx>
#include <IntPatch_InterferencePolyhedron.hxx>
#include <IntPatch_PolyArc.hxx>
#include <IntPatch_TheIWLineOfTheIWalking.hxx>
#include <IntPatch_TheSOnBounds.hxx>
#include <IntPatch_RLine.hxx>
#include <IntPatch_CurvIntSurf.hxx>
#include <IntPatch_Polyhedron.hxx>
#include <IntPatch_Point.hxx>
#include <IntPatch_TheSegmentOfTheSOnBounds.hxx>
#include <IntPatch_ImpImpIntersection.hxx>
#include <IntPatch_ArcFunction.hxx>
#include <IntPatch_IType.hxx>
#include <IntPatch_RstInt.hxx>
#include <IntPatch_TheIWalking.hxx>
#include <IntPatch_SpecialPoints.hxx>
#include <IntPatch_TheSearchInside.hxx>
#include <IntPatch_ALineToWLine.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\IntPatch_SpecPntType.hxx
// ./opencascade\IntPatch_SearchPnt.hxx
// ./opencascade\IntPatch_ALine.hxx
// ./opencascade\IntPatch_SequenceOfIWLineOfTheIWalking.hxx
// ./opencascade\IntPatch_HInterTool.hxx
// ./opencascade\IntPatch_WLineTool.hxx
// ./opencascade\IntPatch_GLine.hxx
// ./opencascade\IntPatch_TheSurfFunction.hxx
// ./opencascade\IntPatch_SequenceOfSegmentOfTheSOnBounds.hxx
// ./opencascade\IntPatch_PolyLine.hxx
// ./opencascade\IntPatch_Polygo.hxx
// ./opencascade\IntPatch_SequenceOfPoint.hxx
// ./opencascade\IntPatch_PrmPrmIntersection.hxx
// ./opencascade\IntPatch_PrmPrmIntersection_T3Bits.hxx
// ./opencascade\IntPatch_Intersection.hxx
// ./opencascade\IntPatch_LineConstructor.hxx
// ./opencascade\IntPatch_PolyhedronTool.hxx
// ./opencascade\IntPatch_SequenceOfLine.hxx
// ./opencascade\IntPatch_ImpPrmIntersection.hxx
// ./opencascade\IntPatch_HCurve2dTool.hxx
// ./opencascade\IntPatch_WLine.hxx
// ./opencascade\IntPatch_SequenceOfPathPointOfTheSOnBounds.hxx
// ./opencascade\IntPatch_PointLine.hxx
// ./opencascade\IntPatch_Line.hxx
// ./opencascade\IntPatch_CSFunction.hxx
// ./opencascade\IntPatch_ThePathPointOfTheSOnBounds.hxx
// ./opencascade\IntPatch_InterferencePolyhedron.hxx
// ./opencascade\IntPatch_PolyArc.hxx
// ./opencascade\IntPatch_TheIWLineOfTheIWalking.hxx
// ./opencascade\IntPatch_TheSOnBounds.hxx
// ./opencascade\IntPatch_RLine.hxx
// ./opencascade\IntPatch_CurvIntSurf.hxx
// ./opencascade\IntPatch_Polyhedron.hxx
// ./opencascade\IntPatch_Point.hxx
// ./opencascade\IntPatch_TheSegmentOfTheSOnBounds.hxx
// ./opencascade\IntPatch_ImpImpIntersection.hxx
// ./opencascade\IntPatch_ArcFunction.hxx
// ./opencascade\IntPatch_IType.hxx
// ./opencascade\IntPatch_RstInt.hxx
// ./opencascade\IntPatch_TheIWalking.hxx
// ./opencascade\IntPatch_SpecialPoints.hxx
// ./opencascade\IntPatch_TheSearchInside.hxx
// ./opencascade\IntPatch_ALineToWLine.hxx

// user-defined post
