// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lock
// Entry Point: 00aabe8c
// Size: 184 bytes
// Signature: undefined __cdecl lock(ICommandBuffer * param_1, uint param_2, uint param_3, LOCK_OPTION param_4)


/* NullStructBuffer::lock(ICommandBuffer*, unsigned int, unsigned int, IResource::LOCK_OPTION) */

void NullStructBuffer::lock(ICommandBuffer *param_1,uint param_2,uint param_3,LOCK_OPTION param_4)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x10) * param_4;
  if (NullRenderDevice::s_dummyBufferSize < uVar1) {
    if ((NullRenderDevice::s_dummyBufferUseCount == 0) &&
       (NullRenderDevice::s_pDummyBuffer != (void *)0x0)) {
      operator_delete__(NullRenderDevice::s_pDummyBuffer);
    }
    NullRenderDevice::s_dummyBufferUseCount = 1;
    NullRenderDevice::s_pDummyBuffer = operator_new__((ulong)uVar1);
    NullRenderDevice::s_dummyBufferSize = uVar1;
  }
  else {
    NullRenderDevice::s_dummyBufferUseCount = NullRenderDevice::s_dummyBufferUseCount + 1;
  }
  *(void **)(param_1 + 8) = NullRenderDevice::s_pDummyBuffer;
  *(LOCK_OPTION *)(param_1 + 0x14) = param_4 + param_3;
  return;
}


