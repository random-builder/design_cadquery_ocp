
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <StepDimTol_UnequallyDisposedGeometricTolerance.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepDimTol_Datum.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <StepDimTol_ModifiedGeometricTolerance.hxx>
#include <StepDimTol_PositionTolerance.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepDimTol_Datum.hxx>
#include <StepDimTol_HArray1OfDatumReferenceElement.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepDimTol_GeometricTolerance.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <StepDimTol_GeometricToleranceWithModifiers.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepDimTol_DatumSystem.hxx>
#include <StepDimTol_DatumReference.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepDimTol_GeometricToleranceWithModifiers.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepDimTol_Datum.hxx>
#include <StepDimTol_GeometricToleranceWithModifiers.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepShape_DimensionalLocation.hxx>
#include <StepShape_DimensionalSize.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepDimTol_GeometricTolerance.hxx>
#include <StepDimTol_GeneralDatumReference.hxx>
#include <StepShape_DimensionalLocation.hxx>
#include <StepShape_DimensionalSize.hxx>
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <StepDimTol_GeometricToleranceWithModifiers.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepDimTol_GeometricTolerance.hxx>
#include <StepShape_PlusMinusTolerance.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>

// module includes
#include <StepDimTol_AngularityTolerance.hxx>
#include <StepDimTol_AreaUnitType.hxx>
#include <StepDimTol_Array1OfDatumReference.hxx>
#include <StepDimTol_Array1OfDatumReferenceCompartment.hxx>
#include <StepDimTol_Array1OfDatumReferenceElement.hxx>
#include <StepDimTol_Array1OfDatumReferenceModifier.hxx>
#include <StepDimTol_Array1OfDatumSystemOrReference.hxx>
#include <StepDimTol_Array1OfGeometricToleranceModifier.hxx>
#include <StepDimTol_Array1OfToleranceZoneTarget.hxx>
#include <StepDimTol_CircularRunoutTolerance.hxx>
#include <StepDimTol_CoaxialityTolerance.hxx>
#include <StepDimTol_CommonDatum.hxx>
#include <StepDimTol_ConcentricityTolerance.hxx>
#include <StepDimTol_CylindricityTolerance.hxx>
#include <StepDimTol_Datum.hxx>
#include <StepDimTol_DatumFeature.hxx>
#include <StepDimTol_DatumOrCommonDatum.hxx>
#include <StepDimTol_DatumReference.hxx>
#include <StepDimTol_DatumReferenceCompartment.hxx>
#include <StepDimTol_DatumReferenceElement.hxx>
#include <StepDimTol_DatumReferenceModifier.hxx>
#include <StepDimTol_DatumReferenceModifierType.hxx>
#include <StepDimTol_DatumReferenceModifierWithValue.hxx>
#include <StepDimTol_DatumSystem.hxx>
#include <StepDimTol_DatumSystemOrReference.hxx>
#include <StepDimTol_DatumTarget.hxx>
#include <StepDimTol_FlatnessTolerance.hxx>
#include <StepDimTol_GeneralDatumReference.hxx>
#include <StepDimTol_GeometricTolerance.hxx>
#include <StepDimTol_GeometricToleranceModifier.hxx>
#include <StepDimTol_GeometricToleranceRelationship.hxx>
#include <StepDimTol_GeometricToleranceTarget.hxx>
#include <StepDimTol_GeometricToleranceType.hxx>
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <StepDimTol_GeometricToleranceWithDefinedAreaUnit.hxx>
#include <StepDimTol_GeometricToleranceWithDefinedUnit.hxx>
#include <StepDimTol_GeometricToleranceWithMaximumTolerance.hxx>
#include <StepDimTol_GeometricToleranceWithModifiers.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRef.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthMaxTol.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthMod.hxx>
#include <StepDimTol_HArray1OfDatumReference.hxx>
#include <StepDimTol_HArray1OfDatumReferenceCompartment.hxx>
#include <StepDimTol_HArray1OfDatumReferenceElement.hxx>
#include <StepDimTol_HArray1OfDatumReferenceModifier.hxx>
#include <StepDimTol_HArray1OfDatumSystemOrReference.hxx>
#include <StepDimTol_HArray1OfGeometricToleranceModifier.hxx>
#include <StepDimTol_HArray1OfToleranceZoneTarget.hxx>
#include <StepDimTol_LimitCondition.hxx>
#include <StepDimTol_LineProfileTolerance.hxx>
#include <StepDimTol_ModifiedGeometricTolerance.hxx>
#include <StepDimTol_NonUniformZoneDefinition.hxx>
#include <StepDimTol_ParallelismTolerance.hxx>
#include <StepDimTol_PerpendicularityTolerance.hxx>
#include <StepDimTol_PlacedDatumTargetFeature.hxx>
#include <StepDimTol_PositionTolerance.hxx>
#include <StepDimTol_ProjectedZoneDefinition.hxx>
#include <StepDimTol_RoundnessTolerance.hxx>
#include <StepDimTol_RunoutZoneDefinition.hxx>
#include <StepDimTol_RunoutZoneOrientation.hxx>
#include <StepDimTol_ShapeToleranceSelect.hxx>
#include <StepDimTol_SimpleDatumReferenceModifier.hxx>
#include <StepDimTol_SimpleDatumReferenceModifierMember.hxx>
#include <StepDimTol_StraightnessTolerance.hxx>
#include <StepDimTol_SurfaceProfileTolerance.hxx>
#include <StepDimTol_SymmetryTolerance.hxx>
#include <StepDimTol_ToleranceZone.hxx>
#include <StepDimTol_ToleranceZoneDefinition.hxx>
#include <StepDimTol_ToleranceZoneForm.hxx>
#include <StepDimTol_ToleranceZoneTarget.hxx>
#include <StepDimTol_TotalRunoutTolerance.hxx>
#include <StepDimTol_UnequallyDisposedGeometricTolerance.hxx>

// template related includes
// ./opencascade/StepDimTol_Array1OfDatumReferenceCompartment.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepDimTol_Array1OfDatumReferenceModifier.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepDimTol_Array1OfDatumSystemOrReference.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepDimTol_Array1OfGeometricToleranceModifier.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepDimTol_Array1OfDatumReference.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepDimTol_Array1OfDatumReferenceElement.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepDimTol_Array1OfToleranceZoneTarget.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepDimTol(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StepDimTol"));


//Python trampoline classes

