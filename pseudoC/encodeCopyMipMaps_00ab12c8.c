// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encodeCopyMipMaps
// Entry Point: 00ab12c8
// Size: 1056 bytes
// Signature: undefined __thiscall encodeCopyMipMaps(VulkanTextureObject * this, VulkanCommandBuffer * param_1, VulkanTextureObject * param_2, uint param_3, uint param_4, uint param_5)


/* VulkanTextureObject::encodeCopyMipMaps(VulkanCommandBuffer*, VulkanTextureObject*, unsigned int,
   unsigned int, unsigned int) */

void __thiscall
VulkanTextureObject::encodeCopyMipMaps
          (VulkanTextureObject *this,VulkanCommandBuffer *param_1,VulkanTextureObject *param_2,
          uint param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 local_100;
  uint uStack_fc;
  long local_f8;
  undefined8 local_f0;
  long lStack_e8;
  ulong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar7 = VulkanCommandBuffer::acquireVkCommandBuffer(param_1,(uint)(byte)param_1[0x460]);
  uVar2 = ***(uint ***)(this + 0x90);
  uVar11 = (ulong)uVar2;
  if (uVar2 != 1) {
    lVar8 = uVar11 * 0x10;
    local_a8 = *(undefined4 *)(s_layoutInfo + lVar8 + 8);
    local_a0 = *(undefined4 *)(s_layoutInfo + lVar8);
    local_b8[0] = 0x2d;
    local_b0 = 0;
    if ((0x10aUL >> (uVar11 & 0x3f) & 1) != 0) {
      local_a8 = 0;
    }
    local_a4 = 0x800;
    local_9c = 6;
    uStack_98 = 0xffffffff;
    local_94 = 0xffffffff;
    local_90 = **(undefined8 **)(this + 0x10);
    local_88 = *(undefined4 *)(this + 0x8c);
    local_80 = *(int *)(this + 0x38) + 1;
    local_78 = *(undefined4 *)(this + 0x48);
    uStack_84 = 0;
    uStack_7c = 0;
    (*vkCmdPipelineBarrier)
              (uVar7,*(undefined4 *)(s_layoutInfo + lVar8 + 4),0x1000,0,0,0,0,0,1,local_b8);
  }
  if (this[0x55] != (VulkanTextureObject)0x0) {
    local_f8 = 0;
    local_e0 = NEON_rev64(*(undefined8 *)(*(long *)(this + 8) + 0x458),4);
    local_100 = 0x2d;
    lStack_e8 = 0x700000007;
    local_f0 = 0x100000000000;
    local_c0 = 0xffffffff;
    uStack_c8 = 0xffffffff;
    local_d0 = 1;
    uStack_cc = 0;
    local_d8 = (undefined4)**(undefined8 **)(param_2 + 0x10);
    uStack_d4 = (undefined4)((ulong)**(undefined8 **)(param_2 + 0x10) >> 0x20);
    (*vkCmdPipelineBarrier)(uVar7,1,0x1000,0,0,0,0,0,1,&local_100);
    this[0x55] = (VulkanTextureObject)0x0;
  }
  uVar5 = (**(code **)(*(long *)this + 0x20))(this);
  uVar6 = (**(code **)(*(long *)this + 0x28))(this);
  if (param_5 != 0) {
    uVar6 = uVar6 >> (ulong)(param_3 & 0x1f);
    uVar5 = uVar5 >> (ulong)(param_3 & 0x1f);
    do {
      local_e0 = (ulong)param_4;
      uStack_cc = 0;
      uStack_c8 = CONCAT44(uVar6,uVar5);
      local_100 = 1;
      if (this[0x50] != (VulkanTextureObject)0x0) {
        local_100 = 2;
      }
      local_f8 = (ulong)*(uint *)(this + 0x48) << 0x20;
      uVar10 = 1;
      if (param_2[0x50] != (VulkanTextureObject)0x0) {
        uVar10 = 2;
      }
      local_d8 = *(undefined4 *)(param_2 + 0x48);
      local_f0 = 0;
      lStack_e8 = (ulong)uVar10 << 0x20;
      uStack_d4 = 0;
      local_d0 = 0;
      local_c0 = 1;
      uStack_fc = param_3;
      (*vkCmdCopyImage)(uVar7,**(undefined8 **)(this + 0x10),6,**(undefined8 **)(param_2 + 0x10),7,1
                        ,&local_100);
      uVar5 = uVar5 >> 1;
      uVar6 = uVar6 >> 1;
      param_5 = param_5 - 1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (param_5 != 0);
  }
  local_b8[0] = 0x2d;
  local_b0 = 0;
  uStack_98 = 0xffffffff;
  local_94 = 0xffffffff;
  lVar8 = uVar11 * 0x10;
  uVar1 = *(undefined4 *)(s_layoutInfo + lVar8 + 8);
  uVar3 = *(undefined4 *)(s_layoutInfo + lVar8);
  local_a8 = 0x1000;
  local_88 = *(undefined4 *)(param_2 + 0x8c);
  local_a0 = 7;
  local_80 = *(int *)(param_2 + 0x38) + 1;
  local_90 = **(undefined8 **)(param_2 + 0x10);
  uStack_84 = 0;
  local_78 = *(undefined4 *)(param_2 + 0x48);
  uStack_7c = 0;
  local_a4 = uVar1;
  local_9c = uVar3;
  (*vkCmdPipelineBarrier)
            (uVar7,0x1000,*(undefined4 *)(s_layoutInfo + lVar8 + 4),0,0,0,0,0,1,local_b8);
  uVar11 = VulkanRenderDevice::hasCopyQueue();
  if (((uVar11 & 1) == 0) && (uVar2 != 1)) {
    local_b0 = 0;
    local_a8 = 0;
    local_88 = *(undefined4 *)(this + 0x8c);
    local_b8[0] = 0x2d;
    local_a0 = 6;
    uStack_98 = 0xffffffff;
    local_94 = 0xffffffff;
    local_90 = **(undefined8 **)(this + 0x10);
    uStack_84 = 0;
    local_80 = *(int *)(this + 0x38) + 1;
    local_78 = *(undefined4 *)(this + 0x48);
    uStack_7c = 0;
    local_a4 = uVar1;
    local_9c = uVar3;
    (*vkCmdPipelineBarrier)(uVar7,0x1000,0x880,0,0,0,0,0,1,local_b8);
  }
  uVar6 = *(uint *)(param_2 + 0x48);
  if (uVar6 != 0) {
    uVar11 = 0;
    uVar5 = *(uint *)(param_2 + 0x38);
    lVar8 = *(long *)(param_2 + 0x90);
    do {
      uVar10 = 0;
      lVar9 = *(long *)(lVar8 + uVar11 * 0x18);
      do {
        *(uint *)(lVar9 + (ulong)uVar10 * 4) = uVar2;
        uVar10 = uVar10 + 1;
      } while (uVar10 <= uVar5);
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar6);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


