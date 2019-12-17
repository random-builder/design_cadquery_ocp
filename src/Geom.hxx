#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <gp_Cylinder.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_Cone.hxx>
#include <gp_GTrsf2d.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <Geom_UndefinedValue.hxx>
#include <gp_GTrsf2d.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <gp_Ax2.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_Pnt.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_RangeError.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <Geom_UndefinedValue.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Trsf.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_Parab.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_RangeError.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <Geom_UndefinedValue.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Trsf.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <Standard_RangeError.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <Geom_UndefinedValue.hxx>
#include <gp_Trsf.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Standard_ConstructionError.hxx>
#include <gp_Pnt.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax2.hxx>
#include <gp_Vec.hxx>
#include <gp_Trsf.hxx>
#include <gp_Elips.hxx>
#include <gp_Pnt.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <Standard_RangeError.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <Geom_UndefinedValue.hxx>
#include <gp_Trsf.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Torus.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_Pln.hxx>
#include <gp_GTrsf2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <Geom_UndefinedValue.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <gp_Ax2.hxx>
#include <gp_Hypr.hxx>
#include <gp_Sphere.hxx>

// module includes
#include <Geom_CylindricalSurface.hxx>
#include <Geom_ConicalSurface.hxx>
#include <Geom_OffsetSurface.hxx>
#include <Geom_SurfaceOfRevolution.hxx>
#include <Geom_BoundedCurve.hxx>
#include <Geom_RectangularTrimmedSurface.hxx>
#include <Geom_SequenceOfBSplineSurface.hxx>
#include <Geom_Direction.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_OsculatingSurface.hxx>
#include <Geom_VectorWithMagnitude.hxx>
#include <Geom_Parabola.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <Geom_Line.hxx>
#include <Geom_Circle.hxx>
#include <Geom_Surface.hxx>
#include <Geom_BoundedSurface.hxx>
#include <Geom_Axis1Placement.hxx>
#include <Geom_Geometry.hxx>
#include <Geom_Ellipse.hxx>
#include <Geom_HSequenceOfBSplineSurface.hxx>
#include <Geom_Point.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <Geom_Curve.hxx>
#include <Geom_AxisPlacement.hxx>
#include <Geom_ToroidalSurface.hxx>
#include <Geom_SurfaceOfLinearExtrusion.hxx>
#include <Geom_Plane.hxx>
#include <Geom_OffsetCurve.hxx>
#include <Geom_SweptSurface.hxx>
#include <Geom_Conic.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_ElementarySurface.hxx>
#include <Geom_Axis2Placement.hxx>
#include <Geom_Vector.hxx>
#include <Geom_CartesianPoint.hxx>
#include <Geom_UndefinedValue.hxx>
#include <Geom_Transformation.hxx>
#include <Geom_Hyperbola.hxx>
#include <Geom_SphericalSurface.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Geom_CylindricalSurface.hxx
// ./opencascade/Geom_ConicalSurface.hxx
// ./opencascade/Geom_OffsetSurface.hxx
// ./opencascade/Geom_SurfaceOfRevolution.hxx
// ./opencascade/Geom_BoundedCurve.hxx
// ./opencascade/Geom_RectangularTrimmedSurface.hxx
// ./opencascade/Geom_SequenceOfBSplineSurface.hxx
// ./opencascade/Geom_Direction.hxx
// ./opencascade/Geom_BezierCurve.hxx
// ./opencascade/Geom_OsculatingSurface.hxx
// ./opencascade/Geom_VectorWithMagnitude.hxx
// ./opencascade/Geom_Parabola.hxx
// ./opencascade/Geom_TrimmedCurve.hxx
// ./opencascade/Geom_Line.hxx
// ./opencascade/Geom_Circle.hxx
// ./opencascade/Geom_Surface.hxx
// ./opencascade/Geom_BoundedSurface.hxx
// ./opencascade/Geom_Axis1Placement.hxx
// ./opencascade/Geom_Geometry.hxx
// ./opencascade/Geom_Ellipse.hxx
// ./opencascade/Geom_HSequenceOfBSplineSurface.hxx
// ./opencascade/Geom_Point.hxx
// ./opencascade/Geom_BSplineCurve.hxx
// ./opencascade/Geom_UndefinedDerivative.hxx
// ./opencascade/Geom_Curve.hxx
// ./opencascade/Geom_AxisPlacement.hxx
// ./opencascade/Geom_ToroidalSurface.hxx
// ./opencascade/Geom_SurfaceOfLinearExtrusion.hxx
// ./opencascade/Geom_Plane.hxx
// ./opencascade/Geom_OffsetCurve.hxx
// ./opencascade/Geom_SweptSurface.hxx
// ./opencascade/Geom_Conic.hxx
// ./opencascade/Geom_BezierSurface.hxx
// ./opencascade/Geom_BSplineSurface.hxx
// ./opencascade/Geom_ElementarySurface.hxx
// ./opencascade/Geom_Axis2Placement.hxx
// ./opencascade/Geom_Vector.hxx
// ./opencascade/Geom_CartesianPoint.hxx
// ./opencascade/Geom_UndefinedValue.hxx
// ./opencascade/Geom_Transformation.hxx
// ./opencascade/Geom_Hyperbola.hxx
// ./opencascade/Geom_SphericalSurface.hxx

// user-defined post