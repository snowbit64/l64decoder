// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeBinWidthHeight
// Entry Point: 00d9fcf8
// Size: 36 bytes
// Signature: undefined __thiscall ComputeBinWidthHeight(MaskedOcclusionCullingPrivate * this, uint param_1, uint param_2, uint * param_3, uint * param_4)


/* MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::ComputeBinWidthHeight(unsigned int,
   unsigned int, unsigned int&, unsigned int&) */

void __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::ComputeBinWidthHeight
          (MaskedOcclusionCullingPrivate *this,uint param_1,uint param_2,uint *param_3,uint *param_4
          )

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(this + 0x124) / param_1;
  }
  *param_3 = uVar1 & 0xffffffe0;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(this + 0x128) / param_2;
  }
  *param_4 = uVar1 & 0xfffffffc;
  return;
}


