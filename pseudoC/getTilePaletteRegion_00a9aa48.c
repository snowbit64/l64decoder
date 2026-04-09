// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTilePaletteRegion
// Entry Point: 00a9aa48
// Size: 84 bytes
// Signature: undefined __thiscall getTilePaletteRegion(SoftVirtualTexture * this, uint param_1, float * param_2, float * param_3, float * param_4, float * param_5)


/* SoftVirtualTexture::getTilePaletteRegion(unsigned int, float&, float&, float&, float&) */

void __thiscall
SoftVirtualTexture::getTilePaletteRegion
          (SoftVirtualTexture *this,uint param_1,float *param_2,float *param_3,float *param_4,
          float *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = *(uint *)(this + 0x4c);
  uVar2 = *(uint *)(this + 0x50);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = param_1 / uVar2;
  }
  fVar4 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x10));
  *param_2 = (float)(ulong)((param_1 - uVar3 * uVar2) * uVar1) / fVar4;
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x14));
  *param_3 = (float)(ulong)(uVar1 * uVar3) / fVar5;
  *param_4 = (float)(ulong)uVar1 / fVar4;
  *param_5 = (float)(ulong)uVar1 / fVar5;
  return;
}


