// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getImpressionTimerMs
// Entry Point: 00af1d70
// Size: 84 bytes
// Signature: undefined getImpressionTimerMs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GiantsAdPlacement::getImpressionTimerMs() const */

float GiantsAdPlacement::getImpressionTimerMs(void)

{
  double dVar1;
  long in_x0;
  long lVar2;
  float fVar3;
  
  if (*(int *)(in_x0 + 0x58) == 1) {
    fVar3 = *(float *)(in_x0 + 0x50) + *(float *)(in_x0 + 0x54);
  }
  else if (*(int *)(in_x0 + 0x58) == 0) {
    fVar3 = *(float *)(in_x0 + 0x54);
  }
  else {
    lVar2 = Watch::getCurrentTicks();
    dVar1 = (double)Watch::convertTicksToMs(lVar2 - *(long *)(in_x0 + 0x48));
    fVar3 = (float)dVar1;
  }
  return fVar3;
}


