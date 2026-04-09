// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyBufferToTextureRegion
// Entry Point: 00ad1de0
// Size: 424 bytes
// Signature: undefined __thiscall copyBufferToTextureRegion(VulkanCommandBuffer * this, IStructBuffer * param_1, uint param_2, uint param_3, ITextureObject * param_4, uint param_5, uint param_6, uint param_7, uint param_8, uint param_9, uint param_10)


/* VulkanCommandBuffer::copyBufferToTextureRegion(IStructBuffer*, unsigned int, unsigned int,
   ITextureObject*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned
   int) */

void __thiscall
VulkanCommandBuffer::copyBufferToTextureRegion
          (VulkanCommandBuffer *this,IStructBuffer *param_1,uint param_2,uint param_3,
          ITextureObject *param_4,uint param_5,uint param_6,uint param_7,uint param_8,uint param_9,
          uint param_10)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  uint uStack_bc;
  uint local_b8;
  undefined4 uStack_b4;
  uint local_b0;
  uint uStack_ac;
  undefined4 local_a8;
  uint uStack_a4;
  uint local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined local_88;
  ITextureObject *local_80;
  undefined4 local_78;
  undefined local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_78 = 2;
  local_70 = 0;
  local_80 = param_4;
  VulkanTextureObject::synchronizeTextures(this,0,1,(TransitionData *)&local_80);
  local_98 = *(undefined8 *)(param_1 + 0x10);
  local_90 = 1;
  local_88 = 0;
  VulkanBufferResource::synchronizeBuffers(this,0,1,(TransitionData *)&local_98);
  uVar4 = (**(code **)(*(long *)param_4 + 0x18))(param_4);
  lVar7 = *(long *)(param_1 + 0x10);
  local_c8 = param_3;
  if ((*(uint *)(PixelFormatUtil::s_pixelFormats + (uVar4 & 0xffffffff) * 0x18 + 0xc) & 2) != 0) {
    local_c8 = param_3 >> 2;
  }
  puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x68) + 8);
  if (*(char *)(lVar7 + 0x60) != '\0') {
    puVar1 = (undefined8 *)(lVar7 + 0x70);
  }
  uStack_c4 = 0;
  uStack_b4 = 1;
  local_a8 = 0;
  uStack_a4 = param_9;
  local_c0 = 1;
  if (param_4[0x50] != (ITextureObject)0x0) {
    local_c0 = 2;
  }
  local_a0 = param_10;
  uStack_9c = 1;
  uStack_ac = param_8;
  local_d0 = (ulong)(*(int *)(puVar1 + 3) + param_2);
  uStack_bc = param_5;
  local_b8 = param_6;
  local_b0 = param_7;
  uVar5 = acquireVkCommandBuffer(this,0);
  pcVar3 = vkCmdCopyBufferToImage;
  uVar8 = *puVar1;
  uVar6 = VulkanTextureObject::getImage();
  (*pcVar3)(uVar5,uVar8,uVar6,7,1,&local_d0);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


