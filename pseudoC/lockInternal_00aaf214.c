// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lockInternal
// Entry Point: 00aaf214
// Size: 872 bytes
// Signature: undefined __thiscall lockInternal(VulkanTextureObject * this, VulkanCommandBuffer * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8, uint param_9, LOCK_OPTION param_10, PixelLockData * param_11, VK_COMMAND_BUFFER_TYPE param_12)


/* VulkanTextureObject::lockInternal(VulkanCommandBuffer*, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, IResource::LOCK_OPTION,
   ITextureObject::PixelLockData&, VulkanUtil::VK_COMMAND_BUFFER_TYPE) */

void __thiscall
VulkanTextureObject::lockInternal
          (VulkanTextureObject *this,VulkanCommandBuffer *param_1,uint param_2,uint param_3,
          uint param_4,uint param_5,uint param_6,uint param_7,uint param_8,uint param_9,
          LOCK_OPTION param_10,PixelLockData *param_11,VK_COMMAND_BUFFER_TYPE param_12)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  QUEUE_TYPE QVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  BUFFER_TYPE BVar12;
  MEMORY_TYPE MVar13;
  uint *puVar14;
  uint *puVar15;
  VkMappedMemoryRange aVStack_e0 [40];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  uint local_a4;
  uint local_a0;
  undefined8 local_9c;
  uint local_94;
  undefined8 local_90;
  uint local_88;
  uint uStack_84;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 local_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  uVar4 = param_6 - param_4;
  uVar5 = param_7 - param_5;
  iVar7 = PixelFormatUtil::getMemorySize
                    (uVar4,uVar5,param_9 - param_8,*(PIXEL_FORMAT *)(this + 0x20));
  iVar9 = *(int *)(this + 0x40);
  QVar8 = VulkanUtil::getQueueTypeByCommandBufferType(param_12);
  if (param_10 == 2) {
    BVar12 = 7;
    MVar13 = 2;
  }
  else {
    BVar12 = 6;
    MVar13 = 1;
  }
  plVar10 = (long *)VulkanResourceAllocator::createBuffer
                              (*(VulkanResourceAllocator **)(*(long *)(this + 8) + 0x370),
                               iVar9 * iVar7,BVar12,MVar13,QVar8,0);
  *(ulong *)param_11 = plVar10[3] + (ulong)*(uint *)(plVar10 + 4);
  iVar9 = PixelFormatUtil::getMemorySize(uVar4,1,1,*(PIXEL_FORMAT *)(this + 0x20));
  if ((*(uint *)(this + 0x18) | 2) == 3) {
    iVar7 = PixelFormatUtil::getMemorySize(uVar4,uVar5,1,*(PIXEL_FORMAT *)(this + 0x20));
  }
  else {
    iVar7 = 0;
  }
  *(uint *)(param_11 + 0x2c) = param_9;
  *(uint *)(param_11 + 0x18) = param_4;
  *(uint *)(param_11 + 0x1c) = param_6;
  *(int *)(param_11 + 8) = iVar9;
  *(int *)(param_11 + 0xc) = iVar7;
  param_11[0x30] = (PixelLockData)(param_10 == 2);
  puVar14 = (uint *)(param_11 + 0x24);
  *puVar14 = param_7;
  puVar15 = (uint *)(param_11 + 0x20);
  *puVar15 = param_5;
  *(uint *)(param_11 + 0x28) = param_8;
  *(short *)(param_11 + 0x34) = (short)param_3;
  *(short *)(param_11 + 0x32) = (short)param_2;
  *(long **)(param_11 + 0x10) = plVar10;
  this[0x53] = (VulkanTextureObject)0x1;
  if (param_10 == 2) {
    uVar3 = *(uint *)(*(long *)(*(long *)(this + 0x90) + (ulong)param_2 * 0x18) + (ulong)param_3 * 4
                     );
    if (uVar3 != 1) {
      local_b0 = 0;
      local_b8 = CONCAT44(local_b8._4_4_,0x2d);
      lVar1 = (ulong)uVar3 * 0x10;
      local_9c = 0xffffffff00000006;
      uVar2 = *(undefined4 *)(s_layoutInfo + lVar1 + 4);
      local_a8 = *(undefined4 *)(s_layoutInfo + lVar1 + 8);
      local_a0 = *(uint *)(s_layoutInfo + lVar1);
      local_94 = 0xffffffff;
      local_88 = *(uint *)(this + 0x8c);
      if ((0x10aUL >> ((ulong)uVar3 & 0x3f) & 1) != 0) {
        local_a8 = 0;
      }
      local_a4 = 0x800;
      local_90 = **(undefined8 **)(this + 0x10);
      local_80 = 1;
      local_78 = 1;
      uStack_84 = param_3;
      uStack_7c = param_2;
      uVar11 = VulkanCommandBuffer::acquireVkCommandBuffer(param_1,0);
      (*vkCmdPipelineBarrier)(uVar11,uVar2,0x1000,0,0,0,0,0,1,&local_b8);
    }
    local_b8 = (ulong)*(uint *)(plVar10 + 4);
    local_90 = CONCAT44(uVar4,param_8);
    local_b0 = 0;
    local_a8 = *(undefined4 *)(this + 0x8c);
    local_9c = CONCAT44(param_4,1);
    local_a4 = param_3;
    local_a0 = param_2;
    local_94 = param_5;
    local_88 = uVar5;
    uStack_84 = param_9 - param_8;
    uVar11 = VulkanCommandBuffer::acquireVkCommandBuffer(param_1,param_12);
    (*vkCmdCopyImageToBuffer)(uVar11,**(undefined8 **)(this + 0x10),6,plVar10[1],1,&local_b8);
    VulkanCommandBuffer::submitAndWait(param_1,0);
    if ((*(uint *)(this + 0x18) | 2) == 3) {
      puVar15 = (uint *)(param_11 + 0x28);
      puVar14 = (uint *)(param_11 + 0x2c);
      iVar9 = iVar7;
    }
    VulkanMemoryAllocator::fillVkMappedMemoryRange
              (*(VulkanMemoryAllocator **)(*(long *)(this + 8) + 0x378),
               *(Allocation **)(*plVar10 + 8),*(uint *)(plVar10 + 4),(*puVar14 - *puVar15) * iVar9,
               aVStack_e0);
    (*vkInvalidateMappedMemoryRanges)(*(undefined8 *)(*(long *)(this + 8) + 0x18),1,aVStack_e0);
  }
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


