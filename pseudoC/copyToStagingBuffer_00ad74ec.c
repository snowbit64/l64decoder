// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyToStagingBuffer
// Entry Point: 00ad74ec
// Size: 308 bytes
// Signature: undefined __thiscall copyToStagingBuffer(VulkanStructBuffer * this, ICommandBuffer * param_1, IRenderDevice * param_2, IStagingBuffer * param_3, uint param_4, uint param_5, IGPUFence * param_6)


/* VulkanStructBuffer::copyToStagingBuffer(ICommandBuffer*, IRenderDevice*, IStagingBuffer*,
   unsigned int, unsigned int, IGPUFence*) */

undefined8 __thiscall
VulkanStructBuffer::copyToStagingBuffer
          (VulkanStructBuffer *this,ICommandBuffer *param_1,IRenderDevice *param_2,
          IStagingBuffer *param_3,uint param_4,uint param_5,IGPUFence *param_6)

{
  undefined8 *puVar1;
  ICommandBuffer IVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  VulkanStagingBuffer::init
            ((VulkanCommandBuffer *)param_3,(IRenderDevice *)param_1,(uint)param_2,
             (char *)(ulong)(uint)(*(int *)(this + 0x1c) * *(int *)(this + 0x18)));
  IVar2 = param_1[0x460];
  VulkanBufferResource::synchronize
            (*(VulkanBufferResource **)(this + 0x10),1,(VulkanCommandBuffer *)param_1,
             (uint)(byte)IVar2);
  VulkanStagingBuffer::synchronize
            ((VulkanStagingBuffer *)param_3,2,(VulkanCommandBuffer *)param_1,(uint)(byte)IVar2);
  lVar5 = *(long *)(this + 0x10);
  puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x68) + 8);
  if (*(char *)(lVar5 + 0x60) != '\0') {
    puVar1 = (undefined8 *)(lVar5 + 0x70);
  }
  lVar5 = *(long *)(param_3 + 0x18);
  uStack_78 = (ulong)*(uint *)(lVar5 + 0x20);
  local_80 = (ulong)(*(int *)(puVar1 + 3) + *(int *)(this + 0x18) * param_4);
  local_70 = (ulong)(*(int *)(this + 0x18) * param_5);
  uVar4 = VulkanCommandBuffer::acquireVkCommandBuffer
                    ((VulkanCommandBuffer *)param_1,(uint)(byte)IVar2);
  (*vkCmdCopyBuffer)(uVar4,*puVar1,*(undefined8 *)(lVar5 + 8),1,&local_80);
  uVar4 = **(undefined8 **)(param_1 + 0x550);
  *(undefined8 **)(param_6 + 8) = *(undefined8 **)(param_1 + 0x550);
  *(undefined8 *)(param_6 + 0x10) = uVar4;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


