// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: postAllocate
// Entry Point: 00a2c5fc
// Size: 28 bytes
// Signature: undefined postAllocate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RenderQueueItemAllocator::postAllocate() */

void RenderQueueItemAllocator::postAllocate(void)

{
  long in_x0;
  
  *(int *)(in_x0 + 4) =
       *(int *)(in_x0 + 4) + *(int *)(*(long *)(*(long *)(in_x0 + 0x58) + 8) + -0x28);
  return;
}


