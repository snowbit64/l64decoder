// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reserve
// Entry Point: 00f67a48
// Size: 932 bytes
// Signature: undefined __thiscall reserve(btAlignedObjectArray<btFace> * this, int param_1)


/* btAlignedObjectArray<btFace>::reserve(int) */

void __thiscall
btAlignedObjectArray<btFace>::reserve(btAlignedObjectArray<btFace> *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  char *pcVar20;
  uint *puVar21;
  long lVar22;
  void **ppvVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  if (*(int *)(this + 8) < param_1) {
    if (param_1 == 0) {
      lVar5 = 0;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      lVar5 = (*(code *)PTR_FUN_01048e38)((long)param_1 * 0x30,0x10);
    }
    uVar1 = *(uint *)(this + 4);
    if (0 < (int)uVar1) {
      uVar17 = 0;
      do {
        lVar22 = *(long *)(this + 0x10);
        lVar15 = lVar5 + uVar17 * 0x30;
        pcVar20 = (char *)(lVar15 + 0x18);
        *pcVar20 = '\x01';
        puVar21 = (uint *)(lVar15 + 4);
        *puVar21 = 0;
        *(uint *)(lVar15 + 8) = 0;
        uVar2 = *(uint *)(lVar22 + uVar17 * 0x30 + 4);
        uVar19 = (ulong)uVar2;
        ppvVar23 = (void **)(lVar15 + 0x10);
        *ppvVar23 = (void *)0x0;
        if ((int)uVar2 < 1) {
          *puVar21 = uVar2;
        }
        else {
          lVar18 = uVar19 * 4;
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          pvVar6 = (void *)(*(code *)PTR_FUN_01048e38)(lVar18,0x10);
          uVar3 = *puVar21;
          uVar8 = (ulong)uVar3;
          pvVar7 = *ppvVar23;
          if ((int)uVar3 < 1) {
            if (pvVar7 != (void *)0x0) goto LAB_00f67c0c;
          }
          else {
            if ((uVar3 < 8) ||
               ((pvVar6 < (void *)((long)pvVar7 + uVar8 * 4) &&
                (pvVar7 < (void *)((long)pvVar6 + uVar8 * 4))))) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar8 & 0xfffffff8;
              puVar13 = (undefined8 *)((long)pvVar7 + 0x10);
              puVar14 = (undefined8 *)((long)pvVar6 + 0x10);
              uVar16 = uVar11;
              do {
                puVar4 = puVar13 + -1;
                uVar24 = puVar13[-2];
                uVar26 = puVar13[1];
                uVar25 = *puVar13;
                uVar16 = uVar16 - 8;
                puVar13 = puVar13 + 4;
                puVar14[-1] = *puVar4;
                puVar14[-2] = uVar24;
                puVar14[1] = uVar26;
                *puVar14 = uVar25;
                puVar14 = puVar14 + 4;
              } while (uVar16 != 0);
              if (uVar11 == uVar8) goto LAB_00f67c0c;
            }
            lVar9 = uVar8 - uVar11;
            puVar10 = (undefined4 *)((long)pvVar7 + uVar11 * 4);
            puVar12 = (undefined4 *)((long)pvVar6 + uVar11 * 4);
            do {
              lVar9 = lVar9 + -1;
              *puVar12 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar12 = puVar12 + 1;
            } while (lVar9 != 0);
LAB_00f67c0c:
            if (*pcVar20 != '\0') {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
            }
          }
          *pcVar20 = '\x01';
          *ppvVar23 = pvVar6;
          *(uint *)(lVar15 + 8) = uVar2;
          memset(pvVar6,0,(long)(int)uVar2 << 2);
          *puVar21 = uVar2;
          pvVar6 = *ppvVar23;
          pvVar7 = *(void **)(lVar22 + uVar17 * 0x30 + 0x10);
          if (uVar2 < 8) {
            uVar11 = 0;
          }
          else if ((pvVar6 < (void *)((long)pvVar7 + lVar18)) &&
                  (pvVar7 < (void *)((long)pvVar6 + lVar18))) {
            uVar11 = 0;
          }
          else {
            uVar11 = uVar19 & 0xfffffff8;
            puVar13 = (undefined8 *)((long)pvVar7 + 0x10);
            puVar14 = (undefined8 *)((long)pvVar6 + 0x10);
            uVar8 = uVar11;
            do {
              puVar4 = puVar13 + -1;
              uVar24 = puVar13[-2];
              uVar26 = puVar13[1];
              uVar25 = *puVar13;
              uVar8 = uVar8 - 8;
              puVar13 = puVar13 + 4;
              puVar14[-1] = *puVar4;
              puVar14[-2] = uVar24;
              puVar14[1] = uVar26;
              *puVar14 = uVar25;
              puVar14 = puVar14 + 4;
            } while (uVar8 != 0);
            if (uVar11 == uVar19) goto LAB_00f67ae4;
          }
          lVar15 = uVar19 - uVar11;
          puVar10 = (undefined4 *)((long)pvVar6 + uVar11 * 4);
          puVar12 = (undefined4 *)((long)pvVar7 + uVar11 * 4);
          do {
            lVar15 = lVar15 + -1;
            *puVar10 = *puVar12;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          } while (lVar15 != 0);
        }
LAB_00f67ae4:
        uVar19 = uVar17 + 1;
        lVar22 = lVar22 + uVar17 * 0x30;
        lVar15 = lVar5 + uVar17 * 0x30;
        uVar24 = *(undefined8 *)(lVar22 + 0x20);
        *(undefined8 *)(lVar15 + 0x28) = *(undefined8 *)(lVar22 + 0x28);
        *(undefined8 *)(lVar15 + 0x20) = uVar24;
        uVar17 = uVar19;
      } while (uVar19 != uVar1);
      uVar1 = *(uint *)(this + 4);
      if (0 < (int)uVar1) {
        lVar22 = 0;
        do {
          lVar15 = *(long *)(this + 0x10) + lVar22;
          if (*(long *)(lVar15 + 0x10) != 0 && *(char *)(lVar15 + 0x18) != '\0') {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
          }
          lVar22 = lVar22 + 0x30;
          *(undefined *)(lVar15 + 0x18) = 1;
          *(undefined8 *)(lVar15 + 0x10) = 0;
          *(undefined4 *)(lVar15 + 4) = 0;
          *(undefined4 *)(lVar15 + 8) = 0;
        } while ((ulong)uVar1 * 0x30 - lVar22 != 0);
      }
    }
    if ((*(long *)(this + 0x10) != 0) && (this[0x18] != (btAlignedObjectArray<btFace>)0x0)) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(long *)(this + 0x10) = lVar5;
    *(int *)(this + 8) = param_1;
    this[0x18] = (btAlignedObjectArray<btFace>)0x1;
  }
  return;
}


