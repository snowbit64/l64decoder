// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lock
// Entry Point: 00aac338
// Size: 280 bytes
// Signature: undefined __cdecl lock(ICommandBuffer * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8, uint param_9, LOCK_OPTION param_10, PixelLockData * param_11)


/* NullTexture::lock(ICommandBuffer*, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int, IResource::LOCK_OPTION,
   ITextureObject::PixelLockData&) */

void NullTexture::lock(ICommandBuffer *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                      uint param_6,uint param_7,uint param_8,uint param_9,LOCK_OPTION param_10,
                      PixelLockData *param_11)

{
  ICommandBuffer IVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  void **in_stack_00000018;
  
  uVar4 = param_7 - param_5;
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  uVar2 = param_8 - param_6;
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  uVar3 = param_10 - param_9;
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  param_1[0x6c] = (ICommandBuffer)0x1;
  uVar4 = PixelFormatUtil::getMemorySize(uVar4,uVar2,uVar3,*(PIXEL_FORMAT *)(param_1 + 0x34));
  if (NullRenderDevice::s_dummyBufferSize < uVar4) {
    if ((NullRenderDevice::s_dummyBufferUseCount == 0) &&
       (NullRenderDevice::s_pDummyBuffer != (void *)0x0)) {
      operator_delete__(NullRenderDevice::s_pDummyBuffer);
    }
    NullRenderDevice::s_dummyBufferUseCount = 1;
    NullRenderDevice::s_pDummyBuffer = operator_new__((ulong)uVar4);
    NullRenderDevice::s_dummyBufferSize = uVar4;
  }
  else {
    NullRenderDevice::s_dummyBufferUseCount = NullRenderDevice::s_dummyBufferUseCount + 1;
  }
  uVar4 = *(uint *)(param_1 + 0x1c);
  *in_stack_00000018 = NullRenderDevice::s_pDummyBuffer;
  uVar5 = PixelFormatUtil::getMemorySize(uVar4,1,1,*(PIXEL_FORMAT *)(param_1 + 0x34));
  IVar1 = param_1[0x6d];
  *(undefined4 *)(in_stack_00000018 + 1) = uVar5;
  if (IVar1 == (ICommandBuffer)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = PixelFormatUtil::getMemorySize
                      (*(uint *)(param_1 + 0x1c),*(uint *)(param_1 + 0x20),1,
                       *(PIXEL_FORMAT *)(param_1 + 0x34));
  }
  *(undefined4 *)((long)in_stack_00000018 + 0xc) = uVar5;
  return;
}


