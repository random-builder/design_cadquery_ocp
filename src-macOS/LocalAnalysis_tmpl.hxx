#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <LocalAnalysis_SurfaceContinuity.hxx>
#include <LocalAnalysis_CurveContinuity.hxx>
#include <LocalAnalysis_SurfaceContinuity.hxx>
#include <LocalAnalysis_CurveContinuity.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <GeomLProp_SLProps.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Curve.hxx>
#include <GeomLProp_CLProps.hxx>

// module includes
#include <LocalAnalysis_StatusErrorType.hxx>
#include <LocalAnalysis.hxx>
#include <LocalAnalysis_SurfaceContinuity.hxx>
#include <LocalAnalysis_CurveContinuity.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/LocalAnalysis_StatusErrorType.hxx
// ./opencascade/LocalAnalysis.hxx
// ./opencascade/LocalAnalysis_SurfaceContinuity.hxx
// ./opencascade/LocalAnalysis_CurveContinuity.hxx

// user-defined post
