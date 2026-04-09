// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: drft_backward
// Entry Point: 00e19af0
// Size: 640 bytes
// Signature: undefined drft_backward(void)


void drft_backward(uint *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  int iVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar5 = *param_1;
  if (uVar5 != 1) {
    uVar3 = *(uint *)(*(long *)(param_1 + 4) + 4);
    uVar19 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      uVar17 = *(ulong *)(param_1 + 2);
      piVar22 = (int *)(*(long *)(param_1 + 4) + 8);
      uVar13 = (ulong)uVar5;
      iVar23 = 1;
      lVar18 = uVar17 + (long)(int)uVar5 * 4 + -4;
      iVar20 = 0;
      iVar9 = 1;
      do {
        while( true ) {
          iVar4 = *piVar22;
          iVar6 = iVar4 * iVar9;
          iVar7 = 0;
          if (iVar6 != 0) {
            iVar7 = (int)uVar5 / iVar6;
          }
          if (iVar4 != 2) break;
          lVar1 = lVar18 + (long)iVar23 * 4;
          if (iVar20 == 0) {
            FUN_00e1bd40(iVar7,iVar9,param_2,uVar17,lVar1);
          }
          else {
            FUN_00e1bd40(iVar7,iVar9,uVar17,param_2,lVar1);
          }
LAB_00e19b68:
          iVar21 = 1 - iVar20;
          uVar19 = uVar19 - 1;
          piVar22 = piVar22 + 1;
          iVar23 = iVar23 + (iVar4 + -1) * iVar7;
          iVar20 = iVar21;
          iVar9 = iVar6;
          if (uVar19 == 0) goto LAB_00e19cb0;
        }
        if (iVar4 == 3) {
          lVar1 = lVar18 + (long)iVar23 * 4;
          lVar2 = lVar18 + (long)(iVar7 + iVar23) * 4;
          if (iVar20 == 0) {
            FUN_00e1bf24(iVar7,iVar9,param_2,uVar17,lVar1,lVar2);
          }
          else {
            FUN_00e1bf24(iVar7,iVar9,uVar17,param_2,lVar1,lVar2);
          }
          goto LAB_00e19b68;
        }
        if (iVar4 == 4) {
          uVar10 = param_2;
          uVar11 = uVar17;
          if (iVar20 != 0) {
            uVar10 = uVar17;
            uVar11 = param_2;
          }
          FUN_00e1b9d8(iVar7,iVar9,uVar10,uVar11,lVar18 + (long)iVar23 * 4,
                       lVar18 + (long)(iVar7 + iVar23) * 4,
                       lVar18 + (long)(iVar7 + iVar23 + iVar7) * 4);
          goto LAB_00e19b68;
        }
        uVar10 = param_2;
        uVar11 = uVar17;
        if (iVar20 != 0) {
          uVar10 = uVar17;
          uVar11 = param_2;
        }
        FUN_00e1c14c(iVar7,iVar4,iVar9,iVar7 * iVar9,uVar10,uVar10,uVar10,uVar11,uVar11,
                     lVar18 + (long)iVar23 * 4);
        iVar21 = 1 - iVar20;
        if (iVar7 != 1) {
          iVar21 = iVar20;
        }
        uVar19 = uVar19 - 1;
        piVar22 = piVar22 + 1;
        iVar23 = iVar23 + (iVar4 + -1) * iVar7;
        iVar20 = iVar21;
        iVar9 = iVar6;
      } while (uVar19 != 0);
LAB_00e19cb0:
      if ((0 < (int)uVar5) && (iVar21 != 0)) {
        if ((uVar5 < 8) || ((param_2 < uVar17 + uVar13 * 4 && (uVar17 < param_2 + uVar13 * 4)))) {
          uVar19 = 0;
        }
        else {
          puVar14 = (undefined8 *)(uVar17 + 0x10);
          puVar16 = (undefined8 *)(param_2 + 0x10);
          uVar19 = uVar13 & 0xfffffff8;
          uVar10 = uVar19;
          do {
            puVar8 = puVar14 + -1;
            uVar24 = puVar14[-2];
            uVar26 = puVar14[1];
            uVar25 = *puVar14;
            puVar14 = puVar14 + 4;
            uVar10 = uVar10 - 8;
            puVar16[-1] = *puVar8;
            puVar16[-2] = uVar24;
            puVar16[1] = uVar26;
            *puVar16 = uVar25;
            puVar16 = puVar16 + 4;
          } while (uVar10 != 0);
          if (uVar19 == uVar13) {
            return;
          }
        }
        lVar18 = uVar13 - uVar19;
        puVar12 = (undefined4 *)(param_2 + uVar19 * 4);
        puVar15 = (undefined4 *)(uVar17 + uVar19 * 4);
        do {
          lVar18 = lVar18 + -1;
          *puVar12 = *puVar15;
          puVar12 = puVar12 + 1;
          puVar15 = puVar15 + 1;
        } while (lVar18 != 0);
      }
    }
  }
  return;
}


