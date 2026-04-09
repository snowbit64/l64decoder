// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyStandardSamplers
// Entry Point: 00bec010
// Size: 104 bytes
// Signature: undefined destroyStandardSamplers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AdhocShader::destroyStandardSamplers() */

void AdhocShader::destroyStandardSamplers(void)

{
  if (DAT_0211f0b8 != (long *)0x0) {
    (**(code **)(*DAT_0211f0b8 + 8))();
    DAT_0211f0b8 = (long *)0x0;
  }
  if (DAT_0211f0c8 != (long *)0x0) {
    (**(code **)(*DAT_0211f0c8 + 8))();
    DAT_0211f0c8 = (long *)0x0;
  }
  if (DAT_0211f0d8 != (long *)0x0) {
    (**(code **)(*DAT_0211f0d8 + 8))();
    DAT_0211f0d8 = (long *)0x0;
  }
  return;
}


