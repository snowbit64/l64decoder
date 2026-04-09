// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_10x5
// Entry Point: 00d8ac18
// Size: 772 bytes
// Signature: undefined jpeg_idct_10x5(void)


void jpeg_idct_10x5(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int local_110 [40];
  long local_70;
  
  lVar19 = tpidr_el0;
  local_70 = *(long *)(lVar19 + 0x28);
  lVar23 = *(long *)(param_1 + 0x198);
  lVar24 = *(long *)(param_2 + 0x58);
  lVar22 = 0;
  do {
    psVar6 = (short *)(param_3 + lVar22 * 2);
    piVar7 = (int *)(lVar24 + lVar22 * 4);
    lVar1 = lVar22 + 1;
    lVar8 = (long)piVar7[0x20] * (long)psVar6[0x20] + (long)piVar7[0x10] * (long)psVar6[0x10];
    lVar25 = (long)piVar7[0x10] * (long)psVar6[0x10] - (long)piVar7[0x20] * (long)psVar6[0x20];
    uVar11 = (long)(*piVar7 * (int)*psVar6) << 0xd | 0x400;
    lVar26 = ((long)piVar7[0x18] * (long)psVar6[0x18] + (long)piVar7[8] * (long)psVar6[8]) * 0x1a9a;
    lVar21 = uVar11 + lVar25 * 0xb50;
    lVar27 = lVar26 + (long)piVar7[8] * (long)psVar6[8] * 0x1071;
    lVar26 = lVar26 + (long)piVar7[0x18] * (long)psVar6[0x18] * -0x45a4;
    lVar9 = lVar21 + lVar8 * 0x194c;
    lVar21 = lVar21 + lVar8 * -0x194c;
    local_110[lVar22] = (int)((ulong)(lVar27 + lVar9) >> 0xb);
    local_110[lVar22 + 0x20] = (int)((ulong)(lVar9 - lVar27) >> 0xb);
    local_110[lVar22 + 8] = (int)((ulong)(lVar26 + lVar21) >> 0xb);
    local_110[lVar22 + 0x18] = (int)((ulong)(lVar21 - lVar26) >> 0xb);
    local_110[lVar22 + 0x10] = (int)(uVar11 + lVar25 * -0x2d40 >> 0xb);
    lVar22 = lVar1;
  } while ((int)lVar1 != 8);
  lVar23 = lVar23 + -0x180;
  lVar22 = 0;
  do {
    lVar24 = lVar22 + 8;
    iVar12 = local_110[lVar22 + 1];
    iVar13 = local_110[lVar22 + 4];
    puVar10 = (undefined *)(*(long *)(param_4 + lVar22) + (param_5 & 0xffffffff));
    iVar2 = local_110[lVar22] * 0x2000 + 0x8020000;
    iVar14 = iVar2 + iVar13 * 0x249d;
    iVar20 = local_110[lVar22 + 3] - local_110[lVar22 + 7];
    iVar29 = local_110[lVar22 + 7] + local_110[lVar22 + 3];
    iVar30 = (local_110[lVar22 + 6] + local_110[lVar22 + 2]) * 0x1a9a;
    iVar15 = iVar30 + local_110[lVar22 + 2] * 0x1071;
    iVar28 = (int)((long)local_110[lVar22 + 5] << 0xd);
    iVar3 = iVar20 * 0x9e3 + iVar28;
    iVar4 = iVar15 + iVar14;
    iVar28 = iVar28 + iVar20 * -0x19e3;
    iVar5 = iVar29 * 0x1e6f + iVar12 * 0x2cb3 + iVar3;
    iVar16 = iVar2 + iVar13 * -0xdfc;
    iVar30 = iVar30 + local_110[lVar22 + 6] * -0x45a4;
    iVar17 = iVar12 * 0x2853 - (iVar29 * 0x12cf + iVar28);
    iVar18 = iVar12 - (iVar20 + local_110[lVar22 + 5]);
    *puVar10 = *(undefined *)(lVar23 + ((ulong)((uint)(iVar5 + iVar4) >> 0x12) & 0x3ff));
    iVar20 = iVar30 + iVar16;
    puVar10[9] = *(undefined *)(lVar23 + ((ulong)((uint)(iVar4 - iVar5) >> 0x12) & 0x3ff));
    iVar2 = iVar2 + iVar13 * -0x2d42;
    puVar10[1] = *(undefined *)(lVar23 + ((ulong)((uint)(iVar17 + iVar20) >> 0x12) & 0x3ff));
    iVar16 = iVar16 - iVar30;
    puVar10[8] = *(undefined *)(lVar23 + ((ulong)((uint)(iVar20 - iVar17) >> 0x12) & 0x3ff));
    puVar10[2] = *(undefined *)(lVar23 + ((ulong)((uint)(iVar18 * 0x2000 + iVar2) >> 0x12) & 0x3ff))
    ;
    iVar28 = iVar28 + iVar29 * -0x12cf + iVar12 * 0x148c;
    puVar10[7] = *(undefined *)
                  (lVar23 + ((ulong)((uint)(iVar2 + iVar18 * -0x2000) >> 0x12) & 0x3ff));
    iVar14 = iVar14 - iVar15;
    puVar10[3] = *(undefined *)(lVar23 + ((ulong)((uint)(iVar28 + iVar16) >> 0x12) & 0x3ff));
    iVar3 = iVar29 * -0x1e6f + iVar12 * 0x714 + iVar3;
    puVar10[6] = *(undefined *)(lVar23 + ((ulong)((uint)(iVar16 - iVar28) >> 0x12) & 0x3ff));
    puVar10[4] = *(undefined *)(lVar23 + ((ulong)((uint)(iVar3 + iVar14) >> 0x12) & 0x3ff));
    puVar10[5] = *(undefined *)(lVar23 + ((ulong)((uint)(iVar14 - iVar3) >> 0x12) & 0x3ff));
    lVar22 = lVar24;
  } while (lVar24 != 0x28);
  if (*(long *)(lVar19 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


