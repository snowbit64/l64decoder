// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00adf1a0
// Entry Point: 00adf1a0
// Size: 776 bytes
// Signature: undefined FUN_00adf1a0(void)


void FUN_00adf1a0(ulong param_1,uint param_2,uint param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined auVar5 [16];
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined auVar21 [16];
  undefined8 uVar25;
  
  uVar9 = *(uint *)(param_4 + 0x148);
  if (uVar9 == 0) {
    return;
  }
  lVar6 = 0;
  lVar16 = *(long *)(param_4 + 0x150);
  do {
    if ((param_1 & 1) == 0) {
      if ((param_2 & 1) == 0) {
        iVar20 = *(int *)(param_4 + 0x14) + *(int *)(lVar16 + lVar6 + 0x10);
      }
      else {
        iVar20 = 0;
      }
    }
    else {
      iVar20 = *(int *)(lVar16 + lVar6 + 0x10);
    }
    lVar2 = lVar16 + lVar6;
    lVar6 = lVar6 + 0x160;
    *(int *)(lVar2 + 0x14) = iVar20;
  } while ((ulong)uVar9 * 0x160 - lVar6 != 0);
  uVar15 = 0;
  do {
    lVar6 = *(long *)(lVar16 + uVar15 * 0x160 + 0x158);
    switch(*(undefined4 *)(lVar6 + 4)) {
    case 0x14:
      *(undefined4 *)(lVar16 + uVar15 * 0x160 + 0x18) = 4;
      break;
    case 0x15:
    case 0x16:
      *(uint *)(lVar16 + uVar15 * 0x160 + 0x18) = *(uint *)(lVar6 + 0x24) >> 3;
      break;
    case 0x17:
      *(uint *)(lVar16 + uVar15 * 0x160 + 0x18) =
           (*(uint *)(lVar6 + 0x24) >> 3) * *(int *)(lVar6 + 0x2c);
      break;
    case 0x18:
      uVar9 = *(uint *)(lVar16 + uVar15 * 0x160 + 0x20);
      if ((uVar9 >> 3 & 1) == 0) {
        if ((uVar9 >> 2 & 1) == 0) break;
        lVar16 = lVar16 + uVar15 * 0x160;
        uVar8 = *(uint *)(lVar16 + 0x34);
      }
      else {
        lVar16 = lVar16 + uVar15 * 0x160;
        uVar8 = *(uint *)(lVar16 + 0x30);
      }
      iVar20 = *(int *)(lVar16 + 0x38);
      goto LAB_00adf3ac;
    case 0x1c:
      if ((*(byte *)(lVar6 + 0x1f) >> 4 & 1) != 0) {
        FUN_00adf1a0(0,1,param_3 & 1);
      }
      uVar9 = *(uint *)(lVar16 + uVar15 * 0x160 + 0x3c);
      uVar7 = (ulong)uVar9;
      uVar8 = (uint)(uVar7 != 0);
      if (uVar9 != 0) {
        if (uVar9 < 8) {
          uVar11 = 0;
        }
        else {
          iVar17 = 1;
          iVar18 = 1;
          iVar19 = 1;
          uVar11 = uVar7 & 0xfffffff8;
          iVar24 = 1;
          iVar20 = 1;
          iVar22 = 1;
          iVar23 = 1;
          puVar10 = (undefined8 *)(lVar16 + uVar15 * 0x160 + 0x50);
          uVar12 = uVar11;
          do {
            puVar1 = puVar10 + -2;
            puVar3 = puVar10 + -1;
            puVar4 = puVar10 + 1;
            uVar25 = *puVar10;
            puVar10 = puVar10 + 4;
            uVar12 = uVar12 - 8;
            uVar8 = (int)*puVar1 * uVar8;
            iVar17 = (int)((ulong)*puVar1 >> 0x20) * iVar17;
            iVar18 = (int)*puVar3 * iVar18;
            iVar19 = (int)((ulong)*puVar3 >> 0x20) * iVar19;
            iVar20 = (int)uVar25 * iVar20;
            iVar22 = (int)((ulong)uVar25 >> 0x20) * iVar22;
            iVar23 = (int)*puVar4 * iVar23;
            iVar24 = (int)((ulong)*puVar4 >> 0x20) * iVar24;
          } while (uVar12 != 0);
          iVar20 = iVar20 * uVar8;
          iVar22 = iVar22 * iVar17;
          auVar21._4_4_ = iVar22;
          auVar21._0_4_ = iVar20;
          auVar21._8_4_ = iVar23 * iVar18;
          auVar21._12_4_ = iVar24 * iVar19;
          auVar5._4_4_ = iVar22;
          auVar5._0_4_ = iVar20;
          auVar5._8_4_ = iVar23 * iVar18;
          auVar5._12_4_ = iVar24 * iVar19;
          auVar21 = NEON_ext(auVar21,auVar5,8,1);
          uVar8 = iVar20 * auVar21._0_4_ * iVar22 * auVar21._4_4_;
          if (uVar11 == uVar7) goto LAB_00adf3a4;
        }
        lVar6 = uVar7 - uVar11;
        piVar13 = (int *)(lVar16 + uVar15 * 0x160 + uVar11 * 4 + 0x40);
        do {
          lVar6 = lVar6 + -1;
          uVar8 = *piVar13 * uVar8;
          piVar13 = piVar13 + 1;
        } while (lVar6 != 0);
      }
LAB_00adf3a4:
      lVar16 = lVar16 + uVar15 * 0x160;
      iVar20 = *(int *)(lVar16 + 0x140);
LAB_00adf3ac:
      *(uint *)(lVar16 + 0x18) = iVar20 * uVar8;
      break;
    case 0x1d:
      if ((*(byte *)(lVar6 + 0x1f) >> 4 & 1) != 0) {
        uVar9 = 1;
        uVar8 = 1;
        goto LAB_00adf318;
      }
      break;
    case 0x1e:
      uVar9 = param_2 & 1;
      uVar8 = param_3 & 1;
LAB_00adf318:
      FUN_00adf1a0(0,uVar9,uVar8);
    }
    uVar9 = *(uint *)(param_4 + 0x148);
    uVar15 = uVar15 + 1;
    if (uVar9 <= uVar15) break;
    lVar16 = *(long *)(param_4 + 0x150);
  } while( true );
  uVar15 = (ulong)(uVar9 - 1);
  if (uVar9 - 1 != 0) {
    lVar6 = *(long *)(param_4 + 0x150);
    uVar7 = uVar15;
    iVar20 = *(int *)(lVar6 + 0x10);
    do {
      piVar13 = (int *)(lVar6 + 0x170);
      uVar8 = *piVar13 - iVar20;
      *(uint *)(lVar6 + 0x1c) = uVar8;
      uVar14 = *(uint *)(lVar6 + 0x18);
      if (uVar8 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar8;
        uVar14 = uVar8;
      }
      if ((param_3 & 1) != 0) {
        *(uint *)(lVar6 + 0x1c) = uVar14;
      }
      lVar6 = lVar6 + 0x160;
      uVar7 = uVar7 - 1;
      iVar20 = *piVar13;
    } while (uVar7 != 0);
    if (uVar9 == 0) {
      lVar6 = *(long *)(param_4 + 0x150) + uVar15 * 0x160;
      uVar9 = *(uint *)(lVar6 + 0x1c);
      iVar20 = *(int *)(lVar6 + 0x10);
      goto LAB_00adf488;
    }
  }
  lVar6 = *(long *)(param_4 + 0x150) + uVar15 * 0x160;
  iVar20 = *(int *)(lVar6 + 0x10);
  uVar8 = *(uint *)(lVar6 + 0x18);
  uVar9 = (iVar20 + uVar8 + 0xf & 0xfffffff0) - iVar20;
  *(uint *)(lVar6 + 0x1c) = uVar9;
  if (uVar9 < uVar8) {
    *(uint *)(lVar6 + 0x18) = uVar9;
    uVar8 = uVar9;
  }
  if ((param_3 & 1) != 0) {
    *(uint *)(lVar6 + 0x1c) = uVar8;
    uVar9 = uVar8;
  }
LAB_00adf488:
  *(uint *)(param_4 + 0x18) = uVar9 + iVar20;
  *(uint *)(param_4 + 0x1c) = uVar9 + iVar20;
  return;
}


