#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Standard_OutOfRange.hxx>
#include <math_FunctionWithDerivative.hxx>
#include <math_FunctionSetWithDerivatives.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <math_Function.hxx>
#include <math_Matrix.hxx>
#include <Standard_NotImplemented.hxx>
#include <math_FunctionSet.hxx>
#include <math_Matrix.hxx>
#include <math_Function.hxx>
#include <math_FunctionWithDerivative.hxx>
#include <math_MultipleVarFunction.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <math_MultipleVarFunctionWithHessian.hxx>
#include <math_FunctionSet.hxx>
#include <math_FunctionSetWithDerivatives.hxx>
#include <math_Gauss.hxx>
#include <math_GaussLeastSquare.hxx>
#include <math_SVD.hxx>
#include <math_DirectPolynomialRoots.hxx>
#include <math_FunctionRoots.hxx>
#include <math_BissecNewton.hxx>
#include <math_FunctionRoot.hxx>
#include <math_NewtonFunctionRoot.hxx>
#include <math_BracketedRoot.hxx>
#include <math_FunctionSetRoot.hxx>
#include <math_NewtonFunctionSetRoot.hxx>
#include <math_BracketMinimum.hxx>
#include <math_BrentMinimum.hxx>
#include <math_Powell.hxx>
#include <math_FRPR.hxx>
#include <math_BFGS.hxx>
#include <math_NewtonMinimum.hxx>
#include <math_Jacobi.hxx>
#include <math_GaussSingleIntegration.hxx>
#include <math_GaussMultipleIntegration.hxx>
#include <math_GaussSetIntegration.hxx>
#include <math_FunctionSample.hxx>
#include <math_FunctionAllRoots.hxx>
#include <math_Householder.hxx>
#include <math_Crout.hxx>
#include <math_Uzawa.hxx>
#include <math_TrigonometricFunctionRoots.hxx>
#include <math_KronrodSingleIntegration.hxx>
#include <math_EigenValuesSearcher.hxx>
#include <math_ComputeGaussPointsAndWeights.hxx>
#include <math_ComputeKronrodPointsAndWeights.hxx>
#include <math_DoubleTab.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <math_NotSquare.hxx>
#include <math_MultipleVarFunction.hxx>
#include <math_Function.hxx>
#include <math_NotSquare.hxx>
#include <StdFail_NotDone.hxx>
#include <Message_ProgressIndicator.hxx>
#include <math_MultipleVarFunctionWithHessian.hxx>
#include <Standard_NumericError.hxx>
#include <math_FunctionWithDerivative.hxx>
#include <math_FunctionSample.hxx>
#include <math_FunctionWithDerivative.hxx>
#include <math_Function.hxx>
#include <math_PSOParticlesPool.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <math_Function.hxx>
#include <math_Matrix.hxx>
#include <math_FunctionWithDerivative.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <math_Function.hxx>
#include <math_IntegerVector.hxx>
#include <math_Vector.hxx>
#include <math_Matrix.hxx>
#include <Message_ProgressIndicator.hxx>
#include <math_FunctionWithDerivative.hxx>
#include <StdFail_NotDone.hxx>
#include <math_FunctionSetWithDerivatives.hxx>
#include <math_MultipleVarFunction.hxx>

