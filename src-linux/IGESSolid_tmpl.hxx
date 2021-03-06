#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <gp_Pnt.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_Sphere.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_Shell.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESGeom_Point.hxx>
#include <IGESGeom_Direction.hxx>
#include <gp_Pnt.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_SolidAssembly.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_Block.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_Torus.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_SphericalSurface.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_BooleanTree.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_ToroidalSurface.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_Ellipsoid.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_CylindricalSurface.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_EdgeList.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESGeom_Point.hxx>
#include <IGESGeom_Direction.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_RightAngularWedge.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESGeom_Point.hxx>
#include <IGESGeom_Direction.hxx>
#include <gp_Pnt.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_ConicalSurface.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_Face.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_Cylinder.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <gp_Dir.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_SolidInstance.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <gp_Pnt.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_SolidOfRevolution.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESBasic_HArray1OfHArray1OfInteger.hxx>
#include <IGESBasic_HArray1OfHArray1OfIGESEntity.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_ConeFrustum.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESGeom_Point.hxx>
#include <IGESGeom_Direction.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_SelectedComponent.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESSolid_ManifoldSolid.hxx>
#include <IGESSolid_Shell.hxx>
#include <IGESSolid_Face.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESSolid_Loop.hxx>
#include <IGESSolid_EdgeList.hxx>
#include <IGESSolid_VertexList.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <IGESSolid_Protocol.hxx>
#include <IGESSolid_Block.hxx>
#include <IGESSolid_RightAngularWedge.hxx>
#include <IGESSolid_Cylinder.hxx>
#include <IGESSolid_ConeFrustum.hxx>
#include <IGESSolid_Sphere.hxx>
#include <IGESSolid_Torus.hxx>
#include <IGESSolid_SolidOfRevolution.hxx>
#include <IGESSolid_SolidOfLinearExtrusion.hxx>
#include <IGESSolid_Ellipsoid.hxx>
#include <IGESSolid_BooleanTree.hxx>
#include <IGESSolid_SelectedComponent.hxx>
#include <IGESSolid_SolidAssembly.hxx>
#include <IGESSolid_ManifoldSolid.hxx>
#include <IGESSolid_PlaneSurface.hxx>
#include <IGESSolid_CylindricalSurface.hxx>
#include <IGESSolid_ConicalSurface.hxx>
#include <IGESSolid_SphericalSurface.hxx>
#include <IGESSolid_ToroidalSurface.hxx>
#include <IGESSolid_SolidInstance.hxx>
#include <IGESSolid_VertexList.hxx>
#include <IGESSolid_EdgeList.hxx>
#include <IGESSolid_Loop.hxx>
#include <IGESSolid_Face.hxx>
#include <IGESSolid_Shell.hxx>
#include <IGESSolid_ToolBlock.hxx>
#include <IGESSolid_ToolRightAngularWedge.hxx>
#include <IGESSolid_ToolCylinder.hxx>
#include <IGESSolid_ToolConeFrustum.hxx>
#include <IGESSolid_ToolSphere.hxx>
#include <IGESSolid_ToolTorus.hxx>
#include <IGESSolid_ToolSolidOfRevolution.hxx>
#include <IGESSolid_ToolSolidOfLinearExtrusion.hxx>
#include <IGESSolid_ToolEllipsoid.hxx>
#include <IGESSolid_ToolBooleanTree.hxx>
#include <IGESSolid_ToolSelectedComponent.hxx>
#include <IGESSolid_ToolSolidAssembly.hxx>
#include <IGESSolid_ToolManifoldSolid.hxx>
#include <IGESSolid_ToolPlaneSurface.hxx>
#include <IGESSolid_ToolCylindricalSurface.hxx>
#include <IGESSolid_ToolConicalSurface.hxx>
#include <IGESSolid_ToolSphericalSurface.hxx>
#include <IGESSolid_ToolToroidalSurface.hxx>
#include <IGESSolid_ToolSolidInstance.hxx>
#include <IGESSolid_ToolVertexList.hxx>
#include <IGESSolid_ToolEdgeList.hxx>
#include <IGESSolid_ToolLoop.hxx>
#include <IGESSolid_ToolFace.hxx>
#include <IGESSolid_ToolShell.hxx>
#include <IGESSolid_Protocol.hxx>
#include <IGESSolid_ReadWriteModule.hxx>
#include <IGESSolid_GeneralModule.hxx>
#include <IGESSolid_SpecificModule.hxx>
#include <IGESSolid_TopoBuilder.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_Loop.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_VertexList.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <Standard_DomainError.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_SolidOfLinearExtrusion.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_PlaneSurface.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESGeom_Point.hxx>
#include <IGESGeom_Direction.hxx>
#include <IGESSolid_BooleanTree.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_ManifoldSolid.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>

