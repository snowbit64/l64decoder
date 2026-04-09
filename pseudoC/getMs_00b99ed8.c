// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMs
// Entry Point: 00b99ed8
// Size: 64 bytes
// Signature: undefined getMs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StopWatch::getMs() */

undefined  [16] StopWatch::getMs(void)

{
  long *in_x0;
  long lVar1;
  undefined auVar2 [16];
  
  if (*(char *)(in_x0 + 1) != '\0') {
    lVar1 = Watch::getCurrentTicks();
    auVar2 = Watch::convertTicksToMs(lVar1 - *in_x0);
    return auVar2;
  }
  return ZEXT816(0);
}


