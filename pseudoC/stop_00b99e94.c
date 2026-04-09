// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stop
// Entry Point: 00b99e94
// Size: 60 bytes
// Signature: undefined stop(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StopWatch::stop() */

void StopWatch::stop(void)

{
  long *in_x0;
  long lVar1;
  
  if (*(char *)(in_x0 + 1) != '\0') {
    lVar1 = Watch::getCurrentTicks();
    lVar1 = Watch::convertTicksToMs(lVar1 - *in_x0);
    *(undefined *)(in_x0 + 1) = 0;
    in_x0[2] = lVar1;
  }
  return;
}