// classes


    static_cast<py::class_<StepDimTol_CommonDatum ,opencascade::handle<StepDimTol_CommonDatum> , StepRepr_CompositeShapeAspect>>(m.attr("StepDimTol_CommonDatum"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_CommonDatum::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_CommonDatum::*)() const>(&StepDimTol_CommonDatum::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_CommonDatum::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_Datum ,opencascade::handle<StepDimTol_Datum> , StepRepr_ShapeAspect>>(m.attr("StepDimTol_Datum"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_Datum::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_Datum::*)() const>(&StepDimTol_Datum::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_Datum::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_DatumFeature ,opencascade::handle<StepDimTol_DatumFeature> , StepRepr_ShapeAspect>>(m.attr("StepDimTol_DatumFeature"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_DatumFeature::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_DatumFeature::*)() const>(&StepDimTol_DatumFeature::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_DatumFeature::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_DatumOrCommonDatum , shared_ptr<StepDimTol_DatumOrCommonDatum> , StepData_SelectType>>(m.attr("StepDimTol_DatumOrCommonDatum"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepDimTol_DatumOrCommonDatum::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepDimTol_DatumOrCommonDatum::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepDimTol_DatumOrCommonDatum::CaseNum),
             R"#(Recognizes a DatumOrCommonDatum Kind Entity that is : 1 -> Datum 2 -> CommonDatumList 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_DatumReference ,opencascade::handle<StepDimTol_DatumReference> , Standard_Transient>>(m.attr("StepDimTol_DatumReference"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_DatumReference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_DatumReference::*)() const>(&StepDimTol_DatumReference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_DatumReference::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_DatumReferenceModifier , shared_ptr<StepDimTol_DatumReferenceModifier> , StepData_SelectType>>(m.attr("StepDimTol_DatumReferenceModifier"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepDimTol_DatumReferenceModifier::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepDimTol_DatumReferenceModifier::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepDimTol_DatumReferenceModifier::CaseNum),
             R"#(Recognizes a DatumReferenceModifier Kind Entity that is : 1 -> DatumReferenceModifierWithValue 2 -> SimpleDatumReferenceModifierMember 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_DatumReferenceModifierWithValue ,opencascade::handle<StepDimTol_DatumReferenceModifierWithValue> , Standard_Transient>>(m.attr("StepDimTol_DatumReferenceModifierWithValue"))
    // constructors
    // custom constructors
    // methods
        .def("ModifierType",
             (StepDimTol_DatumReferenceModifierType (StepDimTol_DatumReferenceModifierWithValue::*)() const) static_cast<StepDimTol_DatumReferenceModifierType (StepDimTol_DatumReferenceModifierWithValue::*)() const>(&StepDimTol_DatumReferenceModifierWithValue::ModifierType),
             R"#(Returns field ModifierType)#" )
        .def("SetModifierType",
             (void (StepDimTol_DatumReferenceModifierWithValue::*)( const StepDimTol_DatumReferenceModifierType & ) ) static_cast<void (StepDimTol_DatumReferenceModifierWithValue::*)( const StepDimTol_DatumReferenceModifierType & ) >(&StepDimTol_DatumReferenceModifierWithValue::SetModifierType),
             R"#(Set field ModifierType)#"  , py::arg("theModifierType"))
        .def("ModifierValue",
             (opencascade::handle<StepBasic_LengthMeasureWithUnit> (StepDimTol_DatumReferenceModifierWithValue::*)() ) static_cast<opencascade::handle<StepBasic_LengthMeasureWithUnit> (StepDimTol_DatumReferenceModifierWithValue::*)() >(&StepDimTol_DatumReferenceModifierWithValue::ModifierValue),
             R"#(Returns field ModifierValue)#" )
        .def("SetModifierValue",
             (void (StepDimTol_DatumReferenceModifierWithValue::*)( const opencascade::handle<StepBasic_LengthMeasureWithUnit> & ) ) static_cast<void (StepDimTol_DatumReferenceModifierWithValue::*)( const opencascade::handle<StepBasic_LengthMeasureWithUnit> & ) >(&StepDimTol_DatumReferenceModifierWithValue::SetModifierValue),
             R"#(Set field ModifierValue)#"  , py::arg("theModifierValue"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_DatumReferenceModifierWithValue::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_DatumReferenceModifierWithValue::*)() const>(&StepDimTol_DatumReferenceModifierWithValue::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_DatumReferenceModifierWithValue::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_DatumSystem ,opencascade::handle<StepDimTol_DatumSystem> , StepRepr_ShapeAspect>>(m.attr("StepDimTol_DatumSystem"))
    // constructors
    // custom constructors
    // methods
        .def("Constituents",
             (opencascade::handle<StepDimTol_HArray1OfDatumReferenceCompartment> (StepDimTol_DatumSystem::*)() ) static_cast<opencascade::handle<StepDimTol_HArray1OfDatumReferenceCompartment> (StepDimTol_DatumSystem::*)() >(&StepDimTol_DatumSystem::Constituents),
             R"#(Returns field Constituents)#" )
        .def("SetConstituents",
             (void (StepDimTol_DatumSystem::*)( const opencascade::handle<StepDimTol_HArray1OfDatumReferenceCompartment> & ) ) static_cast<void (StepDimTol_DatumSystem::*)( const opencascade::handle<StepDimTol_HArray1OfDatumReferenceCompartment> & ) >(&StepDimTol_DatumSystem::SetConstituents),
             R"#(Set field Constituents)#"  , py::arg("theConstituents"))
        .def("NbConstituents",
             (Standard_Integer (StepDimTol_DatumSystem::*)() const) static_cast<Standard_Integer (StepDimTol_DatumSystem::*)() const>(&StepDimTol_DatumSystem::NbConstituents),
             R"#(Returns number of Constituents)#" )
        .def("ConstituentsValue",
             (opencascade::handle<StepDimTol_DatumReferenceCompartment> (StepDimTol_DatumSystem::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepDimTol_DatumReferenceCompartment> (StepDimTol_DatumSystem::*)( const Standard_Integer ) const>(&StepDimTol_DatumSystem::ConstituentsValue),
             R"#(Returns Constituents with the given number)#"  , py::arg("num"))
        .def("ConstituentsValue",
             (void (StepDimTol_DatumSystem::*)( const Standard_Integer , const opencascade::handle<StepDimTol_DatumReferenceCompartment> & ) ) static_cast<void (StepDimTol_DatumSystem::*)( const Standard_Integer , const opencascade::handle<StepDimTol_DatumReferenceCompartment> & ) >(&StepDimTol_DatumSystem::ConstituentsValue),
             R"#(Sets Constituents with given number)#"  , py::arg("num"),  py::arg("theItem"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_DatumSystem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_DatumSystem::*)() const>(&StepDimTol_DatumSystem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_DatumSystem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_DatumSystemOrReference , shared_ptr<StepDimTol_DatumSystemOrReference> , StepData_SelectType>>(m.attr("StepDimTol_DatumSystemOrReference"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepDimTol_DatumSystemOrReference::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepDimTol_DatumSystemOrReference::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepDimTol_DatumSystemOrReference::CaseNum),
             R"#(Recognizes a DatumSystemOrReference Kind Entity that is : 1 -> DatumSystem 2 -> DatumReference 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_DatumTarget ,opencascade::handle<StepDimTol_DatumTarget> , StepRepr_ShapeAspect>>(m.attr("StepDimTol_DatumTarget"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_DatumTarget::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_DatumTarget::*)() const>(&StepDimTol_DatumTarget::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_DatumTarget::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_GeneralDatumReference ,opencascade::handle<StepDimTol_GeneralDatumReference> , StepRepr_ShapeAspect>>(m.attr("StepDimTol_GeneralDatumReference"))
    // constructors
    // custom constructors
    // methods
        .def("Base",
             (StepDimTol_DatumOrCommonDatum (StepDimTol_GeneralDatumReference::*)() ) static_cast<StepDimTol_DatumOrCommonDatum (StepDimTol_GeneralDatumReference::*)() >(&StepDimTol_GeneralDatumReference::Base),
             R"#(Returns field Base)#" )
        .def("SetBase",
             (void (StepDimTol_GeneralDatumReference::*)( const StepDimTol_DatumOrCommonDatum & ) ) static_cast<void (StepDimTol_GeneralDatumReference::*)( const StepDimTol_DatumOrCommonDatum & ) >(&StepDimTol_GeneralDatumReference::SetBase),
             R"#(Set field Base)#"  , py::arg("theBase"))
        .def("HasModifiers",
             (Standard_Boolean (StepDimTol_GeneralDatumReference::*)() const) static_cast<Standard_Boolean (StepDimTol_GeneralDatumReference::*)() const>(&StepDimTol_GeneralDatumReference::HasModifiers),
             R"#(Indicates is field Modifiers exist)#" )
        .def("Modifiers",
             (opencascade::handle<StepDimTol_HArray1OfDatumReferenceModifier> (StepDimTol_GeneralDatumReference::*)() ) static_cast<opencascade::handle<StepDimTol_HArray1OfDatumReferenceModifier> (StepDimTol_GeneralDatumReference::*)() >(&StepDimTol_GeneralDatumReference::Modifiers),
             R"#(Returns field Modifiers)#" )
        .def("SetModifiers",
             (void (StepDimTol_GeneralDatumReference::*)( const opencascade::handle<StepDimTol_HArray1OfDatumReferenceModifier> & ) ) static_cast<void (StepDimTol_GeneralDatumReference::*)( const opencascade::handle<StepDimTol_HArray1OfDatumReferenceModifier> & ) >(&StepDimTol_GeneralDatumReference::SetModifiers),
             R"#(Set field Modifiers)#"  , py::arg("theModifiers"))
        .def("NbModifiers",
             (Standard_Integer (StepDimTol_GeneralDatumReference::*)() const) static_cast<Standard_Integer (StepDimTol_GeneralDatumReference::*)() const>(&StepDimTol_GeneralDatumReference::NbModifiers),
             R"#(Returns number of Modifiers)#" )
        .def("ModifiersValue",
             (StepDimTol_DatumReferenceModifier (StepDimTol_GeneralDatumReference::*)( const Standard_Integer ) const) static_cast<StepDimTol_DatumReferenceModifier (StepDimTol_GeneralDatumReference::*)( const Standard_Integer ) const>(&StepDimTol_GeneralDatumReference::ModifiersValue),
             R"#(Returns Modifiers with the given number)#"  , py::arg("theNum"))
        .def("ModifiersValue",
             (void (StepDimTol_GeneralDatumReference::*)( const Standard_Integer , const StepDimTol_DatumReferenceModifier & ) ) static_cast<void (StepDimTol_GeneralDatumReference::*)( const Standard_Integer , const StepDimTol_DatumReferenceModifier & ) >(&StepDimTol_GeneralDatumReference::ModifiersValue),
             R"#(Sets Modifiers with given number)#"  , py::arg("theNum"),  py::arg("theItem"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_GeneralDatumReference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_GeneralDatumReference::*)() const>(&StepDimTol_GeneralDatumReference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_GeneralDatumReference::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_GeometricTolerance ,opencascade::handle<StepDimTol_GeometricTolerance> , Standard_Transient>>(m.attr("StepDimTol_GeometricTolerance"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_GeometricTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_GeometricTolerance::*)() const>(&StepDimTol_GeometricTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_GeometricTolerance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_GeometricToleranceRelationship ,opencascade::handle<StepDimTol_GeometricToleranceRelationship> , Standard_Transient>>(m.attr("StepDimTol_GeometricToleranceRelationship"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_GeometricToleranceRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_GeometricToleranceRelationship::*)() const>(&StepDimTol_GeometricToleranceRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_GeometricToleranceRelationship::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_GeometricToleranceTarget , shared_ptr<StepDimTol_GeometricToleranceTarget> , StepData_SelectType>>(m.attr("StepDimTol_GeometricToleranceTarget"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepDimTol_GeometricToleranceTarget::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepDimTol_GeometricToleranceTarget::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepDimTol_GeometricToleranceTarget::CaseNum),
             R"#(Recognizes a GeometricToleranceTarget Kind Entity that is : 1 -> DimensionalLocation 2 -> DimensionalSize 3 -> ProductDefinitionShape 4 -> ShapeAspect 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_HArray1OfDatumReference ,opencascade::handle<StepDimTol_HArray1OfDatumReference> , StepDimTol_Array1OfDatumReference, Standard_Transient>>(m.attr("StepDimTol_HArray1OfDatumReference"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepDimTol_DatumReference> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepDimTol_DatumReference> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepDimTol_Array1OfDatumReference & (StepDimTol_HArray1OfDatumReference::*)() const) static_cast<const StepDimTol_Array1OfDatumReference & (StepDimTol_HArray1OfDatumReference::*)() const>(&StepDimTol_HArray1OfDatumReference::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepDimTol_Array1OfDatumReference & (StepDimTol_HArray1OfDatumReference::*)() ) static_cast<StepDimTol_Array1OfDatumReference & (StepDimTol_HArray1OfDatumReference::*)() >(&StepDimTol_HArray1OfDatumReference::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_HArray1OfDatumReference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_HArray1OfDatumReference::*)() const>(&StepDimTol_HArray1OfDatumReference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_HArray1OfDatumReference::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepDimTol_HArray1OfDatumReference::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_HArray1OfDatumReferenceCompartment ,opencascade::handle<StepDimTol_HArray1OfDatumReferenceCompartment> , StepDimTol_Array1OfDatumReferenceCompartment, Standard_Transient>>(m.attr("StepDimTol_HArray1OfDatumReferenceCompartment"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepDimTol_DatumReferenceCompartment> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepDimTol_DatumReferenceCompartment> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepDimTol_Array1OfDatumReferenceCompartment & (StepDimTol_HArray1OfDatumReferenceCompartment::*)() const) static_cast<const StepDimTol_Array1OfDatumReferenceCompartment & (StepDimTol_HArray1OfDatumReferenceCompartment::*)() const>(&StepDimTol_HArray1OfDatumReferenceCompartment::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepDimTol_Array1OfDatumReferenceCompartment & (StepDimTol_HArray1OfDatumReferenceCompartment::*)() ) static_cast<StepDimTol_Array1OfDatumReferenceCompartment & (StepDimTol_HArray1OfDatumReferenceCompartment::*)() >(&StepDimTol_HArray1OfDatumReferenceCompartment::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_HArray1OfDatumReferenceCompartment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_HArray1OfDatumReferenceCompartment::*)() const>(&StepDimTol_HArray1OfDatumReferenceCompartment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_HArray1OfDatumReferenceCompartment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepDimTol_HArray1OfDatumReferenceCompartment::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_HArray1OfDatumReferenceElement ,opencascade::handle<StepDimTol_HArray1OfDatumReferenceElement> , StepDimTol_Array1OfDatumReferenceElement, Standard_Transient>>(m.attr("StepDimTol_HArray1OfDatumReferenceElement"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepDimTol_DatumReferenceElement> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepDimTol_DatumReferenceElement> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepDimTol_Array1OfDatumReferenceElement & (StepDimTol_HArray1OfDatumReferenceElement::*)() const) static_cast<const StepDimTol_Array1OfDatumReferenceElement & (StepDimTol_HArray1OfDatumReferenceElement::*)() const>(&StepDimTol_HArray1OfDatumReferenceElement::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepDimTol_Array1OfDatumReferenceElement & (StepDimTol_HArray1OfDatumReferenceElement::*)() ) static_cast<StepDimTol_Array1OfDatumReferenceElement & (StepDimTol_HArray1OfDatumReferenceElement::*)() >(&StepDimTol_HArray1OfDatumReferenceElement::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_HArray1OfDatumReferenceElement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_HArray1OfDatumReferenceElement::*)() const>(&StepDimTol_HArray1OfDatumReferenceElement::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_HArray1OfDatumReferenceElement::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepDimTol_HArray1OfDatumReferenceElement::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_HArray1OfDatumReferenceModifier ,opencascade::handle<StepDimTol_HArray1OfDatumReferenceModifier> , StepDimTol_Array1OfDatumReferenceModifier, Standard_Transient>>(m.attr("StepDimTol_HArray1OfDatumReferenceModifier"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepDimTol_DatumReferenceModifier & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepDimTol_DatumReferenceModifier> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepDimTol_Array1OfDatumReferenceModifier & (StepDimTol_HArray1OfDatumReferenceModifier::*)() const) static_cast<const StepDimTol_Array1OfDatumReferenceModifier & (StepDimTol_HArray1OfDatumReferenceModifier::*)() const>(&StepDimTol_HArray1OfDatumReferenceModifier::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepDimTol_Array1OfDatumReferenceModifier & (StepDimTol_HArray1OfDatumReferenceModifier::*)() ) static_cast<StepDimTol_Array1OfDatumReferenceModifier & (StepDimTol_HArray1OfDatumReferenceModifier::*)() >(&StepDimTol_HArray1OfDatumReferenceModifier::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_HArray1OfDatumReferenceModifier::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_HArray1OfDatumReferenceModifier::*)() const>(&StepDimTol_HArray1OfDatumReferenceModifier::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_HArray1OfDatumReferenceModifier::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepDimTol_HArray1OfDatumReferenceModifier::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_HArray1OfDatumSystemOrReference ,opencascade::handle<StepDimTol_HArray1OfDatumSystemOrReference> , StepDimTol_Array1OfDatumSystemOrReference, Standard_Transient>>(m.attr("StepDimTol_HArray1OfDatumSystemOrReference"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepDimTol_DatumSystemOrReference & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepDimTol_DatumSystemOrReference> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepDimTol_Array1OfDatumSystemOrReference & (StepDimTol_HArray1OfDatumSystemOrReference::*)() const) static_cast<const StepDimTol_Array1OfDatumSystemOrReference & (StepDimTol_HArray1OfDatumSystemOrReference::*)() const>(&StepDimTol_HArray1OfDatumSystemOrReference::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepDimTol_Array1OfDatumSystemOrReference & (StepDimTol_HArray1OfDatumSystemOrReference::*)() ) static_cast<StepDimTol_Array1OfDatumSystemOrReference & (StepDimTol_HArray1OfDatumSystemOrReference::*)() >(&StepDimTol_HArray1OfDatumSystemOrReference::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_HArray1OfDatumSystemOrReference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_HArray1OfDatumSystemOrReference::*)() const>(&StepDimTol_HArray1OfDatumSystemOrReference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_HArray1OfDatumSystemOrReference::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepDimTol_HArray1OfDatumSystemOrReference::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_HArray1OfGeometricToleranceModifier ,opencascade::handle<StepDimTol_HArray1OfGeometricToleranceModifier> , StepDimTol_Array1OfGeometricToleranceModifier, Standard_Transient>>(m.attr("StepDimTol_HArray1OfGeometricToleranceModifier"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const StepDimTol_Array1OfGeometricToleranceModifier::value_type & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepDimTol_GeometricToleranceModifier> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepDimTol_Array1OfGeometricToleranceModifier & (StepDimTol_HArray1OfGeometricToleranceModifier::*)() const) static_cast<const StepDimTol_Array1OfGeometricToleranceModifier & (StepDimTol_HArray1OfGeometricToleranceModifier::*)() const>(&StepDimTol_HArray1OfGeometricToleranceModifier::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepDimTol_Array1OfGeometricToleranceModifier & (StepDimTol_HArray1OfGeometricToleranceModifier::*)() ) static_cast<StepDimTol_Array1OfGeometricToleranceModifier & (StepDimTol_HArray1OfGeometricToleranceModifier::*)() >(&StepDimTol_HArray1OfGeometricToleranceModifier::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_HArray1OfGeometricToleranceModifier::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_HArray1OfGeometricToleranceModifier::*)() const>(&StepDimTol_HArray1OfGeometricToleranceModifier::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_HArray1OfGeometricToleranceModifier::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepDimTol_HArray1OfGeometricToleranceModifier::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_HArray1OfToleranceZoneTarget ,opencascade::handle<StepDimTol_HArray1OfToleranceZoneTarget> , StepDimTol_Array1OfToleranceZoneTarget, Standard_Transient>>(m.attr("StepDimTol_HArray1OfToleranceZoneTarget"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepDimTol_ToleranceZoneTarget & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepDimTol_ToleranceZoneTarget> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepDimTol_Array1OfToleranceZoneTarget & (StepDimTol_HArray1OfToleranceZoneTarget::*)() const) static_cast<const StepDimTol_Array1OfToleranceZoneTarget & (StepDimTol_HArray1OfToleranceZoneTarget::*)() const>(&StepDimTol_HArray1OfToleranceZoneTarget::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepDimTol_Array1OfToleranceZoneTarget & (StepDimTol_HArray1OfToleranceZoneTarget::*)() ) static_cast<StepDimTol_Array1OfToleranceZoneTarget & (StepDimTol_HArray1OfToleranceZoneTarget::*)() >(&StepDimTol_HArray1OfToleranceZoneTarget::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_HArray1OfToleranceZoneTarget::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_HArray1OfToleranceZoneTarget::*)() const>(&StepDimTol_HArray1OfToleranceZoneTarget::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_HArray1OfToleranceZoneTarget::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepDimTol_HArray1OfToleranceZoneTarget::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_RunoutZoneOrientation ,opencascade::handle<StepDimTol_RunoutZoneOrientation> , Standard_Transient>>(m.attr("StepDimTol_RunoutZoneOrientation"))
    // constructors
    // custom constructors
    // methods
        .def("Angle",
             (opencascade::handle<StepBasic_PlaneAngleMeasureWithUnit> (StepDimTol_RunoutZoneOrientation::*)() ) static_cast<opencascade::handle<StepBasic_PlaneAngleMeasureWithUnit> (StepDimTol_RunoutZoneOrientation::*)() >(&StepDimTol_RunoutZoneOrientation::Angle),
             R"#(Returns field Angle)#" )
        .def("SetAngle",
             (void (StepDimTol_RunoutZoneOrientation::*)( const opencascade::handle<StepBasic_PlaneAngleMeasureWithUnit> & ) ) static_cast<void (StepDimTol_RunoutZoneOrientation::*)( const opencascade::handle<StepBasic_PlaneAngleMeasureWithUnit> & ) >(&StepDimTol_RunoutZoneOrientation::SetAngle),
             R"#(Set field Angle)#"  , py::arg("theAngle"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_RunoutZoneOrientation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_RunoutZoneOrientation::*)() const>(&StepDimTol_RunoutZoneOrientation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_RunoutZoneOrientation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_ShapeToleranceSelect , shared_ptr<StepDimTol_ShapeToleranceSelect> , StepData_SelectType>>(m.attr("StepDimTol_ShapeToleranceSelect"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepDimTol_ShapeToleranceSelect::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepDimTol_ShapeToleranceSelect::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepDimTol_ShapeToleranceSelect::CaseNum),
             R"#(Recognizes a kind of ShapeToleranceSelect select type 1 -> GeometricTolerance from StepDimTol 2 -> PlusMinusTolerance from StepShape 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_SimpleDatumReferenceModifierMember ,opencascade::handle<StepDimTol_SimpleDatumReferenceModifierMember> , StepData_SelectInt>>(m.attr("StepDimTol_SimpleDatumReferenceModifierMember"))
    // constructors
    // custom constructors
    // methods
        .def("HasName",
             (Standard_Boolean (StepDimTol_SimpleDatumReferenceModifierMember::*)() const) static_cast<Standard_Boolean (StepDimTol_SimpleDatumReferenceModifierMember::*)() const>(&StepDimTol_SimpleDatumReferenceModifierMember::HasName),
             R"#(None)#" )
        .def("Name",
             (Standard_CString (StepDimTol_SimpleDatumReferenceModifierMember::*)() const) static_cast<Standard_CString (StepDimTol_SimpleDatumReferenceModifierMember::*)() const>(&StepDimTol_SimpleDatumReferenceModifierMember::Name),
             R"#(None)#" )
        .def("SetName",
             (Standard_Boolean (StepDimTol_SimpleDatumReferenceModifierMember::*)( const Standard_CString ) ) static_cast<Standard_Boolean (StepDimTol_SimpleDatumReferenceModifierMember::*)( const Standard_CString ) >(&StepDimTol_SimpleDatumReferenceModifierMember::SetName),
             R"#(None)#"  , py::arg(""))
        .def("Kind",
             (Standard_Integer (StepDimTol_SimpleDatumReferenceModifierMember::*)() const) static_cast<Standard_Integer (StepDimTol_SimpleDatumReferenceModifierMember::*)() const>(&StepDimTol_SimpleDatumReferenceModifierMember::Kind),
             R"#(None)#" )
        .def("EnumText",
             (Standard_CString (StepDimTol_SimpleDatumReferenceModifierMember::*)() const) static_cast<Standard_CString (StepDimTol_SimpleDatumReferenceModifierMember::*)() const>(&StepDimTol_SimpleDatumReferenceModifierMember::EnumText),
             R"#(None)#" )
        .def("SetEnumText",
             (void (StepDimTol_SimpleDatumReferenceModifierMember::*)( const Standard_Integer , const Standard_CString ) ) static_cast<void (StepDimTol_SimpleDatumReferenceModifierMember::*)( const Standard_Integer , const Standard_CString ) >(&StepDimTol_SimpleDatumReferenceModifierMember::SetEnumText),
             R"#(None)#"  , py::arg("theValue"),  py::arg("theText"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_SimpleDatumReferenceModifierMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_SimpleDatumReferenceModifierMember::*)() const>(&StepDimTol_SimpleDatumReferenceModifierMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_SimpleDatumReferenceModifierMember::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_ToleranceZone ,opencascade::handle<StepDimTol_ToleranceZone> , StepRepr_ShapeAspect>>(m.attr("StepDimTol_ToleranceZone"))
    // constructors
    // custom constructors
    // methods
        .def("DefiningTolerance",
             (opencascade::handle<StepDimTol_HArray1OfToleranceZoneTarget> (StepDimTol_ToleranceZone::*)() const) static_cast<opencascade::handle<StepDimTol_HArray1OfToleranceZoneTarget> (StepDimTol_ToleranceZone::*)() const>(&StepDimTol_ToleranceZone::DefiningTolerance),
             R"#(Returns field DefiningTolerance)#" )
        .def("SetDefiningTolerance",
             (void (StepDimTol_ToleranceZone::*)( const opencascade::handle<StepDimTol_HArray1OfToleranceZoneTarget> & ) ) static_cast<void (StepDimTol_ToleranceZone::*)( const opencascade::handle<StepDimTol_HArray1OfToleranceZoneTarget> & ) >(&StepDimTol_ToleranceZone::SetDefiningTolerance),
             R"#(Set field DefiningTolerance)#"  , py::arg("theDefiningTolerance"))
        .def("NbDefiningTolerances",
             (Standard_Integer (StepDimTol_ToleranceZone::*)() const) static_cast<Standard_Integer (StepDimTol_ToleranceZone::*)() const>(&StepDimTol_ToleranceZone::NbDefiningTolerances),
             R"#(Returns number of Defining Tolerances)#" )
        .def("DefiningToleranceValue",
             (StepDimTol_ToleranceZoneTarget (StepDimTol_ToleranceZone::*)( const Standard_Integer ) const) static_cast<StepDimTol_ToleranceZoneTarget (StepDimTol_ToleranceZone::*)( const Standard_Integer ) const>(&StepDimTol_ToleranceZone::DefiningToleranceValue),
             R"#(Returns Defining Tolerance with the given number)#"  , py::arg("theNum"))
        .def("SetDefiningToleranceValue",
             (void (StepDimTol_ToleranceZone::*)( const Standard_Integer , const StepDimTol_ToleranceZoneTarget & ) ) static_cast<void (StepDimTol_ToleranceZone::*)( const Standard_Integer , const StepDimTol_ToleranceZoneTarget & ) >(&StepDimTol_ToleranceZone::SetDefiningToleranceValue),
             R"#(Sets Defining Tolerance with given number)#"  , py::arg("theNum"),  py::arg("theItem"))
        .def("Form",
             (opencascade::handle<StepDimTol_ToleranceZoneForm> (StepDimTol_ToleranceZone::*)() ) static_cast<opencascade::handle<StepDimTol_ToleranceZoneForm> (StepDimTol_ToleranceZone::*)() >(&StepDimTol_ToleranceZone::Form),
             R"#(Returns field Form)#" )
        .def("SetForm",
             (void (StepDimTol_ToleranceZone::*)( const opencascade::handle<StepDimTol_ToleranceZoneForm> & ) ) static_cast<void (StepDimTol_ToleranceZone::*)( const opencascade::handle<StepDimTol_ToleranceZoneForm> & ) >(&StepDimTol_ToleranceZone::SetForm),
             R"#(Set field Form)#"  , py::arg("theForm"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_ToleranceZone::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_ToleranceZone::*)() const>(&StepDimTol_ToleranceZone::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_ToleranceZone::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_ToleranceZoneDefinition ,opencascade::handle<StepDimTol_ToleranceZoneDefinition> , Standard_Transient>>(m.attr("StepDimTol_ToleranceZoneDefinition"))
    // constructors
    // custom constructors
    // methods
        .def("Boundaries",
             (opencascade::handle<StepRepr_HArray1OfShapeAspect> (StepDimTol_ToleranceZoneDefinition::*)() const) static_cast<opencascade::handle<StepRepr_HArray1OfShapeAspect> (StepDimTol_ToleranceZoneDefinition::*)() const>(&StepDimTol_ToleranceZoneDefinition::Boundaries),
             R"#(Returns field Boundaries)#" )
        .def("SetBoundaries",
             (void (StepDimTol_ToleranceZoneDefinition::*)( const opencascade::handle<StepRepr_HArray1OfShapeAspect> & ) ) static_cast<void (StepDimTol_ToleranceZoneDefinition::*)( const opencascade::handle<StepRepr_HArray1OfShapeAspect> & ) >(&StepDimTol_ToleranceZoneDefinition::SetBoundaries),
             R"#(Set field Boundaries)#"  , py::arg("theBoundaries"))
        .def("NbBoundaries",
             (Standard_Integer (StepDimTol_ToleranceZoneDefinition::*)() const) static_cast<Standard_Integer (StepDimTol_ToleranceZoneDefinition::*)() const>(&StepDimTol_ToleranceZoneDefinition::NbBoundaries),
             R"#(Returns number of Boundaries)#" )
        .def("BoundariesValue",
             (opencascade::handle<StepRepr_ShapeAspect> (StepDimTol_ToleranceZoneDefinition::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepRepr_ShapeAspect> (StepDimTol_ToleranceZoneDefinition::*)( const Standard_Integer ) const>(&StepDimTol_ToleranceZoneDefinition::BoundariesValue),
             R"#(Returns Boundaries with the given number)#"  , py::arg("theNum"))
        .def("SetBoundariesValue",
             (void (StepDimTol_ToleranceZoneDefinition::*)( const Standard_Integer , const opencascade::handle<StepRepr_ShapeAspect> & ) ) static_cast<void (StepDimTol_ToleranceZoneDefinition::*)( const Standard_Integer , const opencascade::handle<StepRepr_ShapeAspect> & ) >(&StepDimTol_ToleranceZoneDefinition::SetBoundariesValue),
             R"#(Sets Boundaries with given number)#"  , py::arg("theNum"),  py::arg("theItem"))
        .def("Zone",
             (opencascade::handle<StepDimTol_ToleranceZone> (StepDimTol_ToleranceZoneDefinition::*)() ) static_cast<opencascade::handle<StepDimTol_ToleranceZone> (StepDimTol_ToleranceZoneDefinition::*)() >(&StepDimTol_ToleranceZoneDefinition::Zone),
             R"#(Returns field Zone)#" )
        .def("SetZone",
             (void (StepDimTol_ToleranceZoneDefinition::*)( const opencascade::handle<StepDimTol_ToleranceZone> & ) ) static_cast<void (StepDimTol_ToleranceZoneDefinition::*)( const opencascade::handle<StepDimTol_ToleranceZone> & ) >(&StepDimTol_ToleranceZoneDefinition::SetZone),
             R"#(Set field Zone)#"  , py::arg("theZone"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_ToleranceZoneDefinition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_ToleranceZoneDefinition::*)() const>(&StepDimTol_ToleranceZoneDefinition::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_ToleranceZoneDefinition::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_ToleranceZoneForm ,opencascade::handle<StepDimTol_ToleranceZoneForm> , Standard_Transient>>(m.attr("StepDimTol_ToleranceZoneForm"))
    // constructors
    // custom constructors
    // methods
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepDimTol_ToleranceZoneForm::*)() ) static_cast<opencascade::handle<TCollection_HAsciiString> (StepDimTol_ToleranceZoneForm::*)() >(&StepDimTol_ToleranceZoneForm::Name),
             R"#(Returns field Name)#" )
        .def("SetName",
             (void (StepDimTol_ToleranceZoneForm::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (StepDimTol_ToleranceZoneForm::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&StepDimTol_ToleranceZoneForm::SetName),
             R"#(Set field Name)#"  , py::arg("theName"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_ToleranceZoneForm::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_ToleranceZoneForm::*)() const>(&StepDimTol_ToleranceZoneForm::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_ToleranceZoneForm::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_ToleranceZoneTarget , shared_ptr<StepDimTol_ToleranceZoneTarget> , StepData_SelectType>>(m.attr("StepDimTol_ToleranceZoneTarget"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepDimTol_ToleranceZoneTarget::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepDimTol_ToleranceZoneTarget::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepDimTol_ToleranceZoneTarget::CaseNum),
             R"#(Recognizes a ToleranceZoneTarget Kind Entity that is : 1 -> DimensionalLocation 2 -> DimensionalSize 3 -> GeometricTolerance 4 -> GeneralDatumReference 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_CylindricityTolerance ,opencascade::handle<StepDimTol_CylindricityTolerance> , StepDimTol_GeometricTolerance>>(m.attr("StepDimTol_CylindricityTolerance"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_CylindricityTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_CylindricityTolerance::*)() const>(&StepDimTol_CylindricityTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_CylindricityTolerance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_DatumReferenceCompartment ,opencascade::handle<StepDimTol_DatumReferenceCompartment> , StepDimTol_GeneralDatumReference>>(m.attr("StepDimTol_DatumReferenceCompartment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_DatumReferenceCompartment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_DatumReferenceCompartment::*)() const>(&StepDimTol_DatumReferenceCompartment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_DatumReferenceCompartment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_DatumReferenceElement ,opencascade::handle<StepDimTol_DatumReferenceElement> , StepDimTol_GeneralDatumReference>>(m.attr("StepDimTol_DatumReferenceElement"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_DatumReferenceElement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_DatumReferenceElement::*)() const>(&StepDimTol_DatumReferenceElement::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_DatumReferenceElement::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_FlatnessTolerance ,opencascade::handle<StepDimTol_FlatnessTolerance> , StepDimTol_GeometricTolerance>>(m.attr("StepDimTol_FlatnessTolerance"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_FlatnessTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_FlatnessTolerance::*)() const>(&StepDimTol_FlatnessTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_FlatnessTolerance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_GeoTolAndGeoTolWthDatRef ,opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRef> , StepDimTol_GeometricTolerance>>(m.attr("StepDimTol_GeoTolAndGeoTolWthDatRef"))
    // constructors
    // custom constructors
    // methods
        .def("SetGeometricToleranceWithDatumReference",
             (void (StepDimTol_GeoTolAndGeoTolWthDatRef::*)( const opencascade::handle<StepDimTol_GeometricToleranceWithDatumReference> & ) ) static_cast<void (StepDimTol_GeoTolAndGeoTolWthDatRef::*)( const opencascade::handle<StepDimTol_GeometricToleranceWithDatumReference> & ) >(&StepDimTol_GeoTolAndGeoTolWthDatRef::SetGeometricToleranceWithDatumReference),
             R"#(None)#"  , py::arg("theGTWDR"))
        .def("GetGeometricToleranceWithDatumReference",
             (opencascade::handle<StepDimTol_GeometricToleranceWithDatumReference> (StepDimTol_GeoTolAndGeoTolWthDatRef::*)() const) static_cast<opencascade::handle<StepDimTol_GeometricToleranceWithDatumReference> (StepDimTol_GeoTolAndGeoTolWthDatRef::*)() const>(&StepDimTol_GeoTolAndGeoTolWthDatRef::GetGeometricToleranceWithDatumReference),
             R"#(None)#" )
        .def("SetGeometricToleranceType",
             (void (StepDimTol_GeoTolAndGeoTolWthDatRef::*)( const StepDimTol_GeometricToleranceType ) ) static_cast<void (StepDimTol_GeoTolAndGeoTolWthDatRef::*)( const StepDimTol_GeometricToleranceType ) >(&StepDimTol_GeoTolAndGeoTolWthDatRef::SetGeometricToleranceType),
             R"#(None)#"  , py::arg("theType"))
        .def("GetToleranceType",
             (StepDimTol_GeometricToleranceType (StepDimTol_GeoTolAndGeoTolWthDatRef::*)() const) static_cast<StepDimTol_GeometricToleranceType (StepDimTol_GeoTolAndGeoTolWthDatRef::*)() const>(&StepDimTol_GeoTolAndGeoTolWthDatRef::GetToleranceType),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_GeoTolAndGeoTolWthDatRef::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_GeoTolAndGeoTolWthDatRef::*)() const>(&StepDimTol_GeoTolAndGeoTolWthDatRef::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_GeoTolAndGeoTolWthDatRef::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod ,opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod> , StepDimTol_GeometricTolerance>>(m.attr("StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod"))
    // constructors
    // custom constructors
    // methods
        .def("SetGeometricToleranceWithDatumReference",
             (void (StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::*)( const opencascade::handle<StepDimTol_GeometricToleranceWithDatumReference> & ) ) static_cast<void (StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::*)( const opencascade::handle<StepDimTol_GeometricToleranceWithDatumReference> & ) >(&StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::SetGeometricToleranceWithDatumReference),
             R"#(None)#"  , py::arg("theGTWDR"))
        .def("GetGeometricToleranceWithDatumReference",
             (opencascade::handle<StepDimTol_GeometricToleranceWithDatumReference> (StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::*)() const) static_cast<opencascade::handle<StepDimTol_GeometricToleranceWithDatumReference> (StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::*)() const>(&StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::GetGeometricToleranceWithDatumReference),
             R"#(None)#" )
        .def("SetGeometricToleranceWithModifiers",
             (void (StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::*)( const opencascade::handle<StepDimTol_GeometricToleranceWithModifiers> & ) ) static_cast<void (StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::*)( const opencascade::handle<StepDimTol_GeometricToleranceWithModifiers> & ) >(&StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::SetGeometricToleranceWithModifiers),
             R"#(None)#"  , py::arg("theGTWM"))
        .def("GetGeometricToleranceWithModifiers",
             (opencascade::handle<StepDimTol_GeometricToleranceWithModifiers> (StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::*)() const) static_cast<opencascade::handle<StepDimTol_GeometricToleranceWithModifiers> (StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::*)() const>(&StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::GetGeometricToleranceWithModifiers),
             R"#(None)#" )
        .def("SetGeometricToleranceType",
             (void (StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::*)( const StepDimTol_GeometricToleranceType ) ) static_cast<void (StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::*)( const StepDimTol_GeometricToleranceType ) >(&StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::SetGeometricToleranceType),
             R"#(None)#"  , py::arg("theType"))
        .def("GetToleranceType",
             (StepDimTol_GeometricToleranceType (StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::*)() const) static_cast<StepDimTol_GeometricToleranceType (StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::*)() const>(&StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::GetToleranceType),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::*)() const>(&StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol ,opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol> , StepDimTol_GeometricTolerance>>(m.attr("StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol::*)() const>(&StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_GeoTolAndGeoTolWthMod ,opencascade::handle<StepDimTol_GeoTolAndGeoTolWthMod> , StepDimTol_GeometricTolerance>>(m.attr("StepDimTol_GeoTolAndGeoTolWthMod"))
    // constructors
    // custom constructors
    // methods
        .def("SetGeometricToleranceWithModifiers",
             (void (StepDimTol_GeoTolAndGeoTolWthMod::*)( const opencascade::handle<StepDimTol_GeometricToleranceWithModifiers> & ) ) static_cast<void (StepDimTol_GeoTolAndGeoTolWthMod::*)( const opencascade::handle<StepDimTol_GeometricToleranceWithModifiers> & ) >(&StepDimTol_GeoTolAndGeoTolWthMod::SetGeometricToleranceWithModifiers),
             R"#(None)#"  , py::arg("theGTWM"))
        .def("GetGeometricToleranceWithModifiers",
             (opencascade::handle<StepDimTol_GeometricToleranceWithModifiers> (StepDimTol_GeoTolAndGeoTolWthMod::*)() const) static_cast<opencascade::handle<StepDimTol_GeometricToleranceWithModifiers> (StepDimTol_GeoTolAndGeoTolWthMod::*)() const>(&StepDimTol_GeoTolAndGeoTolWthMod::GetGeometricToleranceWithModifiers),
             R"#(None)#" )
        .def("SetGeometricToleranceType",
             (void (StepDimTol_GeoTolAndGeoTolWthMod::*)( const StepDimTol_GeometricToleranceType ) ) static_cast<void (StepDimTol_GeoTolAndGeoTolWthMod::*)( const StepDimTol_GeometricToleranceType ) >(&StepDimTol_GeoTolAndGeoTolWthMod::SetGeometricToleranceType),
             R"#(None)#"  , py::arg("theType"))
        .def("GetToleranceType",
             (StepDimTol_GeometricToleranceType (StepDimTol_GeoTolAndGeoTolWthMod::*)() const) static_cast<StepDimTol_GeometricToleranceType (StepDimTol_GeoTolAndGeoTolWthMod::*)() const>(&StepDimTol_GeoTolAndGeoTolWthMod::GetToleranceType),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_GeoTolAndGeoTolWthMod::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_GeoTolAndGeoTolWthMod::*)() const>(&StepDimTol_GeoTolAndGeoTolWthMod::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_GeoTolAndGeoTolWthMod::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_GeometricToleranceWithDatumReference ,opencascade::handle<StepDimTol_GeometricToleranceWithDatumReference> , StepDimTol_GeometricTolerance>>(m.attr("StepDimTol_GeometricToleranceWithDatumReference"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_GeometricToleranceWithDatumReference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_GeometricToleranceWithDatumReference::*)() const>(&StepDimTol_GeometricToleranceWithDatumReference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_GeometricToleranceWithDatumReference::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_GeometricToleranceWithDefinedUnit ,opencascade::handle<StepDimTol_GeometricToleranceWithDefinedUnit> , StepDimTol_GeometricTolerance>>(m.attr("StepDimTol_GeometricToleranceWithDefinedUnit"))
    // constructors
    // custom constructors
    // methods
        .def("UnitSize",
             (opencascade::handle<StepBasic_LengthMeasureWithUnit> (StepDimTol_GeometricToleranceWithDefinedUnit::*)() const) static_cast<opencascade::handle<StepBasic_LengthMeasureWithUnit> (StepDimTol_GeometricToleranceWithDefinedUnit::*)() const>(&StepDimTol_GeometricToleranceWithDefinedUnit::UnitSize),
             R"#(Returns field UnitSize)#" )
        .def("SetUnitSize",
             (void (StepDimTol_GeometricToleranceWithDefinedUnit::*)( const opencascade::handle<StepBasic_LengthMeasureWithUnit> & ) ) static_cast<void (StepDimTol_GeometricToleranceWithDefinedUnit::*)( const opencascade::handle<StepBasic_LengthMeasureWithUnit> & ) >(&StepDimTol_GeometricToleranceWithDefinedUnit::SetUnitSize),
             R"#(Set field UnitSize)#"  , py::arg("theUnitSize"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_GeometricToleranceWithDefinedUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_GeometricToleranceWithDefinedUnit::*)() const>(&StepDimTol_GeometricToleranceWithDefinedUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_GeometricToleranceWithDefinedUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_GeometricToleranceWithModifiers ,opencascade::handle<StepDimTol_GeometricToleranceWithModifiers> , StepDimTol_GeometricTolerance>>(m.attr("StepDimTol_GeometricToleranceWithModifiers"))
    // constructors
    // custom constructors
    // methods
        .def("Modifiers",
             (opencascade::handle<StepDimTol_HArray1OfGeometricToleranceModifier> (StepDimTol_GeometricToleranceWithModifiers::*)() const) static_cast<opencascade::handle<StepDimTol_HArray1OfGeometricToleranceModifier> (StepDimTol_GeometricToleranceWithModifiers::*)() const>(&StepDimTol_GeometricToleranceWithModifiers::Modifiers),
             R"#(Returns field Modifiers)#" )
        .def("SetModifiers",
             (void (StepDimTol_GeometricToleranceWithModifiers::*)( const opencascade::handle<StepDimTol_HArray1OfGeometricToleranceModifier> & ) ) static_cast<void (StepDimTol_GeometricToleranceWithModifiers::*)( const opencascade::handle<StepDimTol_HArray1OfGeometricToleranceModifier> & ) >(&StepDimTol_GeometricToleranceWithModifiers::SetModifiers),
             R"#(Set field Modifiers)#"  , py::arg("theModifiers"))
        .def("NbModifiers",
             (Standard_Integer (StepDimTol_GeometricToleranceWithModifiers::*)() const) static_cast<Standard_Integer (StepDimTol_GeometricToleranceWithModifiers::*)() const>(&StepDimTol_GeometricToleranceWithModifiers::NbModifiers),
             R"#(Returns number of modifiers)#" )
        .def("ModifierValue",
             (StepDimTol_GeometricToleranceModifier (StepDimTol_GeometricToleranceWithModifiers::*)( const Standard_Integer ) const) static_cast<StepDimTol_GeometricToleranceModifier (StepDimTol_GeometricToleranceWithModifiers::*)( const Standard_Integer ) const>(&StepDimTol_GeometricToleranceWithModifiers::ModifierValue),
             R"#(Returns modifier with the given number)#"  , py::arg("theNum"))
        .def("SetModifierValue",
             (void (StepDimTol_GeometricToleranceWithModifiers::*)( const Standard_Integer , const StepDimTol_GeometricToleranceModifier ) ) static_cast<void (StepDimTol_GeometricToleranceWithModifiers::*)( const Standard_Integer , const StepDimTol_GeometricToleranceModifier ) >(&StepDimTol_GeometricToleranceWithModifiers::SetModifierValue),
             R"#(Sets modifier with given number)#"  , py::arg("theNum"),  py::arg("theItem"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_GeometricToleranceWithModifiers::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_GeometricToleranceWithModifiers::*)() const>(&StepDimTol_GeometricToleranceWithModifiers::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_GeometricToleranceWithModifiers::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_LineProfileTolerance ,opencascade::handle<StepDimTol_LineProfileTolerance> , StepDimTol_GeometricTolerance>>(m.attr("StepDimTol_LineProfileTolerance"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_LineProfileTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_LineProfileTolerance::*)() const>(&StepDimTol_LineProfileTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_LineProfileTolerance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_ModifiedGeometricTolerance ,opencascade::handle<StepDimTol_ModifiedGeometricTolerance> , StepDimTol_GeometricTolerance>>(m.attr("StepDimTol_ModifiedGeometricTolerance"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_ModifiedGeometricTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_ModifiedGeometricTolerance::*)() const>(&StepDimTol_ModifiedGeometricTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_ModifiedGeometricTolerance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_NonUniformZoneDefinition ,opencascade::handle<StepDimTol_NonUniformZoneDefinition> , StepDimTol_ToleranceZoneDefinition>>(m.attr("StepDimTol_NonUniformZoneDefinition"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_NonUniformZoneDefinition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_NonUniformZoneDefinition::*)() const>(&StepDimTol_NonUniformZoneDefinition::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_NonUniformZoneDefinition::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_PlacedDatumTargetFeature ,opencascade::handle<StepDimTol_PlacedDatumTargetFeature> , StepDimTol_DatumTarget>>(m.attr("StepDimTol_PlacedDatumTargetFeature"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_PlacedDatumTargetFeature::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_PlacedDatumTargetFeature::*)() const>(&StepDimTol_PlacedDatumTargetFeature::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_PlacedDatumTargetFeature::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_PositionTolerance ,opencascade::handle<StepDimTol_PositionTolerance> , StepDimTol_GeometricTolerance>>(m.attr("StepDimTol_PositionTolerance"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_PositionTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_PositionTolerance::*)() const>(&StepDimTol_PositionTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_PositionTolerance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_ProjectedZoneDefinition ,opencascade::handle<StepDimTol_ProjectedZoneDefinition> , StepDimTol_ToleranceZoneDefinition>>(m.attr("StepDimTol_ProjectedZoneDefinition"))
    // constructors
    // custom constructors
    // methods
        .def("ProjectionEnd",
             (opencascade::handle<StepRepr_ShapeAspect> (StepDimTol_ProjectedZoneDefinition::*)() const) static_cast<opencascade::handle<StepRepr_ShapeAspect> (StepDimTol_ProjectedZoneDefinition::*)() const>(&StepDimTol_ProjectedZoneDefinition::ProjectionEnd),
             R"#(Returns field ProjectionEnd)#" )
        .def("SetProjectionEnd",
             (void (StepDimTol_ProjectedZoneDefinition::*)( const opencascade::handle<StepRepr_ShapeAspect> & ) ) static_cast<void (StepDimTol_ProjectedZoneDefinition::*)( const opencascade::handle<StepRepr_ShapeAspect> & ) >(&StepDimTol_ProjectedZoneDefinition::SetProjectionEnd),
             R"#(Set field ProjectionEnd)#"  , py::arg("theProjectionEnd"))
        .def("ProjectionLength",
             (opencascade::handle<StepBasic_LengthMeasureWithUnit> (StepDimTol_ProjectedZoneDefinition::*)() ) static_cast<opencascade::handle<StepBasic_LengthMeasureWithUnit> (StepDimTol_ProjectedZoneDefinition::*)() >(&StepDimTol_ProjectedZoneDefinition::ProjectionLength),
             R"#(Returns field ProjectionLength)#" )
        .def("SetProjectionLength",
             (void (StepDimTol_ProjectedZoneDefinition::*)( const opencascade::handle<StepBasic_LengthMeasureWithUnit> & ) ) static_cast<void (StepDimTol_ProjectedZoneDefinition::*)( const opencascade::handle<StepBasic_LengthMeasureWithUnit> & ) >(&StepDimTol_ProjectedZoneDefinition::SetProjectionLength),
             R"#(Set field ProjectionLength)#"  , py::arg("theProjectionLength"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_ProjectedZoneDefinition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_ProjectedZoneDefinition::*)() const>(&StepDimTol_ProjectedZoneDefinition::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_ProjectedZoneDefinition::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_RoundnessTolerance ,opencascade::handle<StepDimTol_RoundnessTolerance> , StepDimTol_GeometricTolerance>>(m.attr("StepDimTol_RoundnessTolerance"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_RoundnessTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_RoundnessTolerance::*)() const>(&StepDimTol_RoundnessTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_RoundnessTolerance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_RunoutZoneDefinition ,opencascade::handle<StepDimTol_RunoutZoneDefinition> , StepDimTol_ToleranceZoneDefinition>>(m.attr("StepDimTol_RunoutZoneDefinition"))
    // constructors
    // custom constructors
    // methods
        .def("Orientation",
             (opencascade::handle<StepDimTol_RunoutZoneOrientation> (StepDimTol_RunoutZoneDefinition::*)() const) static_cast<opencascade::handle<StepDimTol_RunoutZoneOrientation> (StepDimTol_RunoutZoneDefinition::*)() const>(&StepDimTol_RunoutZoneDefinition::Orientation),
             R"#(Returns field Orientation)#" )
        .def("SetOrientation",
             (void (StepDimTol_RunoutZoneDefinition::*)( const opencascade::handle<StepDimTol_RunoutZoneOrientation> & ) ) static_cast<void (StepDimTol_RunoutZoneDefinition::*)( const opencascade::handle<StepDimTol_RunoutZoneOrientation> & ) >(&StepDimTol_RunoutZoneDefinition::SetOrientation),
             R"#(Set field Orientation)#"  , py::arg("theOrientation"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_RunoutZoneDefinition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_RunoutZoneDefinition::*)() const>(&StepDimTol_RunoutZoneDefinition::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_RunoutZoneDefinition::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_StraightnessTolerance ,opencascade::handle<StepDimTol_StraightnessTolerance> , StepDimTol_GeometricTolerance>>(m.attr("StepDimTol_StraightnessTolerance"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_StraightnessTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_StraightnessTolerance::*)() const>(&StepDimTol_StraightnessTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_StraightnessTolerance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_SurfaceProfileTolerance ,opencascade::handle<StepDimTol_SurfaceProfileTolerance> , StepDimTol_GeometricTolerance>>(m.attr("StepDimTol_SurfaceProfileTolerance"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_SurfaceProfileTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_SurfaceProfileTolerance::*)() const>(&StepDimTol_SurfaceProfileTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_SurfaceProfileTolerance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_UnequallyDisposedGeometricTolerance ,opencascade::handle<StepDimTol_UnequallyDisposedGeometricTolerance> , StepDimTol_GeometricTolerance>>(m.attr("StepDimTol_UnequallyDisposedGeometricTolerance"))
    // constructors
    // custom constructors
    // methods
        .def("Displacement",
             (opencascade::handle<StepBasic_LengthMeasureWithUnit> (StepDimTol_UnequallyDisposedGeometricTolerance::*)() const) static_cast<opencascade::handle<StepBasic_LengthMeasureWithUnit> (StepDimTol_UnequallyDisposedGeometricTolerance::*)() const>(&StepDimTol_UnequallyDisposedGeometricTolerance::Displacement),
             R"#(Returns field Displacement)#" )
        .def("SetDisplacement",
             (void (StepDimTol_UnequallyDisposedGeometricTolerance::*)( const opencascade::handle<StepBasic_LengthMeasureWithUnit> & ) ) static_cast<void (StepDimTol_UnequallyDisposedGeometricTolerance::*)( const opencascade::handle<StepBasic_LengthMeasureWithUnit> & ) >(&StepDimTol_UnequallyDisposedGeometricTolerance::SetDisplacement),
             R"#(Set field Displacement)#"  , py::arg("theDisplacement"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_UnequallyDisposedGeometricTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_UnequallyDisposedGeometricTolerance::*)() const>(&StepDimTol_UnequallyDisposedGeometricTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_UnequallyDisposedGeometricTolerance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_AngularityTolerance ,opencascade::handle<StepDimTol_AngularityTolerance> , StepDimTol_GeometricToleranceWithDatumReference>>(m.attr("StepDimTol_AngularityTolerance"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_AngularityTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_AngularityTolerance::*)() const>(&StepDimTol_AngularityTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_AngularityTolerance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_CircularRunoutTolerance ,opencascade::handle<StepDimTol_CircularRunoutTolerance> , StepDimTol_GeometricToleranceWithDatumReference>>(m.attr("StepDimTol_CircularRunoutTolerance"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_CircularRunoutTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_CircularRunoutTolerance::*)() const>(&StepDimTol_CircularRunoutTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_CircularRunoutTolerance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_CoaxialityTolerance ,opencascade::handle<StepDimTol_CoaxialityTolerance> , StepDimTol_GeometricToleranceWithDatumReference>>(m.attr("StepDimTol_CoaxialityTolerance"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_CoaxialityTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_CoaxialityTolerance::*)() const>(&StepDimTol_CoaxialityTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_CoaxialityTolerance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_ConcentricityTolerance ,opencascade::handle<StepDimTol_ConcentricityTolerance> , StepDimTol_GeometricToleranceWithDatumReference>>(m.attr("StepDimTol_ConcentricityTolerance"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_ConcentricityTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_ConcentricityTolerance::*)() const>(&StepDimTol_ConcentricityTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_ConcentricityTolerance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol ,opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol> , StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod>>(m.attr("StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol"))
    // constructors
    // custom constructors
    // methods
        .def("SetMaxTolerance",
             (void (StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol::*)( opencascade::handle<StepBasic_LengthMeasureWithUnit> & ) ) static_cast<void (StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol::*)( opencascade::handle<StepBasic_LengthMeasureWithUnit> & ) >(&StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol::SetMaxTolerance),
             R"#(None)#"  , py::arg("theMaxTol"))
        .def("GetMaxTolerance",
             (opencascade::handle<StepBasic_LengthMeasureWithUnit> (StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol::*)() ) static_cast<opencascade::handle<StepBasic_LengthMeasureWithUnit> (StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol::*)() >(&StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol::GetMaxTolerance),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol::*)() const>(&StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol ,opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol> , StepDimTol_GeoTolAndGeoTolWthDatRef>>(m.attr("StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol"))
    // constructors
    // custom constructors
    // methods
        .def("SetUnequallyDisposedGeometricTolerance",
             (void (StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol::*)( const opencascade::handle<StepDimTol_UnequallyDisposedGeometricTolerance> & ) ) static_cast<void (StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol::*)( const opencascade::handle<StepDimTol_UnequallyDisposedGeometricTolerance> & ) >(&StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol::SetUnequallyDisposedGeometricTolerance),
             R"#(None)#"  , py::arg("theUDGT"))
        .def("GetUnequallyDisposedGeometricTolerance",
             (opencascade::handle<StepDimTol_UnequallyDisposedGeometricTolerance> (StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol::*)() const) static_cast<opencascade::handle<StepDimTol_UnequallyDisposedGeometricTolerance> (StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol::*)() const>(&StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol::GetUnequallyDisposedGeometricTolerance),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol::*)() const>(&StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_GeoTolAndGeoTolWthMaxTol ,opencascade::handle<StepDimTol_GeoTolAndGeoTolWthMaxTol> , StepDimTol_GeoTolAndGeoTolWthMod>>(m.attr("StepDimTol_GeoTolAndGeoTolWthMaxTol"))
    // constructors
    // custom constructors
    // methods
        .def("SetMaxTolerance",
             (void (StepDimTol_GeoTolAndGeoTolWthMaxTol::*)( opencascade::handle<StepBasic_LengthMeasureWithUnit> & ) ) static_cast<void (StepDimTol_GeoTolAndGeoTolWthMaxTol::*)( opencascade::handle<StepBasic_LengthMeasureWithUnit> & ) >(&StepDimTol_GeoTolAndGeoTolWthMaxTol::SetMaxTolerance),
             R"#(None)#"  , py::arg("theMaxTol"))
        .def("GetMaxTolerance",
             (opencascade::handle<StepBasic_LengthMeasureWithUnit> (StepDimTol_GeoTolAndGeoTolWthMaxTol::*)() ) static_cast<opencascade::handle<StepBasic_LengthMeasureWithUnit> (StepDimTol_GeoTolAndGeoTolWthMaxTol::*)() >(&StepDimTol_GeoTolAndGeoTolWthMaxTol::GetMaxTolerance),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_GeoTolAndGeoTolWthMaxTol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_GeoTolAndGeoTolWthMaxTol::*)() const>(&StepDimTol_GeoTolAndGeoTolWthMaxTol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_GeoTolAndGeoTolWthMaxTol::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_GeometricToleranceWithDefinedAreaUnit ,opencascade::handle<StepDimTol_GeometricToleranceWithDefinedAreaUnit> , StepDimTol_GeometricToleranceWithDefinedUnit>>(m.attr("StepDimTol_GeometricToleranceWithDefinedAreaUnit"))
    // constructors
    // custom constructors
    // methods
        .def("AreaType",
             (StepDimTol_AreaUnitType (StepDimTol_GeometricToleranceWithDefinedAreaUnit::*)() const) static_cast<StepDimTol_AreaUnitType (StepDimTol_GeometricToleranceWithDefinedAreaUnit::*)() const>(&StepDimTol_GeometricToleranceWithDefinedAreaUnit::AreaType),
             R"#(Returns field AreaType)#" )
        .def("SetAreaType",
             (void (StepDimTol_GeometricToleranceWithDefinedAreaUnit::*)( const StepDimTol_AreaUnitType ) ) static_cast<void (StepDimTol_GeometricToleranceWithDefinedAreaUnit::*)( const StepDimTol_AreaUnitType ) >(&StepDimTol_GeometricToleranceWithDefinedAreaUnit::SetAreaType),
             R"#(Set field AreaType)#"  , py::arg("theAreaType"))
        .def("SecondUnitSize",
             (opencascade::handle<StepBasic_LengthMeasureWithUnit> (StepDimTol_GeometricToleranceWithDefinedAreaUnit::*)() const) static_cast<opencascade::handle<StepBasic_LengthMeasureWithUnit> (StepDimTol_GeometricToleranceWithDefinedAreaUnit::*)() const>(&StepDimTol_GeometricToleranceWithDefinedAreaUnit::SecondUnitSize),
             R"#(Returns field SecondUnitSize)#" )
        .def("SetSecondUnitSize",
             (void (StepDimTol_GeometricToleranceWithDefinedAreaUnit::*)( const opencascade::handle<StepBasic_LengthMeasureWithUnit> & ) ) static_cast<void (StepDimTol_GeometricToleranceWithDefinedAreaUnit::*)( const opencascade::handle<StepBasic_LengthMeasureWithUnit> & ) >(&StepDimTol_GeometricToleranceWithDefinedAreaUnit::SetSecondUnitSize),
             R"#(Set field SecondUnitSize)#"  , py::arg("theSecondUnitSize"))
        .def("HasSecondUnitSize",
             (Standard_Boolean (StepDimTol_GeometricToleranceWithDefinedAreaUnit::*)() const) static_cast<Standard_Boolean (StepDimTol_GeometricToleranceWithDefinedAreaUnit::*)() const>(&StepDimTol_GeometricToleranceWithDefinedAreaUnit::HasSecondUnitSize),
             R"#(Indicates if SecondUnitSize field exist)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_GeometricToleranceWithDefinedAreaUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_GeometricToleranceWithDefinedAreaUnit::*)() const>(&StepDimTol_GeometricToleranceWithDefinedAreaUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_GeometricToleranceWithDefinedAreaUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_GeometricToleranceWithMaximumTolerance ,opencascade::handle<StepDimTol_GeometricToleranceWithMaximumTolerance> , StepDimTol_GeometricToleranceWithModifiers>>(m.attr("StepDimTol_GeometricToleranceWithMaximumTolerance"))
    // constructors
    // custom constructors
    // methods
        .def("MaximumUpperTolerance",
             (opencascade::handle<StepBasic_LengthMeasureWithUnit> (StepDimTol_GeometricToleranceWithMaximumTolerance::*)() const) static_cast<opencascade::handle<StepBasic_LengthMeasureWithUnit> (StepDimTol_GeometricToleranceWithMaximumTolerance::*)() const>(&StepDimTol_GeometricToleranceWithMaximumTolerance::MaximumUpperTolerance),
             R"#(Returns field MaximumUpperTolerance)#" )
        .def("SetMaximumUpperTolerance",
             (void (StepDimTol_GeometricToleranceWithMaximumTolerance::*)( const opencascade::handle<StepBasic_LengthMeasureWithUnit> & ) ) static_cast<void (StepDimTol_GeometricToleranceWithMaximumTolerance::*)( const opencascade::handle<StepBasic_LengthMeasureWithUnit> & ) >(&StepDimTol_GeometricToleranceWithMaximumTolerance::SetMaximumUpperTolerance),
             R"#(Set field MaximumUpperTolerance)#"  , py::arg("theMaximumUpperTolerance"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_GeometricToleranceWithMaximumTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_GeometricToleranceWithMaximumTolerance::*)() const>(&StepDimTol_GeometricToleranceWithMaximumTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_GeometricToleranceWithMaximumTolerance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_ParallelismTolerance ,opencascade::handle<StepDimTol_ParallelismTolerance> , StepDimTol_GeometricToleranceWithDatumReference>>(m.attr("StepDimTol_ParallelismTolerance"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_ParallelismTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_ParallelismTolerance::*)() const>(&StepDimTol_ParallelismTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_ParallelismTolerance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_PerpendicularityTolerance ,opencascade::handle<StepDimTol_PerpendicularityTolerance> , StepDimTol_GeometricToleranceWithDatumReference>>(m.attr("StepDimTol_PerpendicularityTolerance"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_PerpendicularityTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_PerpendicularityTolerance::*)() const>(&StepDimTol_PerpendicularityTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_PerpendicularityTolerance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_SymmetryTolerance ,opencascade::handle<StepDimTol_SymmetryTolerance> , StepDimTol_GeometricToleranceWithDatumReference>>(m.attr("StepDimTol_SymmetryTolerance"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_SymmetryTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_SymmetryTolerance::*)() const>(&StepDimTol_SymmetryTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_SymmetryTolerance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepDimTol_TotalRunoutTolerance ,opencascade::handle<StepDimTol_TotalRunoutTolerance> , StepDimTol_GeometricToleranceWithDatumReference>>(m.attr("StepDimTol_TotalRunoutTolerance"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepDimTol_TotalRunoutTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepDimTol_TotalRunoutTolerance::*)() const>(&StepDimTol_TotalRunoutTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepDimTol_TotalRunoutTolerance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol.hxx
// ./opencascade/StepDimTol_Array1OfDatumReferenceCompartment.hxx
// ./opencascade/StepDimTol_HArray1OfDatumReference.hxx
// ./opencascade/StepDimTol_CommonDatum.hxx
// ./opencascade/StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol.hxx
// ./opencascade/StepDimTol_HArray1OfDatumReferenceElement.hxx
// ./opencascade/StepDimTol_Array1OfDatumReferenceModifier.hxx
// ./opencascade/StepDimTol_HArray1OfDatumReferenceModifier.hxx
// ./opencascade/StepDimTol_GeometricToleranceWithModifiers.hxx
// ./opencascade/StepDimTol_RoundnessTolerance.hxx
// ./opencascade/StepDimTol_HArray1OfDatumSystemOrReference.hxx
// ./opencascade/StepDimTol_AngularityTolerance.hxx
// ./opencascade/StepDimTol_DatumReferenceModifierWithValue.hxx
// ./opencascade/StepDimTol_DatumTarget.hxx
// ./opencascade/StepDimTol_PerpendicularityTolerance.hxx
// ./opencascade/StepDimTol_StraightnessTolerance.hxx
// ./opencascade/StepDimTol_DatumOrCommonDatum.hxx
// ./opencascade/StepDimTol_GeometricToleranceRelationship.hxx
// ./opencascade/StepDimTol_GeometricTolerance.hxx
// ./opencascade/StepDimTol_GeometricToleranceWithDatumReference.hxx
// ./opencascade/StepDimTol_SymmetryTolerance.hxx
// ./opencascade/StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod.hxx
// ./opencascade/StepDimTol_ParallelismTolerance.hxx
// ./opencascade/StepDimTol_DatumReferenceElement.hxx
// ./opencascade/StepDimTol_LimitCondition.hxx
// ./opencascade/StepDimTol_Array1OfDatumSystemOrReference.hxx
// ./opencascade/StepDimTol_PlacedDatumTargetFeature.hxx
// ./opencascade/StepDimTol_ToleranceZone.hxx
// ./opencascade/StepDimTol_CylindricityTolerance.hxx
// ./opencascade/StepDimTol_DatumSystemOrReference.hxx
// ./opencascade/StepDimTol_DatumReferenceModifierType.hxx
// ./opencascade/StepDimTol_DatumReferenceCompartment.hxx
// ./opencascade/StepDimTol_GeometricToleranceWithDefinedUnit.hxx
// ./opencascade/StepDimTol_HArray1OfToleranceZoneTarget.hxx
// ./opencascade/StepDimTol_NonUniformZoneDefinition.hxx
// ./opencascade/StepDimTol_TotalRunoutTolerance.hxx
// ./opencascade/StepDimTol_GeoTolAndGeoTolWthMod.hxx
// ./opencascade/StepDimTol_ConcentricityTolerance.hxx
// ./opencascade/StepDimTol_AreaUnitType.hxx
// ./opencascade/StepDimTol_DatumFeature.hxx
// ./opencascade/StepDimTol_UnequallyDisposedGeometricTolerance.hxx
// ./opencascade/StepDimTol_FlatnessTolerance.hxx
// ./opencascade/StepDimTol_SimpleDatumReferenceModifierMember.hxx
// ./opencascade/StepDimTol_SurfaceProfileTolerance.hxx
// ./opencascade/StepDimTol_LineProfileTolerance.hxx
// ./opencascade/StepDimTol_DatumReference.hxx
// ./opencascade/StepDimTol_RunoutZoneDefinition.hxx
// ./opencascade/StepDimTol_GeometricToleranceType.hxx
// ./opencascade/StepDimTol_CoaxialityTolerance.hxx
// ./opencascade/StepDimTol_GeneralDatumReference.hxx
// ./opencascade/StepDimTol_GeoTolAndGeoTolWthMaxTol.hxx
// ./opencascade/StepDimTol_ToleranceZoneForm.hxx
// ./opencascade/StepDimTol_ProjectedZoneDefinition.hxx
// ./opencascade/StepDimTol_GeometricToleranceTarget.hxx
// ./opencascade/StepDimTol_HArray1OfDatumReferenceCompartment.hxx
// ./opencascade/StepDimTol_DatumSystem.hxx
// ./opencascade/StepDimTol_GeometricToleranceWithMaximumTolerance.hxx
// ./opencascade/StepDimTol_Array1OfGeometricToleranceModifier.hxx
// ./opencascade/StepDimTol_CircularRunoutTolerance.hxx
// ./opencascade/StepDimTol_GeometricToleranceWithDefinedAreaUnit.hxx
// ./opencascade/StepDimTol_SimpleDatumReferenceModifier.hxx
// ./opencascade/StepDimTol_Array1OfDatumReference.hxx
// ./opencascade/StepDimTol_ToleranceZoneTarget.hxx
// ./opencascade/StepDimTol_RunoutZoneOrientation.hxx
// ./opencascade/StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol.hxx
// ./opencascade/StepDimTol_GeometricToleranceModifier.hxx
// ./opencascade/StepDimTol_PositionTolerance.hxx
// ./opencascade/StepDimTol_Datum.hxx
// ./opencascade/StepDimTol_ShapeToleranceSelect.hxx
// ./opencascade/StepDimTol_HArray1OfGeometricToleranceModifier.hxx
// ./opencascade/StepDimTol_ModifiedGeometricTolerance.hxx
// ./opencascade/StepDimTol_GeoTolAndGeoTolWthDatRef.hxx
// ./opencascade/StepDimTol_Array1OfDatumReferenceElement.hxx
// ./opencascade/StepDimTol_Array1OfToleranceZoneTarget.hxx
// ./opencascade/StepDimTol_ToleranceZoneDefinition.hxx
// ./opencascade/StepDimTol_DatumReferenceModifier.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<StepDimTol_DatumReferenceCompartment> >(m,"StepDimTol_Array1OfDatumReferenceCompartment");
    register_template_NCollection_Array1<StepDimTol_DatumReferenceModifier>(m,"StepDimTol_Array1OfDatumReferenceModifier");
    register_template_NCollection_Array1<StepDimTol_DatumSystemOrReference>(m,"StepDimTol_Array1OfDatumSystemOrReference");
    register_template_NCollection_Array1<StepDimTol_GeometricToleranceModifier>(m,"StepDimTol_Array1OfGeometricToleranceModifier");
    register_template_NCollection_Array1<opencascade::handle<StepDimTol_DatumReference> >(m,"StepDimTol_Array1OfDatumReference");
    register_template_NCollection_Array1<opencascade::handle<StepDimTol_DatumReferenceElement> >(m,"StepDimTol_Array1OfDatumReferenceElement");
    register_template_NCollection_Array1<StepDimTol_ToleranceZoneTarget>(m,"StepDimTol_Array1OfToleranceZoneTarget");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
