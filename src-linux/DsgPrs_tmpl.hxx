#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <gp_Elips.hxx>
#include <Geom_OffsetCurve.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Prs3d_DimensionAspect.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <Geom_Surface.hxx>
#include <Prs3d_LineAspect.hxx>
#include <Prs3d_ArrowAspect.hxx>
#include <Prs3d_TextAspect.hxx>
#include <gp_Circ.hxx>
#include <gp_Circ.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <Geom_Plane.hxx>
#include <gp_Circ.hxx>
#include <TopoDS_Shape.hxx>
#include <gp_Circ.hxx>

// module includes
#include <DsgPrs_EllipseRadiusPresentation.hxx>
#include <DsgPrs_EqualRadiusPresentation.hxx>
#include <DsgPrs_ParalPresentation.hxx>
#include <DsgPrs_ConcentricPresentation.hxx>
#include <DsgPrs_SymbPresentation.hxx>
#include <DsgPrs.hxx>
#include <DsgPrs_Chamf2dPresentation.hxx>
#include <DsgPrs_DiameterPresentation.hxx>
#include <DsgPrs_ShadedPlanePresentation.hxx>
#include <DsgPrs_FixPresentation.hxx>
#include <DsgPrs_IdenticPresentation.hxx>
#include <DsgPrs_DatumPrs.hxx>
#include <DsgPrs_LengthPresentation.hxx>
#include <DsgPrs_XYZPlanePresentation.hxx>
#include <DsgPrs_XYZAxisPresentation.hxx>
#include <DsgPrs_RadiusPresentation.hxx>
#include <DsgPrs_AnglePresentation.hxx>
#include <DsgPrs_MidPointPresentation.hxx>
#include <DsgPrs_TangentPresentation.hxx>
#include <DsgPrs_OffsetPresentation.hxx>
#include <DsgPrs_ArrowSide.hxx>
#include <DsgPrs_FilletRadiusPresentation.hxx>
#include <DsgPrs_EqualDistancePresentation.hxx>
#include <DsgPrs_PerpenPresentation.hxx>
#include <DsgPrs_ShapeDirPresentation.hxx>
#include <DsgPrs_SymmetricPresentation.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/DsgPrs_EllipseRadiusPresentation.hxx
// ./opencascade/DsgPrs_EqualRadiusPresentation.hxx
// ./opencascade/DsgPrs_ParalPresentation.hxx
// ./opencascade/DsgPrs_ConcentricPresentation.hxx
// ./opencascade/DsgPrs_SymbPresentation.hxx
// ./opencascade/DsgPrs.hxx
// ./opencascade/DsgPrs_Chamf2dPresentation.hxx
// ./opencascade/DsgPrs_DiameterPresentation.hxx
// ./opencascade/DsgPrs_ShadedPlanePresentation.hxx
// ./opencascade/DsgPrs_FixPresentation.hxx
// ./opencascade/DsgPrs_IdenticPresentation.hxx
// ./opencascade/DsgPrs_DatumPrs.hxx
// ./opencascade/DsgPrs_LengthPresentation.hxx
// ./opencascade/DsgPrs_XYZPlanePresentation.hxx
// ./opencascade/DsgPrs_XYZAxisPresentation.hxx
// ./opencascade/DsgPrs_RadiusPresentation.hxx
// ./opencascade/DsgPrs_AnglePresentation.hxx
// ./opencascade/DsgPrs_MidPointPresentation.hxx
// ./opencascade/DsgPrs_TangentPresentation.hxx
// ./opencascade/DsgPrs_OffsetPresentation.hxx
// ./opencascade/DsgPrs_ArrowSide.hxx
// ./opencascade/DsgPrs_FilletRadiusPresentation.hxx
// ./opencascade/DsgPrs_EqualDistancePresentation.hxx
// ./opencascade/DsgPrs_PerpenPresentation.hxx
// ./opencascade/DsgPrs_ShapeDirPresentation.hxx
// ./opencascade/DsgPrs_SymmetricPresentation.hxx

// user-defined post
