// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_c_prep_controller
// Entry Point: 00d6c094
// Size: 1076 bytes
// Signature: undefined jinit_c_prep_controller(void)


void jinit_c_prep_controller(long *param_1,char param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  void *pvVar15;
  code **ppcVar16;
  ulong __n;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  code *pcVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  uint *puVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  
  if (param_2 != '\0') {
    ppcVar16 = (code **)*param_1;
    *(undefined4 *)(ppcVar16 + 5) = 3;
    (**ppcVar16)(param_1);
  }
  ppcVar16 = (code **)(**(code **)param_1[1])(param_1,1,0x70);
  param_1[0x3e] = (long)ppcVar16;
  cVar8 = *(char *)(param_1[0x42] + 0x10);
  *ppcVar16 = FUN_00d6c4c8;
  if (cVar8 == '\0') {
    iVar10 = *(int *)((long)param_1 + 0x5c);
    ppcVar16[1] = FUN_00d6c7b0;
    if (0 < iVar10) {
      lVar14 = 0;
      puVar29 = (uint *)(param_1[0xd] + 0x1c);
      do {
        lVar32 = 0;
        if ((long)(int)puVar29[-5] != 0) {
          lVar32 = (long)((long)*(int *)(param_1 + 0x2b) * (ulong)*puVar29 *
                         (long)*(int *)(param_1 + 0x2a)) / (long)(int)puVar29[-5];
        }
        pcVar21 = (code *)(**(code **)(param_1[1] + 0x10))
                                    (param_1,1,lVar32,*(undefined4 *)((long)param_1 + 0x154));
        iVar10 = *(int *)((long)param_1 + 0x5c);
        ppcVar16[lVar14 + 2] = pcVar21;
        lVar14 = lVar14 + 1;
        puVar29 = puVar29 + 0x18;
      } while (lVar14 < iVar10);
    }
  }
  else {
    uVar9 = *(uint *)((long)param_1 + 0x154);
    uVar20 = (ulong)(int)uVar9;
    uVar12 = uVar9 * 4;
    iVar10 = uVar9 * 5;
    uVar13 = *(int *)((long)param_1 + 0x5c) * iVar10;
    pcVar21 = *(code **)param_1[1];
    ppcVar16[1] = FUN_00d6c51c;
    lVar14 = (*pcVar21)(param_1,1,-(ulong)(uVar13 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar13 << 3
                       );
    if (0 < *(int *)((long)param_1 + 0x5c)) {
      lVar32 = param_1[0xd];
      uVar30 = (ulong)(uVar9 * 3);
      uVar31 = (ulong)uVar9;
      __n = -(ulong)(uVar9 * 3 >> 0x1f) & 0xfffffff800000000 | uVar30 << 3;
      if ((int)uVar9 < 1) {
        lVar27 = 0;
        puVar29 = (uint *)(lVar32 + 0x1c);
        pcVar21 = (code *)(lVar14 + uVar20 * 8);
        do {
          lVar14 = 0;
          if ((long)(int)puVar29[-5] != 0) {
            lVar14 = (long)((long)*(int *)(param_1 + 0x2b) * (ulong)*puVar29 *
                           (long)*(int *)(param_1 + 0x2a)) / (long)(int)puVar29[-5];
          }
          pvVar15 = (void *)(**(code **)(param_1[1] + 0x10))(param_1,1,lVar14,uVar30);
          memcpy(pcVar21,pvVar15,__n);
          iVar11 = *(int *)((long)param_1 + 0x5c);
          ppcVar16[lVar27 + 2] = pcVar21;
          lVar27 = lVar27 + 1;
          pcVar21 = pcVar21 + (long)iVar10 * 8;
          puVar29 = puVar29 + 0x18;
        } while (lVar27 < iVar11);
      }
      else {
        lVar17 = (long)iVar10 * 8;
        uVar25 = -(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar12 << 3;
        uVar23 = uVar31 * 8;
        lVar28 = 0;
        lVar27 = lVar14;
        do {
          lVar19 = 0;
          if ((long)*(int *)(lVar32 + 8) != 0) {
            lVar19 = (long)((long)*(int *)(param_1 + 0x2b) * (ulong)*(uint *)(lVar32 + 0x1c) *
                           (long)*(int *)(param_1 + 0x2a)) / (long)*(int *)(lVar32 + 8);
          }
          pvVar15 = (void *)(**(code **)(param_1[1] + 0x10))(param_1,1,lVar19,uVar30);
          pcVar21 = (code *)(lVar27 + uVar20 * 8);
          memcpy(pcVar21,pvVar15,__n);
          if (uVar9 < 2) {
            uVar18 = 0;
LAB_00d6c370:
            lVar22 = uVar31 - uVar18;
            lVar19 = uVar18 * 8;
            lVar24 = ((long)(int)uVar12 + uVar18) * 8;
            puVar26 = (undefined8 *)((long)pvVar15 + lVar19);
            do {
              lVar22 = lVar22 + -1;
              *(undefined8 *)(lVar27 + lVar19) =
                   *(undefined8 *)((long)pvVar15 + lVar19 + uVar20 * 0x10);
              lVar19 = lVar19 + 8;
              *(undefined8 *)(lVar27 + lVar24) = *puVar26;
              lVar24 = lVar24 + 8;
              puVar26 = puVar26 + 1;
            } while (lVar22 != 0);
          }
          else {
            pvVar1 = (void *)((long)pvVar15 + uVar31 * 8);
            uVar18 = 0;
            lVar19 = lVar17 * lVar28;
            pvVar2 = (void *)(lVar14 + lVar19);
            pvVar3 = (void *)(lVar14 + uVar23 + lVar19);
            pvVar4 = (void *)(lVar14 + uVar25 + uVar23 + lVar19);
            pvVar5 = (void *)(lVar14 + uVar25 + lVar19);
            pvVar6 = (void *)((long)pvVar15 + uVar20 * 0x10);
            pvVar7 = (void *)((long)pvVar15 + (uVar20 * 2 + uVar31) * 8);
            if ((((pvVar2 < pvVar4 && pvVar5 < pvVar3) || (pvVar2 < pvVar7 && pvVar6 < pvVar3)) ||
                (pvVar2 < pvVar1 && pvVar15 < pvVar3)) ||
               ((pvVar5 < pvVar7 && pvVar6 < pvVar4 || (pvVar5 < pvVar1 && pvVar15 < pvVar4))))
            goto LAB_00d6c370;
            uVar18 = 0;
            do {
              puVar26 = (undefined8 *)((long)pvVar15 + uVar18 + uVar20 * 0x10);
              uVar33 = *puVar26;
              uVar35 = ((undefined8 *)((long)pvVar15 + uVar18))[1];
              uVar34 = *(undefined8 *)((long)pvVar15 + uVar18);
              ((undefined8 *)(lVar27 + uVar18))[1] = puVar26[1];
              *(undefined8 *)(lVar27 + uVar18) = uVar33;
              puVar26 = (undefined8 *)(lVar27 + uVar25 + uVar18);
              puVar26[1] = uVar35;
              *puVar26 = uVar34;
              uVar18 = uVar18 + 0x10;
            } while ((uVar23 & 0x7fffffff0) != uVar18);
            uVar18 = uVar20 & 0xfffffffe;
            if ((uVar20 & 0xfffffffe) != uVar31) goto LAB_00d6c370;
          }
          lVar19 = lVar28 + 1;
          lVar32 = lVar32 + 0x60;
          iVar10 = *(int *)((long)param_1 + 0x5c);
          lVar27 = lVar27 + lVar17;
          ppcVar16[lVar28 + 2] = pcVar21;
          lVar28 = lVar19;
        } while (lVar19 < iVar10);
      }
    }
  }
  return;
}


