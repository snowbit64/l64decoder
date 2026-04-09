// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTilePaletteRegion
// Entry Point: 00a9aa1c
// Size: 44 bytes
// Signature: undefined __thiscall getTilePaletteRegion(SoftVirtualTexture * this, uint param_1, uint param_2, uint * param_3, uint * param_4, uint * param_5, uint * param_6)


/* SoftVirtualTexture::getTilePaletteRegion(unsigned int, unsigned int, unsigned int&, unsigned
   int&, unsigned int&, unsigned int&) */

void __thiscall
SoftVirtualTexture::getTilePaletteRegion
          (SoftVirtualTexture *this,uint param_1,uint param_2,uint *param_3,uint *param_4,
          uint *param_5,uint *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(this + 0x50);
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = param_1 / uVar1;
  }
  uVar2 = *(uint *)(this + 0x4c) >> (ulong)(param_2 & 0x1f);
  *param_3 = (param_1 - uVar3 * uVar1) * uVar2;
  *param_4 = uVar2 * uVar3;
  *param_5 = uVar2;
  *param_6 = uVar2;
  return;
}


