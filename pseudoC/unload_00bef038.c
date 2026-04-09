// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unload
// Entry Point: 00bef038
// Size: 84 bytes
// Signature: undefined unload(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AdhocShader::ShaderVariants::unload() */

void AdhocShader::ShaderVariants::unload(void)

{
  long in_x0;
  ulong uVar1;
  
  if (*(int *)(in_x0 + 0x10) != 0) {
    uVar1 = 0;
    do {
      AdhocShader::unload();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(in_x0 + 0x10));
  }
  return;
}


