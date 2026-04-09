// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_15x15
// Entry Point: 00d809d8
// Size: 1276 bytes
// Signature: undefined jpeg_fdct_15x15(void)


void jpeg_fdct_15x15(int *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int *piVar27;
  long lVar28;
  int local_150 [8];
  int local_130 [8];
  int local_110 [8];
  int local_f0 [8];
  int local_d0 [8];
  int local_b0 [8];
  int local_90 [8];
  long local_70;
  
  lVar11 = tpidr_el0;
  lVar18 = 0;
  local_70 = *(long *)(lVar11 + 0x28);
  piVar27 = param_1;
  while( true ) {
    while( true ) {
      pbVar1 = (byte *)(*(long *)(param_2 + lVar18 * 8) + (param_3 & 0xffffffff));
      lVar15 = (ulong)pbVar1[0xe] + (ulong)*pbVar1;
      lVar17 = (ulong)*pbVar1 - (ulong)pbVar1[0xe];
      lVar2 = (ulong)pbVar1[0xb] + (ulong)pbVar1[3];
      lVar13 = (ulong)pbVar1[0xd] + (ulong)pbVar1[1];
      lVar19 = (ulong)pbVar1[1] - (ulong)pbVar1[0xd];
      lVar3 = (ulong)pbVar1[0xc] + (ulong)pbVar1[2];
      lVar23 = (ulong)pbVar1[2] - (ulong)pbVar1[0xc];
      lVar16 = (ulong)pbVar1[10] + (ulong)pbVar1[4];
      lVar20 = (ulong)pbVar1[3] - (ulong)pbVar1[0xb];
      lVar14 = (ulong)pbVar1[9] + (ulong)pbVar1[5];
      lVar12 = (ulong)pbVar1[4] - (ulong)pbVar1[10];
      lVar28 = (ulong)pbVar1[5] - (ulong)pbVar1[9];
      lVar22 = (ulong)pbVar1[8] + (ulong)pbVar1[6];
      lVar21 = (ulong)pbVar1[6] - (ulong)pbVar1[8];
      lVar26 = (ulong)pbVar1[7] + lVar3;
      lVar25 = lVar2 + lVar13 + lVar22;
      lVar24 = lVar3 + ((ulong)(lVar16 + lVar13) >> 1) + (ulong)pbVar1[7] * -2;
      lVar3 = lVar16 + lVar15 + lVar14;
      lVar13 = (lVar15 - lVar2) * 0x2c44 + (lVar13 - lVar16) * 0x194c + (lVar22 - lVar14) * 0x1e48 +
               0x1000;
      lVar16 = (lVar12 + lVar19) * 0x2b0a + (lVar28 + lVar20) * 0x1268 + (lVar17 - lVar21) * 0x2d02;
      *piVar27 = (int)lVar26 + (int)lVar3 + (int)lVar25 + -0x780;
      piVar27[1] = (int)(lVar23 * 0x2731 + lVar20 * 0xf39 + lVar12 * -0x1071 + lVar21 * 0x366a +
                         lVar16 + 0x1000U >> 0xd);
      piVar27[2] = (int)((ulong)(lVar13 + lVar2 * 0x30ff + lVar24 * 0x16a1 + lVar22 * -0x47a0) >>
                        0xd);
      piVar27[3] = (int)((lVar19 - (lVar20 + lVar21)) * 0x1a9a +
                         (lVar17 - (lVar12 + lVar28)) * 0x2b0a + 0x1000U >> 0xd);
      piVar27[4] = (int)((ulong)(lVar13 + lVar14 * 0x198d + lVar24 * -0x16a1 + lVar15 * -0x2ec) >>
                        0xd);
      piVar27[5] = (int)(((lVar17 - (lVar23 + lVar20)) + lVar28 + lVar21) * 0x2731 + 0x1000U >> 0xd)
      ;
      piVar27[6] = (int)((lVar25 + lVar26 * -2) * -0xdfc + (lVar3 + lVar26 * -2) * 0x249d + 0x1000U
                        >> 0xd);
      piVar27[7] = (int)(lVar19 * -0x45a4 + lVar17 * -0xb60 + lVar23 * -0x2731 + lVar28 * -0x1bd1 +
                         lVar16 + 0x1000U >> 0xd);
      if ((int)lVar18 != 7) break;
      piVar27 = local_150;
      lVar18 = lVar18 + 1;
    }
    if ((int)lVar18 == 0xe) break;
    piVar27 = piVar27 + 8;
    lVar18 = lVar18 + 1;
  }
  lVar18 = 0;
  do {
    piVar27 = (int *)((long)param_1 + lVar18);
    lVar16 = (long)(*(int *)((long)local_90 + lVar18) + *piVar27);
    lVar13 = (long)(*(int *)((long)local_b0 + lVar18) + piVar27[8]);
    lVar14 = (long)(*(int *)((long)local_d0 + lVar18) + piVar27[0x10]);
    lVar25 = (long)(*(int *)((long)local_f0 + lVar18) + piVar27[0x18]);
    lVar26 = (long)(*(int *)((long)local_110 + lVar18) + piVar27[0x20]);
    lVar12 = (long)(*(int *)((long)local_130 + lVar18) + piVar27[0x28]);
    lVar17 = (long)(*(int *)((long)local_150 + lVar18) + piVar27[0x30]);
    iVar4 = piVar27[0x10] - *(int *)((long)local_d0 + lVar18);
    lVar15 = lVar26 + lVar16 + lVar12;
    lVar2 = lVar25 + lVar13 + lVar17;
    iVar5 = *piVar27 - *(int *)((long)local_90 + lVar18);
    iVar6 = piVar27[8] - *(int *)((long)local_b0 + lVar18);
    iVar7 = piVar27[0x18] - *(int *)((long)local_f0 + lVar18);
    lVar3 = piVar27[0x38] + lVar14;
    iVar8 = piVar27[0x20] - *(int *)((long)local_110 + lVar18);
    iVar9 = piVar27[0x28] - *(int *)((long)local_130 + lVar18);
    lVar22 = lVar14 + (lVar26 + lVar13 >> 1) + (long)piVar27[0x38] * -2;
    lVar13 = (lVar16 - lVar25) * 0x325d + (lVar13 - lVar26) * 0x1cc9 + (lVar17 - lVar12) * 0x2274 +
             0x4000;
    iVar10 = piVar27[0x30] - *(int *)((long)local_150 + lVar18);
    lVar26 = (long)iVar7;
    *piVar27 = (int)((lVar2 + lVar15 + lVar3) * 0x2469 + 0x4000U >> 0xf);
    lVar14 = (long)iVar9;
    piVar27[0x20] =
         (int)((ulong)(lVar13 + lVar12 * 0x1d12 + lVar22 * -0x19be + lVar16 * -0x354) >> 0xf);
    lVar16 = (long)iVar5;
    piVar27[0x30] =
         (int)((lVar2 + lVar3 * -2) * -0xfe9 + (lVar15 + lVar3 * -2) * 0x29a8 + 0x4000U >> 0xf);
    lVar15 = (long)iVar10;
    piVar27[0x10] =
         (int)((ulong)(lVar13 + lVar25 * 0x37bf + lVar22 * 0x19bf + lVar17 * -0x517e) >> 0xf);
    lVar13 = ((long)iVar8 + (long)iVar6) * 0x30f8 + (lVar14 + lVar26) * 0x14f1 +
             (lVar16 - lVar15) * 0x3335;
    lVar18 = lVar18 + 4;
    piVar27[8] = (int)((long)iVar7 * 0x1152 + (long)iVar4 * 0x2c97 + (long)iVar8 * -0x12b4 +
                       (long)iVar10 * 0x3dea + lVar13 + 0x4000U >> 0xf);
    piVar27[0x18] =
         (int)(((long)iVar6 - (lVar26 + lVar15)) * 0x1e44 + (lVar16 - (iVar8 + lVar14)) * 0x30f8 +
               0x4000U >> 0xf);
    piVar27[0x28] = (int)(((lVar16 - (lVar26 + iVar4)) + lVar14 + lVar15) * 0x2c97 + 0x4000U >> 0xf)
    ;
    piVar27[0x38] =
         (int)((long)iVar6 * -0x4f3c + (long)iVar5 * -0xcf2 + (long)iVar4 * -0x2c97 +
               (long)iVar9 * -0x1fa6 + lVar13 + 0x4000U >> 0xf);
  } while ((int)lVar18 != 0x20);
  if (*(long *)(lVar11 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


