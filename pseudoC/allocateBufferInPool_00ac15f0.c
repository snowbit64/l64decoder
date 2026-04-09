// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateBufferInPool
// Entry Point: 00ac15f0
// Size: 312 bytes
// Signature: undefined __thiscall allocateBufferInPool(VulkanResourceAllocator * this, BufferPool * param_1, uint param_2, uint param_3, BUFFER_TYPE param_4, PIXEL_FORMAT param_5)


/* VulkanResourceAllocator::allocateBufferInPool(VulkanResourceAllocator::BufferPool*, unsigned int,
   unsigned int, VulkanResourceAllocator::BUFFER_TYPE, PixelFormat::PIXEL_FORMAT) */

BufferPool ** __thiscall
VulkanResourceAllocator::allocateBufferInPool
          (VulkanResourceAllocator *this,BufferPool *param_1,uint param_2,uint param_3,
          BUFFER_TYPE param_4,PIXEL_FORMAT param_5)

{
  BufferPool *pBVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  BufferPool **ppBVar5;
  BufferPool *pBVar6;
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined4 local_90;
  BufferPool *local_88;
  undefined4 local_80;
  ulong local_78;
  ulong uStack_70;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar4 = SubAllocator::alloc((SubAllocator *)(param_1 + 0x10),param_2,param_3,&uStack_5c,&local_60,
                              &local_64);
  if ((uVar4 & 1) == 0) {
    ppBVar5 = (BufferPool **)0x0;
  }
  else {
    ppBVar5 = (BufferPool **)operator_new(0x30);
    *(uint *)(ppBVar5 + 5) = uStack_5c;
    *(uint *)((long)ppBVar5 + 0x2c) = local_60;
    pBVar1 = *(BufferPool **)param_1;
    lVar2 = *(long *)(param_1 + 8);
    ppBVar5[2] = (BufferPool *)0x0;
    *ppBVar5 = param_1;
    ppBVar5[1] = pBVar1;
    pBVar6 = *(BufferPool **)(lVar2 + 0x20);
    *(uint *)(ppBVar5 + 4) = local_64;
    *(uint *)((long)ppBVar5 + 0x24) = param_2;
    ppBVar5[3] = pBVar6;
    if ((param_4 & 0xfffffffe) == 4) {
      local_98 = 0;
      local_a0[0] = 0xd;
      local_90 = 0;
      local_88 = pBVar1;
      local_80 = VulkanUtil::getVulkanPixelFormat
                           (*(VkPhysicalDevice_T **)(*(long *)(this + 0x980) + 0x20),param_5,2,false
                           );
      uStack_70 = (ulong)param_2;
      local_78 = (ulong)local_64;
      (*vkCreateBufferView)(*(undefined8 *)(*(long *)(this + 0x980) + 0x18),local_a0,0,ppBVar5 + 2);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return ppBVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


