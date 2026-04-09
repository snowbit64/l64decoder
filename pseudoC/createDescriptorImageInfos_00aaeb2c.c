// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createDescriptorImageInfos
// Entry Point: 00aaeb2c
// Size: 312 bytes
// Signature: undefined createDescriptorImageInfos(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanTextureObject::createDescriptorImageInfos() */

void VulkanTextureObject::createDescriptorImageInfos(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  bool bVar4;
  long in_x0;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  *(undefined4 *)(in_x0 + 200) = 5;
  *(undefined4 *)(in_x0 + 0xe0) = 1;
  uVar11 = *(long *)(in_x0 + 0xf0) - *(long *)(in_x0 + 0xe8);
  uVar6 = *(undefined8 *)(in_x0 + 0xb0);
  uVar10 = (long)uVar11 >> 3 & 0xffffffff;
  *(undefined8 *)(in_x0 + 0xb8) = 0;
  *(undefined8 *)(in_x0 + 0xc0) = uVar6;
  lVar8 = *(long *)(in_x0 + 0x108) - *(long *)(in_x0 + 0x100) >> 3;
  *(undefined8 *)(in_x0 + 0xd0) = 0;
  *(undefined8 *)(in_x0 + 0xd8) = uVar6;
  *(undefined8 *)(in_x0 + 0x130) = 0;
  *(undefined8 *)(in_x0 + 0x138) = uVar6;
  bVar4 = uVar10 < (ulong)(lVar8 * -0x5555555555555555);
  uVar3 = uVar10 + lVar8 * 0x5555555555555555;
  *(undefined4 *)(in_x0 + 0x140) = 4;
  if (bVar4 || uVar3 == 0) {
    if (bVar4) {
      *(ulong *)(in_x0 + 0x108) = *(long *)(in_x0 + 0x100) + uVar10 * 0x18;
    }
  }
  else {
    std::__ndk1::vector<VkDescriptorImageInfo,std::__ndk1::allocator<VkDescriptorImageInfo>>::
    __append((vector<VkDescriptorImageInfo,std::__ndk1::allocator<VkDescriptorImageInfo>> *)
             (in_x0 + 0x100),uVar3);
  }
  lVar8 = *(long *)(in_x0 + 0x118);
  lVar5 = *(long *)(in_x0 + 0x120) - lVar8 >> 3;
  bVar4 = uVar10 < (ulong)(lVar5 * -0x5555555555555555);
  uVar3 = uVar10 + lVar5 * 0x5555555555555555;
  if (bVar4 || uVar3 == 0) {
    if (bVar4) {
      *(ulong *)(in_x0 + 0x120) = lVar8 + uVar10 * 0x18;
    }
  }
  else {
    std::__ndk1::vector<VkDescriptorImageInfo,std::__ndk1::allocator<VkDescriptorImageInfo>>::
    __append((vector<VkDescriptorImageInfo,std::__ndk1::allocator<VkDescriptorImageInfo>> *)
             (long *)(in_x0 + 0x118),uVar3);
    lVar8 = *(long *)(in_x0 + 0x118);
  }
  if ((int)((long)uVar11 >> 3) != 0) {
    lVar5 = 0;
    lVar7 = *(long *)(in_x0 + 0x100);
    puVar9 = *(undefined8 **)(in_x0 + 0xe8);
    do {
      puVar1 = (undefined8 *)(lVar7 + lVar5);
      puVar2 = (undefined8 *)(lVar8 + lVar5);
      lVar5 = lVar5 + 0x18;
      *puVar1 = 0;
      uVar6 = *puVar9;
      *puVar2 = 0;
      *(undefined4 *)(puVar1 + 2) = 5;
      *(undefined4 *)(puVar2 + 2) = 1;
      puVar1[1] = uVar6;
      puVar2[1] = *puVar9;
      puVar9 = puVar9 + 1;
    } while (((uVar11 >> 3 & 0xffffffff) + (uVar11 >> 3 & 0xffffffff) * 2) * 8 - lVar5 != 0);
  }
  return;
}


