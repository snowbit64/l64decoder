// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteOverlayTexture
// Entry Point: 006f509c
// Size: 52 bytes
// Signature: undefined deleteOverlayTexture(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OverlayRenderManager::deleteOverlayTexture() */

void OverlayRenderManager::deleteOverlayTexture(void)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x4008) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x4008) + 8))();
  }
  *(undefined8 *)(in_x0 + 0x4008) = 0;
  return;
}


