// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lock
// Entry Point: 00ad771c
// Size: 172 bytes
// Signature: undefined __cdecl lock(ICommandBuffer * param_1, uint param_2, uint param_3, LOCK_OPTION param_4)


/* VulkanStagingBuffer::lock(ICommandBuffer*, unsigned int, unsigned int, IResource::LOCK_OPTION) */

long VulkanStagingBuffer::lock
               (ICommandBuffer *param_1,uint param_2,uint param_3,LOCK_OPTION param_4)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  VkMappedMemoryRange aVStack_70 [40];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  param_1[0xc] = (ICommandBuffer)0x1;
  plVar1 = *(long **)(param_1 + 0x18);
  uVar2 = *(uint *)(plVar1 + 4);
  lVar4 = plVar1[3];
  VulkanMemoryAllocator::fillVkMappedMemoryRange
            (*(VulkanMemoryAllocator **)(*(long *)(param_1 + 0x10) + 0x378),
             *(Allocation **)(*plVar1 + 8),uVar2,param_4,aVStack_70);
  (*vkInvalidateMappedMemoryRanges)(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),1,aVStack_70);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return lVar4 + (ulong)(uVar2 + param_3);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


