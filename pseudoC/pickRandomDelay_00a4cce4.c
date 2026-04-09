// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pickRandomDelay
// Entry Point: 00a4cce4
// Size: 52 bytes
// Signature: undefined pickRandomDelay(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSourceSample::pickRandomDelay() const */

float AudioSourceSample::pickRandomDelay(void)

{
  long in_x0;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(in_x0 + 0x7c);
  fVar2 = *(float *)(in_x0 + 0x80);
  fVar1 = fVar2;
  if (fVar3 <= fVar2) {
    fVar1 = fVar3;
  }
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar1 = (float)MathUtil::getRandomMinMax(fVar1,fVar2);
  return fVar1 * 1000.0;
}


