// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLodLevelIndex
// Entry Point: 0094c6d4
// Size: 112 bytes
// Signature: undefined __thiscall getLodLevelIndex(CustomShader * this, float param_1)


/* CustomShader::getLodLevelIndex(float) const */

int __thiscall CustomShader::getLodLevelIndex(CustomShader *this,float param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  float *pfVar4;
  
  pfVar4 = *(float **)(this + 0x28);
  uVar2 = (*(long *)(this + 0x30) - (long)pfVar4 >> 3) * 0x38e38e39;
  uVar1 = (uint)uVar2;
  if (uVar1 < 2) {
    return 0;
  }
  uVar3 = 1;
  do {
    pfVar4 = pfVar4 + 0x12;
    if (param_1 < *pfVar4) {
      return (int)uVar3 + -1;
    }
    uVar3 = uVar3 + 1;
  } while ((uVar2 & 0xffffffff) != uVar3);
  return uVar1 - 1;
}


