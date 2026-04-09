// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reserve
// Entry Point: 00f816b0
// Size: 872 bytes
// Signature: undefined __thiscall reserve(btAlignedObjectArray<NodeLinks> * this, int param_1)


/* btAlignedObjectArray<NodeLinks>::reserve(int) */

void __thiscall
btAlignedObjectArray<NodeLinks>::reserve(btAlignedObjectArray<NodeLinks> *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  void **ppvVar17;
  long lVar18;
  long lVar19;
  char *pcVar20;
  uint *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long local_68;
  
  if (*(int *)(this + 8) < param_1) {
    if (param_1 == 0) {
      local_68 = 0;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      local_68 = (*(code *)PTR_FUN_01048e38)
                           (-(ulong)((uint)param_1 >> 0x1f) & 0xffffffe000000000 |
                            (ulong)(uint)param_1 << 5,0x10);
    }
    uVar1 = *(uint *)(this + 4);
    if (0 < (int)uVar1) {
      uVar16 = 0;
      do {
        lVar19 = *(long *)(this + 0x10);
        lVar14 = local_68 + uVar16 * 0x20;
        pcVar20 = (char *)(lVar14 + 0x18);
        *pcVar20 = '\x01';
        puVar21 = (uint *)(lVar14 + 4);
        *puVar21 = 0;
        *(uint *)(lVar14 + 8) = 0;
        uVar2 = *(uint *)(lVar19 + uVar16 * 0x20 + 4);
        uVar22 = (ulong)uVar2;
        ppvVar17 = (void **)(lVar14 + 0x10);
        *ppvVar17 = (void *)0x0;
        if ((int)uVar2 < 1) {
          *puVar21 = uVar2;
        }
        else {
          lVar18 = uVar22 * 4;
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          pvVar5 = (void *)(*(code *)PTR_FUN_01048e38)(lVar18,0x10);
          uVar3 = *puVar21;
          uVar7 = (ulong)uVar3;
          pvVar6 = *ppvVar17;
          if ((int)uVar3 < 1) {
            if (pvVar6 != (void *)0x0) goto LAB_00f8184c;
          }
          else {
            if ((uVar3 < 8) ||
               ((pvVar5 < (void *)((long)pvVar6 + uVar7 * 4) &&
                (pvVar6 < (void *)((long)pvVar5 + uVar7 * 4))))) {
              uVar10 = 0;
            }
            else {
              uVar10 = uVar7 & 0xfffffff8;
              puVar12 = (undefined8 *)((long)pvVar6 + 0x10);
              puVar13 = (undefined8 *)((long)pvVar5 + 0x10);
              uVar15 = uVar10;
              do {
                puVar4 = puVar12 + -1;
                uVar23 = puVar12[-2];
                uVar25 = puVar12[1];
                uVar24 = *puVar12;
                uVar15 = uVar15 - 8;
                puVar12 = puVar12 + 4;
                puVar13[-1] = *puVar4;
                puVar13[-2] = uVar23;
                puVar13[1] = uVar25;
                *puVar13 = uVar24;
                puVar13 = puVar13 + 4;
              } while (uVar15 != 0);
              if (uVar10 == uVar7) goto LAB_00f8184c;
            }
            lVar8 = uVar7 - uVar10;
            puVar9 = (undefined4 *)((long)pvVar6 + uVar10 * 4);
            puVar11 = (undefined4 *)((long)pvVar5 + uVar10 * 4);
            do {
              lVar8 = lVar8 + -1;
              *puVar11 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
            } while (lVar8 != 0);
LAB_00f8184c:
            if (*pcVar20 != '\0') {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
            }
          }
          *pcVar20 = '\x01';
          *ppvVar17 = pvVar5;
          *(uint *)(lVar14 + 8) = uVar2;
          memset(pvVar5,0,(long)(int)uVar2 << 2);
          *puVar21 = uVar2;
          pvVar5 = *ppvVar17;
          pvVar6 = *(void **)(lVar19 + uVar16 * 0x20 + 0x10);
          if ((uVar2 < 8) ||
             ((pvVar5 < (void *)((long)pvVar6 + lVar18) &&
              (pvVar6 < (void *)((long)pvVar5 + lVar18))))) {
            uVar7 = 0;
          }
          else {
            uVar7 = uVar22 & 0xfffffff8;
            puVar12 = (undefined8 *)((long)pvVar6 + 0x10);
            puVar13 = (undefined8 *)((long)pvVar5 + 0x10);
            uVar10 = uVar7;
            do {
              puVar4 = puVar12 + -1;
              uVar23 = puVar12[-2];
              uVar25 = puVar12[1];
              uVar24 = *puVar12;
              uVar10 = uVar10 - 8;
              puVar12 = puVar12 + 4;
              puVar13[-1] = *puVar4;
              puVar13[-2] = uVar23;
              puVar13[1] = uVar25;
              *puVar13 = uVar24;
              puVar13 = puVar13 + 4;
            } while (uVar10 != 0);
            if (uVar7 == uVar22) goto LAB_00f8173c;
          }
          lVar14 = uVar22 - uVar7;
          puVar9 = (undefined4 *)((long)pvVar5 + uVar7 * 4);
          puVar11 = (undefined4 *)((long)pvVar6 + uVar7 * 4);
          do {
            lVar14 = lVar14 + -1;
            *puVar9 = *puVar11;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          } while (lVar14 != 0);
        }
LAB_00f8173c:
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar1);
      uVar1 = *(uint *)(this + 4);
      if (0 < (int)uVar1) {
        lVar14 = 0;
        do {
          lVar19 = *(long *)(this + 0x10) + lVar14;
          if (*(long *)(lVar19 + 0x10) != 0 && *(char *)(lVar19 + 0x18) != '\0') {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
          }
          lVar14 = lVar14 + 0x20;
          *(undefined *)(lVar19 + 0x18) = 1;
          *(undefined8 *)(lVar19 + 0x10) = 0;
          *(undefined4 *)(lVar19 + 4) = 0;
          *(undefined4 *)(lVar19 + 8) = 0;
        } while ((ulong)uVar1 * 0x20 - lVar14 != 0);
      }
    }
    if ((*(long *)(this + 0x10) != 0) && (this[0x18] != (btAlignedObjectArray<NodeLinks>)0x0)) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(int *)(this + 8) = param_1;
    *(long *)(this + 0x10) = local_68;
    this[0x18] = (btAlignedObjectArray<NodeLinks>)0x1;
  }
  return;
}


