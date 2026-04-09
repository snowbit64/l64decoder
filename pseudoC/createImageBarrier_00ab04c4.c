// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createImageBarrier
// Entry Point: 00ab04c4
// Size: 220 bytes
// Signature: undefined __cdecl createImageBarrier(VulkanTextureObject * param_1, uint param_2, uint param_3, uint param_4, uint param_5, LAYOUT param_6, LAYOUT param_7, uint param_8, VkImageMemoryBarrier * param_9, uint * param_10, uint * param_11)


/* VulkanTextureObject::createImageBarrier(VulkanTextureObject*, unsigned int, unsigned int,
   unsigned int, unsigned int, VulkanTextureObject::LAYOUT, VulkanTextureObject::LAYOUT, unsigned
   int, VkImageMemoryBarrier&, unsigned int&, unsigned int&) */

void VulkanTextureObject::createImageBarrier
               (VulkanTextureObject *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
               LAYOUT param_6,LAYOUT param_7,uint param_8,VkImageMemoryBarrier *param_9,
               uint *param_10,uint *param_11)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  lVar1 = (ulong)param_6 * 0x10;
  uVar4 = *(undefined4 *)(s_layoutInfo + lVar1);
  uVar5 = *(uint *)(s_layoutInfo + lVar1 + 4);
  uVar3 = uVar5 & 0xfffffff7;
  if ((param_8 & 2) != 0) {
    uVar3 = uVar5;
  }
  uVar2 = uVar3 & 0xffffff7f;
  if ((param_8 & 4) != 0) {
    uVar2 = uVar3;
  }
  uVar3 = uVar2 & 0xfffff7ff;
  if ((param_8 & 8) != 0) {
    uVar3 = uVar2;
  }
  uVar2 = *(uint *)(s_layoutInfo + lVar1 + 8) & 0xfffff87f;
  if ((param_8 & 1) != 0) {
    uVar2 = *(uint *)(s_layoutInfo + lVar1 + 8);
  }
  *param_10 = uVar5;
  if ((~param_8 & 0xf) != 0) {
    uVar5 = uVar3 & 0xfffff9ff;
    if ((param_8 & 1) != 0) {
      uVar5 = uVar3;
    }
    *param_10 = uVar5;
  }
  lVar1 = (ulong)param_7 * 0x10;
  uVar3 = uVar2 & 0xffffff9f;
  if ((param_8 & 0xe) != 0) {
    uVar3 = uVar2;
  }
  uVar6 = *(undefined4 *)(s_layoutInfo + lVar1 + 8);
  if ((0x10aUL >> ((ulong)param_6 & 0x3f) & 1) != 0) {
    uVar3 = 0;
  }
  *param_11 = *(uint *)(s_layoutInfo + lVar1 + 4);
  uVar7 = *(undefined4 *)(s_layoutInfo + lVar1);
  *(undefined4 *)param_9 = 0x2d;
  *(undefined8 *)(param_9 + 8) = 0;
  *(uint *)(param_9 + 0x10) = uVar3;
  *(undefined4 *)(param_9 + 0x14) = uVar6;
  *(undefined4 *)(param_9 + 0x18) = uVar4;
  *(undefined4 *)(param_9 + 0x1c) = uVar7;
  *(undefined8 *)(param_9 + 0x20) = 0xffffffffffffffff;
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  *(uint *)(param_9 + 0x38) = param_5;
  *(uint *)(param_9 + 0x3c) = param_2;
  uVar4 = *(undefined4 *)(param_1 + 0x8c);
  *(uint *)(param_9 + 0x40) = param_3;
  uVar9 = *puVar8;
  *(undefined4 *)(param_9 + 0x30) = uVar4;
  *(uint *)(param_9 + 0x34) = param_4;
  *(undefined8 *)(param_9 + 0x28) = uVar9;
  return;
}


