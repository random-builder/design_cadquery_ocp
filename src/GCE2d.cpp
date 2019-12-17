
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Pnt2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Pnt2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Parab2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <Geom2d_Transformation.hxx>
#include <gp_Pnt2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Elips2d.hxx>
#include <Geom2d_Transformation.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Ax2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Dir2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Circ2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Dir2d.hxx>
#include <gp_Lin2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Pnt2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Hypr2d.hxx>
#include <Geom2d_Transformation.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Pnt2d.hxx>
#include <Geom2d_Transformation.hxx>
#include <gp_Pnt2d.hxx>

// module includes
#include <GCE2d_MakeArcOfCircle.hxx>
#include <GCE2d_MakeArcOfEllipse.hxx>
#include <GCE2d_MakeArcOfHyperbola.hxx>
#include <GCE2d_MakeArcOfParabola.hxx>
#include <GCE2d_MakeCircle.hxx>
#include <GCE2d_MakeEllipse.hxx>
#include <GCE2d_MakeHyperbola.hxx>
#include <GCE2d_MakeLine.hxx>
#include <GCE2d_MakeMirror.hxx>
#include <GCE2d_MakeParabola.hxx>
#include <GCE2d_MakeRotation.hxx>
#include <GCE2d_MakeScale.hxx>
#include <GCE2d_MakeSegment.hxx>
#include <GCE2d_MakeTranslation.hxx>
#include <GCE2d_Root.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GCE2d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GCE2d"));


//Python trampoline classes

// classes

    register_default_constructor<GCE2d_Root ,std::unique_ptr<GCE2d_Root>>(m,"GCE2d_Root");

    static_cast<py::class_<GCE2d_Root ,std::unique_ptr<GCE2d_Root>  >>(m.attr("GCE2d_Root"))
        .def("IsDone",
             (Standard_Boolean (GCE2d_Root::*)() const) static_cast<Standard_Boolean (GCE2d_Root::*)() const>(&GCE2d_Root::IsDone),
             R"#(Returns true if the construction is successful.)#" )
        .def("Status",
             (gce_ErrorType (GCE2d_Root::*)() const) static_cast<gce_ErrorType (GCE2d_Root::*)() const>(&GCE2d_Root::Status),
             R"#(Returns the status of the construction - gce_Done, if the construction is successful, or - another value of the gce_ErrorType enumeration indicating why the construction failed.)#" )
        .def("IsDone",
             (Standard_Boolean (GCE2d_Root::*)() const) static_cast<Standard_Boolean (GCE2d_Root::*)() const>(&GCE2d_Root::IsDone),
             R"#(Returns true if the construction is successful.)#" )
        .def("Status",
             (gce_ErrorType (GCE2d_Root::*)() const) static_cast<gce_ErrorType (GCE2d_Root::*)() const>(&GCE2d_Root::Status),
             R"#(Returns the status of the construction - gce_Done, if the construction is successful, or - another value of the gce_ErrorType enumeration indicating why the construction failed.)#" )
