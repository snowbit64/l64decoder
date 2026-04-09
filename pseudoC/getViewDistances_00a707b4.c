// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getViewDistances
// Entry Point: 00a707b4
// Size: 44 bytes
// Signature: undefined __thiscall getViewDistances(TerrainDataPlane * this, float * param_1, float * param_2)


/* TerrainDataPlane::getViewDistances(float&, float&) */

void __thiscall
TerrainDataPlane::getViewDistances(TerrainDataPlane *this,float *param_1,float *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x48);
  if (lVar1 != 0) {
    *param_1 = *(float *)(lVar1 + 0x174);
    *param_2 = *(float *)(lVar1 + 0x170);
    return;
  }
  *param_1 = 0.0;
  *param_2 = 0.0;
  return;
}


