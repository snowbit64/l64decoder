// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StaticNoise
// Entry Point: 008d2e78
// Size: 76 bytes
// Signature: undefined __thiscall StaticNoise(StaticNoise * this, float param_1)


/* FillPlaneGeometry::StaticNoise::StaticNoise(float) */

void __thiscall FillPlaneGeometry::StaticNoise::StaticNoise(StaticNoise *this,float param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = 0;
  uVar2 = 0x3039;
  do {
    uVar2 = uVar2 * 0x19660d + 0x3c6ef35f;
    *(float *)(this + lVar1) = ((float)(uVar2 & 0x7fffff | 0x40000000) + -3.0) * param_1;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x400);
  return;
}


