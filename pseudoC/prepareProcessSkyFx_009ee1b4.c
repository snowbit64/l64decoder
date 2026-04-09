// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepareProcessSkyFx
// Entry Point: 009ee1b4
// Size: 28 bytes
// Signature: undefined prepareProcessSkyFx(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AtmosphereRenderController::prepareProcessSkyFx() */

void AtmosphereRenderController::prepareProcessSkyFx(void)

{
  long in_x0;
  
  if (*(int *)(in_x0 + 0x97c) != 0) {
    *(int *)(in_x0 + 0x964) = 1 - *(int *)(in_x0 + 0x964);
  }
  return;
}


