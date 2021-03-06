#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations

// module includes
#include <Intrv_Position.hxx>
#include <Intrv_Interval.hxx>
#include <Intrv_SequenceOfInterval.hxx>
#include <Intrv_Intervals.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Intrv_Position.hxx
// ./opencascade/Intrv_Interval.hxx
// ./opencascade/Intrv_SequenceOfInterval.hxx
// ./opencascade/Intrv_Intervals.hxx

// user-defined post
