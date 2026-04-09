// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCellSharedData
// Entry Point: 00a6ac48
// Size: 8 bytes
// Signature: undefined __thiscall setCellSharedData(FoliageCellGeometry * this, GridCellSharedData * param_1, IStructBuffer * param_2)


/* FoliageCellGeometry::setCellSharedData(LocalGeometryTransformGroup::GridCellSharedData const*,
   IStructBuffer*) */

void __thiscall
FoliageCellGeometry::setCellSharedData
          (FoliageCellGeometry *this,GridCellSharedData *param_1,IStructBuffer *param_2)

{
  *(GridCellSharedData **)(this + 0x60) = param_1;
  *(IStructBuffer **)(this + 0x68) = param_2;
  return;
}


