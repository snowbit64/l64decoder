// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resetGrains
// Entry Point: 008a481c
// Size: 16 bytes
// Signature: undefined resetGrains(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GranularSynthesisRuntimeSettings::resetGrains() */

void GranularSynthesisRuntimeSettings::resetGrains(void)

{
  long in_x0;
  
  *(undefined8 *)(in_x0 + 0x48) = 0;
  *(undefined8 *)(in_x0 + 0x50) = 0;
  *(undefined8 *)(in_x0 + 0x38) = *(undefined8 *)(in_x0 + 0x30);
  return;
}


