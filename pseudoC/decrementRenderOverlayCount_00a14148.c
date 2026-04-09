// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decrementRenderOverlayCount
// Entry Point: 00a14148
// Size: 16 bytes
// Signature: undefined decrementRenderOverlayCount(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Renderer::decrementRenderOverlayCount() */

void Renderer::decrementRenderOverlayCount(void)

{
  long in_x0;
  
  *(int *)(in_x0 + 0x1dd8) = *(int *)(in_x0 + 0x1dd8) + -1;
  return;
}


