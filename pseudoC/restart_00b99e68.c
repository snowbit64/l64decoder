// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: restart
// Entry Point: 00b99e68
// Size: 44 bytes
// Signature: undefined restart(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StopWatch::restart() */

void StopWatch::restart(void)

{
  undefined8 *in_x0;
  undefined8 uVar1;
  
  *(undefined *)(in_x0 + 1) = 1;
  uVar1 = Watch::getCurrentTicks();
  *in_x0 = uVar1;
  return;
}


