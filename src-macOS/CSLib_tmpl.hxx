#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <CSLib_Class2d.hxx>
#include <CSLib_NormalPolyDef.hxx>

// module includes
#include <CSLib.hxx>
#include <CSLib_NormalPolyDef.hxx>
#include <CSLib_Class2d.hxx>
#include <CSLib_NormalStatus.hxx>
#include <CSLib_DerivativeStatus.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/CSLib.hxx
// ./opencascade/CSLib_NormalPolyDef.hxx
// ./opencascade/CSLib_Class2d.hxx
// ./opencascade/CSLib_NormalStatus.hxx
// ./opencascade/CSLib_DerivativeStatus.hxx

// user-defined post
