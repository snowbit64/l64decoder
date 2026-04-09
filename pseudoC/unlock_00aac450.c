// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unlock
// Entry Point: 00aac450
// Size: 92 bytes
// Signature: undefined __thiscall unlock(NullTexture * this, ICommandBuffer * param_1, PixelLockData * param_2)


/* NullTexture::unlock(ICommandBuffer*, ITextureObject::PixelLockData const&) */

void __thiscall
NullTexture::unlock(NullTexture *this,ICommandBuffer *param_1,PixelLockData *param_2)

{
  void *pvVar1;
  
  pvVar1 = *(void **)param_2;
  if (NullRenderDevice::s_pDummyBuffer == pvVar1) {
    NullRenderDevice::s_dummyBufferUseCount = NullRenderDevice::s_dummyBufferUseCount + -1;
  }
  else if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  this[0x6c] = (NullTexture)0x0;
  return;
}


