// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 00f813dc
// Size: 724 bytes
// Signature: undefined __thiscall resize(btAlignedObjectArray<NodeLinks> * this, int param_1, NodeLinks * param_2)


/* btAlignedObjectArray<NodeLinks>::resize(int, NodeLinks const&) */

void __thiscall
btAlignedObjectArray<NodeLinks>::resize
          (btAlignedObjectArray<NodeLinks> *this,int param_1,NodeLinks *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  void **ppvVar19;
  uint *puVar20;
  char *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  iVar15 = *(int *)(this + 4);
  lVar18 = (long)iVar15;
  if (param_1 < iVar15) {
    iVar15 = iVar15 - param_1;
    uVar16 = -(ulong)((uint)param_1 >> 0x1f) & 0xffffffe000000000 | (ulong)(uint)param_1 << 5;
    do {
      lVar18 = *(long *)(this + 0x10) + uVar16;
      if (*(long *)(lVar18 + 0x10) != 0 && *(char *)(lVar18 + 0x18) != '\0') {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      iVar15 = iVar15 + -1;
      uVar16 = uVar16 + 0x20;
      *(undefined *)(lVar18 + 0x18) = 1;
      *(undefined8 *)(lVar18 + 0x10) = 0;
      *(undefined4 *)(lVar18 + 4) = 0;
      *(undefined4 *)(lVar18 + 8) = 0;
    } while (iVar15 != 0);
  }
  else if (iVar15 < param_1) {
    reserve(this,param_1);
    do {
      lVar13 = *(long *)(this + 0x10) + lVar18 * 0x20;
      pcVar21 = (char *)(lVar13 + 0x18);
      *pcVar21 = '\x01';
      puVar20 = (uint *)(lVar13 + 4);
      *puVar20 = 0;
      *(uint *)(lVar13 + 8) = 0;
      uVar1 = *(uint *)(param_2 + 4);
      uVar16 = (ulong)uVar1;
      ppvVar19 = (void **)(lVar13 + 0x10);
      *ppvVar19 = (void *)0x0;
      if ((int)uVar1 < 1) {
        *puVar20 = uVar1;
      }
      else {
        lVar17 = uVar16 * 4;
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        pvVar4 = (void *)(*(code *)PTR_FUN_01048e38)(lVar17,0x10);
        uVar2 = *puVar20;
        uVar6 = (ulong)uVar2;
        pvVar5 = *ppvVar19;
        if ((int)uVar2 < 1) {
          if (pvVar5 != (void *)0x0) goto LAB_00f815a8;
        }
        else {
          if ((uVar2 < 8) ||
             ((pvVar4 < (void *)((long)pvVar5 + uVar6 * 4) &&
              (pvVar5 < (void *)((long)pvVar4 + uVar6 * 4))))) {
            uVar9 = 0;
          }
          else {
            uVar9 = uVar6 & 0xfffffff8;
            puVar11 = (undefined8 *)((long)pvVar5 + 0x10);
            puVar12 = (undefined8 *)((long)pvVar4 + 0x10);
            uVar14 = uVar9;
            do {
              puVar3 = puVar11 + -1;
              uVar22 = puVar11[-2];
              uVar24 = puVar11[1];
              uVar23 = *puVar11;
              uVar14 = uVar14 - 8;
              puVar11 = puVar11 + 4;
              puVar12[-1] = *puVar3;
              puVar12[-2] = uVar22;
              puVar12[1] = uVar24;
              *puVar12 = uVar23;
              puVar12 = puVar12 + 4;
            } while (uVar14 != 0);
            if (uVar9 == uVar6) goto LAB_00f815a8;
          }
          lVar7 = uVar6 - uVar9;
          puVar8 = (undefined4 *)((long)pvVar5 + uVar9 * 4);
          puVar10 = (undefined4 *)((long)pvVar4 + uVar9 * 4);
          do {
            lVar7 = lVar7 + -1;
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          } while (lVar7 != 0);
LAB_00f815a8:
          if (*pcVar21 != '\0') {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
          }
        }
        *pcVar21 = '\x01';
        *ppvVar19 = pvVar4;
        *(uint *)(lVar13 + 8) = uVar1;
        memset(pvVar4,0,(long)(int)uVar1 << 2);
        *puVar20 = uVar1;
        pvVar4 = *ppvVar19;
        pvVar5 = *(void **)(param_2 + 0x10);
        if ((uVar1 < 8) ||
           ((pvVar4 < (void *)((long)pvVar5 + lVar17) && (pvVar5 < (void *)((long)pvVar4 + lVar17)))
           )) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar16 & 0xfffffff8;
          puVar11 = (undefined8 *)((long)pvVar5 + 0x10);
          puVar12 = (undefined8 *)((long)pvVar4 + 0x10);
          uVar9 = uVar6;
          do {
            puVar3 = puVar11 + -1;
            uVar22 = puVar11[-2];
            uVar24 = puVar11[1];
            uVar23 = *puVar11;
            uVar9 = uVar9 - 8;
            puVar11 = puVar11 + 4;
            puVar12[-1] = *puVar3;
            puVar12[-2] = uVar22;
            puVar12[1] = uVar24;
            *puVar12 = uVar23;
            puVar12 = puVar12 + 4;
          } while (uVar9 != 0);
          if (uVar6 == uVar16) goto LAB_00f814a0;
        }
        lVar13 = uVar16 - uVar6;
        puVar8 = (undefined4 *)((long)pvVar4 + uVar6 * 4);
        puVar10 = (undefined4 *)((long)pvVar5 + uVar6 * 4);
        do {
          lVar13 = lVar13 + -1;
          *puVar8 = *puVar10;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar13 != 0);
      }
LAB_00f814a0:
      lVar18 = lVar18 + 1;
    } while ((int)lVar18 != param_1);
  }
  *(int *)(this + 4) = param_1;
  return;
}


