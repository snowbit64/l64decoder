// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveToDesc
// Entry Point: 00a710fc
// Size: 52 bytes
// Signature: undefined __thiscall saveToDesc(TerrainDetailTransformGroup * this, TerrainDetailTransformGroupDesc * param_1)


/* TerrainDetailTransformGroup::saveToDesc(TerrainDetailTransformGroupDesc&) */

void __thiscall
TerrainDetailTransformGroup::saveToDesc
          (TerrainDetailTransformGroup *this,TerrainDetailTransformGroupDesc *param_1)

{
  TerrainDataPlane *this_00;
  
  LocalGeometryTransformGroup::saveToDesc
            ((LocalGeometryTransformGroup *)this,(LocalGeometryTransformGroupDesc *)param_1);
  this_00 = *(TerrainDataPlane **)(this + 0x200);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(this + 0x218);
  TerrainDataPlane::saveToDesc(this_00,param_1);
  return;
}


