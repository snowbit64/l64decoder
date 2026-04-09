// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateIndexAttributesForLevel
// Entry Point: 00a9a910
// Size: 28 bytes
// Signature: undefined __thiscall updateIndexAttributesForLevel(SoftVirtualTexture * this, uint param_1, uint param_2, float param_3, float param_4, float param_5)


/* SoftVirtualTexture::updateIndexAttributesForLevel(unsigned int, unsigned int, float, float,
   float) */

void __thiscall
SoftVirtualTexture::updateIndexAttributesForLevel
          (SoftVirtualTexture *this,uint param_1,uint param_2,float param_3,float param_4,
          float param_5)

{
  *(float *)(this + (ulong)param_1 * 0x10 + 0xc0) = param_3;
  *(float *)(this + (ulong)param_1 * 0x10 + 0xc4) = param_4;
  *(float *)(this + (ulong)param_1 * 0x10 + 200) = param_5;
  *(float *)(this + (ulong)param_1 * 0x10 + 0xcc) = (float)(ulong)param_2;
  return;
}


