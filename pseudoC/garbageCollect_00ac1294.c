// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: garbageCollect
// Entry Point: 00ac1294
// Size: 728 bytes
// Signature: undefined __thiscall garbageCollect(VulkanResourceAllocator * this, bool param_1)


/* VulkanResourceAllocator::garbageCollect(bool) */

void __thiscall VulkanResourceAllocator::garbageCollect(VulkanResourceAllocator *this,bool param_1)

{
  Allocation *pAVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  VulkanRenderDevice *pVVar5;
  VkBuffer_T *pVVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  VkBuffer_T **ppVVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  
  lVar18 = 0;
  iVar2 = *(int *)(*(long *)(this + 0x980) + 0x3b4);
  do {
    lVar7 = *(long *)(this + lVar18 * 0x18 + 0x490);
    lVar9 = *(long *)(this + lVar18 * 0x18 + 0x488);
    if (lVar7 - lVar9 != 0) {
      uVar11 = 0;
      uVar19 = 0;
      plVar17 = (long *)(this + lVar18 * 0x18 + 0x490);
      uVar13 = lVar7 - lVar9 >> 3;
      do {
        ppVVar16 = *(VkBuffer_T ***)(lVar9 + uVar11 * 8);
        if ((0x1e < (uint)(iVar2 - *(int *)(ppVVar16 + 8))) || (uVar4 = uVar19 + 1, param_1)) {
          if (uVar19 + 1 < uVar13) {
            *(undefined8 *)(lVar9 + uVar11 * 8) = *(undefined8 *)(lVar7 + -8);
            lVar7 = *plVar17;
          }
          pVVar6 = *ppVVar16;
          pAVar1 = (Allocation *)ppVVar16[1];
          pVVar5 = *(VulkanRenderDevice **)(this + 0x980);
          *plVar17 = lVar7 + -8;
          VulkanUtil::destroyBuffer(pVVar5,pVVar6,pAVar1);
          pVVar6 = ppVVar16[3];
          if (pVVar6 != (VkBuffer_T *)0x0) {
            ppVVar16[4] = pVVar6;
            operator_delete(pVVar6);
          }
          operator_delete(ppVVar16);
          lVar7 = *plVar17;
          lVar9 = *(long *)(this + lVar18 * 0x18 + 0x488);
          uVar4 = uVar19;
        }
        uVar19 = uVar4;
        uVar11 = (ulong)uVar19;
        uVar13 = lVar7 - lVar9 >> 3;
      } while (uVar11 < uVar13);
    }
    lVar7 = *(long *)(this + lVar18 * 0x18 + 0x6d0);
    lVar9 = *(long *)(this + lVar18 * 0x18 + 0x6c8);
    if (lVar7 - lVar9 != 0) {
      uVar11 = 0;
      uVar19 = 0;
      plVar17 = (long *)(this + lVar18 * 0x18 + 0x6d0);
      uVar13 = lVar7 - lVar9 >> 3;
      do {
        ppVVar16 = *(VkBuffer_T ***)(lVar9 + uVar11 * 8);
        if ((0x1e < (uint)(iVar2 - *(int *)(ppVVar16 + 8))) || (uVar4 = uVar19 + 1, param_1)) {
          if (uVar19 + 1 < uVar13) {
            *(undefined8 *)(lVar9 + uVar11 * 8) = *(undefined8 *)(lVar7 + -8);
            lVar7 = *plVar17;
          }
          pVVar6 = *ppVVar16;
          pAVar1 = (Allocation *)ppVVar16[1];
          pVVar5 = *(VulkanRenderDevice **)(this + 0x980);
          *plVar17 = lVar7 + -8;
          VulkanUtil::destroyBuffer(pVVar5,pVVar6,pAVar1);
          pVVar6 = ppVVar16[3];
          if (pVVar6 != (VkBuffer_T *)0x0) {
            ppVVar16[4] = pVVar6;
            operator_delete(pVVar6);
          }
          operator_delete(ppVVar16);
          lVar7 = *plVar17;
          lVar9 = *(long *)(this + lVar18 * 0x18 + 0x6c8);
          uVar4 = uVar19;
        }
        uVar19 = uVar4;
        uVar11 = (ulong)uVar19;
        uVar13 = lVar7 - lVar9 >> 3;
      } while (uVar11 < uVar13);
    }
    lVar18 = lVar18 + 1;
  } while (lVar18 != 0x18);
  plVar17 = *(long **)(this + 0x9e8);
  plVar8 = *(long **)(this + 0x9f0);
  if (plVar17 != plVar8) {
    do {
      while ((0x1e < (uint)(iVar2 - *(int *)(plVar17 + 1)) || (param_1))) {
        (*vkDestroyDescriptorPool)
                  (*(undefined8 *)(*(long *)(this + 0x980) + 0x18),*(undefined8 *)(*plVar17 + 0x10),
                   0);
        lVar18 = *(long *)(this + 0x9e8);
        plVar10 = *(long **)(this + 0x9f0);
        uVar13 = (long)plVar17 - lVar18;
        uVar11 = uVar13 & 0xfffffffffffffff0;
        plVar17 = (long *)(lVar18 + uVar11);
        plVar12 = plVar17 + 2;
        plVar8 = plVar17;
        if (plVar12 != plVar10) {
          uVar11 = (long)plVar10 + (-0x20 - (uVar11 + lVar18));
          if (0xf < uVar11) {
            uVar11 = (uVar11 >> 4) + 1;
            uVar14 = uVar11 & 0x1ffffffffffffffe;
            plVar8 = plVar17 + uVar14 * 2;
            plVar12 = plVar12 + uVar14 * 2;
            puVar15 = (undefined4 *)(lVar18 + ((long)uVar13 >> 4) * 0x10 + 0x18);
            uVar13 = uVar14;
            do {
              uVar13 = uVar13 - 2;
              *(undefined8 *)(puVar15 + -6) = *(undefined8 *)(puVar15 + -2);
              *(undefined8 *)(puVar15 + -2) = *(undefined8 *)(puVar15 + 2);
              puVar15[-4] = *puVar15;
              *puVar15 = puVar15[4];
              puVar15 = puVar15 + 8;
            } while (uVar13 != 0);
            if (uVar11 == uVar14) goto LAB_00ac144c;
          }
          do {
            lVar18 = *plVar12;
            uVar3 = *(undefined4 *)(plVar12 + 1);
            plVar12 = plVar12 + 2;
            *plVar8 = lVar18;
            *(undefined4 *)(plVar8 + 1) = uVar3;
            plVar8 = plVar8 + 2;
          } while (plVar12 != plVar10);
        }
LAB_00ac144c:
        *(long **)(this + 0x9f0) = plVar8;
        if (plVar17 == plVar8) {
          return;
        }
      }
      plVar17 = plVar17 + 2;
    } while (plVar17 != plVar8);
  }
  return;
}


