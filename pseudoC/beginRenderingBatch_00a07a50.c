// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginRenderingBatch
// Entry Point: 00a07a50
// Size: 40 bytes
// Signature: undefined beginRenderingBatch(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RenderController::beginRenderingBatch() */

void RenderController::beginRenderingBatch(void)

{
  long in_x0;
  
  *(undefined4 *)(in_x0 + 400) = 0;
  *(undefined4 *)(in_x0 + 0x248) = 0;
  *(undefined8 *)(in_x0 + 0x120) = 0;
  *(undefined8 *)(in_x0 + 0x170) = 0;
  if (*(long *)(in_x0 + 0x130) != *(long *)(in_x0 + 0x128)) {
    *(long *)(in_x0 + 0x130) = *(long *)(in_x0 + 0x128);
  }
  estimateInstanceBufferSize();
  return;
}


