#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Standard_NoMoreObject.hxx>
#include <TopOpeBRepBuild_BlockBuilder.hxx>
#include <TopOpeBRepBuild_WireEdgeSet.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopOpeBRepTool_ShapeClassifier.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopOpeBRepBuild_ShellFaceSet.hxx>
#include <TopOpeBRepBuild_ShapeSet.hxx>
#include <TopOpeBRepBuild_ShapeSet.hxx>
#include <TopOpeBRepBuild_BlockIterator.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopOpeBRepBuild_WireEdgeSet.hxx>
#include <TopOpeBRepBuild_ShapeSet.hxx>
#include <TopOpeBRepBuild_Builder.hxx>
#include <TopOpeBRepBuild_GTopo.hxx>
#include <TopOpeBRepBuild_GTopo.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <TopOpeBRepTool_ShapeExplorer.hxx>
#include <TopOpeBRepBuild_ShapeSet.hxx>
#include <TopOpeBRepBuild_EdgeBuilder.hxx>
#include <TopOpeBRepBuild_FaceBuilder.hxx>
#include <TopOpeBRepBuild_SolidBuilder.hxx>
#include <TopOpeBRepBuild_WireEdgeSet.hxx>
#include <TopOpeBRepDS_PointIterator.hxx>
#include <TopOpeBRepBuild_PaveSet.hxx>
#include <TopOpeBRepBuild_GTopo.hxx>
#include <TopOpeBRepBuild_ShellFaceSet.hxx>
#include <TopOpeBRepDS_SurfaceIterator.hxx>
#include <TopOpeBRepDS_CurveIterator.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopoDS_Edge.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom2d_Curve.hxx>
#include <Bnd_Box2d.hxx>
#include <TopOpeBRepBuild_BlockBuilder.hxx>
#include <TopOpeBRepBuild_Loop.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRepBuild_PaveSet.hxx>
#include <TopOpeBRepBuild_PaveClassifier.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopOpeBRepBuild_Loop.hxx>
#include <TopOpeBRepBuild_BlockBuilder.hxx>
#include <TopOpeBRepBuild_Loop.hxx>
#include <TopOpeBRepBuild_GTopo.hxx>
#include <TopOpeBRepBuild_Loop.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepBuild_GTopo.hxx>
#include <TopOpeBRepBuild_ShellFaceSet.hxx>
#include <TopOpeBRepBuild_WireEdgeSet.hxx>
#include <TopOpeBRepBuild_PaveSet.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopOpeBRepBuild_PaveSet.hxx>
#include <TopOpeBRepBuild_PaveClassifier.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopoDS_Wire.hxx>

