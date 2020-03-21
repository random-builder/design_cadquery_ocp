#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel3d.hxx>
#include <StepElement_Volume3dElementDescriptor.hxx>
#include <StepElement_ElementMaterial.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateDirection.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_CurveElementLocation.hxx>
#include <StepBasic_EulerAngles.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel3d.hxx>
#include <StepElement_Surface3dElementDescriptor.hxx>
#include <StepElement_SurfaceElementProperty.hxx>
#include <StepElement_ElementMaterial.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepFEA_FeaParametricPoint.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepElement_CurveElementSectionDefinition.hxx>
#include <StepFEA_CurveElementLocation.hxx>
#include <StepBasic_EulerAngles.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel.hxx>
#include <StepFEA_ElementRepresentation.hxx>
#include <StepFEA_ElementGroup.hxx>
#include <StepElement_CurveElementSectionDefinition.hxx>
#include <StepElement_AnalysisItemWithinRepresentation.hxx>
#include <StepElement_AnalysisItemWithinRepresentation.hxx>
#include <StepFEA_CurveElementLocation.hxx>
#include <StepBasic_EulerAngles.hxx>
#include <StepFEA_FeaModel3d.hxx>
#include <StepElement_Curve3dElementDescriptor.hxx>
#include <StepFEA_Curve3dElementProperty.hxx>
#include <StepElement_ElementMaterial.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <StepFEA_AlignedCurve3dElementCoordinateSystem.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateSystem.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
#include <StepElement_SurfaceSection.hxx>
#include <StepElement_AnalysisItemWithinRepresentation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel.hxx>

