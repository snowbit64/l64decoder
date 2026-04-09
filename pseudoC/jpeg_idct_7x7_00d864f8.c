// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_7x7
// Entry Point: 00d864f8
// Size: 844 bytes
// Signature: undefined jpeg_idct_7x7(void)


void jpeg_idct_7x7(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  int *piVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  int local_134 [7];
  undefined4 local_118 [7];
  undefined4 local_fc [7];
  undefined4 local_e0 [7];
  undefined4 local_c4 [7];
  undefined4 local_a8 [7];
  undefined4 local_8c [7];
  long local_70;
  
  lVar22 = tpidr_el0;
  local_70 = *(long *)(lVar22 + 0x28);
  lVar24 = *(long *)(param_1 + 0x198);
  lVar31 = *(long *)(param_2 + 0x58);
  lVar26 = 0;
  do {
    psVar4 = (short *)(param_3 + lVar26 * 2);
    piVar30 = (int *)(lVar31 + lVar26 * 4);
    lVar1 = lVar26 + 1;
    lVar36 = (long)piVar30[0x20] * (long)psVar4[0x20];
    lVar25 = (long)piVar30[0x30] * (long)psVar4[0x30];
    lVar38 = (lVar36 - lVar25) * 0x1c37;
    lVar27 = (long)piVar30[0x10] * (long)psVar4[0x10];
    lVar28 = (long)piVar30[0x18] * (long)psVar4[0x18];
    uVar8 = (long)(*piVar30 * (int)*psVar4) << 0xd | 0x400;
    lVar23 = (lVar27 - lVar36) * 0xa12;
    lVar33 = (long)piVar30[8] * (long)psVar4[8];
    lVar32 = (long)piVar30[0x28] * (long)psVar4[0x28];
    lVar35 = (lVar28 + lVar33) * 0x1def;
    lVar5 = uVar8 + lVar36 * -0x3aeb + lVar23 + lVar38;
    lVar37 = uVar8 + (lVar25 + lVar27) * 0x28c6;
    lVar34 = (lVar32 + lVar33) * 0x13a3;
    lVar38 = lVar38 + lVar25 * -0x27d + lVar37;
    lVar6 = lVar34 + lVar35 + (lVar33 - lVar28) * -0x573;
    lVar29 = (lVar32 + lVar28) * -0x2c1f;
    lVar28 = lVar35 + (lVar33 - lVar28) * 0x573 + lVar29;
    lVar37 = lVar23 + lVar27 * -0x4f0f + lVar37;
    local_8c[lVar26] = (int)((ulong)(lVar38 - lVar6) >> 0xb);
    lVar29 = lVar34 + lVar32 * 0x3bde + lVar29;
    local_118[lVar26] = (int)((ulong)(lVar28 + lVar5) >> 0xb);
    local_134[lVar26] = (int)((ulong)(lVar6 + lVar38) >> 0xb);
    local_a8[lVar26] = (int)((ulong)(lVar5 - lVar28) >> 0xb);
    local_fc[lVar26] = (int)((ulong)(lVar29 + lVar37) >> 0xb);
    local_c4[lVar26] = (int)((ulong)(lVar37 - lVar29) >> 0xb);
    local_e0[lVar26] = (int)(uVar8 + (lVar36 - (lVar25 + lVar27)) * 0x2d41 >> 0xb);
    lVar26 = lVar1;
  } while ((int)lVar1 != 7);
  lVar26 = 0;
  piVar30 = local_134;
  lVar24 = lVar24 + -0x180;
  do {
    iVar9 = piVar30[3];
    iVar12 = piVar30[4];
    iVar10 = piVar30[5];
    iVar13 = piVar30[6];
    iVar11 = *piVar30;
    iVar14 = piVar30[1];
    iVar15 = piVar30[2];
    piVar30 = piVar30 + 7;
    iVar11 = iVar11 * 0x2000 + 0x8020000;
    iVar17 = (iVar12 - iVar13) * 0x1c37;
    iVar18 = (iVar9 + iVar14) * 0x1def;
    iVar16 = iVar11 + (iVar13 + iVar15) * 0x28c6;
    iVar19 = (iVar10 + iVar14) * 0x13a3;
    iVar2 = iVar17 + iVar13 * -0x27d + iVar16;
    iVar20 = (iVar15 - iVar12) * 0xa12;
    iVar3 = iVar18 + (iVar14 - iVar9) * -0x573 + iVar19;
    puVar7 = (undefined *)(*(long *)(param_4 + lVar26) + (ulong)param_5);
    iVar21 = (iVar10 + iVar9) * -0x2c1f;
    lVar26 = lVar26 + 8;
    iVar17 = iVar11 + iVar12 * -0x3aeb + iVar20 + iVar17;
    iVar9 = iVar18 + (iVar14 - iVar9) * 0x573 + iVar21;
    *puVar7 = *(undefined *)(lVar24 + ((ulong)((uint)(iVar3 + iVar2) >> 0x12) & 0x3ff));
    puVar7[6] = *(undefined *)(lVar24 + ((ulong)((uint)(iVar2 - iVar3) >> 0x12) & 0x3ff));
    iVar16 = iVar20 + iVar15 * -0x4f0f + iVar16;
    puVar7[1] = *(undefined *)(lVar24 + ((ulong)((uint)(iVar9 + iVar17) >> 0x12) & 0x3ff));
    iVar21 = iVar19 + iVar10 * 0x3bde + iVar21;
    puVar7[5] = *(undefined *)(lVar24 + ((ulong)((uint)(iVar17 - iVar9) >> 0x12) & 0x3ff));
    puVar7[2] = *(undefined *)(lVar24 + ((ulong)((uint)(iVar21 + iVar16) >> 0x12) & 0x3ff));
    puVar7[4] = *(undefined *)(lVar24 + ((ulong)((uint)(iVar16 - iVar21) >> 0x12) & 0x3ff));
    puVar7[3] = *(undefined *)
                 (lVar24 + ((ulong)((uint)(iVar11 + (iVar12 - (iVar13 + iVar15)) * 0x2d41) >> 0x12)
                           & 0x3ff));
  } while (lVar26 != 0x38);
  if (*(long *)(lVar22 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


