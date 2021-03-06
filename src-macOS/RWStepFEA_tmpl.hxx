#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaParametricPoint.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_GeometricNode.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_NodeDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_Curve3dElementProperty.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateDirection.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_CurveElementEndOffset.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ParametricSurface3dElementCoordinateSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_NodeGroup.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ElementRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaModel3d.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_CurveElementInterval.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_Volume3dElementRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaSurfaceSectionGeometricRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ElementGeometricRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaShellMembraneStiffness.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaModelDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaShellMembraneBendingCouplingStiffness.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaAreaDensity.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_CurveElementIntervalConstant.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaModel.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaShellShearStiffness.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_DummyNode.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ArbitraryVolume3dElementCoordinateSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_CurveElementEndRelease.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaMaterialPropertyRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_Curve3dElementRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaMassDensity.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_NodeWithVector.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaCurveSectionGeometricRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FreedomsList.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaGroup.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaMoistureAbsorption.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaShellBendingStiffness.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaLinearElasticity.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_AlignedCurve3dElementCoordinateSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaMaterialPropertyRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_NodeSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_NodeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaSecantCoefficientOfLinearThermalExpansion.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ElementGroup.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_CurveElementIntervalLinearlyVarying.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_CurveElementLocation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FreedomAndCoefficient.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_NodeWithSolutionCoordinateSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_Surface3dElementRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_AlignedSurface3dElementCoordinateSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_Node.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ConstantSurface3dElementCoordinateSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>