// module includes
#include <TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape.hxx>
#include <TopOpeBRepBuild_kpresu.hxx>
#include <TopOpeBRepBuild_BlockIterator.hxx>
#include <TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape.hxx>
#include <TopOpeBRepBuild_ShellFaceClassifier.hxx>
#include <TopOpeBRepBuild_PaveSet.hxx>
#include <TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo.hxx>
#include <TopOpeBRepBuild_ListOfPave.hxx>
#include <TopOpeBRepBuild_Pave.hxx>
#include <TopOpeBRepBuild_PWireEdgeSet.hxx>
#include <TopOpeBRepBuild_ShellToSolid.hxx>
#include <TopOpeBRepBuild_Tools.hxx>
#include <TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeListOfShapeListOfShape.hxx>
#include <TopOpeBRepBuild_Loop.hxx>
#include <TopOpeBRepBuild_Area3dBuilder.hxx>
#include <TopOpeBRepBuild_WireToFace.hxx>
#include <TopOpeBRepBuild_FaceAreaBuilder.hxx>
#include <TopOpeBRepBuild_SolidBuilder.hxx>
#include <TopOpeBRepBuild_BlockBuilder.hxx>
#include <TopOpeBRepBuild_Area2dBuilder.hxx>
#include <TopOpeBRepBuild_FaceBuilder.hxx>
#include <TopOpeBRepBuild_PBuilder.hxx>
#include <TopOpeBRepBuild_FuseFace.hxx>
#include <TopOpeBRepBuild_PGTopo.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_ListOfLoop.hxx>
#include <TopOpeBRepBuild_GIter.hxx>
#include <TopOpeBRepBuild_Builder.hxx>
#include <TopOpeBRepBuild_SolidAreaBuilder.hxx>
#include <TopOpeBRepBuild_GTopo.hxx>
#include <TopOpeBRepBuild_ListIteratorOfListOfListOfLoop.hxx>
#include <TopOpeBRepBuild_WireEdgeSet.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <TopOpeBRepBuild_define.hxx>
#include <TopOpeBRepBuild_VertexInfo.hxx>
#include <TopOpeBRepBuild_CorrectFace2d.hxx>
#include <TopOpeBRepBuild_CompositeClassifier.hxx>
#include <TopOpeBRepBuild_ShapeListOfShape.hxx>
#include <TopOpeBRepBuild_ShellFaceSet.hxx>
#include <TopOpeBRepBuild_ListIteratorOfListOfLoop.hxx>
#include <TopOpeBRepBuild_EdgeBuilder.hxx>
#include <TopOpeBRepBuild_ListIteratorOfListOfPave.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopOpeBRepBuild_ListOfListOfLoop.hxx>
#include <TopOpeBRepBuild_WireEdgeClassifier.hxx>
#include <TopOpeBRepBuild_GTool.hxx>
#include <TopOpeBRepBuild_PaveClassifier.hxx>
#include <TopOpeBRepBuild_Builder1.hxx>
#include <TopOpeBRepBuild_AreaBuilder.hxx>
#include <TopOpeBRepBuild_BuilderON.hxx>
#include <TopOpeBRepBuild_ShapeSet.hxx>
#include <TopOpeBRepBuild_LoopEnum.hxx>
#include <TopOpeBRepBuild_Area1dBuilder.hxx>
#include <TopOpeBRepBuild_Tools2d.hxx>
#include <TopOpeBRepBuild_ListOfShapeListOfShape.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape.hxx
// ./opencascade/TopOpeBRepBuild_kpresu.hxx
// ./opencascade/TopOpeBRepBuild_BlockIterator.hxx
// ./opencascade/TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape.hxx
// ./opencascade/TopOpeBRepBuild_ShellFaceClassifier.hxx
// ./opencascade/TopOpeBRepBuild_PaveSet.hxx
// ./opencascade/TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo.hxx
// ./opencascade/TopOpeBRepBuild_ListOfPave.hxx
// ./opencascade/TopOpeBRepBuild_Pave.hxx
// ./opencascade/TopOpeBRepBuild_PWireEdgeSet.hxx
// ./opencascade/TopOpeBRepBuild_ShellToSolid.hxx
// ./opencascade/TopOpeBRepBuild_Tools.hxx
// ./opencascade/TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeListOfShapeListOfShape.hxx
// ./opencascade/TopOpeBRepBuild_Loop.hxx
// ./opencascade/TopOpeBRepBuild_Area3dBuilder.hxx
// ./opencascade/TopOpeBRepBuild_WireToFace.hxx
// ./opencascade/TopOpeBRepBuild_FaceAreaBuilder.hxx
// ./opencascade/TopOpeBRepBuild_SolidBuilder.hxx
// ./opencascade/TopOpeBRepBuild_BlockBuilder.hxx
// ./opencascade/TopOpeBRepBuild_Area2dBuilder.hxx
// ./opencascade/TopOpeBRepBuild_FaceBuilder.hxx
// ./opencascade/TopOpeBRepBuild_PBuilder.hxx
// ./opencascade/TopOpeBRepBuild_FuseFace.hxx
// ./opencascade/TopOpeBRepBuild_PGTopo.hxx
// ./opencascade/TopOpeBRepBuild_LoopSet.hxx
// ./opencascade/TopOpeBRepBuild_ListOfLoop.hxx
// ./opencascade/TopOpeBRepBuild_GIter.hxx
// ./opencascade/TopOpeBRepBuild_Builder.hxx
// ./opencascade/TopOpeBRepBuild_SolidAreaBuilder.hxx
// ./opencascade/TopOpeBRepBuild_GTopo.hxx
// ./opencascade/TopOpeBRepBuild_ListIteratorOfListOfListOfLoop.hxx
// ./opencascade/TopOpeBRepBuild_WireEdgeSet.hxx
// ./opencascade/TopOpeBRepBuild_HBuilder.hxx
// ./opencascade/TopOpeBRepBuild_define.hxx
// ./opencascade/TopOpeBRepBuild_VertexInfo.hxx
// ./opencascade/TopOpeBRepBuild_CorrectFace2d.hxx
// ./opencascade/TopOpeBRepBuild_CompositeClassifier.hxx
// ./opencascade/TopOpeBRepBuild_ShapeListOfShape.hxx
// ./opencascade/TopOpeBRepBuild_ShellFaceSet.hxx
// ./opencascade/TopOpeBRepBuild_ListIteratorOfListOfLoop.hxx
// ./opencascade/TopOpeBRepBuild_EdgeBuilder.hxx
// ./opencascade/TopOpeBRepBuild_ListIteratorOfListOfPave.hxx
// ./opencascade/TopOpeBRepBuild_LoopClassifier.hxx
// ./opencascade/TopOpeBRepBuild_ListOfListOfLoop.hxx
// ./opencascade/TopOpeBRepBuild_WireEdgeClassifier.hxx
// ./opencascade/TopOpeBRepBuild_GTool.hxx
// ./opencascade/TopOpeBRepBuild_PaveClassifier.hxx
// ./opencascade/TopOpeBRepBuild_Builder1.hxx
// ./opencascade/TopOpeBRepBuild_AreaBuilder.hxx
// ./opencascade/TopOpeBRepBuild_BuilderON.hxx
// ./opencascade/TopOpeBRepBuild_ShapeSet.hxx
// ./opencascade/TopOpeBRepBuild_LoopEnum.hxx
// ./opencascade/TopOpeBRepBuild_Area1dBuilder.hxx
// ./opencascade/TopOpeBRepBuild_Tools2d.hxx
// ./opencascade/TopOpeBRepBuild_ListOfShapeListOfShape.hxx

// user-defined post