// module includes
#include <StepFEA_FeaMassDensity.hxx>
#include <StepFEA_Array1OfCurveElementInterval.hxx>
#include <StepFEA_SymmetricTensor43d.hxx>
#include <StepFEA_SymmetricTensor23dMember.hxx>
#include <StepFEA_AlignedSurface3dElementCoordinateSystem.hxx>
#include <StepFEA_Volume3dElementRepresentation.hxx>
#include <StepFEA_DummyNode.hxx>
#include <StepFEA_CurveElementEndRelease.hxx>
#include <StepFEA_HSequenceOfElementRepresentation.hxx>
#include <StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion.hxx>
#include <StepFEA_NodeDefinition.hxx>
#include <StepFEA_SymmetricTensor43dMember.hxx>
#include <StepFEA_FeaMoistureAbsorption.hxx>
#include <StepFEA_HArray1OfCurveElementEndOffset.hxx>
#include <StepFEA_HArray1OfCurveElementEndRelease.hxx>
#include <StepFEA_FeaMaterialPropertyRepresentationItem.hxx>
#include <StepFEA_NodeSet.hxx>
#include <StepFEA_SymmetricTensor22d.hxx>
#include <StepFEA_FeaModel.hxx>
#include <StepFEA_CurveElementEndOffset.hxx>
#include <StepFEA_ElementVolume.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateSystem.hxx>
#include <StepFEA_FeaGroup.hxx>
#include <StepFEA_CurveEdge.hxx>
#include <StepFEA_CurveElementIntervalLinearlyVarying.hxx>
#include <StepFEA_DegreeOfFreedom.hxx>
#include <StepFEA_Array1OfNodeRepresentation.hxx>
#include <StepFEA_Array1OfElementRepresentation.hxx>
#include <StepFEA_Node.hxx>
#include <StepFEA_Array1OfCurveElementEndRelease.hxx>
#include <StepFEA_FreedomAndCoefficient.hxx>
#include <StepFEA_FeaShellMembraneBendingCouplingStiffness.hxx>
#include <StepFEA_Surface3dElementRepresentation.hxx>
#include <StepFEA_CurveElementLocation.hxx>
#include <StepFEA_FreedomsList.hxx>
#include <StepFEA_SymmetricTensor42d.hxx>
#include <StepFEA_FeaShellShearStiffness.hxx>
#include <StepFEA_ElementRepresentation.hxx>
#include <StepFEA_HArray1OfElementRepresentation.hxx>
#include <StepFEA_FeaRepresentationItem.hxx>
#include <StepFEA_ArbitraryVolume3dElementCoordinateSystem.hxx>
#include <StepFEA_CurveElementIntervalConstant.hxx>
#include <StepFEA_GeometricNode.hxx>
#include <StepFEA_FeaAreaDensity.hxx>
#include <StepFEA_ConstantSurface3dElementCoordinateSystem.hxx>
#include <StepFEA_SequenceOfElementRepresentation.hxx>
#include <StepFEA_HArray1OfCurveElementInterval.hxx>
#include <StepFEA_HSequenceOfNodeRepresentation.hxx>
#include <StepFEA_CoordinateSystemType.hxx>
#include <StepFEA_NodeRepresentation.hxx>
#include <StepFEA_UnspecifiedValue.hxx>
#include <StepFEA_FeaModelDefinition.hxx>
#include <StepFEA_HSequenceOfCurve3dElementProperty.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateDirection.hxx>
#include <StepFEA_AlignedCurve3dElementCoordinateSystem.hxx>
#include <StepFEA_ElementGroup.hxx>
#include <StepFEA_ElementOrElementGroup.hxx>
#include <StepFEA_DegreeOfFreedomMember.hxx>
#include <StepFEA_FeaCurveSectionGeometricRelationship.hxx>
#include <StepFEA_SequenceOfElementGeometricRelationship.hxx>
#include <StepFEA_SequenceOfNodeRepresentation.hxx>
#include <StepFEA_ElementGeometricRelationship.hxx>
#include <StepFEA_CurveElementInterval.hxx>
#include <StepFEA_HSequenceOfElementGeometricRelationship.hxx>
#include <StepFEA_Array1OfDegreeOfFreedom.hxx>
#include <StepFEA_Curve3dElementRepresentation.hxx>
#include <StepFEA_Curve3dElementProperty.hxx>
#include <StepFEA_CurveElementEndCoordinateSystem.hxx>
#include <StepFEA_NodeWithSolutionCoordinateSystem.hxx>
#include <StepFEA_HArray1OfDegreeOfFreedom.hxx>
#include <StepFEA_ParametricSurface3dElementCoordinateSystem.hxx>
#include <StepFEA_FeaParametricPoint.hxx>
#include <StepFEA_EnumeratedDegreeOfFreedom.hxx>
#include <StepFEA_SequenceOfCurve3dElementProperty.hxx>
#include <StepFEA_SymmetricTensor23d.hxx>
#include <StepFEA_FeaSurfaceSectionGeometricRelationship.hxx>
#include <StepFEA_FeaLinearElasticity.hxx>
#include <StepFEA_HArray1OfNodeRepresentation.hxx>
#include <StepFEA_FeaMaterialPropertyRepresentation.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <StepFEA_FeaShellBendingStiffness.hxx>
#include <StepFEA_FeaModel3d.hxx>
#include <StepFEA_FeaSecantCoefficientOfLinearThermalExpansion.hxx>
#include <StepFEA_Array1OfCurveElementEndOffset.hxx>
#include <StepFEA_FeaShellMembraneStiffness.hxx>
#include <StepFEA_NodeGroup.hxx>
#include <StepFEA_NodeWithVector.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/StepFEA_FeaMassDensity.hxx
// ./opencascade/StepFEA_Array1OfCurveElementInterval.hxx
// ./opencascade/StepFEA_SymmetricTensor43d.hxx
// ./opencascade/StepFEA_SymmetricTensor23dMember.hxx
// ./opencascade/StepFEA_AlignedSurface3dElementCoordinateSystem.hxx
// ./opencascade/StepFEA_Volume3dElementRepresentation.hxx
// ./opencascade/StepFEA_DummyNode.hxx
// ./opencascade/StepFEA_CurveElementEndRelease.hxx
// ./opencascade/StepFEA_HSequenceOfElementRepresentation.hxx
// ./opencascade/StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion.hxx
// ./opencascade/StepFEA_NodeDefinition.hxx
// ./opencascade/StepFEA_SymmetricTensor43dMember.hxx
// ./opencascade/StepFEA_FeaMoistureAbsorption.hxx
// ./opencascade/StepFEA_HArray1OfCurveElementEndOffset.hxx
// ./opencascade/StepFEA_HArray1OfCurveElementEndRelease.hxx
// ./opencascade/StepFEA_FeaMaterialPropertyRepresentationItem.hxx
// ./opencascade/StepFEA_NodeSet.hxx
// ./opencascade/StepFEA_SymmetricTensor22d.hxx
// ./opencascade/StepFEA_FeaModel.hxx
// ./opencascade/StepFEA_CurveElementEndOffset.hxx
// ./opencascade/StepFEA_ElementVolume.hxx
// ./opencascade/StepFEA_ParametricCurve3dElementCoordinateSystem.hxx
// ./opencascade/StepFEA_FeaGroup.hxx
// ./opencascade/StepFEA_CurveEdge.hxx
// ./opencascade/StepFEA_CurveElementIntervalLinearlyVarying.hxx
// ./opencascade/StepFEA_DegreeOfFreedom.hxx
// ./opencascade/StepFEA_Array1OfNodeRepresentation.hxx
// ./opencascade/StepFEA_Array1OfElementRepresentation.hxx
// ./opencascade/StepFEA_Node.hxx
// ./opencascade/StepFEA_Array1OfCurveElementEndRelease.hxx
// ./opencascade/StepFEA_FreedomAndCoefficient.hxx
// ./opencascade/StepFEA_FeaShellMembraneBendingCouplingStiffness.hxx
// ./opencascade/StepFEA_Surface3dElementRepresentation.hxx
// ./opencascade/StepFEA_CurveElementLocation.hxx
// ./opencascade/StepFEA_FreedomsList.hxx
// ./opencascade/StepFEA_SymmetricTensor42d.hxx
// ./opencascade/StepFEA_FeaShellShearStiffness.hxx
// ./opencascade/StepFEA_ElementRepresentation.hxx
// ./opencascade/StepFEA_HArray1OfElementRepresentation.hxx
// ./opencascade/StepFEA_FeaRepresentationItem.hxx
// ./opencascade/StepFEA_ArbitraryVolume3dElementCoordinateSystem.hxx
// ./opencascade/StepFEA_CurveElementIntervalConstant.hxx
// ./opencascade/StepFEA_GeometricNode.hxx
// ./opencascade/StepFEA_FeaAreaDensity.hxx
// ./opencascade/StepFEA_ConstantSurface3dElementCoordinateSystem.hxx
// ./opencascade/StepFEA_SequenceOfElementRepresentation.hxx
// ./opencascade/StepFEA_HArray1OfCurveElementInterval.hxx
// ./opencascade/StepFEA_HSequenceOfNodeRepresentation.hxx
// ./opencascade/StepFEA_CoordinateSystemType.hxx
// ./opencascade/StepFEA_NodeRepresentation.hxx
// ./opencascade/StepFEA_UnspecifiedValue.hxx
// ./opencascade/StepFEA_FeaModelDefinition.hxx
// ./opencascade/StepFEA_HSequenceOfCurve3dElementProperty.hxx
// ./opencascade/StepFEA_ParametricCurve3dElementCoordinateDirection.hxx
// ./opencascade/StepFEA_AlignedCurve3dElementCoordinateSystem.hxx
// ./opencascade/StepFEA_ElementGroup.hxx
// ./opencascade/StepFEA_ElementOrElementGroup.hxx
// ./opencascade/StepFEA_DegreeOfFreedomMember.hxx
// ./opencascade/StepFEA_FeaCurveSectionGeometricRelationship.hxx
// ./opencascade/StepFEA_SequenceOfElementGeometricRelationship.hxx
// ./opencascade/StepFEA_SequenceOfNodeRepresentation.hxx
// ./opencascade/StepFEA_ElementGeometricRelationship.hxx
// ./opencascade/StepFEA_CurveElementInterval.hxx
// ./opencascade/StepFEA_HSequenceOfElementGeometricRelationship.hxx
// ./opencascade/StepFEA_Array1OfDegreeOfFreedom.hxx
// ./opencascade/StepFEA_Curve3dElementRepresentation.hxx
// ./opencascade/StepFEA_Curve3dElementProperty.hxx
// ./opencascade/StepFEA_CurveElementEndCoordinateSystem.hxx
// ./opencascade/StepFEA_NodeWithSolutionCoordinateSystem.hxx
// ./opencascade/StepFEA_HArray1OfDegreeOfFreedom.hxx
// ./opencascade/StepFEA_ParametricSurface3dElementCoordinateSystem.hxx
// ./opencascade/StepFEA_FeaParametricPoint.hxx
// ./opencascade/StepFEA_EnumeratedDegreeOfFreedom.hxx
// ./opencascade/StepFEA_SequenceOfCurve3dElementProperty.hxx
// ./opencascade/StepFEA_SymmetricTensor23d.hxx
// ./opencascade/StepFEA_FeaSurfaceSectionGeometricRelationship.hxx
// ./opencascade/StepFEA_FeaLinearElasticity.hxx
// ./opencascade/StepFEA_HArray1OfNodeRepresentation.hxx
// ./opencascade/StepFEA_FeaMaterialPropertyRepresentation.hxx
// ./opencascade/StepFEA_FeaAxis2Placement3d.hxx
// ./opencascade/StepFEA_FeaShellBendingStiffness.hxx
// ./opencascade/StepFEA_FeaModel3d.hxx
// ./opencascade/StepFEA_FeaSecantCoefficientOfLinearThermalExpansion.hxx
// ./opencascade/StepFEA_Array1OfCurveElementEndOffset.hxx
// ./opencascade/StepFEA_FeaShellMembraneStiffness.hxx
// ./opencascade/StepFEA_NodeGroup.hxx
// ./opencascade/StepFEA_NodeWithVector.hxx

// user-defined post