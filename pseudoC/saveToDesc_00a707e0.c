// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveToDesc
// Entry Point: 00a707e0
// Size: 24 bytes
// Signature: undefined __thiscall saveToDesc(TerrainDataPlane * this, TerrainDetailTransformGroupDesc * param_1)


/* TerrainDataPlane::saveToDesc(TerrainDetailTransformGroupDesc&) */

void __thiscall
TerrainDataPlane::saveToDesc(TerrainDataPlane *this,TerrainDetailTransformGroupDesc *param_1)

{
  undefined8 uVar1;
  
  uVar1 = NEON_rev64(*(undefined8 *)(this + 0x78),4);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(this + 0x80);
  return;
}