// module includes
#include <math_FunctionSample.hxx>
#include <math_FunctionRoots.hxx>
#include <math_DirectPolynomialRoots.hxx>
#include <math_NewtonFunctionSetRoot.hxx>
#include <math_FRPR.hxx>
#include <math_BrentMinimum.hxx>
#include <math_Vector.hxx>
#include <math_GaussSetIntegration.hxx>
#include <math_FunctionSet.hxx>
#include <math.hxx>
#include <math_BFGS.hxx>
#include <math_Crout.hxx>
#include <math_GaussMultipleIntegration.hxx>
#include <math_GaussSingleIntegration.hxx>
#include <math_Array1OfValueAndWeight.hxx>
#include <math_Gauss.hxx>
#include <math_NewtonMinimum.hxx>
#include <math_Status.hxx>
#include <math_FunctionAllRoots.hxx>
#include <math_FunctionRoot.hxx>
#include <math_KronrodSingleIntegration.hxx>
#include <math_FunctionWithDerivative.hxx>
#include <math_PSO.hxx>
#include <math_GaussLeastSquare.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <math_NotSquare.hxx>
#include <math_IntegerVector.hxx>
#include <math_SVD.hxx>
#include <math_BracketedRoot.hxx>
#include <math_ComputeKronrodPointsAndWeights.hxx>
#include <math_Householder.hxx>
#include <math_Jacobi.hxx>
#include <math_ComputeGaussPointsAndWeights.hxx>
#include <math_SingularMatrix.hxx>
#include <math_MultipleVarFunction.hxx>
#include <math_TrigonometricEquationFunction.hxx>
#include <math_Uzawa.hxx>
#include <math_BullardGenerator.hxx>
#include <math_FunctionSetWithDerivatives.hxx>
#include <math_DoubleTab.hxx>
#include <math_PSOParticlesPool.hxx>
#include <math_GlobOptMin.hxx>
#include <math_BissecNewton.hxx>
#include <math_MultipleVarFunctionWithHessian.hxx>
#include <math_ValueAndWeight.hxx>
#include <math_BracketMinimum.hxx>
#include <math_Recipes.hxx>
#include <math_TrigonometricFunctionRoots.hxx>
#include <math_NewtonFunctionRoot.hxx>
#include <math_Matrix.hxx>
#include <math_EigenValuesSearcher.hxx>
#include <math_Function.hxx>
#include <math_FunctionSetRoot.hxx>
#include <math_Powell.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\math_FunctionSample.hxx
// ./opencascade\math_FunctionRoots.hxx
// ./opencascade\math_DirectPolynomialRoots.hxx
// ./opencascade\math_NewtonFunctionSetRoot.hxx
// ./opencascade\math_FRPR.hxx
// ./opencascade\math_BrentMinimum.hxx
// ./opencascade\math_Vector.hxx
// ./opencascade\math_GaussSetIntegration.hxx
// ./opencascade\math_FunctionSet.hxx
// ./opencascade\math.hxx
// ./opencascade\math_BFGS.hxx
// ./opencascade\math_Crout.hxx
// ./opencascade\math_GaussMultipleIntegration.hxx
// ./opencascade\math_GaussSingleIntegration.hxx
// ./opencascade\math_Array1OfValueAndWeight.hxx
// ./opencascade\math_Gauss.hxx
// ./opencascade\math_NewtonMinimum.hxx
// ./opencascade\math_Status.hxx
// ./opencascade\math_FunctionAllRoots.hxx
// ./opencascade\math_FunctionRoot.hxx
// ./opencascade\math_KronrodSingleIntegration.hxx
// ./opencascade\math_FunctionWithDerivative.hxx
// ./opencascade\math_PSO.hxx
// ./opencascade\math_GaussLeastSquare.hxx
// ./opencascade\math_MultipleVarFunctionWithGradient.hxx
// ./opencascade\math_NotSquare.hxx
// ./opencascade\math_IntegerVector.hxx
// ./opencascade\math_SVD.hxx
// ./opencascade\math_BracketedRoot.hxx
// ./opencascade\math_ComputeKronrodPointsAndWeights.hxx
// ./opencascade\math_Householder.hxx
// ./opencascade\math_Jacobi.hxx
// ./opencascade\math_ComputeGaussPointsAndWeights.hxx
// ./opencascade\math_SingularMatrix.hxx
// ./opencascade\math_MultipleVarFunction.hxx
// ./opencascade\math_TrigonometricEquationFunction.hxx
// ./opencascade\math_Uzawa.hxx
// ./opencascade\math_BullardGenerator.hxx
// ./opencascade\math_FunctionSetWithDerivatives.hxx
// ./opencascade\math_DoubleTab.hxx
// ./opencascade\math_PSOParticlesPool.hxx
// ./opencascade\math_GlobOptMin.hxx
// ./opencascade\math_BissecNewton.hxx
// ./opencascade\math_MultipleVarFunctionWithHessian.hxx
// ./opencascade\math_ValueAndWeight.hxx
// ./opencascade\math_BracketMinimum.hxx
// ./opencascade\math_Recipes.hxx
// ./opencascade\math_TrigonometricFunctionRoots.hxx
// ./opencascade\math_NewtonFunctionRoot.hxx
// ./opencascade\math_Matrix.hxx
// ./opencascade\math_EigenValuesSearcher.hxx
// ./opencascade\math_Function.hxx
// ./opencascade\math_FunctionSetRoot.hxx
// ./opencascade\math_Powell.hxx

// user-defined post
