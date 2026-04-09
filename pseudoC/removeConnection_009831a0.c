// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeConnection
// Entry Point: 009831a0
// Size: 528 bytes
// Signature: undefined __thiscall removeConnection(MeshSplitManager * this, uint param_1)


/* MeshSplitManager::removeConnection(unsigned int) */

void __thiscall MeshSplitManager::removeConnection(MeshSplitManager *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  uint **ppuVar16;
  void *pvVar17;
  ulong uVar18;
  undefined8 uVar19;
  
  puVar6 = *(undefined4 **)(this + 0x198);
  puVar10 = *(undefined4 **)(this + 0x1a0);
  iVar7 = (int)((ulong)((long)puVar10 - (long)puVar6) >> 4);
  iVar8 = iVar7 + -1;
  if (iVar7 < 1) {
LAB_0098320c:
    if (puVar6 == puVar10) {
LAB_00983398:
      *(undefined8 *)(this + 0x158) = *(undefined8 *)(this + 0x150);
    }
    return;
  }
  iVar7 = 0;
LAB_009831dc:
  do {
    iVar1 = iVar7 + iVar8;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    uVar2 = iVar1 >> 1;
    uVar18 = (ulong)uVar2;
    uVar4 = *(uint *)((long)puVar6 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4));
    if (uVar4 < param_1) goto LAB_009831d0;
    if (uVar4 <= param_1) {
      pvVar17 = *(void **)(puVar6 + (ulong)uVar2 * 4 + 2);
      if (pvVar17 != (void *)0x0) {
        pvVar5 = *(void **)((long)pvVar17 + 8);
        if (pvVar5 != (void *)0x0) {
          *(void **)((long)pvVar17 + 0x10) = pvVar5;
          operator_delete(pvVar5);
        }
        operator_delete(pvVar17);
        puVar6 = *(undefined4 **)(this + 0x198);
        puVar10 = *(undefined4 **)(this + 0x1a0);
      }
      puVar9 = puVar6 + uVar18 * 4;
      puVar11 = puVar9 + 4;
      if (puVar11 == puVar10) goto LAB_009832dc;
      uVar12 = (long)puVar10 + (uVar18 * -0x10 - (long)puVar6) + -0x20;
      if (uVar12 < 0x10) goto LAB_009832bc;
      uVar12 = (uVar12 >> 4) + 1;
      uVar13 = uVar12 & 0x1ffffffffffffffe;
      puVar9 = puVar9 + uVar13 * 4;
      puVar11 = puVar11 + uVar13 * 4;
      puVar15 = (undefined8 *)(puVar6 + uVar18 * 4 + 6);
      uVar18 = uVar13;
      do {
        uVar18 = uVar18 - 2;
        *(undefined4 *)(puVar15 + -3) = *(undefined4 *)(puVar15 + -1);
        *(undefined4 *)(puVar15 + -1) = *(undefined4 *)(puVar15 + 1);
        puVar15[-2] = *puVar15;
        *puVar15 = puVar15[2];
        puVar15 = puVar15 + 4;
      } while (uVar18 != 0);
      if (uVar12 != uVar13) {
LAB_009832bc:
        do {
          uVar3 = *puVar11;
          uVar14 = *(undefined8 *)(puVar11 + 2);
          puVar11 = puVar11 + 4;
          *puVar9 = uVar3;
          *(undefined8 *)(puVar9 + 2) = uVar14;
          puVar9 = puVar9 + 4;
        } while (puVar11 != puVar10);
      }
LAB_009832dc:
      *(undefined4 **)(this + 0x1a0) = puVar9;
      *(undefined8 *)this = 0x60000000000190;
      if (puVar6 != puVar9) {
        uVar18 = (long)puVar9 + (-0x10 - (long)puVar6);
        if (uVar18 < 0x10) {
          uVar14 = 0x60000000000190;
          puVar10 = puVar6;
LAB_00983370:
          do {
            ppuVar16 = (uint **)(puVar10 + 2);
            puVar10 = puVar10 + 4;
            uVar14 = NEON_umin(*(undefined8 *)(s_platformLimits + (ulong)**ppuVar16 * 8),uVar14,4);
          } while (puVar10 != puVar9);
        }
        else {
          uVar19 = 0x60000000000190;
          uVar18 = (uVar18 >> 4) + 1;
          uVar13 = uVar18 & 0x1ffffffffffffffe;
          puVar10 = puVar6 + uVar13 * 4;
          ppuVar16 = (uint **)(puVar6 + 6);
          uVar12 = uVar13;
          uVar14 = uVar19;
          do {
            uVar12 = uVar12 - 2;
            uVar19 = NEON_umin(*(undefined8 *)(s_platformLimits + (ulong)*ppuVar16[-2] * 8),uVar19,4
                              );
            uVar14 = NEON_umin(*(undefined8 *)(s_platformLimits + (ulong)**ppuVar16 * 8),uVar14,4);
            ppuVar16 = ppuVar16 + 4;
          } while (uVar12 != 0);
          uVar14 = NEON_umin(uVar19,uVar14,4);
          if (uVar18 != uVar13) goto LAB_00983370;
        }
        *(undefined8 *)this = uVar14;
        if (puVar6 != puVar9) {
          return;
        }
      }
      goto LAB_00983398;
    }
    iVar8 = uVar2 - 1;
  } while (iVar7 <= iVar8);
  goto LAB_0098320c;
LAB_009831d0:
  iVar7 = uVar2 + 1;
  if (iVar8 < iVar7) goto LAB_0098320c;
  goto LAB_009831dc;
}


