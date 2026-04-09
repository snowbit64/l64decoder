// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_11x11
// Entry Point: 00d7f71c
// Size: 1204 bytes
// Signature: undefined jpeg_fdct_11x11(void)


void jpeg_fdct_11x11(int *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
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
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  int local_c8 [8];
  int local_a8 [8];
  int local_88 [8];
  long local_68;
  
  lVar7 = tpidr_el0;
  lVar22 = 0;
  local_68 = *(long *)(lVar7 + 0x28);
  piVar8 = param_1;
  while( true ) {
    while( true ) {
      pbVar1 = (byte *)(*(long *)(param_2 + lVar22 * 8) + (param_3 & 0xffffffff));
      lVar25 = (ulong)pbVar1[10] + (ulong)*pbVar1;
      lVar28 = (ulong)*pbVar1 - (ulong)pbVar1[10];
      uVar32 = (ulong)pbVar1[5];
      lVar27 = (ulong)pbVar1[8] + (ulong)pbVar1[2];
      lVar24 = (ulong)pbVar1[2] - (ulong)pbVar1[8];
      lVar9 = (ulong)pbVar1[6] + (ulong)pbVar1[4];
      lVar30 = lVar27 + uVar32 * -2;
      lVar10 = (ulong)pbVar1[9] + (ulong)pbVar1[1];
      lVar26 = (ulong)pbVar1[1] - (ulong)pbVar1[9];
      lVar21 = (ulong)pbVar1[4] - (ulong)pbVar1[6];
      lVar11 = (ulong)pbVar1[7] + (ulong)pbVar1[3];
      lVar23 = (ulong)pbVar1[3] - (ulong)pbVar1[7];
      lVar12 = lVar9 + uVar32 * -2;
      lVar17 = lVar10 + uVar32 * -2;
      lVar13 = lVar25 + uVar32 * -2;
      lVar29 = lVar11 + uVar32 * -2;
      lVar15 = (lVar30 + lVar12) * 0x671 + (lVar13 + lVar29) * 0x2b6c;
      lVar31 = (lVar13 - lVar17) * 0x2612 + 0x800;
      lVar19 = (lVar17 - lVar29) * 0x1da3;
      lVar18 = (lVar26 + lVar28) * 0x292a + 0x800;
      lVar14 = (lVar24 + lVar28) * 0x2234;
      lVar20 = (lVar23 + lVar28) * 0x1877;
      lVar16 = (lVar24 + lVar26) * -0x1877;
      *piVar8 = ((int)lVar9 +
                (int)lVar10 + (int)lVar25 + (int)lVar27 + (int)lVar11 + (uint)pbVar1[5]) * 2 +
                -0xb00;
      piVar8[1] = (int)((ulong)(lVar18 + lVar28 * -0x370a + lVar14 + lVar20 + lVar21 * 0xcc0) >> 0xc
                       );
      lVar27 = (lVar23 + lVar26) * -0x2ccb;
      lVar25 = (lVar23 + lVar24) * 0xcc0;
      piVar8[2] = (int)(lVar19 + lVar29 * -0x2096 + lVar12 * -0x2c83 + lVar15 + 0x800U >> 0xc);
      piVar8[3] = (int)((ulong)(lVar18 + lVar26 * 0x28d8 + lVar16 + lVar27 + lVar21 * -0x2234) >>
                       0xc);
      piVar8[4] = (int)((ulong)(lVar31 + lVar17 * 0x1ff + lVar30 * -0x2b6c + lVar12 * 0x12cd +
                               lVar19) >> 0xc);
      piVar8[5] = (int)(lVar16 + lVar24 * -0x3fa6 + lVar14 + lVar25 + lVar21 * 0x2ccb + 0x800U >>
                       0xc);
      piVar8[6] = (int)((ulong)(lVar31 + lVar13 * -0x33db + lVar30 * -0x193d + lVar15) >> 0xc);
      piVar8[7] = (int)(lVar27 + lVar23 * 0x29c7 + lVar20 + lVar25 + lVar21 * -0x292a + 0x800U >>
                       0xc);
      if ((int)lVar22 != 7) break;
      piVar8 = local_c8;
      lVar22 = lVar22 + 1;
    }
    if ((int)lVar22 == 10) break;
    piVar8 = piVar8 + 8;
    lVar22 = lVar22 + 1;
  }
  lVar22 = 0;
  do {
    piVar8 = (int *)((long)param_1 + lVar22);
    lVar25 = lVar22 + 4;
    lVar10 = (long)(*(int *)((long)local_88 + lVar22) + *piVar8);
    lVar12 = (long)(*(int *)((long)local_a8 + lVar22) + piVar8[8]);
    lVar14 = (long)(*(int *)((long)local_c8 + lVar22) + piVar8[0x10]);
    lVar16 = (long)(piVar8[0x38] + piVar8[0x18]);
    lVar19 = (long)piVar8[0x28];
    lVar27 = (long)(piVar8[0x30] + piVar8[0x20]);
    iVar2 = *piVar8 - *(int *)((long)local_88 + lVar22);
    lVar15 = lVar14 + lVar19 * -2;
    lVar9 = lVar27 + lVar19 * -2;
    lVar11 = lVar10 + lVar19 * -2;
    lVar13 = lVar12 + lVar19 * -2;
    lVar17 = lVar16 + lVar19 * -2;
    lVar20 = (lVar11 - lVar13) * 0x2846 + 0x4000;
    iVar3 = piVar8[8] - *(int *)((long)local_a8 + lVar22);
    lVar21 = (lVar15 + lVar9) * 0x6d0 + (lVar11 + lVar17) * 0x2def;
    iVar4 = piVar8[0x10] - *(int *)((long)local_c8 + lVar22);
    lVar18 = (lVar13 - lVar17) * 0x1f5a;
    iVar5 = piVar8[0x18] - piVar8[0x38];
    iVar6 = piVar8[0x20] - piVar8[0x30];
    *piVar8 = (int)((lVar12 + lVar10 + lVar14 + lVar16 + lVar27 + lVar19) * 0x21da + 0x4000U >> 0xf)
    ;
    lVar22 = (long)iVar2;
    lVar27 = (long)iVar3;
    piVar8[0x10] = (int)(lVar18 + lVar17 * -0x2279 + lVar9 * -0x2f16 + lVar21 + 0x4000U >> 0xf);
    lVar10 = (lVar27 + lVar22) * 0x2b8c + 0x4000;
    lVar12 = (long)iVar4;
    piVar8[0x20] = (int)((ulong)(lVar20 + lVar13 * 0x21c + lVar15 * -0x2def + lVar9 * 0x13e3 +
                                lVar18) >> 0xf);
    piVar8[0x30] = (int)((ulong)(lVar20 + lVar11 * -0x36db + lVar15 * -0x1ab3 + lVar21) >> 0xf);
    lVar9 = (long)iVar5;
    lVar11 = (lVar12 + lVar27) * -0x19e2;
    lVar13 = (lVar12 + lVar22) * 0x242e;
    lVar27 = (lVar9 + lVar27) * -0x2f63;
    lVar14 = (lVar9 + lVar22) * 0x19e2;
    lVar22 = (lVar9 + lVar12) * 0xd7d;
    piVar8[8] = (int)((ulong)(lVar10 + (long)iVar2 * -0x3a39 + lVar13 + lVar14 + (long)iVar6 * 0xd7d
                             ) >> 0xf);
    piVar8[0x28] = (int)(lVar11 + (long)iVar4 * -0x4355 + lVar13 + lVar22 + (long)iVar6 * 0x2f63 +
                         0x4000U >> 0xf);
    piVar8[0x18] = (int)((ulong)(lVar10 + (long)iVar3 * 0x2b35 + lVar11 + lVar27 +
                                (long)iVar6 * -0x242e) >> 0xf);
    piVar8[0x38] = (int)(lVar27 + (long)iVar5 * 0x2c32 + lVar14 + lVar22 + (long)iVar6 * -0x2b8c +
                         0x4000U >> 0xf);
    lVar22 = lVar25;
  } while ((int)lVar25 != 0x20);
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


