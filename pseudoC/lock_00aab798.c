// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lock
// Entry Point: 00aab798
// Size: 156 bytes
// Signature: undefined __cdecl lock(ICommandBuffer * param_1)


/* NullConstantBuffer::lock(ICommandBuffer*) */

void NullConstantBuffer::lock(ICommandBuffer *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
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
  *(void **)(param_1 + 0x10) = NullRenderDevice::s_pDummyBuffer;
  return;
}


