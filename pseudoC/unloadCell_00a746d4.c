// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unloadCell
// Entry Point: 00a746d4
// Size: 68 bytes
// Signature: undefined __thiscall unloadCell(TerrainLayerTransformGroup * this, GridCellSharedData * param_1)


/* TerrainLayerTransformGroup::unloadCell(LocalGeometryTransformGroup::GridCellSharedData const*) */

void __thiscall
TerrainLayerTransformGroup::unloadCell(TerrainLayerTransformGroup *this,GridCellSharedData *param_1)

{
  GsShape *this_00;
  
  this_00 = *(GsShape **)param_1;
  if (this_00 != (GsShape *)0x0) {
    GsShape::raiseShapeFlag(this_00,0x400);
    TerrainDetailGeometry::setNumIndicesAndVertices
              (*(TerrainDetailGeometry **)(this_00 + 0x170),0,0);
    return;
  }
  return;
}


