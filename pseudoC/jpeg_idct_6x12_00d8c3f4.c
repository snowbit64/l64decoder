// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_6x12
// Entry Point: 00d8c3f4
// Size: 872 bytes
// Signature: undefined jpeg_idct_6x12(void)


void jpeg_idct_6x12(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
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
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  int local_190 [6];
  undefined4 local_178 [6];
  undefined4 local_160 [6];
  undefined4 local_148 [6];
  undefined4 local_130 [6];
  undefined4 local_118 [6];
  undefined4 local_100 [6];
  undefined4 local_e8 [6];
  undefined4 local_d0 [6];
  undefined4 local_b8 [6];
  undefined4 local_a0 [6];
  undefined4 local_88 [6];
  long local_70;
  
  lVar17 = tpidr_el0;
  local_70 = *(long *)(lVar17 + 0x28);
  lVar22 = *(long *)(param_1 + 0x198);
  lVar28 = *(long *)(param_2 + 0x58);
  lVar24 = 0;
  do {
    psVar7 = (short *)(param_3 + lVar24 * 2);
    piVar27 = (int *)(lVar28 + lVar24 * 4);
    lVar3 = lVar24 + 1;
    lVar25 = (long)piVar27[0x10] * (long)psVar7[0x10];
    lVar30 = (long)piVar27[0x30] * (long)psVar7[0x30];
    uVar10 = (long)(*piVar27 * (int)*psVar7) << 0xd | 0x400;
    lVar20 = (long)piVar27[8] * (long)psVar7[8];
    lVar33 = (long)piVar27[0x28] * (long)psVar7[0x28];
    lVar34 = (long)piVar27[0x38] * (long)psVar7[0x38];
    lVar35 = (long)piVar27[0x20] * (long)psVar7[0x20] * 0x2731 + uVar10;
    lVar23 = uVar10 + (long)piVar27[0x20] * (long)psVar7[0x20] * -0x2731;
    lVar18 = lVar30 * 0x2000 + lVar25 * 0x2bb6;
    lVar8 = (lVar25 - lVar30) * 0x2000 + uVar10;
    lVar36 = (long)piVar27[0x18] * (long)psVar7[0x18];
    lVar26 = uVar10 + (lVar25 - lVar30) * -0x2000;
    lVar30 = lVar30 * -0x2000 + lVar25 * 0xbb6;
    lVar25 = lVar18 + lVar35;
    lVar29 = (lVar33 + lVar20 + lVar34) * 0x1b8d;
    lVar35 = lVar35 - lVar18;
    lVar31 = lVar29 + (lVar33 + lVar20) * 0x85b;
    lVar18 = lVar30 + lVar23;
    lVar19 = (lVar34 + lVar33) * -0x2175;
    lVar23 = lVar23 - lVar30;
    lVar30 = lVar36 * 0x29cf + lVar20 * 0x8f7 + lVar31;
    lVar31 = lVar36 * -0x1151 + lVar33 * -0x2f50 + lVar19 + lVar31;
    lVar32 = ((lVar20 - lVar34) + (lVar36 - lVar33)) * 0x1151;
    lVar21 = lVar32 + (lVar20 - lVar34) * 0x187e;
    lVar32 = lVar32 + (lVar36 - lVar33) * -0x3b21;
    lVar19 = lVar36 * -0x29cf + lVar34 * 0x32c6 + lVar29 + lVar19;
    local_178[lVar24] = (int)((ulong)(lVar21 + lVar8) >> 0xb);
    local_88[lVar24] = (int)((ulong)(lVar25 - lVar30) >> 0xb);
    local_d0[lVar24] = (int)((ulong)(lVar23 - lVar19) >> 0xb);
    local_b8[lVar24] = (int)((ulong)(lVar18 - lVar31) >> 0xb);
    lVar29 = lVar36 * -0x1151 + lVar20 * -0x15a4 + lVar34 * -0x3f74 + lVar29;
    local_130[lVar24] = (int)((ulong)(lVar32 + lVar26) >> 0xb);
    local_190[lVar24] = (int)((ulong)(lVar30 + lVar25) >> 0xb);
    local_a0[lVar24] = (int)((ulong)(lVar8 - lVar21) >> 0xb);
    local_160[lVar24] = (int)((ulong)(lVar31 + lVar18) >> 0xb);
    local_148[lVar24] = (int)((ulong)(lVar19 + lVar23) >> 0xb);
    local_e8[lVar24] = (int)((ulong)(lVar26 - lVar32) >> 0xb);
    local_118[lVar24] = (int)((ulong)(lVar29 + lVar35) >> 0xb);
    local_100[lVar24] = (int)((ulong)(lVar35 - lVar29) >> 0xb);
    lVar24 = lVar3;
  } while ((int)lVar3 != 6);
  lVar24 = 0;
  piVar27 = local_190;
  lVar22 = lVar22 + -0x180;
  do {
    iVar12 = piVar27[1];
    piVar2 = piVar27 + 4;
    iVar13 = piVar27[5];
    iVar11 = piVar27[2];
    iVar14 = piVar27[3];
    plVar1 = (long *)(param_4 + lVar24);
    lVar24 = lVar24 + 8;
    iVar4 = *piVar27 * 0x2000 + 0x8020000;
    piVar27 = piVar27 + 6;
    iVar15 = iVar4 + *piVar2 * 0x16a1;
    iVar16 = (iVar13 + iVar12) * 0xbb6;
    iVar5 = iVar15 + iVar11 * 0x2731;
    iVar4 = iVar4 + *piVar2 * -0x2d42;
    iVar6 = iVar16 + (iVar14 + iVar12) * 0x2000;
    puVar9 = (undefined *)(*plVar1 + (ulong)param_5);
    iVar12 = iVar12 - (iVar14 + iVar13);
    *puVar9 = *(undefined *)(lVar22 + ((ulong)((uint)(iVar6 + iVar5) >> 0x12) & 0x3ff));
    iVar15 = iVar15 + iVar11 * -0x2731;
    puVar9[5] = *(undefined *)(lVar22 + ((ulong)((uint)(iVar5 - iVar6) >> 0x12) & 0x3ff));
    iVar16 = iVar16 + (iVar13 - iVar14) * 0x2000;
    puVar9[1] = *(undefined *)(lVar22 + ((ulong)((uint)(iVar12 * 0x2000 + iVar4) >> 0x12) & 0x3ff));
    puVar9[4] = *(undefined *)(lVar22 + ((ulong)((uint)(iVar4 + iVar12 * -0x2000) >> 0x12) & 0x3ff))
    ;
    puVar9[2] = *(undefined *)(lVar22 + ((ulong)((uint)(iVar16 + iVar15) >> 0x12) & 0x3ff));
    puVar9[3] = *(undefined *)(lVar22 + ((ulong)((uint)(iVar15 - iVar16) >> 0x12) & 0x3ff));
  } while (lVar24 != 0x60);
  if (*(long *)(lVar17 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


