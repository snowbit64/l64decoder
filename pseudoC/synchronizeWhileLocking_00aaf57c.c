// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: synchronizeWhileLocking
// Entry Point: 00aaf57c
// Size: 256 bytes
// Signature: undefined __thiscall synchronizeWhileLocking(VulkanTextureObject * this, LAYOUT param_1, LAYOUT param_2, VulkanCommandBuffer * param_3, VK_COMMAND_BUFFER_TYPE param_4, uint param_5, uint param_6)


/* VulkanTextureObject::synchronizeWhileLocking(VulkanTextureObject::LAYOUT,
   VulkanTextureObject::LAYOUT, VulkanCommandBuffer*, VulkanUtil::VK_COMMAND_BUFFER_TYPE, unsigned
   int, unsigned int) */

void __thiscall
VulkanTextureObject::synchronizeWhileLocking
          (VulkanTextureObject *this,LAYOUT param_1,LAYOUT param_2,VulkanCommandBuffer *param_3,
          VK_COMMAND_BUFFER_TYPE param_4,uint param_5,uint param_6)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  uint uStack_4c;
  undefined4 local_48;
  uint uStack_44;
  undefined4 local_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  if (param_1 != param_2) {
    local_80[0] = 0x2d;
    local_78 = 0;
    lVar1 = (ulong)param_1 * 0x10;
    lVar2 = (ulong)param_2 * 0x10;
    local_60 = 0xffffffffffffffff;
    uVar3 = *(undefined4 *)(s_layoutInfo + lVar1 + 4);
    local_70 = *(undefined4 *)(s_layoutInfo + lVar1 + 8);
    uStack_64 = *(undefined4 *)(s_layoutInfo + lVar2);
    uVar4 = *(undefined4 *)(s_layoutInfo + lVar2 + 4);
    local_68 = *(undefined4 *)(s_layoutInfo + lVar1);
    uStack_6c = *(undefined4 *)(s_layoutInfo + lVar2 + 8);
    if ((0x10aUL >> ((ulong)param_1 & 0x3f) & 1) != 0) {
      local_70 = 0;
    }
    local_50 = *(undefined4 *)(this + 0x8c);
    local_58 = **(undefined8 **)(this + 0x10);
    local_48 = 1;
    local_40 = 1;
    uStack_4c = param_6;
    uStack_44 = param_5;
    uVar6 = VulkanCommandBuffer::acquireVkCommandBuffer(param_3,param_4);
    (*vkCmdPipelineBarrier)(uVar6,uVar3,uVar4,0,0,0,0,0,1,local_80);
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


