// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextSample
// Entry Point: 008ae330
// Size: 60 bytes
// Signature: undefined getNextSample(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LowFrequencyOscillator::getNextSample() */

undefined4 LowFrequencyOscillator::getNextSample(void)

{
  long lVar1;
  uint uVar2;
  long in_x0;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = *(uint *)(in_x0 + 4);
  lVar1 = in_x0 + ((ulong)(uVar2 >> 0x16) & 0x3fc);
  fVar5 = *(float *)(lVar1 + 0xc);
  fVar4 = *(float *)(lVar1 + 0x10);
  *(uint *)(in_x0 + 4) = *(int *)(in_x0 + 8) + uVar2;
  uVar3 = NEON_fmadd((float)(ulong)(uVar2 & 0xffffff) * 5.960464e-08,fVar4 - fVar5,fVar5);
  return uVar3;
}


