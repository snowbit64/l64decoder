// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRenderQueueItemAllocatorTempDataForThreadIdx
// Entry Point: 00a09a14
// Size: 20 bytes
// Signature: undefined __thiscall getRenderQueueItemAllocatorTempDataForThreadIdx(RenderController * this, uint param_1)


/* RenderController::getRenderQueueItemAllocatorTempDataForThreadIdx(unsigned int) */

long __thiscall
RenderController::getRenderQueueItemAllocatorTempDataForThreadIdx
          (RenderController *this,uint param_1)

{
  return *(long *)(this + 0x1f8) + (ulong)(param_1 + 1) * 0xa8;
}