// module includes
#include <IGESSolid_VertexList.hxx>
#include <IGESSolid_ToolSphere.hxx>
#include <IGESSolid_ManifoldSolid.hxx>
#include <IGESSolid_Array1OfVertexList.hxx>
#include <IGESSolid_HArray1OfFace.hxx>
#include <IGESSolid_ToolShell.hxx>
#include <IGESSolid_EdgeList.hxx>
#include <IGESSolid_ToroidalSurface.hxx>
#include <IGESSolid_Shell.hxx>
#include <IGESSolid_ToolSolidAssembly.hxx>
#include <IGESSolid_ToolBlock.hxx>
#include <IGESSolid_ToolTorus.hxx>
#include <IGESSolid_ToolSphericalSurface.hxx>
#include <IGESSolid_BooleanTree.hxx>
#include <IGESSolid_HArray1OfVertexList.hxx>
#include <IGESSolid_ToolBooleanTree.hxx>
#include <IGESSolid_Block.hxx>
#include <IGESSolid_ToolToroidalSurface.hxx>
#include <IGESSolid_ToolEllipsoid.hxx>
#include <IGESSolid_ToolCylindricalSurface.hxx>
#include <IGESSolid_ToolEdgeList.hxx>
#include <IGESSolid_CylindricalSurface.hxx>
#include <IGESSolid_ToolRightAngularWedge.hxx>
#include <IGESSolid_Array1OfFace.hxx>
#include <IGESSolid_Array1OfShell.hxx>
#include <IGESSolid_SphericalSurface.hxx>
#include <IGESSolid_Protocol.hxx>
#include <IGESSolid_ToolConicalSurface.hxx>
#include <IGESSolid_ToolFace.hxx>
#include <IGESSolid_Array1OfLoop.hxx>
#include <IGESSolid_ToolCylinder.hxx>
#include <IGESSolid_Face.hxx>
#include <IGESSolid_SolidOfLinearExtrusion.hxx>
#include <IGESSolid_SpecificModule.hxx>
#include <IGESSolid_Ellipsoid.hxx>
#include <IGESSolid_ToolSolidInstance.hxx>
#include <IGESSolid_Sphere.hxx>
#include <IGESSolid_ToolSolidOfRevolution.hxx>
#include <IGESSolid_Loop.hxx>
#include <IGESSolid_ToolConeFrustum.hxx>
#include <IGESSolid_PlaneSurface.hxx>
#include <IGESSolid_HArray1OfShell.hxx>
#include <IGESSolid_ToolSelectedComponent.hxx>
#include <IGESSolid_TopoBuilder.hxx>
#include <IGESSolid_ConeFrustum.hxx>
#include <IGESSolid.hxx>
#include <IGESSolid_ToolLoop.hxx>
#include <IGESSolid_ToolVertexList.hxx>
#include <IGESSolid_SolidOfRevolution.hxx>
#include <IGESSolid_GeneralModule.hxx>
#include <IGESSolid_ReadWriteModule.hxx>
#include <IGESSolid_Cylinder.hxx>
#include <IGESSolid_ToolSolidOfLinearExtrusion.hxx>
#include <IGESSolid_Torus.hxx>
#include <IGESSolid_ToolPlaneSurface.hxx>
#include <IGESSolid_SolidAssembly.hxx>
#include <IGESSolid_SolidInstance.hxx>
#include <IGESSolid_HArray1OfLoop.hxx>
#include <IGESSolid_ConicalSurface.hxx>
#include <IGESSolid_SelectedComponent.hxx>
#include <IGESSolid_RightAngularWedge.hxx>
#include <IGESSolid_ToolManifoldSolid.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/IGESSolid_VertexList.hxx
// ./opencascade/IGESSolid_ToolSphere.hxx
// ./opencascade/IGESSolid_ManifoldSolid.hxx
// ./opencascade/IGESSolid_Array1OfVertexList.hxx
// ./opencascade/IGESSolid_HArray1OfFace.hxx
// ./opencascade/IGESSolid_ToolShell.hxx
// ./opencascade/IGESSolid_EdgeList.hxx
// ./opencascade/IGESSolid_ToroidalSurface.hxx
// ./opencascade/IGESSolid_Shell.hxx
// ./opencascade/IGESSolid_ToolSolidAssembly.hxx
// ./opencascade/IGESSolid_ToolBlock.hxx
// ./opencascade/IGESSolid_ToolTorus.hxx
// ./opencascade/IGESSolid_ToolSphericalSurface.hxx
// ./opencascade/IGESSolid_BooleanTree.hxx
// ./opencascade/IGESSolid_HArray1OfVertexList.hxx
// ./opencascade/IGESSolid_ToolBooleanTree.hxx
// ./opencascade/IGESSolid_Block.hxx
// ./opencascade/IGESSolid_ToolToroidalSurface.hxx
// ./opencascade/IGESSolid_ToolEllipsoid.hxx
// ./opencascade/IGESSolid_ToolCylindricalSurface.hxx
// ./opencascade/IGESSolid_ToolEdgeList.hxx
// ./opencascade/IGESSolid_CylindricalSurface.hxx
// ./opencascade/IGESSolid_ToolRightAngularWedge.hxx
// ./opencascade/IGESSolid_Array1OfFace.hxx
// ./opencascade/IGESSolid_Array1OfShell.hxx
// ./opencascade/IGESSolid_SphericalSurface.hxx
// ./opencascade/IGESSolid_Protocol.hxx
// ./opencascade/IGESSolid_ToolConicalSurface.hxx
// ./opencascade/IGESSolid_ToolFace.hxx
// ./opencascade/IGESSolid_Array1OfLoop.hxx
// ./opencascade/IGESSolid_ToolCylinder.hxx
// ./opencascade/IGESSolid_Face.hxx
// ./opencascade/IGESSolid_SolidOfLinearExtrusion.hxx
// ./opencascade/IGESSolid_SpecificModule.hxx
// ./opencascade/IGESSolid_Ellipsoid.hxx
// ./opencascade/IGESSolid_ToolSolidInstance.hxx
// ./opencascade/IGESSolid_Sphere.hxx
// ./opencascade/IGESSolid_ToolSolidOfRevolution.hxx
// ./opencascade/IGESSolid_Loop.hxx
// ./opencascade/IGESSolid_ToolConeFrustum.hxx
// ./opencascade/IGESSolid_PlaneSurface.hxx
// ./opencascade/IGESSolid_HArray1OfShell.hxx
// ./opencascade/IGESSolid_ToolSelectedComponent.hxx
// ./opencascade/IGESSolid_TopoBuilder.hxx
// ./opencascade/IGESSolid_ConeFrustum.hxx
// ./opencascade/IGESSolid.hxx
// ./opencascade/IGESSolid_ToolLoop.hxx
// ./opencascade/IGESSolid_ToolVertexList.hxx
// ./opencascade/IGESSolid_SolidOfRevolution.hxx
// ./opencascade/IGESSolid_GeneralModule.hxx
// ./opencascade/IGESSolid_ReadWriteModule.hxx
// ./opencascade/IGESSolid_Cylinder.hxx
// ./opencascade/IGESSolid_ToolSolidOfLinearExtrusion.hxx
// ./opencascade/IGESSolid_Torus.hxx
// ./opencascade/IGESSolid_ToolPlaneSurface.hxx
// ./opencascade/IGESSolid_SolidAssembly.hxx
// ./opencascade/IGESSolid_SolidInstance.hxx
// ./opencascade/IGESSolid_HArray1OfLoop.hxx
// ./opencascade/IGESSolid_ConicalSurface.hxx
// ./opencascade/IGESSolid_SelectedComponent.hxx
// ./opencascade/IGESSolid_RightAngularWedge.hxx
// ./opencascade/IGESSolid_ToolManifoldSolid.hxx

// user-defined post
