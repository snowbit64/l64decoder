// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e133d0
// Entry Point: 00e133d0
// Size: 600 bytes
// Signature: undefined FUN_00e133d0(void)


undefined4 FUN_00e133d0(int *param_1,uint param_2,int *param_3,int *param_4,long param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  ulong uVar14;
  int *piVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  iVar13 = *param_1;
  if ((int)param_2 < 1) {
    dVar16 = 0.0;
    dVar18 = 0.0;
    dVar20 = 0.0;
    dVar19 = 0.0;
    dVar17 = 0.0;
    iVar11 = *param_3;
    iVar8 = param_1[(long)(int)param_2 * 0xe + -0xd];
  }
  else {
    dVar17 = 0.0;
    dVar19 = 0.0;
    dVar20 = 0.0;
    dVar18 = 0.0;
    dVar16 = 0.0;
    uVar14 = (ulong)param_2;
    piVar15 = param_1 + 7;
    do {
      piVar1 = piVar15 + 6;
      uVar14 = uVar14 - 1;
      iVar11 = *piVar15;
      piVar6 = piVar15 + -5;
      piVar9 = piVar15 + -4;
      piVar2 = piVar15 + 3;
      piVar4 = piVar15 + -3;
      piVar3 = piVar15 + 5;
      piVar5 = piVar15 + -1;
      piVar7 = piVar15 + 1;
      piVar10 = piVar15 + 2;
      piVar15 = piVar15 + 0xe;
      dVar21 = (double)((*(float *)(param_5 + 0x454) * (float)(iVar11 + *piVar1)) /
                       (float)(iVar11 + 1)) + 1.0;
      dVar22 = (double)NEON_fmadd((double)(long)*piVar6,dVar21,(double)(long)*piVar7);
      dVar23 = (double)NEON_fmadd((double)(long)*piVar9,dVar21,(double)(long)*piVar10);
      dVar24 = (double)NEON_fmadd((double)(long)*piVar4,dVar21,(double)(long)*piVar2);
      dVar25 = (double)NEON_fmadd((double)(long)*piVar5,dVar21,(double)(long)*piVar3);
      dVar21 = (double)NEON_fmadd((double)iVar11,dVar21,(double)*piVar1);
      dVar17 = dVar17 + dVar22;
      dVar19 = dVar19 + dVar23;
      dVar20 = dVar20 + dVar24;
      dVar18 = dVar18 + dVar25;
      dVar16 = dVar16 + dVar21;
    } while (uVar14 != 0);
    iVar11 = *param_3;
    iVar8 = param_1[(long)(int)param_2 * 0xe + -0xd];
  }
  if (-1 < iVar11) {
    dVar17 = dVar17 + (double)iVar13;
    dVar19 = dVar19 + (double)iVar11;
    dVar16 = dVar16 + 1.0;
    dVar20 = dVar20 + (double)(iVar13 * iVar13);
    dVar18 = dVar18 + (double)(iVar11 * iVar13);
  }
  iVar11 = *param_4;
  if (-1 < iVar11) {
    dVar17 = dVar17 + (double)iVar8;
    dVar19 = dVar19 + (double)iVar11;
    dVar16 = dVar16 + 1.0;
    dVar20 = dVar20 + (double)(iVar8 * iVar8);
    dVar18 = dVar18 + (double)(iVar11 * iVar8);
  }
  dVar21 = (double)NEON_fmadd(dVar16,dVar20,dVar17 * -dVar17);
  if (dVar21 <= 0.0) {
    uVar12 = 1;
    *param_3 = 0;
  }
  else {
    dVar20 = (double)NEON_fmadd(dVar19,dVar20,dVar17 * -dVar18);
    dVar16 = (double)NEON_fmadd(dVar16,dVar18,dVar19 * -dVar17);
    dVar18 = (double)NEON_fmadd(dVar16 / dVar21,(double)iVar13,dVar20 / dVar21);
    dVar16 = (double)NEON_fmadd(dVar16 / dVar21,(double)iVar8,dVar20 / dVar21);
    iVar11 = (int)(double)(long)dVar16;
    *param_3 = (int)(double)(long)dVar18;
    *param_4 = iVar11;
    iVar13 = *param_3;
    if (0x3ff < iVar13) {
      iVar13 = 0x3ff;
      *param_3 = 0x3ff;
      iVar11 = *param_4;
    }
    if (0x3ff < iVar11) {
      iVar11 = 0x3ff;
      *param_4 = 0x3ff;
      iVar13 = *param_3;
    }
    if (iVar13 < 0) {
      *param_3 = 0;
      iVar11 = *param_4;
    }
    uVar12 = 0;
    if (-1 < iVar11) {
      return 0;
    }
  }
  *param_4 = 0;
  return uVar12;
}


