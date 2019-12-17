#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Standard_ConstructionError.hxx>
#include <Standard_NullObject.hxx>
#include <OSD_OSDError.hxx>
#include <Standard_ProgramError.hxx>
#include <OSD_Protection.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_NullObject.hxx>
#include <OSD_OSDError.hxx>
#include <Standard_NumericError.hxx>
#include <Standard_ProgramError.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_NullObject.hxx>
#include <OSD_OSDError.hxx>
#include <OSD_Error.hxx>
#include <OSD_Protection.hxx>
#include <OSD_Path.hxx>
#include <OSD_FileNode.hxx>
#include <OSD_Disk.hxx>
#include <OSD_File.hxx>
#include <OSD_FileIterator.hxx>
#include <OSD_Directory.hxx>
#include <OSD_DirectoryIterator.hxx>
#include <OSD_Timer.hxx>
#include <OSD_Host.hxx>
#include <OSD_Environment.hxx>
#include <OSD_Process.hxx>
#include <OSD_SharedLibrary.hxx>
#include <OSD_Thread.hxx>
#include <OSD_OSDError.hxx>
#include <OSD_OSDError.hxx>
#include <OSD_OSDError.hxx>
#include <Standard_ProgramError.hxx>
#include <OSD_Protection.hxx>
#include <Quantity_Date.hxx>
#include <OSD_OSDError.hxx>
#include <OSD_OSDError.hxx>
#include <Quantity_Date.hxx>
#include <OSD_Path.hxx>
#include <OSD_FileNode.hxx>
#include <OSD_File.hxx>
#include <OSD_Directory.hxx>

