// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 00f66ad0
// Size: 768 bytes
// Signature: undefined __thiscall resize(btAlignedObjectArray<btFace> * this, int param_1, btFace * param_2)


/* btAlignedObjectArray<btFace>::resize(int, btFace const&) */

void __thiscall
btAlignedObjectArray<btFace>::resize(btAlignedObjectArray<btFace> *this,int param_1,btFace *param_2)

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
  ulong uVar13;
  int iVar14;
  void **ppvVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  long lVar19;
  char *pcVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  iVar14 = *(int *)(this + 4);
  lVar17 = (long)iVar14;
  if (param_1 < iVar14) {
    iVar14 = iVar14 - param_1;
    lVar17 = (long)param_1 * 0x30;
    do {
      lVar22 = *(long *)(this + 0x10) + lVar17;
      if (*(long *)(lVar22 + 0x10) != 0 && *(char *)(lVar22 + 0x18) != '\0') {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      iVar14 = iVar14 + -1;
      lVar17 = lVar17 + 0x30;
      *(undefined *)(lVar22 + 0x18) = 1;
      *(undefined8 *)(lVar22 + 0x10) = 0;
      *(undefined4 *)(lVar22 + 4) = 0;
      *(undefined4 *)(lVar22 + 8) = 0;
    } while (iVar14 != 0);
  }
  else if (iVar14 < param_1) {
    reserve(this,param_1);
    do {
      lVar22 = *(long *)(this + 0x10);
      lVar19 = lVar22 + lVar17 * 0x30;
      pcVar20 = (char *)(lVar19 + 0x18);
      *pcVar20 = '\x01';
      puVar18 = (uint *)(lVar19 + 4);
      *puVar18 = 0;
      *(uint *)(lVar19 + 8) = 0;
      uVar1 = *(uint *)(param_2 + 4);
      uVar21 = (ulong)uVar1;
      ppvVar15 = (void **)(lVar19 + 0x10);
      *ppvVar15 = (void *)0x0;
      if ((int)uVar1 < 1) {
        *puVar18 = uVar1;
      }
      else {
        lVar16 = uVar21 * 4;
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        pvVar4 = (void *)(*(code *)PTR_FUN_01048e38)(lVar16,0x10);
        uVar2 = *puVar18;
        uVar6 = (ulong)uVar2;
        pvVar5 = *ppvVar15;
        if ((int)uVar2 < 1) {
          if (pvVar5 != (void *)0x0) goto LAB_00f66cc0;
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
            uVar13 = uVar9;
            do {
              puVar3 = puVar11 + -1;
              uVar23 = puVar11[-2];
              uVar25 = puVar11[1];
              uVar24 = *puVar11;
              uVar13 = uVar13 - 8;
              puVar11 = puVar11 + 4;
              puVar12[-1] = *puVar3;
              puVar12[-2] = uVar23;
              puVar12[1] = uVar25;
              *puVar12 = uVar24;
              puVar12 = puVar12 + 4;
            } while (uVar13 != 0);
            if (uVar9 == uVar6) goto LAB_00f66cc0;
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
LAB_00f66cc0:
          if (*pcVar20 != '\0') {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
          }
        }
        *pcVar20 = '\x01';
        *ppvVar15 = pvVar4;
        *(uint *)(lVar19 + 8) = uVar1;
        memset(pvVar4,0,(long)(int)uVar1 << 2);
        *puVar18 = uVar1;
        pvVar4 = *ppvVar15;
        pvVar5 = *(void **)(param_2 + 0x10);
        if ((uVar1 < 8) ||
           ((pvVar4 < (void *)((long)pvVar5 + lVar16) && (pvVar5 < (void *)((long)pvVar4 + lVar16)))
           )) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar21 & 0xfffffff8;
          puVar11 = (undefined8 *)((long)pvVar5 + 0x10);
          puVar12 = (undefined8 *)((long)pvVar4 + 0x10);
          uVar9 = uVar6;
          do {
            puVar3 = puVar11 + -1;
            uVar23 = puVar11[-2];
            uVar25 = puVar11[1];
            uVar24 = *puVar11;
            uVar9 = uVar9 - 8;
            puVar11 = puVar11 + 4;
            puVar12[-1] = *puVar3;
            puVar12[-2] = uVar23;
            puVar12[1] = uVar25;
            *puVar12 = uVar24;
            puVar12 = puVar12 + 4;
          } while (uVar9 != 0);
          if (uVar6 == uVar21) goto LAB_00f66ba8;
        }
        lVar19 = uVar21 - uVar6;
        puVar8 = (undefined4 *)((long)pvVar4 + uVar6 * 4);
        puVar10 = (undefined4 *)((long)pvVar5 + uVar6 * 4);
        do {
          lVar19 = lVar19 + -1;
          *puVar8 = *puVar10;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar19 != 0);
      }
LAB_00f66ba8:
      lVar22 = lVar22 + lVar17 * 0x30;
      lVar17 = lVar17 + 1;
      uVar23 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(lVar22 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(lVar22 + 0x20) = uVar23;
    } while ((int)lVar17 != param_1);
  }
  *(int *)(this + 4) = param_1;
  return;
}


