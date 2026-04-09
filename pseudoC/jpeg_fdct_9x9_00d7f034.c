// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_9x9
// Entry Point: 00d7f034
// Size: 828 bytes
// Signature: undefined jpeg_fdct_9x9(void)


void jpeg_fdct_9x9(int *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  int local_88 [8];
  long local_68;
  
  lVar4 = tpidr_el0;
  lVar12 = 0;
  local_68 = *(long *)(lVar4 + 0x28);
  piVar5 = param_1;
  while( true ) {
    while( true ) {
      pbVar1 = (byte *)(*(long *)(param_2 + lVar12 * 8) + (param_3 & 0xffffffff));
      lVar15 = (ulong)pbVar1[8] + (ulong)*pbVar1;
      lVar8 = (ulong)*pbVar1 - (ulong)pbVar1[8];
      lVar9 = (ulong)pbVar1[6] + (ulong)pbVar1[2];
      lVar6 = (ulong)pbVar1[7] + (ulong)pbVar1[1];
      lVar10 = (ulong)pbVar1[1] - (ulong)pbVar1[7];
      lVar13 = (ulong)pbVar1[2] - (ulong)pbVar1[6];
      lVar7 = (ulong)pbVar1[5] + (ulong)pbVar1[3];
      lVar16 = (ulong)pbVar1[3] - (ulong)pbVar1[5];
      lVar14 = (ulong)pbVar1[4] + lVar6;
      lVar17 = lVar9 + lVar15 + lVar7;
      lVar6 = lVar6 + (ulong)pbVar1[4] * -2;
      lVar18 = (lVar15 - lVar9) * 0x2a87 + 0x800;
      lVar11 = lVar10 * 0x2731;
      lVar19 = (lVar13 + lVar8) * 0x1d17;
      piVar5[2] = (int)((ulong)(lVar18 + (lVar9 - lVar7) * 0x22ab + lVar6 * 0x16a1) >> 0xc);
      piVar5[3] = (int)((lVar8 - (lVar13 + lVar16)) * 0x2731 + 0x800U >> 0xc);
      lVar9 = (lVar16 + lVar8) * 0xf7a;
      lVar8 = (lVar13 - lVar16) * 0x2c91;
      *piVar5 = ((int)lVar17 + (int)lVar14) * 2 + -0x900;
      piVar5[1] = (int)(lVar11 + lVar19 + lVar9 + 0x800U >> 0xc);
      piVar5[4] = (int)((ulong)(lVar18 + (lVar7 - lVar15) * 0x7dc + lVar6 * -0x16a1) >> 0xc);
      piVar5[5] = (int)((lVar19 - (lVar8 + lVar11)) + 0x800U >> 0xc);
      piVar5[6] = (int)((lVar17 + lVar14 * -2) * 0x16a1 + 0x800U >> 0xc);
      piVar5[7] = (int)(lVar9 + lVar10 * -0x2731 + lVar8 + 0x800U >> 0xc);
      if ((int)lVar12 != 7) break;
      piVar5 = local_88;
      lVar12 = lVar12 + 1;
    }
    if ((int)lVar12 == 8) break;
    piVar5 = piVar5 + 8;
    lVar12 = lVar12 + 1;
  }
  lVar12 = 0;
  do {
    piVar2 = (int *)((long)param_1 + lVar12);
    piVar5 = (int *)((long)local_88 + lVar12);
    lVar12 = lVar12 + 4;
    lVar13 = (long)(*piVar5 + *piVar2);
    lVar16 = (long)(piVar2[0x30] + piVar2[0x10]);
    lVar8 = (long)(piVar2[0x38] + piVar2[8]);
    lVar18 = (long)(piVar2[0x28] + piVar2[0x18]);
    lVar15 = piVar2[0x20] + lVar8;
    lVar9 = lVar16 + lVar13 + lVar18;
    iVar3 = piVar2[8] - piVar2[0x38];
    lVar8 = lVar8 + (long)piVar2[0x20] * -2;
    lVar17 = (lVar13 - lVar16) * 0x4333 + 0x4000;
    lVar6 = (long)(*piVar2 - *piVar5);
    lVar14 = (long)(piVar2[0x10] - piVar2[0x30]);
    *piVar2 = (int)((lVar9 + lVar15) * 0x3291 + 0x4000U >> 0xf);
    lVar11 = (long)(piVar2[0x18] - piVar2[0x28]);
    lVar10 = (lVar14 + lVar6) * 0x2df8;
    lVar7 = (lVar11 + lVar6) * 0x1876;
    piVar2[0x30] = (int)((lVar9 + lVar15 * -2) * 0x23c2 + 0x4000U >> 0xf);
    lVar15 = (lVar14 - lVar11) * 0x466d;
    piVar2[0x20] = (int)((ulong)(lVar17 + (lVar18 - lVar13) * 0xc6b + lVar8 * -0x23c2) >> 0xf);
    piVar2[0x10] = (int)((ulong)(lVar17 + (lVar16 - lVar18) * 0x36c8 + lVar8 * 0x23c2) >> 0xf);
    piVar2[0x18] = (int)((lVar6 - (lVar14 + lVar11)) * 0x3def + 0x4000U >> 0xf);
    piVar2[8] = (int)(lVar10 + (long)iVar3 * 0x3def + lVar7 + 0x4000U >> 0xf);
    piVar2[0x28] = (int)((lVar10 - (lVar15 + (long)iVar3 * 0x3def)) + 0x4000U >> 0xf);
    piVar2[0x38] = (int)(lVar7 + (long)iVar3 * -0x3def + lVar15 + 0x4000U >> 0xf);
  } while ((int)lVar12 != 0x20);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


