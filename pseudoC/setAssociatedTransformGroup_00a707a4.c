// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAssociatedTransformGroup
// Entry Point: 00a707a4
// Size: 8 bytes
// Signature: undefined __thiscall setAssociatedTransformGroup(TerrainDataPlane * this, TerrainDetailTransformGroup * param_1)


/* TerrainDataPlane::setAssociatedTransformGroup(TerrainDetailTransformGroup*) */

void __thiscall
TerrainDataPlane::setAssociatedTransformGroup
          (TerrainDataPlane *this,TerrainDetailTransformGroup *param_1)

{
  *(TerrainDetailTransformGroup **)(this + 0x48) = param_1;
  return;
}