;


    static_cast<py::class_<GCE2d_MakeArcOfEllipse ,std::unique_ptr<GCE2d_MakeArcOfEllipse>  , GCE2d_Root >>(m.attr("GCE2d_MakeArcOfEllipse"))
        .def(py::init< const gp_Elips2d &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("Elips"),  py::arg("Alpha1"),  py::arg("Alpha2"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Elips2d &,const gp_Pnt2d &,const Standard_Real,const Standard_Boolean >()  , py::arg("Elips"),  py::arg("P"),  py::arg("Alpha"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Elips2d &,const gp_Pnt2d &,const gp_Pnt2d &,const Standard_Boolean >()  , py::arg("Elips"),  py::arg("P1"),  py::arg("P2"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def("Value",
             (const opencascade::handle<Geom2d_TrimmedCurve> & (GCE2d_MakeArcOfEllipse::*)() const) static_cast<const opencascade::handle<Geom2d_TrimmedCurve> & (GCE2d_MakeArcOfEllipse::*)() const>(&GCE2d_MakeArcOfEllipse::Value),
             R"#(Returns the constructed arc of ellipse.)#" )
;


    static_cast<py::class_<GCE2d_MakeParabola ,std::unique_ptr<GCE2d_MakeParabola>  , GCE2d_Root >>(m.attr("GCE2d_MakeParabola"))
        .def(py::init< const gp_Parab2d & >()  , py::arg("Prb") )
        .def(py::init< const gp_Ax22d &,const Standard_Real >()  , py::arg("Axis"),  py::arg("Focal") )
        .def(py::init< const gp_Ax2d &,const Standard_Real,const Standard_Boolean >()  , py::arg("MirrorAxis"),  py::arg("Focal"),  py::arg("Sense") )
        .def(py::init< const gp_Ax2d &,const gp_Pnt2d &,const Standard_Boolean >()  , py::arg("D"),  py::arg("F"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("S1"),  py::arg("O") )
        .def("Value",
             (const opencascade::handle<Geom2d_Parabola> & (GCE2d_MakeParabola::*)() const) static_cast<const opencascade::handle<Geom2d_Parabola> & (GCE2d_MakeParabola::*)() const>(&GCE2d_MakeParabola::Value),
             R"#(Returns the constructed parabola. Exceptions StdFail_NotDone if no parabola is constructed.)#" )
;


    static_cast<py::class_<GCE2d_MakeRotation ,std::unique_ptr<GCE2d_MakeRotation>  >>(m.attr("GCE2d_MakeRotation"))
        .def(py::init< const gp_Pnt2d &,const Standard_Real >()  , py::arg("Point"),  py::arg("Angle") )
        .def("Value",
             (const opencascade::handle<Geom2d_Transformation> & (GCE2d_MakeRotation::*)() const) static_cast<const opencascade::handle<Geom2d_Transformation> & (GCE2d_MakeRotation::*)() const>(&GCE2d_MakeRotation::Value),
             R"#(Returns the constructed transformation.)#" )
;


    static_cast<py::class_<GCE2d_MakeMirror ,std::unique_ptr<GCE2d_MakeMirror>  >>(m.attr("GCE2d_MakeMirror"))
        .def(py::init< const gp_Pnt2d & >()  , py::arg("Point") )
        .def(py::init< const gp_Ax2d & >()  , py::arg("Axis") )
        .def(py::init< const gp_Lin2d & >()  , py::arg("Line") )
        .def(py::init< const gp_Pnt2d &,const gp_Dir2d & >()  , py::arg("Point"),  py::arg("Direc") )
        .def("Value",
             (const opencascade::handle<Geom2d_Transformation> & (GCE2d_MakeMirror::*)() const) static_cast<const opencascade::handle<Geom2d_Transformation> & (GCE2d_MakeMirror::*)() const>(&GCE2d_MakeMirror::Value),
             R"#(Returns the constructed transformation.)#" )
;


    static_cast<py::class_<GCE2d_MakeSegment ,std::unique_ptr<GCE2d_MakeSegment>  , GCE2d_Root >>(m.attr("GCE2d_MakeSegment"))
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Pnt2d &,const gp_Dir2d &,const gp_Pnt2d & >()  , py::arg("P1"),  py::arg("V"),  py::arg("P2") )
        .def(py::init< const gp_Lin2d &,const Standard_Real,const Standard_Real >()  , py::arg("Line"),  py::arg("U1"),  py::arg("U2") )
        .def(py::init< const gp_Lin2d &,const gp_Pnt2d &,const Standard_Real >()  , py::arg("Line"),  py::arg("Point"),  py::arg("Ulast") )
        .def(py::init< const gp_Lin2d &,const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("Line"),  py::arg("P1"),  py::arg("P2") )
        .def("Value",
             (const opencascade::handle<Geom2d_TrimmedCurve> & (GCE2d_MakeSegment::*)() const) static_cast<const opencascade::handle<Geom2d_TrimmedCurve> & (GCE2d_MakeSegment::*)() const>(&GCE2d_MakeSegment::Value),
             R"#(Returns the constructed line segment. Exceptions StdFail_NotDone if no line segment is constructed.)#" )
;


    static_cast<py::class_<GCE2d_MakeArcOfCircle ,std::unique_ptr<GCE2d_MakeArcOfCircle>  , GCE2d_Root >>(m.attr("GCE2d_MakeArcOfCircle"))
        .def(py::init< const gp_Circ2d &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("Circ"),  py::arg("Alpha1"),  py::arg("Alpha2"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Circ2d &,const gp_Pnt2d &,const Standard_Real,const Standard_Boolean >()  , py::arg("Circ"),  py::arg("P"),  py::arg("Alpha"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Circ2d &,const gp_Pnt2d &,const gp_Pnt2d &,const Standard_Boolean >()  , py::arg("Circ"),  py::arg("P1"),  py::arg("P2"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("P1"),  py::arg("P2"),  py::arg("P3") )
        .def(py::init< const gp_Pnt2d &,const gp_Vec2d &,const gp_Pnt2d & >()  , py::arg("P1"),  py::arg("V"),  py::arg("P2") )
        .def("Value",
             (const opencascade::handle<Geom2d_TrimmedCurve> & (GCE2d_MakeArcOfCircle::*)() const) static_cast<const opencascade::handle<Geom2d_TrimmedCurve> & (GCE2d_MakeArcOfCircle::*)() const>(&GCE2d_MakeArcOfCircle::Value),
             R"#(Returns the constructed arc of circle. Exceptions StdFail_NotDone if no arc of circle is constructed.)#" )
;


    static_cast<py::class_<GCE2d_MakeTranslation ,std::unique_ptr<GCE2d_MakeTranslation>  >>(m.attr("GCE2d_MakeTranslation"))
        .def(py::init< const gp_Vec2d & >()  , py::arg("Vect") )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("Point1"),  py::arg("Point2") )
        .def("Value",
             (const opencascade::handle<Geom2d_Transformation> & (GCE2d_MakeTranslation::*)() const) static_cast<const opencascade::handle<Geom2d_Transformation> & (GCE2d_MakeTranslation::*)() const>(&GCE2d_MakeTranslation::Value),
             R"#(Returns the constructed transformation.)#" )
;


    static_cast<py::class_<GCE2d_MakeArcOfParabola ,std::unique_ptr<GCE2d_MakeArcOfParabola>  , GCE2d_Root >>(m.attr("GCE2d_MakeArcOfParabola"))
        .def(py::init< const gp_Parab2d &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("Parab"),  py::arg("Alpha1"),  py::arg("Alpha2"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Parab2d &,const gp_Pnt2d &,const Standard_Real,const Standard_Boolean >()  , py::arg("Parab"),  py::arg("P"),  py::arg("Alpha"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Parab2d &,const gp_Pnt2d &,const gp_Pnt2d &,const Standard_Boolean >()  , py::arg("Parab"),  py::arg("P1"),  py::arg("P2"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def("Value",
             (const opencascade::handle<Geom2d_TrimmedCurve> & (GCE2d_MakeArcOfParabola::*)() const) static_cast<const opencascade::handle<Geom2d_TrimmedCurve> & (GCE2d_MakeArcOfParabola::*)() const>(&GCE2d_MakeArcOfParabola::Value),
             R"#(Returns the constructed arc of parabola.)#" )
;


    static_cast<py::class_<GCE2d_MakeEllipse ,std::unique_ptr<GCE2d_MakeEllipse>  , GCE2d_Root >>(m.attr("GCE2d_MakeEllipse"))
        .def(py::init< const gp_Elips2d & >()  , py::arg("E") )
        .def(py::init< const gp_Ax2d &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("MajorAxis"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Ax22d &,const Standard_Real,const Standard_Real >()  , py::arg("Axis"),  py::arg("MajorRadius"),  py::arg("MinorRadius") )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("Center") )
        .def("Value",
             (const opencascade::handle<Geom2d_Ellipse> & (GCE2d_MakeEllipse::*)() const) static_cast<const opencascade::handle<Geom2d_Ellipse> & (GCE2d_MakeEllipse::*)() const>(&GCE2d_MakeEllipse::Value),
             R"#(Returns the constructed ellipse. Exceptions StdFail_NotDone if no ellipse is constructed.)#" )
;


    static_cast<py::class_<GCE2d_MakeArcOfHyperbola ,std::unique_ptr<GCE2d_MakeArcOfHyperbola>  , GCE2d_Root >>(m.attr("GCE2d_MakeArcOfHyperbola"))
        .def(py::init< const gp_Hypr2d &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("Hypr"),  py::arg("Alpha1"),  py::arg("Alpha2"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Hypr2d &,const gp_Pnt2d &,const Standard_Real,const Standard_Boolean >()  , py::arg("Hypr"),  py::arg("P"),  py::arg("Alpha"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Hypr2d &,const gp_Pnt2d &,const gp_Pnt2d &,const Standard_Boolean >()  , py::arg("Hypr"),  py::arg("P1"),  py::arg("P2"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def("Value",
             (const opencascade::handle<Geom2d_TrimmedCurve> & (GCE2d_MakeArcOfHyperbola::*)() const) static_cast<const opencascade::handle<Geom2d_TrimmedCurve> & (GCE2d_MakeArcOfHyperbola::*)() const>(&GCE2d_MakeArcOfHyperbola::Value),
             R"#(Returns the constructed arc of hyperbola.)#" )
;


    static_cast<py::class_<GCE2d_MakeScale ,std::unique_ptr<GCE2d_MakeScale>  >>(m.attr("GCE2d_MakeScale"))
        .def(py::init< const gp_Pnt2d &,const Standard_Real >()  , py::arg("Point"),  py::arg("Scale") )
        .def("Value",
             (const opencascade::handle<Geom2d_Transformation> & (GCE2d_MakeScale::*)() const) static_cast<const opencascade::handle<Geom2d_Transformation> & (GCE2d_MakeScale::*)() const>(&GCE2d_MakeScale::Value),
             R"#(Returns the constructed transformation.)#" )
;


    static_cast<py::class_<GCE2d_MakeLine ,std::unique_ptr<GCE2d_MakeLine>  , GCE2d_Root >>(m.attr("GCE2d_MakeLine"))
        .def(py::init< const gp_Ax2d & >()  , py::arg("A") )
        .def(py::init< const gp_Lin2d & >()  , py::arg("L") )
        .def(py::init< const gp_Pnt2d &,const gp_Dir2d & >()  , py::arg("P"),  py::arg("V") )
        .def(py::init< const gp_Lin2d &,const gp_Pnt2d & >()  , py::arg("Lin"),  py::arg("Point") )
        .def(py::init< const gp_Lin2d &,const Standard_Real >()  , py::arg("Lin"),  py::arg("Dist") )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("P1"),  py::arg("P2") )
        .def("Value",
             (const opencascade::handle<Geom2d_Line> & (GCE2d_MakeLine::*)() const) static_cast<const opencascade::handle<Geom2d_Line> & (GCE2d_MakeLine::*)() const>(&GCE2d_MakeLine::Value),
             R"#(Returns the constructed line. Exceptions StdFail_NotDone if no line is constructed.)#" )
;


    static_cast<py::class_<GCE2d_MakeHyperbola ,std::unique_ptr<GCE2d_MakeHyperbola>  , GCE2d_Root >>(m.attr("GCE2d_MakeHyperbola"))
        .def(py::init< const gp_Hypr2d & >()  , py::arg("H") )
        .def(py::init< const gp_Ax2d &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("MajorAxis"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("Sense") )
        .def(py::init< const gp_Ax22d &,const Standard_Real,const Standard_Real >()  , py::arg("Axis"),  py::arg("MajorRadius"),  py::arg("MinorRadius") )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("Center") )
        .def("Value",
             (const opencascade::handle<Geom2d_Hyperbola> & (GCE2d_MakeHyperbola::*)() const) static_cast<const opencascade::handle<Geom2d_Hyperbola> & (GCE2d_MakeHyperbola::*)() const>(&GCE2d_MakeHyperbola::Value),
             R"#(Returns the constructed hyperbola. Exceptions: StdFail_NotDone if no hyperbola is constructed.)#" )
;


    static_cast<py::class_<GCE2d_MakeCircle ,std::unique_ptr<GCE2d_MakeCircle>  , GCE2d_Root >>(m.attr("GCE2d_MakeCircle"))
        .def(py::init< const gp_Circ2d & >()  , py::arg("C") )
        .def(py::init< const gp_Ax2d &,const Standard_Real,const Standard_Boolean >()  , py::arg("A"),  py::arg("Radius"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Ax22d &,const Standard_Real >()  , py::arg("A"),  py::arg("Radius") )
        .def(py::init< const gp_Circ2d &,const Standard_Real >()  , py::arg("Circ"),  py::arg("Dist") )
        .def(py::init< const gp_Circ2d &,const gp_Pnt2d & >()  , py::arg("Circ"),  py::arg("Point") )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("P1"),  py::arg("P2"),  py::arg("P3") )
        .def(py::init< const gp_Pnt2d &,const Standard_Real,const Standard_Boolean >()  , py::arg("P"),  py::arg("Radius"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d &,const Standard_Boolean >()  , py::arg("Center"),  py::arg("Point"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def("Value",
             (const opencascade::handle<Geom2d_Circle> & (GCE2d_MakeCircle::*)() const) static_cast<const opencascade::handle<Geom2d_Circle> & (GCE2d_MakeCircle::*)() const>(&GCE2d_MakeCircle::Value),
             R"#(Returns the constructed circle. Exceptions StdFail_NotDone if no circle is constructed.)#" )
;

// functions
// ./opencascade/GCE2d_MakeArcOfEllipse.hxx
// ./opencascade/GCE2d_MakeArcOfParabola.hxx
// ./opencascade/GCE2d_MakeParabola.hxx
// ./opencascade/GCE2d_MakeLine.hxx
// ./opencascade/GCE2d_MakeRotation.hxx
// ./opencascade/GCE2d_MakeEllipse.hxx
// ./opencascade/GCE2d_MakeMirror.hxx
// ./opencascade/GCE2d_MakeCircle.hxx
// ./opencascade/GCE2d_MakeSegment.hxx
// ./opencascade/GCE2d_MakeArcOfHyperbola.hxx
// ./opencascade/GCE2d_MakeArcOfCircle.hxx
// ./opencascade/GCE2d_Root.hxx
// ./opencascade/GCE2d_MakeHyperbola.hxx
// ./opencascade/GCE2d_MakeTranslation.hxx
// ./opencascade/GCE2d_MakeScale.hxx

// operators

// register typdefs
// ./opencascade/GCE2d_MakeArcOfEllipse.hxx
// ./opencascade/GCE2d_MakeArcOfParabola.hxx
// ./opencascade/GCE2d_MakeParabola.hxx
// ./opencascade/GCE2d_MakeLine.hxx
// ./opencascade/GCE2d_MakeRotation.hxx
// ./opencascade/GCE2d_MakeEllipse.hxx
// ./opencascade/GCE2d_MakeMirror.hxx
// ./opencascade/GCE2d_MakeCircle.hxx
// ./opencascade/GCE2d_MakeSegment.hxx
// ./opencascade/GCE2d_MakeArcOfHyperbola.hxx
// ./opencascade/GCE2d_MakeArcOfCircle.hxx
// ./opencascade/GCE2d_Root.hxx
// ./opencascade/GCE2d_MakeHyperbola.hxx
// ./opencascade/GCE2d_MakeTranslation.hxx
// ./opencascade/GCE2d_MakeScale.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post