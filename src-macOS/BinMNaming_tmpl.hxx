#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <BinMNaming_NamedShapeDriver.hxx>
#include <BinMNaming_NamingDriver.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>

// module includes
#include <BinMNaming.hxx>
#include <BinMNaming_NamingDriver.hxx>
#include <BinMNaming_NamedShapeDriver.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BinMNaming.hxx
// ./opencascade/BinMNaming_NamingDriver.hxx
// ./opencascade/BinMNaming_NamedShapeDriver.hxx

// user-defined post
