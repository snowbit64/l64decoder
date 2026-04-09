// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: synchronizeSubResources
// Entry Point: 00ab0664
// Size: 480 bytes
// Signature: undefined __cdecl synchronizeSubResources(VulkanCommandBuffer * param_1, VK_COMMAND_BUFFER_TYPE param_2, uint param_3, SubResourceTransitionData * param_4)


/* VulkanTextureObject::synchronizeSubResources(VulkanCommandBuffer*,
   VulkanUtil::VK_COMMAND_BUFFER_TYPE, unsigned int, VulkanTextureObject::SubResourceTransitionData
   const*) */

void VulkanTextureObject::synchronizeSubResources
               (VulkanCommandBuffer *param_1,VK_COMMAND_BUFFER_TYPE param_2,uint param_3,
               SubResourceTransitionData *param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  void *__s;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  uint *puVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  
  if (param_3 == 0) {
    return;
  }
  uVar21 = (ulong)param_3;
  uVar20 = (uVar21 + (ulong)param_3 * 8) * 8;
  __s = operator_new(uVar20);
  memset(__s,0,((uVar20 - 0x48) / 0x48) * 0x48 + 0x48);
  uVar23 = 0;
  uVar22 = 0;
  uVar19 = 0;
  puVar17 = (uint *)(param_4 + 0x10);
  do {
    uVar5 = puVar17[-1];
    uVar8 = *puVar17;
    lVar14 = *(long *)(puVar17 + -4);
    lVar18 = *(long *)(*(long *)(lVar14 + 0x90) + (ulong)uVar5 * 0x18);
    uVar11 = puVar17[-2];
    uVar12 = *(uint *)(lVar18 + (ulong)uVar8 * 4);
    if ((uVar11 != uVar12) || ((0x10aUL >> ((ulong)uVar11 & 0x3f) & 1) == 0)) {
      lVar1 = (ulong)uVar12 * 0x10;
      lVar2 = (ulong)uVar11 * 0x10;
      puVar16 = (undefined4 *)((long)__s + (ulong)uVar19 * 0x48);
      uVar19 = uVar19 + 1;
      uVar9 = *(undefined4 *)(s_layoutInfo + lVar1 + 8);
      uVar3 = *(undefined4 *)(s_layoutInfo + lVar1);
      uVar6 = *(uint *)(s_layoutInfo + lVar1 + 4);
      uVar4 = *(undefined4 *)(s_layoutInfo + lVar2);
      uVar7 = *(uint *)(s_layoutInfo + lVar2 + 4);
      if ((0x10aUL >> ((ulong)uVar12 & 0x3f) & 1) != 0) {
        uVar9 = 0;
      }
      uVar10 = *(undefined4 *)(s_layoutInfo + lVar2 + 8);
      *puVar16 = 0x2d;
      *(undefined8 *)(puVar16 + 2) = 0;
      uVar23 = uVar6 | uVar23;
      *(undefined8 *)(puVar16 + 8) = 0xffffffffffffffff;
      uVar22 = uVar7 | uVar22;
      puVar16[6] = uVar3;
      puVar16[7] = uVar4;
      uVar3 = *(undefined4 *)(lVar14 + 0x8c);
      puVar16[4] = uVar9;
      puVar16[5] = uVar10;
      puVar13 = *(undefined8 **)(lVar14 + 0x10);
      puVar16[0xe] = 1;
      puVar16[0xf] = uVar5;
      puVar16[0xc] = uVar3;
      puVar16[0xd] = uVar8;
      puVar16[0x10] = 1;
      uVar15 = *puVar13;
      *(uint *)(lVar18 + (ulong)uVar8 * 4) = uVar11;
      *(undefined8 *)(puVar16 + 10) = uVar15;
    }
    puVar17 = puVar17 + 6;
    uVar21 = uVar21 - 1;
  } while (uVar21 != 0);
  if (uVar19 != 0) {
                    /* try { // try from 00ab07b4 to 00ab07ff has its CatchHandler @ 00ab0844 */
    uVar15 = VulkanCommandBuffer::acquireVkCommandBuffer(param_1,param_2);
    if (uVar23 == 0) {
      uVar23 = 1;
    }
    uVar5 = 0x2000;
    if (uVar22 != 0) {
      uVar5 = uVar22;
    }
    (*vkCmdPipelineBarrier)(uVar15,uVar23,uVar5,0,0,0,0,0,uVar19,__s);
  }
  operator_delete(__s);
  return;
}


