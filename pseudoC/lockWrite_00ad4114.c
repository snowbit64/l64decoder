// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lockWrite
// Entry Point: 00ad4114
// Size: 444 bytes
// Signature: undefined __thiscall lockWrite(VulkanBufferResource * this, VulkanCommandBuffer * param_1, uint param_2, uint param_3, LOCK_OPTION param_4)


/* VulkanBufferResource::lockWrite(VulkanCommandBuffer*, unsigned int, unsigned int,
   IResource::LOCK_OPTION) */

uchar * __thiscall
VulkanBufferResource::lockWrite
          (VulkanBufferResource *this,VulkanCommandBuffer *param_1,uint param_2,uint param_3,
          LOCK_OPTION param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  Buffer *pBVar6;
  uchar *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (this[0x60] != (VulkanBufferResource)0x0) {
    VulkanCommandBuffer::lockTransientBuffer
              (param_1,param_3 + param_2,*(TRANSIENT_BUFFER_TYPE *)(this + 100),0,
               (BufferInfo *)(this + 0x70),&local_60);
    local_60 = local_60 + param_2;
    goto LAB_00ad429c;
  }
  lVar4 = *(long *)(this + 0x68);
  if (lVar4 == 0) {
LAB_00ad41f4:
    lVar4 = VulkanResourceAllocator::createBuffer
                      (*(VulkanResourceAllocator **)(*(long *)(this + 0x20) + 0x370),
                       *(uint *)(this + 0x4c),*(BUFFER_TYPE *)(this + 0x30),
                       *(MEMORY_TYPE *)(this + 0x28),0,*(PIXEL_FORMAT *)(this + 0x48));
    *(long *)(this + 0x68) = lVar4;
    if (lVar4 == 0) {
      lVar4 = VulkanResourceAllocator::createBuffer
                        (*(VulkanResourceAllocator **)(*(long *)(this + 0x20) + 0x370),
                         *(uint *)(this + 0x4c),*(BUFFER_TYPE *)(this + 0x30),
                         *(MEMORY_TYPE *)(this + 0x2c),0,*(PIXEL_FORMAT *)(this + 0x48));
      *(long *)(this + 0x68) = lVar4;
    }
    *(undefined4 *)(this + 0x90) = 0;
    lVar5 = *(long *)(lVar4 + 0x18);
    *(uint *)(this + 0x54) = param_3;
    if (lVar5 != 0) goto LAB_00ad4244;
LAB_00ad425c:
    lVar4 = VulkanResourceAllocator::createBuffer
                      (*(VulkanResourceAllocator **)(*(long *)(this + 0x20) + 0x370),param_3,6,1,0,0
                      );
    *(long *)(this + 0x38) = lVar4;
    lVar5 = *(long *)(lVar4 + 0x18);
    uVar1 = *(uint *)(lVar4 + 0x20);
    *(uint *)(this + 0x50) = param_2;
    *(long *)(this + 0x40) = lVar4;
    this[0x58] = (VulkanBufferResource)0x1;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x18);
    if (lVar5 == 0) {
LAB_00ad4258:
      *(uint *)(this + 0x54) = param_3;
      goto LAB_00ad425c;
    }
    if (param_4 == 3) {
      if ((param_2 != 0) || (param_3 < *(uint *)(this + 0x4c))) goto LAB_00ad4258;
LAB_00ad41b4:
      lVar4 = (**(code **)(**(long **)(this + 0x20) + 0x138))();
      pBVar6 = *(Buffer **)(this + 0x68);
      Mutex::enterCriticalSection();
                    /* try { // try from 00ad41e4 to 00ad41eb has its CatchHandler @ 00ad42d4 */
      VulkanResourceAllocator::releaseBuffer
                (*(VulkanResourceAllocator **)(*(long *)(lVar4 + 0x98) + 0x370),pBVar6,
                 *(FenceStatus **)(lVar4 + 0x550));
                    /* try { // try from 00ad41ec to 00ad41f3 has its CatchHandler @ 00ad42d0 */
      Mutex::leaveCriticalSection();
      goto LAB_00ad41f4;
    }
    if (param_4 != 4) goto LAB_00ad41b4;
    *(uint *)(this + 0x54) = param_3;
LAB_00ad4244:
    iVar2 = *(int *)(lVar4 + 0x20);
    *(undefined4 *)(this + 0x50) = 0;
    *(long *)(this + 0x40) = lVar4;
    uVar1 = iVar2 + param_2;
  }
  local_60 = (uchar *)(lVar5 + (ulong)uVar1);
LAB_00ad429c:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


