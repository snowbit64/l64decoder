// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_6x6
// Entry Point: 00d86844
// Size: 576 bytes
// Signature: undefined jpeg_idct_6x6(void)


void jpeg_idct_6x6(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  short *psVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  int *piVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  int local_d8 [6];
  int local_c0 [6];
  undefined4 local_a8 [6];
  undefined4 local_90 [6];
  int local_78 [6];
  undefined4 local_60 [6];
  long local_48;
  
  lVar18 = tpidr_el0;
  local_48 = *(long *)(lVar18 + 0x28);
  lVar23 = *(long *)(param_1 + 0x198);
  lVar25 = *(long *)(param_2 + 0x58);
  lVar22 = 0;
  do {
    psVar5 = (short *)(param_3 + lVar22 * 2);
    piVar24 = (int *)(lVar25 + lVar22 * 4);
    lVar3 = lVar22 + 1;
    sVar14 = psVar5[0x20];
    iVar21 = piVar24[0x20];
    lVar28 = (long)piVar24[8] * (long)psVar5[8];
    lVar27 = (long)piVar24[0x18] * (long)psVar5[0x18];
    uVar9 = (long)(*piVar24 * (int)*psVar5) << 0xd | 0x400;
    lVar26 = (long)piVar24[0x28] * (long)psVar5[0x28];
    lVar19 = uVar9 + (long)iVar21 * (long)sVar14 * 0x16a1;
    lVar6 = (long)piVar24[0x10] * (long)psVar5[0x10] * 0x2731 + lVar19;
    lVar19 = lVar19 + (long)piVar24[0x10] * (long)psVar5[0x10] * -0x2731;
    lVar20 = (lVar26 + lVar28) * 0xbb6;
    lVar7 = lVar20 + (lVar27 + lVar28) * 0x2000;
    iVar17 = (int)lVar28 - ((int)lVar27 + (int)lVar26);
    lVar20 = lVar20 + (lVar26 - lVar27) * 0x2000;
    local_60[lVar22] = (int)((ulong)(lVar6 - lVar7) >> 0xb);
    iVar21 = (int)(uVar9 + (long)iVar21 * (long)sVar14 * -0x2d42 >> 0xb);
    local_d8[lVar22] = (int)((ulong)(lVar7 + lVar6) >> 0xb);
    local_c0[lVar22] = iVar17 * 4 + iVar21;
    local_78[lVar22] = iVar21 + iVar17 * -4;
    local_a8[lVar22] = (int)((ulong)(lVar20 + lVar19) >> 0xb);
    local_90[lVar22] = (int)((ulong)(lVar19 - lVar20) >> 0xb);
    lVar22 = lVar3;
  } while ((int)lVar3 != 6);
  lVar22 = 0;
  piVar24 = local_d8;
  lVar23 = lVar23 + -0x180;
  do {
    iVar11 = piVar24[1];
    piVar2 = piVar24 + 4;
    iVar12 = piVar24[5];
    iVar10 = piVar24[2];
    iVar13 = piVar24[3];
    plVar1 = (long *)(param_4 + lVar22);
    lVar22 = lVar22 + 8;
    iVar21 = *piVar24 * 0x2000 + 0x8020000;
    piVar24 = piVar24 + 6;
    iVar15 = iVar21 + *piVar2 * 0x16a1;
    iVar16 = (iVar12 + iVar11) * 0xbb6;
    iVar17 = iVar15 + iVar10 * 0x2731;
    iVar21 = iVar21 + *piVar2 * -0x2d42;
    iVar4 = iVar16 + (iVar13 + iVar11) * 0x2000;
    puVar8 = (undefined *)(*plVar1 + (param_5 & 0xffffffff));
    iVar11 = iVar11 - (iVar13 + iVar12);
    *puVar8 = *(undefined *)(lVar23 + ((ulong)((uint)(iVar4 + iVar17) >> 0x12) & 0x3ff));
    iVar15 = iVar15 + iVar10 * -0x2731;
    puVar8[5] = *(undefined *)(lVar23 + ((ulong)((uint)(iVar17 - iVar4) >> 0x12) & 0x3ff));
    iVar16 = iVar16 + (iVar12 - iVar13) * 0x2000;
    puVar8[1] = *(undefined *)(lVar23 + ((ulong)((uint)(iVar11 * 0x2000 + iVar21) >> 0x12) & 0x3ff))
    ;
    puVar8[4] = *(undefined *)
                 (lVar23 + ((ulong)((uint)(iVar21 + iVar11 * -0x2000) >> 0x12) & 0x3ff));
    puVar8[2] = *(undefined *)(lVar23 + ((ulong)((uint)(iVar16 + iVar15) >> 0x12) & 0x3ff));
    puVar8[3] = *(undefined *)(lVar23 + ((ulong)((uint)(iVar15 - iVar16) >> 0x12) & 0x3ff));
  } while (lVar22 != 0x30);
  if (*(long *)(lVar18 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


