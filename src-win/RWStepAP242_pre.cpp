
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP242_GeometricItemSpecificUsage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP242_DraughtingModelItemAssociation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP242_IdAttribute.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP242_ItemIdentifiedRepresentationUsage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>

// module includes
#include <RWStepAP242_RWDraughtingModelItemAssociation.hxx>
#include <RWStepAP242_RWGeometricItemSpecificUsage.hxx>
#include <RWStepAP242_RWIdAttribute.hxx>
#include <RWStepAP242_RWItemIdentifiedRepresentationUsage.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_RWStepAP242_enums(py::module &main_module) {


py::module m = main_module.def_submodule("RWStepAP242", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<RWStepAP242_RWDraughtingModelItemAssociation , shared_ptr<RWStepAP242_RWDraughtingModelItemAssociation> >(m,"RWStepAP242_RWDraughtingModelItemAssociation",R"#(Read & Write Module for DraughtingModelItemAssociation)#");
    py::class_<RWStepAP242_RWGeometricItemSpecificUsage , shared_ptr<RWStepAP242_RWGeometricItemSpecificUsage> >(m,"RWStepAP242_RWGeometricItemSpecificUsage",R"#(Read & Write Module for GeometricItemSpecificUsage)#");
    py::class_<RWStepAP242_RWIdAttribute , shared_ptr<RWStepAP242_RWIdAttribute> >(m,"RWStepAP242_RWIdAttribute",R"#(Read & Write Module for IdAttribute)#");
    py::class_<RWStepAP242_RWItemIdentifiedRepresentationUsage , shared_ptr<RWStepAP242_RWItemIdentifiedRepresentationUsage> >(m,"RWStepAP242_RWItemIdentifiedRepresentationUsage",R"#(Read & Write Module for ItemIdentifiedRepresentationUsage)#");

};

// user-defined post-inclusion per module

// user-defined post
