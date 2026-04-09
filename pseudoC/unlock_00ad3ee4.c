// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unlock
// Entry Point: 00ad3ee4
// Size: 328 bytes
// Signature: undefined __thiscall unlock(VulkanBufferResource * this, VulkanCommandBuffer * param_1)


/* VulkanBufferResource::unlock(VulkanCommandBuffer*) */

void __thiscall
VulkanBufferResource::unlock(VulkanBufferResource *this,VulkanCommandBuffer *param_1)

{
  VulkanCommandBuffer VVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  VulkanBufferResource *local_70;
  undefined8 local_68;
  undefined local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (this[0x60] == (VulkanBufferResource)0x0) {
    *(undefined8 *)(this + 0x40) = 0;
    if (this[0x58] != (VulkanBufferResource)0x0) {
      lVar5 = *(long *)(this + 0x68);
      VVar1 = param_1[0x460];
      if (*(int *)(this + 0x90) == 0) {
        *(undefined4 *)(this + 0x90) = 2;
      }
      else {
        local_60 = 0;
        local_68 = 0xffffffff00000002;
        local_70 = this;
        synchronizeBuffers(param_1,(uint)(byte)VVar1,1,(TransitionData *)&local_70);
      }
      pcVar3 = vkCmdCopyBuffer;
      lVar6 = *(long *)(this + 0x38);
      local_78 = (ulong)*(uint *)(this + 0x54);
      local_88 = (ulong)*(uint *)(lVar6 + 0x20);
      uStack_80 = (ulong)(uint)(*(int *)(this + 0x50) + *(int *)(lVar5 + 0x20));
      uVar4 = VulkanCommandBuffer::acquireVkCommandBuffer(param_1,(uint)(byte)VVar1);
      (*pcVar3)(uVar4,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar5 + 8),1,&local_88);
      local_60 = 0;
      local_68 = 0xffffffff00000003;
      local_70 = this;
      synchronizeBuffers(param_1,(uint)(byte)VVar1,1,(TransitionData *)&local_70);
      this[0x58] = (VulkanBufferResource)0x0;
    }
    if (*(Buffer **)(this + 0x38) != (Buffer *)0x0) {
      VulkanResourceAllocator::releaseBuffer
                (*(VulkanResourceAllocator **)(*(long *)(this + 0x20) + 0x370),
                 *(Buffer **)(this + 0x38),*(FenceStatus **)(param_1 + 0x550));
      *(undefined8 *)(this + 0x38) = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


