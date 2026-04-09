// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_5x10
// Entry Point: 00d8c75c
// Size: 788 bytes
// Signature: undefined jpeg_idct_5x10(void)


void jpeg_idct_5x10(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  short *psVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  int local_138 [5];
  undefined4 local_124 [5];
  int local_110 [5];
  undefined4 local_fc [5];
  undefined4 local_e8 [5];
  undefined4 local_d4 [5];
  undefined4 local_c0 [5];
  int local_ac [5];
  undefined4 local_98 [5];
  undefined4 local_84 [5];
  long local_70;
  
  lVar15 = tpidr_el0;
  local_70 = *(long *)(lVar15 + 0x28);
  lVar18 = *(long *)(param_1 + 0x198);
  lVar23 = *(long *)(param_2 + 0x58);
  lVar20 = 0;
  do {
    psVar4 = (short *)(param_3 + lVar20 * 2);
    piVar22 = (int *)(lVar23 + lVar20 * 4);
    lVar2 = lVar20 + 1;
    lVar17 = (long)piVar22[0x20] * (long)psVar4[0x20];
    uVar9 = (long)(*piVar22 * (int)*psVar4) << 0xd | 0x400;
    lVar21 = uVar9 + lVar17 * 0x249d;
    lVar24 = uVar9 + lVar17 * -0xdfc;
    lVar27 = ((long)piVar22[0x30] * (long)psVar4[0x30] + (long)piVar22[0x10] * (long)psVar4[0x10]) *
             0x1a9a;
    lVar25 = (long)piVar22[8] * (long)psVar4[8];
    lVar5 = (long)piVar22[0x38] * (long)psVar4[0x38] + (long)piVar22[0x18] * (long)psVar4[0x18];
    lVar26 = lVar27 + (long)piVar22[0x10] * (long)psVar4[0x10] * 0x1071;
    lVar19 = (long)piVar22[0x18] * (long)psVar4[0x18] - (long)piVar22[0x38] * (long)psVar4[0x38];
    lVar6 = lVar26 + lVar21;
    lVar27 = lVar27 + (long)piVar22[0x30] * (long)psVar4[0x30] * -0x45a4;
    lVar21 = lVar21 - lVar26;
    lVar28 = (long)piVar22[0x28] * (long)psVar4[0x28] * 0x2000;
    lVar26 = lVar27 + lVar24;
    lVar24 = lVar24 - lVar27;
    lVar7 = lVar19 * 0x9e3 + lVar28;
    lVar27 = lVar5 * 0x1e6f + lVar25 * 0x2cb3 + lVar7;
    lVar28 = lVar28 + lVar19 * -0x19e3;
    iVar13 = (int)lVar25 - ((int)lVar19 + (int)((long)piVar22[0x28] * (long)psVar4[0x28]));
    local_138[lVar20] = (int)((ulong)(lVar27 + lVar6) >> 0xb);
    lVar19 = lVar25 * 0x2853 - (lVar5 * 0x12cf + lVar28);
    local_84[lVar20] = (int)((ulong)(lVar6 - lVar27) >> 0xb);
    iVar16 = (int)(uVar9 + lVar17 * -0x2d42 >> 0xb);
    lVar28 = lVar28 + lVar5 * -0x12cf + lVar25 * 0x148c;
    lVar7 = lVar5 * -0x1e6f + lVar25 * 0x714 + lVar7;
    local_ac[lVar20] = iVar16 + iVar13 * -4;
    local_110[lVar20] = iVar13 * 4 + iVar16;
    local_fc[lVar20] = (int)((ulong)(lVar28 + lVar24) >> 0xb);
    local_124[lVar20] = (int)((ulong)(lVar19 + lVar26) >> 0xb);
    local_98[lVar20] = (int)((ulong)(lVar26 - lVar19) >> 0xb);
    local_c0[lVar20] = (int)((ulong)(lVar24 - lVar28) >> 0xb);
    local_e8[lVar20] = (int)((ulong)(lVar7 + lVar21) >> 0xb);
    local_d4[lVar20] = (int)((ulong)(lVar21 - lVar7) >> 0xb);
    lVar20 = lVar2;
  } while ((int)lVar2 != 5);
  lVar20 = 0;
  lVar18 = lVar18 + -0x180;
  piVar22 = local_138;
  do {
    plVar1 = (long *)(param_4 + lVar20);
    lVar20 = lVar20 + 8;
    iVar13 = piVar22[4] + piVar22[2];
    iVar14 = piVar22[2] - piVar22[4];
    iVar16 = *piVar22 * 0x2000 + 0x8020000;
    iVar12 = (piVar22[3] + piVar22[1]) * 0x1a9a;
    iVar10 = iVar16 + iVar14 * 0xb50;
    iVar11 = iVar12 + piVar22[1] * 0x1071;
    iVar3 = iVar10 + iVar13 * 0x194c;
    iVar12 = iVar12 + piVar22[3] * -0x45a4;
    puVar8 = (undefined *)(*plVar1 + (ulong)param_5);
    iVar10 = iVar10 + iVar13 * -0x194c;
    *puVar8 = *(undefined *)(lVar18 + ((ulong)((uint)(iVar11 + iVar3) >> 0x12) & 0x3ff));
    puVar8[4] = *(undefined *)(lVar18 + ((ulong)((uint)(iVar3 - iVar11) >> 0x12) & 0x3ff));
    puVar8[1] = *(undefined *)(lVar18 + ((ulong)((uint)(iVar12 + iVar10) >> 0x12) & 0x3ff));
    puVar8[3] = *(undefined *)(lVar18 + ((ulong)((uint)(iVar10 - iVar12) >> 0x12) & 0x3ff));
    puVar8[2] = *(undefined *)
                 (lVar18 + ((ulong)((uint)(iVar16 + iVar14 * -0x2d40) >> 0x12) & 0x3ff));
    piVar22 = piVar22 + 5;
  } while (lVar20 != 0x50);
  if (*(long *)(lVar15 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


