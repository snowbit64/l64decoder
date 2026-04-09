// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 008a4b48
// Size: 24 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GranularSynthesisRuntimeSettings::reset() */

void GranularSynthesisRuntimeSettings::reset(void)

{
  long in_x0;
  
  *(undefined8 *)(in_x0 + 0x48) = 0;
  *(undefined8 *)(in_x0 + 0x50) = 0;
  *(undefined8 *)(in_x0 + 0x20) = *(undefined8 *)(in_x0 + 0x18);
  *(undefined8 *)(in_x0 + 0x38) = *(undefined8 *)(in_x0 + 0x30);
  return;
}


