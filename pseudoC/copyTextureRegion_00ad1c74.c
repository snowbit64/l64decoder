// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyTextureRegion
// Entry Point: 00ad1c74
// Size: 364 bytes
// Signature: undefined __thiscall copyTextureRegion(VulkanCommandBuffer * this, ITextureObject * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, ITextureObject * param_8, uint param_9, uint param_10, uint param_11, uint param_12)


/* VulkanCommandBuffer::copyTextureRegion(ITextureObject*, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, ITextureObject*, unsigned int, unsigned int, unsigned
   int, unsigned int) */

void __thiscall
VulkanCommandBuffer::copyTextureRegion
          (VulkanCommandBuffer *this,ITextureObject *param_1,uint param_2,uint param_3,uint param_4,
          uint param_5,uint param_6,uint param_7,ITextureObject *param_8,uint param_9,uint param_10,
          uint param_11,uint param_12)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 local_e0;
  uint uStack_dc;
  uint local_d8;
  undefined4 uStack_d4;
  uint local_d0;
  uint uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  uint local_c0;
  uint uStack_bc;
  undefined4 local_b8;
  uint uStack_b4;
  uint local_b0;
  undefined4 uStack_ac;
  uint local_a8;
  uint uStack_a4;
  undefined4 local_a0;
  ITextureObject *local_98;
  undefined4 local_90;
  undefined local_88;
  ITextureObject *local_80;
  undefined4 local_78;
  undefined local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar6 = 1;
  local_90 = 1;
  local_88 = 0;
  local_80 = param_8;
  local_78 = 2;
  local_70 = 0;
  local_98 = param_1;
  VulkanTextureObject::synchronizeTextures(this,0,2,(TransitionData *)&local_98);
  if (param_1[0x50] != (ITextureObject)0x0) {
    uVar6 = 2;
  }
  local_c0 = param_9;
  uStack_bc = param_10;
  local_b8 = 1;
  uStack_b4 = param_11;
  uStack_c4 = 1;
  if (param_8[0x50] != (ITextureObject)0x0) {
    uStack_c4 = 2;
  }
  uStack_d4 = 1;
  local_c8 = 0;
  local_b0 = param_12;
  uStack_ac = 0;
  local_a0 = 1;
  local_e0 = uVar6;
  uStack_dc = param_2;
  local_d8 = param_3;
  local_d0 = param_4;
  uStack_cc = param_5;
  local_a8 = param_6;
  uStack_a4 = param_7;
  uVar3 = acquireVkCommandBuffer(this,0);
  pcVar2 = vkCmdCopyImage;
  uVar4 = VulkanTextureObject::getImage();
  uVar5 = VulkanTextureObject::getImage();
  (*pcVar2)(uVar3,uVar4,6,uVar5,7,1,&local_e0);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


