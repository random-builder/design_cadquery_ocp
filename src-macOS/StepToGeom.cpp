
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom_Axis1Placement.hxx>
#include <Geom_Axis2Placement.hxx>
#include <Geom_BoundedCurve.hxx>
#include <Geom_BoundedSurface.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_CartesianPoint.hxx>
#include <Geom_Circle.hxx>
#include <Geom_Conic.hxx>
#include <Geom_ConicalSurface.hxx>
#include <Geom_Curve.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <Geom_Direction.hxx>
#include <Geom_ElementarySurface.hxx>
#include <Geom_Ellipse.hxx>
#include <Geom_Hyperbola.hxx>
#include <Geom_Line.hxx>
#include <Geom_Parabola.hxx>
#include <Geom_Plane.hxx>
#include <Geom_RectangularTrimmedSurface.hxx>
#include <Geom_SphericalSurface.hxx>
#include <Geom_Surface.hxx>
#include <Geom_SurfaceOfLinearExtrusion.hxx>
#include <Geom_SurfaceOfRevolution.hxx>
#include <Geom_SweptSurface.hxx>
#include <Geom_ToroidalSurface.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <Geom_VectorWithMagnitude.hxx>
#include <Geom2d_AxisPlacement.hxx>
#include <Geom2d_BoundedCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_CartesianPoint.hxx>
#include <Geom2d_Circle.hxx>
#include <Geom2d_Conic.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom2d_Direction.hxx>
#include <Geom2d_Ellipse.hxx>
#include <Geom2d_Hyperbola.hxx>
#include <Geom2d_Line.hxx>
#include <Geom2d_Parabola.hxx>
#include <Geom2d_VectorWithMagnitude.hxx>
#include <gp_Trsf.hxx>
#include <gp_Trsf2d.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <StepGeom_Axis2Placement2d.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepGeom_BoundedCurve.hxx>
#include <StepGeom_BoundedSurface.hxx>
#include <StepGeom_BSplineCurve.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_Direction.hxx>
#include <StepGeom_BSplineSurface.hxx>
#include <StepGeom_Circle.hxx>
#include <StepGeom_Conic.hxx>
#include <StepGeom_ConicalSurface.hxx>
#include <StepGeom_Curve.hxx>
#include <StepGeom_CylindricalSurface.hxx>
#include <StepGeom_ElementarySurface.hxx>
#include <StepGeom_Ellipse.hxx>
#include <StepGeom_Hyperbola.hxx>
#include <StepGeom_Line.hxx>
#include <StepGeom_Parabola.hxx>
#include <StepGeom_Plane.hxx>
#include <StepGeom_Polyline.hxx>
#include <StepGeom_RectangularTrimmedSurface.hxx>
#include <StepGeom_SphericalSurface.hxx>
#include <StepGeom_Surface.hxx>
#include <StepGeom_SurfaceOfLinearExtrusion.hxx>
#include <StepGeom_SurfaceOfRevolution.hxx>
#include <StepGeom_SweptSurface.hxx>
#include <StepGeom_ToroidalSurface.hxx>
#include <StepGeom_CartesianTransformationOperator2d.hxx>
#include <StepGeom_CartesianTransformationOperator3d.hxx>
#include <StepGeom_TrimmedCurve.hxx>
#include <StepGeom_Vector.hxx>

// module includes
#include <StepToGeom.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepToGeom(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StepToGeom"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<StepToGeom , shared_ptr<StepToGeom>>(m,"StepToGeom");

    static_cast<py::class_<StepToGeom , shared_ptr<StepToGeom> >>(m.attr("StepToGeom"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StepToGeom.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
