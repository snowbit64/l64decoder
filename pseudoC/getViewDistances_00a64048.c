// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getViewDistances
// Entry Point: 00a64048
// Size: 48 bytes
// Signature: undefined __thiscall getViewDistances(FoliageDataPlane * this, float * param_1, float * param_2)


/* FoliageDataPlane::getViewDistances(float&, float&) */

void __thiscall
FoliageDataPlane::getViewDistances(FoliageDataPlane *this,float *param_1,float *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(this + 0x48) + 0x230) + 8) +
          (ulong)*(uint *)(this + 0xd0) * 0x58;
  *param_1 = *(float *)(lVar1 + 0x54);
  *param_2 = *(float *)(lVar1 + 0x50);
  return;
}


