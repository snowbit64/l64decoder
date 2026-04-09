// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: incrementRenderOverlayCount
// Entry Point: 00a14138
// Size: 16 bytes
// Signature: undefined incrementRenderOverlayCount(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Renderer::incrementRenderOverlayCount() */

void Renderer::incrementRenderOverlayCount(void)

{
  long in_x0;
  
  *(int *)(in_x0 + 0x1dd8) = *(int *)(in_x0 + 0x1dd8) + 1;
  return;
}


