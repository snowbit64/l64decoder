// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d76e9c
// Entry Point: 00d76e9c
// Size: 868 bytes
// Signature: undefined FUN_00d76e9c(void)


void FUN_00d76e9c(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  code **ppcVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  lVar17 = param_1[0x45];
  if (param_2 == 2) {
    *(code **)(lVar17 + 8) = FUN_00d77590;
  }
  else {
    if (param_2 != 0) {
      ppcVar18 = (code **)*param_1;
      *(undefined4 *)(ppcVar18 + 5) = 3;
                    /* WARNING: Could not recover jumptable at 0x00d771bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**ppcVar18)();
      return;
    }
    if (*(char *)(param_1[0x4c] + 0x10) == '\0') {
      *(undefined4 *)(lVar17 + 0x60) = *(undefined4 *)(lVar17 + 100);
      *(code **)(lVar17 + 8) = FUN_00d774ec;
    }
    else {
      uVar2 = *(uint *)(param_1 + 7);
      *(code **)(lVar17 + 8) = FUN_00d77200;
      if (0 < (int)uVar2) {
        iVar3 = *(int *)((long)param_1 + 0x18c);
        uVar19 = 0;
        lVar20 = param_1[0x24];
        do {
          lVar22 = uVar19 * 8;
          uVar5 = 0;
          if (iVar3 != 0) {
            uVar5 = (*(int *)(lVar20 + 0x28) * *(int *)(lVar20 + 0xc)) / iVar3;
          }
          puVar21 = *(undefined8 **)(*(long *)(lVar17 + 0x70) + lVar22);
          puVar23 = *(undefined8 **)(*(long *)(lVar17 + 0x78) + lVar22);
          puVar7 = *(undefined8 **)(lVar17 + lVar22 + 0x10);
          uVar4 = uVar5 * (iVar3 + 2);
          uVar8 = (ulong)uVar4;
          if (0 < (int)uVar4) {
            if (uVar4 < 4) {
              uVar9 = 0;
            }
            else {
              uVar9 = 0;
              if (((puVar21 + uVar8 <= puVar23 || puVar23 + uVar8 <= puVar21) &&
                  (puVar7 + uVar8 <= puVar23 || puVar23 + uVar8 <= puVar7)) &&
                 (puVar7 + uVar8 <= puVar21 || puVar21 + uVar8 <= puVar7)) {
                uVar9 = uVar8 & 0xfffffffc;
                puVar10 = puVar7 + 2;
                puVar12 = puVar23 + 2;
                puVar14 = puVar21 + 2;
                uVar16 = uVar9;
                do {
                  uVar24 = puVar10[-1];
                  uVar15 = puVar10[-2];
                  uVar26 = puVar10[1];
                  uVar25 = *puVar10;
                  puVar10 = puVar10 + 4;
                  uVar16 = uVar16 - 4;
                  puVar12[-1] = uVar24;
                  puVar12[-2] = uVar15;
                  puVar12[1] = uVar26;
                  *puVar12 = uVar25;
                  puVar12 = puVar12 + 4;
                  puVar14[-1] = uVar24;
                  puVar14[-2] = uVar15;
                  puVar14[1] = uVar26;
                  *puVar14 = uVar25;
                  puVar14 = puVar14 + 4;
                } while (uVar16 != 0);
                if (uVar9 == uVar8) goto LAB_00d76f78;
              }
            }
            lVar22 = uVar8 - uVar9;
            puVar10 = puVar21 + uVar9;
            puVar12 = puVar23 + uVar9;
            puVar14 = puVar7 + uVar9;
            do {
              uVar15 = *puVar14;
              lVar22 = lVar22 + -1;
              *puVar12 = uVar15;
              *puVar10 = uVar15;
              puVar10 = puVar10 + 1;
              puVar12 = puVar12 + 1;
              puVar14 = puVar14 + 1;
            } while (lVar22 != 0);
          }
LAB_00d76f78:
          if (0 < (int)uVar5) {
            uVar4 = uVar5 * 2;
            lVar22 = (long)(int)(uVar5 * iVar3);
            if ((int)uVar4 < 2) {
              uVar4 = 1;
            }
            uVar8 = (ulong)uVar4;
            lVar11 = (long)(int)(uVar5 * (iVar3 + -2));
            if (uVar4 < 2) {
              uVar9 = 0;
LAB_00d76fa8:
              lVar13 = uVar8 - uVar9;
              do {
                lVar13 = lVar13 + -1;
                puVar23[uVar9 + lVar11] = puVar7[uVar9 + lVar22];
                puVar10 = puVar7 + uVar9 + lVar11;
                puVar7 = puVar7 + 1;
                puVar23[uVar9 + lVar22] = *puVar10;
                puVar23 = puVar23 + 1;
              } while (lVar13 != 0);
            }
            else {
              puVar10 = puVar23 + lVar11;
              puVar12 = puVar23 + lVar22 + uVar8;
              puVar14 = puVar23 + lVar11 + uVar8;
              puVar1 = puVar23 + lVar22;
              uVar9 = 0;
              if (((puVar10 < puVar12 && puVar1 < puVar14) ||
                  (puVar10 < puVar7 + lVar22 + uVar8 && puVar7 + lVar22 < puVar14)) ||
                 ((puVar10 < puVar7 + lVar11 + uVar8 && puVar7 + lVar11 < puVar14 ||
                  ((puVar1 < puVar7 + lVar22 + uVar8 && puVar7 + lVar22 < puVar12 ||
                   (puVar1 < puVar7 + lVar11 + uVar8 && puVar7 + lVar11 < puVar12))))))
              goto LAB_00d76fa8;
              uVar9 = uVar8 & 0x7ffffffe;
              uVar16 = uVar9;
              puVar10 = puVar7;
              puVar12 = puVar23;
              do {
                puVar14 = puVar10 + lVar22;
                uVar15 = *puVar14;
                uVar16 = uVar16 - 2;
                uVar25 = (puVar10 + lVar11)[1];
                uVar24 = puVar10[lVar11];
                puVar10 = puVar10 + 2;
                (puVar12 + lVar11)[1] = puVar14[1];
                puVar12[lVar11] = uVar15;
                (puVar12 + lVar22)[1] = uVar25;
                puVar12[lVar22] = uVar24;
                puVar12 = puVar12 + 2;
              } while (uVar16 != 0);
              if (uVar9 != uVar8) goto LAB_00d76fa8;
            }
            lVar22 = -(ulong)uVar5;
            do {
              puVar21[lVar22] = *puVar21;
              bVar6 = lVar22 != -1;
              lVar22 = lVar22 + 1;
            } while (bVar6);
          }
          uVar19 = uVar19 + 1;
          lVar20 = lVar20 + 0x60;
        } while (uVar19 != uVar2);
      }
      *(undefined8 *)(lVar17 + 0x80) = 0;
      *(undefined4 *)(lVar17 + 0x88) = 0;
      *(undefined *)(lVar17 + 0x68) = 0;
    }
  }
  return;
}