// module includes
#include <RWStepFEA_RWFeaParametricPoint.hxx>
#include <RWStepFEA_RWGeometricNode.hxx>
#include <RWStepFEA_RWNodeDefinition.hxx>
#include <RWStepFEA_RWCurve3dElementProperty.hxx>
#include <RWStepFEA_RWParametricCurve3dElementCoordinateDirection.hxx>
#include <RWStepFEA_RWFeaAxis2Placement3d.hxx>
#include <RWStepFEA_RWCurveElementEndOffset.hxx>
#include <RWStepFEA_RWParametricSurface3dElementCoordinateSystem.hxx>
#include <RWStepFEA_RWNodeGroup.hxx>
#include <RWStepFEA_RWElementRepresentation.hxx>
#include <RWStepFEA_RWFeaModel3d.hxx>
#include <RWStepFEA_RWCurveElementInterval.hxx>
#include <RWStepFEA_RWVolume3dElementRepresentation.hxx>
#include <RWStepFEA_RWFeaSurfaceSectionGeometricRelationship.hxx>
#include <RWStepFEA_RWElementGeometricRelationship.hxx>
#include <RWStepFEA_RWFeaShellMembraneStiffness.hxx>
#include <RWStepFEA_RWFeaModelDefinition.hxx>
#include <RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness.hxx>
#include <RWStepFEA_RWFeaAreaDensity.hxx>
#include <RWStepFEA_RWCurveElementIntervalConstant.hxx>
#include <RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion.hxx>
#include <RWStepFEA_RWFeaModel.hxx>
#include <RWStepFEA_RWFeaShellShearStiffness.hxx>
#include <RWStepFEA_RWDummyNode.hxx>
#include <RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem.hxx>
#include <RWStepFEA_RWCurveElementEndRelease.hxx>
#include <RWStepFEA_RWFeaMaterialPropertyRepresentation.hxx>
#include <RWStepFEA_RWCurve3dElementRepresentation.hxx>
#include <RWStepFEA_RWFeaMassDensity.hxx>
#include <RWStepFEA_RWNodeWithVector.hxx>
#include <RWStepFEA_RWFeaCurveSectionGeometricRelationship.hxx>
#include <RWStepFEA_RWFreedomsList.hxx>
#include <RWStepFEA_RWFeaGroup.hxx>
#include <RWStepFEA_RWFeaMoistureAbsorption.hxx>
#include <RWStepFEA_RWFeaShellBendingStiffness.hxx>
#include <RWStepFEA_RWFeaLinearElasticity.hxx>
#include <RWStepFEA_RWAlignedCurve3dElementCoordinateSystem.hxx>
#include <RWStepFEA_RWFeaMaterialPropertyRepresentationItem.hxx>
#include <RWStepFEA_RWNodeSet.hxx>
#include <RWStepFEA_RWNodeRepresentation.hxx>
#include <RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion.hxx>
#include <RWStepFEA_RWElementGroup.hxx>
#include <RWStepFEA_RWCurveElementIntervalLinearlyVarying.hxx>
#include <RWStepFEA_RWCurveElementLocation.hxx>
#include <RWStepFEA_RWParametricCurve3dElementCoordinateSystem.hxx>
#include <RWStepFEA_RWFeaRepresentationItem.hxx>
#include <RWStepFEA_RWFreedomAndCoefficient.hxx>
#include <RWStepFEA_RWNodeWithSolutionCoordinateSystem.hxx>
#include <RWStepFEA_RWSurface3dElementRepresentation.hxx>
#include <RWStepFEA_RWAlignedSurface3dElementCoordinateSystem.hxx>
#include <RWStepFEA_RWNode.hxx>
#include <RWStepFEA_RWConstantSurface3dElementCoordinateSystem.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/RWStepFEA_RWFeaParametricPoint.hxx
// ./opencascade/RWStepFEA_RWGeometricNode.hxx
// ./opencascade/RWStepFEA_RWNodeDefinition.hxx
// ./opencascade/RWStepFEA_RWCurve3dElementProperty.hxx
// ./opencascade/RWStepFEA_RWParametricCurve3dElementCoordinateDirection.hxx
// ./opencascade/RWStepFEA_RWFeaAxis2Placement3d.hxx
// ./opencascade/RWStepFEA_RWCurveElementEndOffset.hxx
// ./opencascade/RWStepFEA_RWParametricSurface3dElementCoordinateSystem.hxx
// ./opencascade/RWStepFEA_RWNodeGroup.hxx
// ./opencascade/RWStepFEA_RWElementRepresentation.hxx
// ./opencascade/RWStepFEA_RWFeaModel3d.hxx
// ./opencascade/RWStepFEA_RWCurveElementInterval.hxx
// ./opencascade/RWStepFEA_RWVolume3dElementRepresentation.hxx
// ./opencascade/RWStepFEA_RWFeaSurfaceSectionGeometricRelationship.hxx
// ./opencascade/RWStepFEA_RWElementGeometricRelationship.hxx
// ./opencascade/RWStepFEA_RWFeaShellMembraneStiffness.hxx
// ./opencascade/RWStepFEA_RWFeaModelDefinition.hxx
// ./opencascade/RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness.hxx
// ./opencascade/RWStepFEA_RWFeaAreaDensity.hxx
// ./opencascade/RWStepFEA_RWCurveElementIntervalConstant.hxx
// ./opencascade/RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion.hxx
// ./opencascade/RWStepFEA_RWFeaModel.hxx
// ./opencascade/RWStepFEA_RWFeaShellShearStiffness.hxx
// ./opencascade/RWStepFEA_RWDummyNode.hxx
// ./opencascade/RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem.hxx
// ./opencascade/RWStepFEA_RWCurveElementEndRelease.hxx
// ./opencascade/RWStepFEA_RWFeaMaterialPropertyRepresentation.hxx
// ./opencascade/RWStepFEA_RWCurve3dElementRepresentation.hxx
// ./opencascade/RWStepFEA_RWFeaMassDensity.hxx
// ./opencascade/RWStepFEA_RWNodeWithVector.hxx
// ./opencascade/RWStepFEA_RWFeaCurveSectionGeometricRelationship.hxx
// ./opencascade/RWStepFEA_RWFreedomsList.hxx
// ./opencascade/RWStepFEA_RWFeaGroup.hxx
// ./opencascade/RWStepFEA_RWFeaMoistureAbsorption.hxx
// ./opencascade/RWStepFEA_RWFeaShellBendingStiffness.hxx
// ./opencascade/RWStepFEA_RWFeaLinearElasticity.hxx
// ./opencascade/RWStepFEA_RWAlignedCurve3dElementCoordinateSystem.hxx
// ./opencascade/RWStepFEA_RWFeaMaterialPropertyRepresentationItem.hxx
// ./opencascade/RWStepFEA_RWNodeSet.hxx
// ./opencascade/RWStepFEA_RWNodeRepresentation.hxx
// ./opencascade/RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion.hxx
// ./opencascade/RWStepFEA_RWElementGroup.hxx
// ./opencascade/RWStepFEA_RWCurveElementIntervalLinearlyVarying.hxx
// ./opencascade/RWStepFEA_RWCurveElementLocation.hxx
// ./opencascade/RWStepFEA_RWParametricCurve3dElementCoordinateSystem.hxx
// ./opencascade/RWStepFEA_RWFeaRepresentationItem.hxx
// ./opencascade/RWStepFEA_RWFreedomAndCoefficient.hxx
// ./opencascade/RWStepFEA_RWNodeWithSolutionCoordinateSystem.hxx
// ./opencascade/RWStepFEA_RWSurface3dElementRepresentation.hxx
// ./opencascade/RWStepFEA_RWAlignedSurface3dElementCoordinateSystem.hxx
// ./opencascade/RWStepFEA_RWNode.hxx
// ./opencascade/RWStepFEA_RWConstantSurface3dElementCoordinateSystem.hxx

// user-defined post
