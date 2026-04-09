// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: garbageCollect
// Entry Point: 00abf748
// Size: 400 bytes
// Signature: undefined __thiscall garbageCollect(VulkanMemoryAllocator * this, bool param_1)


/* VulkanMemoryAllocator::garbageCollect(bool) */

void __thiscall VulkanMemoryAllocator::garbageCollect(VulkanMemoryAllocator *this,bool param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  
  uVar7 = *(uint *)(this + 0x10);
  if (uVar7 != 0) {
    uVar8 = 0;
    iVar1 = *(int *)(*(long *)(this + 8) + 0x3b4);
    do {
      lVar12 = *(long *)(this + 0x218) + uVar8 * 0x38;
      plVar13 = (long *)(lVar12 + 0x20);
      lVar6 = *plVar13;
      plVar11 = (long *)(lVar12 + 0x28);
      lVar12 = *plVar11;
      if (lVar12 != lVar6) {
        uVar10 = 0;
        uVar7 = 0;
        do {
          puVar9 = *(undefined8 **)(lVar6 + uVar10 * 8);
          if ((0x1e < (uint)(iVar1 - *(int *)(puVar9 + 7))) || (param_1)) {
            uVar2 = *(uint *)(puVar9 + 1);
            uVar3 = *(uint *)((long)puVar9 + 0x3c);
            (*vkFreeMemory)(*(undefined8 *)(*(long *)(this + 8) + 0x18),*puVar9,0);
            pvVar5 = (void *)puVar9[2];
            *puVar9 = 0;
            bVar4 = (*(uint *)(this + (ulong)uVar3 * 8 + 0x14) & 1) != 0;
            lVar6 = 0x260;
            if (bVar4) {
              lVar6 = 600;
            }
            lVar12 = 0x270;
            if (bVar4) {
              lVar12 = 0x268;
            }
            *(ulong *)(this + lVar6) = *(long *)(this + lVar6) - (ulong)uVar2;
            *(ulong *)(this + lVar12) = *(long *)(this + lVar12) - (ulong)uVar2;
            if (pvVar5 != (void *)0x0) {
              puVar9[3] = pvVar5;
              operator_delete(pvVar5);
            }
            operator_delete(puVar9);
            lVar12 = *plVar11;
            lVar6 = *plVar13;
            if ((ulong)(uVar7 + 1) < (ulong)(lVar12 - lVar6 >> 3)) {
              *(undefined8 *)(lVar6 + uVar10 * 8) = *(undefined8 *)(lVar12 + -8);
              lVar12 = *plVar11;
              lVar6 = *plVar13;
            }
            lVar12 = lVar12 + -8;
            *plVar11 = lVar12;
            this[0x27c] = (VulkanMemoryAllocator)0x1;
          }
          else {
            uVar7 = uVar7 + 1;
          }
          uVar10 = (ulong)uVar7;
        } while (uVar10 < (ulong)(lVar12 - lVar6 >> 3));
        uVar7 = *(uint *)(this + 0x10);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  return;
}


