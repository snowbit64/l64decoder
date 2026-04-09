// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unlockInternal
// Entry Point: 00aaf6c4
// Size: 792 bytes
// Signature: undefined __thiscall unlockInternal(VulkanTextureObject * this, VulkanCommandBuffer * param_1, LockInternalData * param_2, VK_COMMAND_BUFFER_TYPE param_3)


/* VulkanTextureObject::unlockInternal(VulkanCommandBuffer*, VulkanTextureObject::LockInternalData*,
   VulkanUtil::VK_COMMAND_BUFFER_TYPE) */

void __thiscall
VulkanTextureObject::unlockInternal
          (VulkanTextureObject *this,VulkanCommandBuffer *param_1,LockInternalData *param_2,
          VK_COMMAND_BUFFER_TYPE param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  VulkanTextureObject VVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  Buffer *pBVar13;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  uint local_88;
  undefined4 uStack_84;
  int local_80;
  int iStack_7c;
  undefined8 local_78;
  int local_70;
  uint uStack_6c;
  undefined4 local_68;
  uint uStack_64;
  undefined4 local_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  pBVar13 = *(Buffer **)param_2;
  if (param_2[0x20] == (LockInternalData)0x0) {
    if (this[0x54] == (VulkanTextureObject)0x0) {
      uVar11 = *(uint *)(*(long *)(*(long *)(this + 0x90) +
                                  (ulong)*(ushort *)(param_2 + 0x22) * 0x18) +
                        (ulong)*(ushort *)(param_2 + 0x24) * 4);
      if (uVar11 != 2) {
        local_98 = 0;
        local_a0 = CONCAT44(local_a0._4_4_,0x2d);
        lVar10 = (ulong)uVar11 * 0x10;
        uStack_84 = 7;
        local_80 = 0xffffffff;
        uVar2 = *(undefined4 *)(s_layoutInfo + lVar10 + 4);
        local_90 = *(undefined4 *)(s_layoutInfo + lVar10 + 8);
        local_88 = *(uint *)(s_layoutInfo + lVar10);
        iStack_7c = 0xffffffff;
        local_70 = *(int *)(this + 0x8c);
        if ((0x10aUL >> ((ulong)uVar11 & 0x3f) & 1) != 0) {
          local_90 = 0;
        }
        local_8c = 0x1000;
        local_78 = **(undefined8 **)(this + 0x10);
        uStack_6c = (uint)*(ushort *)(param_2 + 0x24);
        uStack_64 = (uint)*(ushort *)(param_2 + 0x22);
        local_68 = 1;
        local_60 = 1;
        uVar8 = VulkanCommandBuffer::acquireVkCommandBuffer(param_1,param_3);
        (*vkCmdPipelineBarrier)(uVar8,uVar2,0x1000,0,0,0,0,0,1,&local_a0);
      }
    }
    local_a0 = (ulong)*(uint *)(pBVar13 + 0x20);
    local_90 = *(undefined4 *)(this + 0x8c);
    local_98 = 0;
    local_8c = (uint)*(ushort *)(param_2 + 0x24);
    local_88 = (uint)*(ushort *)(param_2 + 0x22);
    uStack_84 = 1;
    local_80 = *(int *)(param_2 + 8);
    iStack_7c = *(int *)(param_2 + 0x10);
    local_70 = *(int *)(param_2 + 0x14) - iStack_7c;
    uStack_6c = *(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x18);
    local_78 = CONCAT44(*(int *)(param_2 + 0xc) - local_80,*(int *)(param_2 + 0x18));
    uVar8 = VulkanCommandBuffer::acquireVkCommandBuffer(param_1,param_3);
    (*vkCmdCopyBufferToImage)
              (uVar8,*(undefined8 *)(pBVar13 + 8),**(undefined8 **)(this + 0x10),7,1,&local_a0);
    lVar10 = 2;
    VVar4 = this[0x54];
  }
  else {
    lVar10 = 1;
    VVar4 = this[0x54];
  }
  if (VVar4 == (VulkanTextureObject)0x0) {
    uVar5 = *(ushort *)(param_2 + 0x22);
    uVar6 = *(ushort *)(param_2 + 0x24);
    lVar12 = *(long *)(*(long *)(this + 0x90) + (ulong)uVar5 * 0x18);
    uVar11 = *(uint *)(lVar12 + (ulong)uVar6 * 4);
    if (uVar11 != (uint)lVar10) {
      if (uVar11 == 0) {
        if (this[0x4e] == (VulkanTextureObject)0x0) {
          VVar4 = this[0x52];
          uVar11 = 3;
        }
        else {
          VVar4 = this[0x50];
          uVar11 = 5;
        }
        if (VVar4 != (VulkanTextureObject)0x0) {
          uVar11 = uVar11 + 1;
        }
        *(uint *)(lVar12 + (ulong)uVar6 * 4) = uVar11;
      }
      if ((uint)lVar10 != uVar11) {
        local_a0._4_4_ = (undefined4)(local_a0 >> 0x20);
        local_a0 = CONCAT44(local_a0._4_4_,0x2d);
        local_98 = 0;
        lVar12 = lVar10 * 0x10;
        lVar1 = (ulong)uVar11 * 0x10;
        local_80 = -1;
        iStack_7c = -1;
        uVar2 = *(undefined4 *)(s_layoutInfo + lVar12 + 4);
        local_90 = *(undefined4 *)(s_layoutInfo + lVar12 + 8);
        uStack_84 = *(undefined4 *)(s_layoutInfo + lVar1);
        uVar3 = *(undefined4 *)(s_layoutInfo + lVar1 + 4);
        local_88 = *(uint *)(s_layoutInfo + lVar12);
        local_8c = *(uint *)(s_layoutInfo + lVar1 + 8);
        if ((0x10aUL >> lVar10 & 1) != 0) {
          local_90 = 0;
        }
        local_70 = *(int *)(this + 0x8c);
        local_78 = **(undefined8 **)(this + 0x10);
        uStack_6c = (uint)uVar6;
        uStack_64 = (uint)uVar5;
        local_68 = 1;
        local_60 = 1;
        uVar8 = VulkanCommandBuffer::acquireVkCommandBuffer(param_1,param_3);
        (*vkCmdPipelineBarrier)(uVar8,uVar2,uVar3,0,0,0,0,0,1,&local_a0);
      }
    }
  }
  uVar9 = VulkanUtil::getQueueTypeByCommandBufferType(param_3);
  VulkanResourceAllocator::releaseBuffer
            (*(VulkanResourceAllocator **)(*(long *)(this + 8) + 0x370),pBVar13,
             *(FenceStatus **)(param_1 + (uVar9 & 0xffffffff) * 8 + 0x550));
  this[0x53] = (VulkanTextureObject)0x0;
  if (*(long *)(lVar7 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


