// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cleanupCloudTextures
// Entry Point: 009ecc80
// Size: 108 bytes
// Signature: undefined cleanupCloudTextures(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AtmosphereRenderController::cleanupCloudTextures() */

void AtmosphereRenderController::cleanupCloudTextures(void)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x938) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x938) + 8))();
  }
  if (*(long **)(in_x0 + 0x940) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x940) + 8))();
  }
  if (*(long **)(in_x0 + 0x948) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x948) + 8))();
  }
  *(undefined8 *)(in_x0 + 0x938) = 0;
  *(undefined8 *)(in_x0 + 0x940) = 0;
  *(undefined8 *)(in_x0 + 0x948) = 0;
  *(undefined *)(in_x0 + 0x950) = 1;
  return;
}


