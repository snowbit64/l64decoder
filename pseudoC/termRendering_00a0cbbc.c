// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: termRendering
// Entry Point: 00a0cbbc
// Size: 44 bytes
// Signature: undefined termRendering(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IndirectLightRenderController::termRendering() */

void IndirectLightRenderController::termRendering(void)

{
  long in_x0;
  
  if (*(char *)(in_x0 + 0xc) != '\0') {
    cleanup();
    *(undefined *)(in_x0 + 0xc) = 0;
  }
  return;
}


