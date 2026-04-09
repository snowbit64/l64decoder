// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOcclusionRegion
// Entry Point: 006f8fc4
// Size: 84 bytes
// Signature: undefined __thiscall getOcclusionRegion(AdsBrockerManager * this, uint param_1, uint param_2, float * param_3)


/* AdsBrockerManager::getOcclusionRegion(unsigned int, unsigned int, float*) */

void __thiscall
AdsBrockerManager::getOcclusionRegion
          (AdsBrockerManager *this,uint param_1,uint param_2,float *param_3)

{
  long lVar1;
  undefined auVar2 [16];
  
  if ((param_1 < 0x20) && (param_2 < *(uint *)(this + (ulong)param_1 * 4 + 0x18))) {
    lVar1 = (ulong)param_2 * 0x10 + (ulong)param_1 * 0x40;
    *param_3 = *(float *)(this + lVar1 + 0xb8);
    param_3[1] = *(float *)(this + lVar1 + 0xc0);
    param_3[2] = *(float *)(this + lVar1 + 0xbc);
    param_3[3] = *(float *)(this + lVar1 + 0xc4);
    return;
  }
  auVar2 = NEON_fmov(0xbf800000,4);
  *(long *)(param_3 + 2) = auVar2._8_8_;
  *(long *)param_3 = auVar2._0_8_;
  return;
}


