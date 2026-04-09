// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createBufferBarrier
// Entry Point: 00ab05a0
// Size: 196 bytes
// Signature: undefined __cdecl createBufferBarrier(VulkanTextureObject * param_1, LAYOUT param_2, LAYOUT param_3, uint param_4, VkBufferMemoryBarrier * param_5, uint * param_6, uint * param_7)


/* VulkanTextureObject::createBufferBarrier(VulkanTextureObject*, VulkanTextureObject::LAYOUT,
   VulkanTextureObject::LAYOUT, unsigned int, VkBufferMemoryBarrier&, unsigned int&, unsigned int&)
    */

void VulkanTextureObject::createBufferBarrier
               (VulkanTextureObject *param_1,LAYOUT param_2,LAYOUT param_3,uint param_4,
               VkBufferMemoryBarrier *param_5,uint *param_6,uint *param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar3 = *(uint *)(s_layoutInfo + (ulong)param_2 * 0x10 + 4);
  uVar4 = *(uint *)(s_layoutInfo + (ulong)param_2 * 0x10 + 8);
  *param_6 = uVar3;
  uVar1 = uVar3 & 0xfffffff7;
  if ((param_4 & 2) != 0) {
    uVar1 = uVar3;
  }
  uVar3 = uVar1 & 0xffffff7f;
  if ((param_4 & 4) != 0) {
    uVar3 = uVar1;
  }
  uVar1 = uVar3 & 0xfffff7ff;
  if ((param_4 & 8) != 0) {
    uVar1 = uVar3;
  }
  uVar3 = uVar4 & 0xfffff87f;
  if ((param_4 & 1) != 0) {
    uVar3 = uVar4;
  }
  if ((~param_4 & 0xf) != 0) {
    uVar4 = uVar1 & 0xfffff9ff;
    if ((param_4 & 1) != 0) {
      uVar4 = uVar1;
    }
    *param_6 = uVar4;
  }
  uVar1 = uVar3 & 0xffffff9f;
  if ((param_4 & 0xe) != 0) {
    uVar1 = uVar3;
  }
  uVar3 = *(uint *)(s_layoutInfo + (ulong)param_3 * 0x10 + 4);
  uVar5 = *(undefined4 *)(s_layoutInfo + (ulong)param_3 * 0x10 + 8);
  *(undefined8 *)(param_5 + 8) = 0;
  *(undefined4 *)param_5 = 0x2c;
  *param_7 = uVar3;
  *(uint *)(param_5 + 0x10) = uVar1;
  *(undefined4 *)(param_5 + 0x14) = uVar5;
  *(undefined8 *)(param_5 + 0x18) = 0xffffffffffffffff;
  lVar6 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x68) + 8);
  if (*(char *)(lVar6 + 0x60) != '\0') {
    puVar2 = (undefined8 *)(lVar6 + 0x70);
  }
  uVar7 = *puVar2;
  *(undefined8 *)(param_5 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(param_5 + 0x28) = 0;
  *(undefined8 *)(param_5 + 0x20) = uVar7;
  return;
}


