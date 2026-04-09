// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unlock
// Entry Point: 00aab710
// Size: 88 bytes
// Signature: undefined __cdecl unlock(ICommandBuffer * param_1)


/* NullIndexBuffer::unlock(ICommandBuffer*) */

void NullIndexBuffer::unlock(ICommandBuffer *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (NullRenderDevice::s_pDummyBuffer == pvVar1) {
    NullRenderDevice::s_dummyBufferUseCount = NullRenderDevice::s_dummyBufferUseCount + -1;
  }
  else if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


