// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 008b925c
// Size: 20 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WetDry::reset() */

void WetDry::reset(void)

{
  undefined8 *in_x0;
  
  *(undefined *)(in_x0 + 1) = 0;
  *in_x0 = 0x3f800000;
  return;
}


