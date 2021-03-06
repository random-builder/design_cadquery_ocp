
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <PrsMgr_PresentationManager.hxx>
#include <PrsMgr_PresentableObject.hxx>
#include <Prs3d_Drawer.hxx>
#include <Graphic3d_DataStructureManager.hxx>
#include <Prs3d_Projector.hxx>
#include <PrsMgr_PresentationManager.hxx>
#include <PrsMgr_Presentation.hxx>
#include <PrsMgr_PresentableObject.hxx>
#include <Prs3d_Drawer.hxx>
#include <PrsMgr_Presentation.hxx>
#include <PrsMgr_PresentableObject.hxx>
#include <V3d_Viewer.hxx>

// module includes
#include <PrsMgr_ListOfPresentableObjects.hxx>
#include <PrsMgr_ListOfPresentations.hxx>
#include <PrsMgr_PresentableObject.hxx>
#include <PrsMgr_Presentation.hxx>
#include <PrsMgr_Presentation3d.hxx>
#include <PrsMgr_PresentationManager.hxx>
#include <PrsMgr_PresentationManager3d.hxx>
#include <PrsMgr_Presentations.hxx>
#include <PrsMgr_TypeOfPresentation3d.hxx>

// template related includes
// ./opencascade/PrsMgr_Presentations.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/PrsMgr_ListOfPresentableObjects.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/PrsMgr_ListOfPresentableObjects.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/PrsMgr_ListOfPresentations.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_PrsMgr_enums(py::module &main_module) {


py::module m = main_module.def_submodule("PrsMgr", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<PrsMgr_TypeOfPresentation3d>(m, "PrsMgr_TypeOfPresentation3d",R"#(To declare the type of presentation as follows - AllView for display involving no recalculation for new projectors (points of view)in hidden line removal mode - ProjectorDependant for display in hidden line removal mode, where every new point of view entails recalculation of the display.)#")
        .value("PrsMgr_TOP_AllView",PrsMgr_TypeOfPresentation3d::PrsMgr_TOP_AllView)
        .value("PrsMgr_TOP_ProjectorDependant",PrsMgr_TypeOfPresentation3d::PrsMgr_TOP_ProjectorDependant).export_values();

//Python trampoline classes
    class Py_PrsMgr_PresentableObject : public PrsMgr_PresentableObject{
    public:
        using PrsMgr_PresentableObject::PrsMgr_PresentableObject;


        // public pure virtual


        // protected pure virtual
        void Compute(const opencascade::handle<PrsMgr_PresentationManager> & thePrsMgr,const opencascade::handle<Prs3d_Presentation> & thePrs,const Standard_Integer theMode) override { PYBIND11_OVERLOAD_PURE(void,PrsMgr_PresentableObject,Compute,thePrsMgr,thePrs,theMode) };


        // private pure virtual

    };

// pre-register typdefs
    preregister_template_NCollection_Sequence<opencascade::handle<PrsMgr_Presentation> >(m,"PrsMgr_Presentations");
    preregister_template_NCollection_List<opencascade::handle<PrsMgr_PresentableObject> >(m,"PrsMgr_ListOfPresentableObjects");
    preregister_template_NCollection_List<opencascade::handle<Prs3d_Presentation> >(m,"PrsMgr_ListOfPresentations");

// classes forward declarations only
    py::class_<PrsMgr_PresentableObject ,opencascade::handle<PrsMgr_PresentableObject>,Py_PrsMgr_PresentableObject , Standard_Transient>(m,"PrsMgr_PresentableObject",R"#(A framework to supply the Graphic3d structure of the object to be presented. On the first display request, this structure is created by calling the appropriate algorithm and retaining this framework for further display. This abstract framework is inherited in Application Interactive Services (AIS), notably by AIS_InteractiveObject. Consequently, 3D presentation should be handled by the relevant daughter classes and their member functions in AIS. This is particularly true in the creation of new interactive objects.A framework to supply the Graphic3d structure of the object to be presented. On the first display request, this structure is created by calling the appropriate algorithm and retaining this framework for further display. This abstract framework is inherited in Application Interactive Services (AIS), notably by AIS_InteractiveObject. Consequently, 3D presentation should be handled by the relevant daughter classes and their member functions in AIS. This is particularly true in the creation of new interactive objects.)#");
    py::class_<PrsMgr_Presentation ,opencascade::handle<PrsMgr_Presentation> , Graphic3d_Structure>(m,"PrsMgr_Presentation",R"#()#");
    py::class_<PrsMgr_PresentationManager ,opencascade::handle<PrsMgr_PresentationManager> , Standard_Transient>(m,"PrsMgr_PresentationManager",R"#(A framework to manage 3D displays, graphic entities and their updates. Used in the AIS package (Application Interactive Services), to enable the advanced user to define the default display mode of a new interactive object which extends the list of signatures and types. Definition of new display types is handled by calling the presentation algorithms provided by the StdPrs package.A framework to manage 3D displays, graphic entities and their updates. Used in the AIS package (Application Interactive Services), to enable the advanced user to define the default display mode of a new interactive object which extends the list of signatures and types. Definition of new display types is handled by calling the presentation algorithms provided by the StdPrs package.)#");

};

// user-defined post-inclusion per module

// user-defined post