// module includes
#include <OSD_Environment.hxx>
#include <OSD_MAllocHook.hxx>
#include <OSD_ThreadFunction.hxx>
#include <OSD_Signal.hxx>
#include <OSD_Exception_CTRL_BREAK.hxx>
#include <OSD_Exception_IN_PAGE_ERROR.hxx>
#include <OSD_Thread.hxx>
#include <OSD_OEMType.hxx>
#include <OSD_FromWhere.hxx>
#include <OSD_Exception_PRIV_INSTRUCTION.hxx>
#include <OSD_WhoAmI.hxx>
#include <OSD_SIGHUP.hxx>
#include <OSD_SIGILL.hxx>
#include <OSD_Exception_STATUS_NO_MEMORY.hxx>
#include <OSD_Exception_ARRAY_BOUNDS_EXCEEDED.hxx>
#include <OSD_SysType.hxx>
#include <OSD_SIGKILL.hxx>
#include <OSD_Chronometer.hxx>
#include <OSD_Parallel.hxx>
#include <OSD_Function.hxx>
#include <OSD_LoadMode.hxx>
#include <OSD_Exception_INVALID_DISPOSITION.hxx>
#include <OSD_SingleProtection.hxx>
#include <OSD_Exception_ACCESS_VIOLATION.hxx>
#include <OSD_Exception_NONCONTINUABLE_EXCEPTION.hxx>
#include <OSD_Exception_INT_OVERFLOW.hxx>
#include <OSD_Timer.hxx>
#include <OSD_File.hxx>
#include <OSD_SIGSYS.hxx>
#include <OSD_MemInfo.hxx>
#include <OSD_OpenMode.hxx>
#include <OSD_ErrorList.hxx>
#include <OSD_SIGSEGV.hxx>
#include <OSD_Path.hxx>
#include <OSD_Host.hxx>
#include <OSD_Exception_INT_DIVIDE_BY_ZERO.hxx>
#include <OSD_Exception_FLT_INVALID_OPERATION.hxx>
#include <OSD_PerfMeter.hxx>
#include <OSD.hxx>
#include <OSD_KindFile.hxx>
#include <OSD_LockType.hxx>
#include <OSD_DirectoryIterator.hxx>
#include <OSD_Directory.hxx>
#include <OSD_Exception.hxx>
#include <OSD_Exception_FLT_STACK_CHECK.hxx>
#include <OSD_Exception_FLT_DENORMAL_OPERAND.hxx>
#include <OSD_SIGBUS.hxx>
#include <OSD_Exception_FLT_UNDERFLOW.hxx>
#include <OSD_Exception_FLT_DIVIDE_BY_ZERO.hxx>
#include <OSD_OSDError.hxx>
#include <OSD_FileIterator.hxx>
#include <OSD_Disk.hxx>
#include <OSD_FileNode.hxx>
#include <OSD_SIGQUIT.hxx>
#include <OSD_SIGINT.hxx>
#include <OSD_Exception_FLT_OVERFLOW.hxx>
#include <OSD_Exception_STACK_OVERFLOW.hxx>
#include <OSD_Error.hxx>
#include <OSD_Process.hxx>
#include <OSD_Exception_ILLEGAL_INSTRUCTION.hxx>
#include <OSD_Exception_FLT_INEXACT_RESULT.hxx>
#include <OSD_PThread.hxx>
#include <OSD_SharedLibrary.hxx>
#include <OSD_OpenFile.hxx>
#include <OSD_Protection.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/OSD_Environment.hxx
// ./opencascade/OSD_MAllocHook.hxx
// ./opencascade/OSD_ThreadFunction.hxx
// ./opencascade/OSD_Signal.hxx
// ./opencascade/OSD_Exception_CTRL_BREAK.hxx
// ./opencascade/OSD_Exception_IN_PAGE_ERROR.hxx
// ./opencascade/OSD_Thread.hxx
// ./opencascade/OSD_OEMType.hxx
// ./opencascade/OSD_FromWhere.hxx
// ./opencascade/OSD_Exception_PRIV_INSTRUCTION.hxx
// ./opencascade/OSD_WhoAmI.hxx
// ./opencascade/OSD_SIGHUP.hxx
// ./opencascade/OSD_SIGILL.hxx
// ./opencascade/OSD_Exception_STATUS_NO_MEMORY.hxx
// ./opencascade/OSD_Exception_ARRAY_BOUNDS_EXCEEDED.hxx
// ./opencascade/OSD_SysType.hxx
// ./opencascade/OSD_SIGKILL.hxx
// ./opencascade/OSD_Chronometer.hxx
// ./opencascade/OSD_Parallel.hxx
// ./opencascade/OSD_Function.hxx
// ./opencascade/OSD_LoadMode.hxx
// ./opencascade/OSD_Exception_INVALID_DISPOSITION.hxx
// ./opencascade/OSD_SingleProtection.hxx
// ./opencascade/OSD_Exception_ACCESS_VIOLATION.hxx
// ./opencascade/OSD_Exception_NONCONTINUABLE_EXCEPTION.hxx
// ./opencascade/OSD_Exception_INT_OVERFLOW.hxx
// ./opencascade/OSD_Timer.hxx
// ./opencascade/OSD_File.hxx
// ./opencascade/OSD_SIGSYS.hxx
// ./opencascade/OSD_MemInfo.hxx
// ./opencascade/OSD_OpenMode.hxx
// ./opencascade/OSD_ErrorList.hxx
// ./opencascade/OSD_SIGSEGV.hxx
// ./opencascade/OSD_Path.hxx
// ./opencascade/OSD_Host.hxx
// ./opencascade/OSD_Exception_INT_DIVIDE_BY_ZERO.hxx
// ./opencascade/OSD_Exception_FLT_INVALID_OPERATION.hxx
// ./opencascade/OSD_PerfMeter.hxx
// ./opencascade/OSD.hxx
// ./opencascade/OSD_KindFile.hxx
// ./opencascade/OSD_LockType.hxx
// ./opencascade/OSD_DirectoryIterator.hxx
// ./opencascade/OSD_Directory.hxx
// ./opencascade/OSD_Exception.hxx
// ./opencascade/OSD_Exception_FLT_STACK_CHECK.hxx
// ./opencascade/OSD_Exception_FLT_DENORMAL_OPERAND.hxx
// ./opencascade/OSD_SIGBUS.hxx
// ./opencascade/OSD_Exception_FLT_UNDERFLOW.hxx
// ./opencascade/OSD_Exception_FLT_DIVIDE_BY_ZERO.hxx
// ./opencascade/OSD_OSDError.hxx
// ./opencascade/OSD_FileIterator.hxx
// ./opencascade/OSD_Disk.hxx
// ./opencascade/OSD_FileNode.hxx
// ./opencascade/OSD_SIGQUIT.hxx
// ./opencascade/OSD_SIGINT.hxx
// ./opencascade/OSD_Exception_FLT_OVERFLOW.hxx
// ./opencascade/OSD_Exception_STACK_OVERFLOW.hxx
// ./opencascade/OSD_Error.hxx
// ./opencascade/OSD_Process.hxx
// ./opencascade/OSD_Exception_ILLEGAL_INSTRUCTION.hxx
// ./opencascade/OSD_Exception_FLT_INEXACT_RESULT.hxx
// ./opencascade/OSD_PThread.hxx
// ./opencascade/OSD_SharedLibrary.hxx
// ./opencascade/OSD_OpenFile.hxx
// ./opencascade/OSD_Protection.hxx

// user-defined post