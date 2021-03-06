#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations

// module includes
#include <BSplSLib_Cache.hxx>
#include <BSplSLib.hxx>
#include <BSplSLib_EvaluatorFunction.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BSplSLib_Cache.hxx
// ./opencascade/BSplSLib.hxx
// ./opencascade/BSplSLib_EvaluatorFunction.hxx

// user-defined post
