#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <IFGraph_StrongComponants.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_GraphContent.hxx>

// module includes
#include <IFGraph_AllConnected.hxx>
#include <IFGraph_Compare.hxx>
#include <IFGraph_Cycles.hxx>
#include <IFGraph_AllShared.hxx>
#include <IFGraph_StrongComponants.hxx>
#include <IFGraph_Articulations.hxx>
#include <IFGraph_SCRoots.hxx>
#include <IFGraph_ExternalSources.hxx>
#include <IFGraph_ConnectedComponants.hxx>
#include <IFGraph_Cumulate.hxx>
#include <IFGraph_SubPartsIterator.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/IFGraph_AllConnected.hxx
// ./opencascade/IFGraph_Compare.hxx
// ./opencascade/IFGraph_Cycles.hxx
// ./opencascade/IFGraph_AllShared.hxx
// ./opencascade/IFGraph_StrongComponants.hxx
// ./opencascade/IFGraph_Articulations.hxx
// ./opencascade/IFGraph_SCRoots.hxx
// ./opencascade/IFGraph_ExternalSources.hxx
// ./opencascade/IFGraph_ConnectedComponants.hxx
// ./opencascade/IFGraph_Cumulate.hxx
// ./opencascade/IFGraph_SubPartsIterator.hxx

// user-defined post
