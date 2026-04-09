// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: acquireVkCommandBuffer
// Entry Point: 00ace8f4
// Size: 244 bytes
// Signature: undefined __thiscall acquireVkCommandBuffer(VulkanCommandBuffer * this, VK_COMMAND_BUFFER_TYPE param_1)


/* VulkanCommandBuffer::acquireVkCommandBuffer(VulkanUtil::VK_COMMAND_BUFFER_TYPE) */

void __thiscall
VulkanCommandBuffer::acquireVkCommandBuffer
          (VulkanCommandBuffer *this,VK_COMMAND_BUFFER_TYPE param_1)

{
  long *plVar1;
  long lVar2;
  QUEUE_TYPE QVar3;
  long lVar4;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(this + (ulong)param_1 * 8 + 0x4b8);
  if (lVar4 == 0) {
    plVar1 = (long *)(this + (ulong)param_1 * 8 + 0x4b8);
    QVar3 = VulkanUtil::getQueueTypeByCommandBufferType(param_1);
    Mutex::enterCriticalSection();
    if (*(long *)(this + (ulong)QVar3 * 8 + 0x4a8) == 0) {
      lVar4 = VulkanResourceAllocator::getCommandPool
                        (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),QVar3);
      *(long *)(this + (ulong)QVar3 * 8 + 0x4a8) = lVar4;
      FUN_00f27700(1,lVar4 + 8);
    }
    lVar4 = VulkanResourceAllocator::CommandPool::getCommandBuffer();
    *plVar1 = lVar4;
    Mutex::leaveCriticalSection();
    local_68[0] = 0x2a;
    local_60 = 0;
    local_58 = 1;
    local_50 = 0;
    (*vkBeginCommandBuffer)(*plVar1,local_68);
    lVar4 = *plVar1;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


