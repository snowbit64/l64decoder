// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unlock
// Entry Point: 00aabf44
// Size: 88 bytes
// Signature: undefined __cdecl unlock(ICommandBuffer * param_1)


/* NullStructBuffer::unlock(ICommandBuffer*) */

void NullStructBuffer::unlock(ICommandBuffer *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 8);
  if (NullRenderDevice::s_pDummyBuffer == pvVar1) {
    NullRenderDevice::s_dummyBufferUseCount = NullRenderDevice::s_dummyBufferUseCount + -1;
  }
  else if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


