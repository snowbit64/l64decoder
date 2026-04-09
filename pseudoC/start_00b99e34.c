// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: start
// Entry Point: 00b99e34
// Size: 52 bytes
// Signature: undefined start(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StopWatch::start() */

void StopWatch::start(void)

{
  undefined8 *in_x0;
  undefined8 uVar1;
  
  if (*(char *)(in_x0 + 1) == '\0') {
    *(undefined *)(in_x0 + 1) = 1;
    uVar1 = Watch::getCurrentTicks();
    *in_x0 = uVar1;
  }
  return;
}


