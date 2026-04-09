// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeSnapdragonHack
// Entry Point: 00aafb68
// Size: 232 bytes
// Signature: undefined __thiscall executeSnapdragonHack(VulkanTextureObject * this, ICommandBuffer * param_1)


/* VulkanTextureObject::executeSnapdragonHack(ICommandBuffer*) */

void __thiscall
VulkanTextureObject::executeSnapdragonHack(VulkanTextureObject *this,ICommandBuffer *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  QUEUE_TYPE QVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = PixelFormatUtil::getMemorySize(0,0,0,*(PIXEL_FORMAT *)(this + 0x20));
  iVar1 = *(int *)(this + 0x40);
  QVar4 = VulkanUtil::getQueueTypeByCommandBufferType(0);
  lVar5 = VulkanResourceAllocator::createBuffer
                    (*(VulkanResourceAllocator **)(*(long *)(this + 8) + 0x370),iVar1 * iVar3,7,2,
                     QVar4,0);
  local_60 = *(undefined4 *)(this + 0x8c);
  local_70 = 0;
  uStack_68 = 0;
  uStack_5c = 0;
  local_58 = 0;
  uStack_54 = 1;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  uVar6 = VulkanCommandBuffer::acquireVkCommandBuffer((VulkanCommandBuffer *)param_1,0);
  (*vkCmdCopyImageToBuffer)
            (uVar6,**(undefined8 **)(this + 0x10),6,*(undefined8 *)(lVar5 + 8),1,&local_70);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


