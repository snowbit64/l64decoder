// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6f59c
// Entry Point: 00d6f59c
// Size: 684 bytes
// Signature: undefined FUN_00d6f59c(void)


void FUN_00d6f59c(long *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  code **ppcVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 == 1) {
    lVar14 = param_1[0x35];
    uVar11 = 1;
    uVar2 = *(uint *)(lVar14 + 0x20);
    uVar10 = *(uint *)(lVar14 + 0xc);
    uVar5 = 0;
    if (uVar10 != 0) {
      uVar5 = uVar2 / uVar10;
    }
    *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(lVar14 + 0x1c);
    *(uint *)((long)param_1 + 0x1cc) = uVar2;
    *(undefined8 *)(lVar14 + 0x38) = 0x100000001;
    uVar2 = uVar2 - uVar5 * uVar10;
    if (uVar2 != 0) {
      uVar10 = uVar2;
    }
    *(undefined4 *)(lVar14 + 0x40) = 1;
    *(undefined4 *)(lVar14 + 0x44) = *(undefined4 *)(lVar14 + 0x24);
    *(undefined4 *)(lVar14 + 0x48) = 1;
    *(uint *)(lVar14 + 0x4c) = uVar10;
    param_1[0x3a] = 1;
  }
  else {
    if (iVar9 - 5U < 0xfffffffc) {
      lVar16 = *param_1;
      *(int *)(lVar16 + 0x2c) = iVar9;
      lVar14 = *param_1;
      *(undefined4 *)(lVar16 + 0x28) = 0x1b;
      *(undefined4 *)(lVar14 + 0x30) = 4;
      (**(code **)*param_1)(param_1);
    }
    uVar7 = jdiv_round_up(*(undefined4 *)(param_1 + 6),
                          (long)*(int *)((long)param_1 + 0x20c) * (long)*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x39) = uVar7;
    uVar7 = jdiv_round_up(*(undefined4 *)((long)param_1 + 0x34),
                          (long)*(int *)((long)param_1 + 0x20c) *
                          (long)*(int *)((long)param_1 + 0x184));
    *(undefined4 *)((long)param_1 + 0x1cc) = uVar7;
    *(undefined4 *)(param_1 + 0x3a) = 0;
    if (*(int *)(param_1 + 0x34) < 1) goto LAB_00d6f804;
    iVar9 = 0;
    lVar14 = 0;
    while( true ) {
      lVar16 = param_1[lVar14 + 0x35];
      uVar2 = *(uint *)(lVar16 + 8);
      uVar10 = *(uint *)(lVar16 + 0xc);
      uVar5 = 0;
      if (uVar2 != 0) {
        uVar5 = *(uint *)(lVar16 + 0x1c) / uVar2;
      }
      iVar4 = uVar10 * uVar2;
      *(uint *)(lVar16 + 0x38) = uVar2;
      *(uint *)(lVar16 + 0x3c) = uVar10;
      uVar5 = *(uint *)(lVar16 + 0x1c) - uVar5 * uVar2;
      uVar6 = 0;
      if (uVar10 != 0) {
        uVar6 = *(uint *)(lVar16 + 0x20) / uVar10;
      }
      uVar1 = uVar2;
      if (uVar5 != 0) {
        uVar1 = uVar5;
      }
      *(int *)(lVar16 + 0x40) = iVar4;
      *(uint *)(lVar16 + 0x44) = *(int *)(lVar16 + 0x24) * uVar2;
      uVar2 = *(uint *)(lVar16 + 0x20) - uVar6 * uVar10;
      if (uVar2 != 0) {
        uVar10 = uVar2;
      }
      *(uint *)(lVar16 + 0x48) = uVar1;
      *(uint *)(lVar16 + 0x4c) = uVar10;
      if (10 < iVar4 + iVar9) {
        ppcVar15 = (code **)*param_1;
        *(undefined4 *)(ppcVar15 + 5) = 0xe;
        (**ppcVar15)(param_1);
      }
      if (0 < iVar4) {
        uVar10 = iVar4 + 1;
        do {
          iVar9 = *(int *)(param_1 + 0x3a);
          uVar10 = uVar10 - 1;
          *(int *)(param_1 + 0x3a) = iVar9 + 1;
          *(int *)((long)param_1 + (long)iVar9 * 4 + 0x1d4) = (int)lVar14;
        } while (1 < uVar10);
      }
      uVar11 = (ulong)*(int *)(param_1 + 0x34);
      lVar14 = lVar14 + 1;
      if ((long)uVar11 <= lVar14) break;
      iVar9 = *(int *)(param_1 + 0x3a);
    }
    if (*(int *)(param_1 + 0x34) < 1) goto LAB_00d6f804;
  }
  lVar14 = 0;
  do {
    lVar16 = param_1[lVar14 + 0x35];
    if (*(long *)(lVar16 + 0x50) == 0) {
      uVar10 = *(uint *)(lVar16 + 0x10);
      if ((3 < uVar10) || (param_1[(ulong)uVar10 + 0x17] == 0)) {
        lVar12 = *param_1;
        *(uint *)(lVar12 + 0x2c) = uVar10;
        ppcVar15 = (code **)*param_1;
        *(undefined4 *)(lVar12 + 0x28) = 0x36;
        (**ppcVar15)(param_1);
      }
      puVar8 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x82);
      puVar13 = (undefined8 *)param_1[(long)(int)uVar10 + 0x17];
      uVar17 = *puVar13;
      puVar8[1] = puVar13[1];
      *puVar8 = uVar17;
      uVar19 = puVar13[6];
      uVar18 = puVar13[9];
      uVar17 = puVar13[8];
      uVar23 = puVar13[3];
      uVar22 = puVar13[2];
      uVar21 = puVar13[5];
      uVar20 = puVar13[4];
      puVar8[7] = puVar13[7];
      puVar8[6] = uVar19;
      puVar8[9] = uVar18;
      puVar8[8] = uVar17;
      puVar8[3] = uVar23;
      puVar8[2] = uVar22;
      puVar8[5] = uVar21;
      puVar8[4] = uVar20;
      uVar19 = puVar13[0xc];
      uVar18 = puVar13[0xf];
      uVar17 = puVar13[0xe];
      uVar3 = *(undefined2 *)(puVar13 + 0x10);
      uVar21 = puVar13[0xb];
      uVar20 = puVar13[10];
      puVar8[0xd] = puVar13[0xd];
      puVar8[0xc] = uVar19;
      puVar8[0xf] = uVar18;
      puVar8[0xe] = uVar17;
      *(undefined2 *)(puVar8 + 0x10) = uVar3;
      puVar8[0xb] = uVar21;
      puVar8[10] = uVar20;
      uVar11 = (ulong)*(uint *)(param_1 + 0x34);
      *(undefined8 **)(lVar16 + 0x50) = puVar8;
    }
    lVar14 = lVar14 + 1;
  } while (lVar14 < (int)uVar11);
LAB_00d6f804:
  (**(code **)param_1[0x4a])(param_1);
  (**(code **)param_1[0x46])(param_1);
  *(undefined8 *)param_1[0x48] = *(undefined8 *)(param_1[0x46] + 8);
  return;
}


