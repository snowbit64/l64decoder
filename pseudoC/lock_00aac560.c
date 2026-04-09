// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lock
// Entry Point: 00aac560
// Size: 156 bytes
// Signature: undefined __cdecl lock(ICommandBuffer * param_1, uint param_2, uint param_3, LOCK_OPTION param_4)


/* NullVertexBuffer::lock(ICommandBuffer*, unsigned int, unsigned int, IResource::LOCK_OPTION) */

void NullVertexBuffer::lock(ICommandBuffer *param_1,uint param_2,uint param_3,LOCK_OPTION param_4)

{
  if (NullRenderDevice::s_dummyBufferSize < param_4) {
    if ((NullRenderDevice::s_dummyBufferUseCount == 0) &&
       (NullRenderDevice::s_pDummyBuffer != (void *)0x0)) {
      operator_delete__(NullRenderDevice::s_pDummyBuffer);
    }
    NullRenderDevice::s_dummyBufferUseCount = 1;
    NullRenderDevice::s_pDummyBuffer = operator_new__((ulong)param_4);
    NullRenderDevice::s_dummyBufferSize = param_4;
  }
  else {
    NullRenderDevice::s_dummyBufferUseCount = NullRenderDevice::s_dummyBufferUseCount + 1;
  }
  *(void **)(param_1 + 0x10) = NullRenderDevice::s_pDummyBuffer;
  return;
}


