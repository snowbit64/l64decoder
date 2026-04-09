// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_13x13
// Entry Point: 00d88934
// Size: 1384 bytes
// Signature: undefined jpeg_idct_13x13(void)


void jpeg_idct_13x13(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  int local_210 [104];
  long local_70;
  
  lVar29 = tpidr_el0;
  local_70 = *(long *)(lVar29 + 0x28);
  lVar36 = *(long *)(param_1 + 0x198);
  lVar40 = *(long *)(param_2 + 0x58);
  lVar38 = 0;
  do {
    psVar7 = (short *)(param_3 + lVar38 * 2);
    piVar8 = (int *)(lVar40 + lVar38 * 4);
    lVar1 = lVar38 + 1;
    lVar9 = (long)piVar8[0x30] * (long)psVar7[0x30] + (long)piVar8[0x20] * (long)psVar7[0x20];
    lVar32 = (long)piVar8[0x20] * (long)psVar7[0x20] - (long)piVar8[0x30] * (long)psVar7[0x30];
    lVar34 = (long)piVar8[0x10] * (long)psVar7[0x10];
    uVar14 = (long)(*piVar8 * (int)*psVar7) << 0xd | 0x400;
    lVar43 = (long)piVar8[8] * (long)psVar7[8];
    lVar30 = uVar14 + lVar32 * 0x319;
    lVar44 = uVar14 + lVar32 * 0xf95;
    lVar10 = lVar9 * 0x24f9 + lVar34 * 0x2bf1 + lVar30;
    lVar30 = lVar9 * -0x24f9 + lVar34 * 0x100c + lVar30;
    lVar11 = lVar9 * -0xa20 + lVar34 * 0x21e0 + lVar44;
    lVar46 = uVar14 + lVar32 * -0x1dfe;
    lVar31 = (long)piVar8[0x18] * (long)psVar7[0x18];
    lVar37 = (long)piVar8[0x28] * (long)psVar7[0x28];
    lVar12 = lVar9 * 0xdf2 + lVar34 * -0x19b5 + lVar46;
    lVar39 = (long)piVar8[0x38] * (long)psVar7[0x38];
    lVar35 = (lVar31 + lVar43) * 0x2a50;
    lVar33 = (lVar37 + lVar43) * 0x253e;
    lVar44 = lVar9 * 0xa20 + lVar34 * -0x2812 + lVar44;
    lVar46 = lVar9 * -0xdf2 + lVar34 * -0x574 + lVar46;
    lVar41 = (lVar37 + lVar31) * -0xad5;
    lVar47 = (lVar39 + lVar31) * -0x253e;
    lVar45 = (lVar39 + lVar43) * 0x1e02;
    lVar9 = lVar35 + lVar31 * 0x1acb + lVar41 + lVar47;
    lVar35 = lVar35 + lVar43 * -0x40a5 + lVar33 + lVar45;
    lVar42 = (lVar39 + lVar37) * -0x1508;
    lVar33 = lVar41 + lVar37 * -0x324f + lVar33 + lVar42;
    lVar42 = lVar47 + lVar39 * 0x4694 + lVar45 + lVar42;
    lVar41 = (lVar37 - lVar31) * 0x1e02 + (lVar39 + lVar43) * 0xad5;
    local_210[lVar38 + 0x60] = (int)((ulong)(lVar10 - lVar35) >> 0xb);
    local_210[lVar38 + 0x58] = (int)((ulong)(lVar11 - lVar9) >> 0xb);
    lVar31 = lVar41 + lVar43 * 0xa33 + lVar31 * -0xeea;
    lVar37 = lVar41 + lVar37 * 0xc4e + lVar39 * -0x37c1;
    local_210[lVar38 + 8] = (int)((ulong)(lVar9 + lVar11) >> 0xb);
    local_210[lVar38 + 0x50] = (int)((ulong)(lVar30 - lVar33) >> 0xb);
    local_210[lVar38 + 0x10] = (int)((ulong)(lVar33 + lVar30) >> 0xb);
    local_210[lVar38 + 0x20] = (int)((ulong)(lVar31 + lVar12) >> 0xb);
    local_210[lVar38] = (int)((ulong)(lVar35 + lVar10) >> 0xb);
    local_210[lVar38 + 0x18] = (int)((ulong)(lVar42 + lVar46) >> 0xb);
    local_210[lVar38 + 0x48] = (int)((ulong)(lVar46 - lVar42) >> 0xb);
    local_210[lVar38 + 0x40] = (int)((ulong)(lVar12 - lVar31) >> 0xb);
    local_210[lVar38 + 0x28] = (int)((ulong)(lVar37 + lVar44) >> 0xb);
    local_210[lVar38 + 0x38] = (int)((ulong)(lVar44 - lVar37) >> 0xb);
    local_210[lVar38 + 0x30] = (int)(uVar14 + (lVar32 - lVar34) * 0x2d41 >> 0xb);
    lVar38 = lVar1;
  } while ((int)lVar1 != 8);
  lVar36 = lVar36 + -0x180;
  lVar38 = 0;
  do {
    lVar40 = lVar38 + 8;
    iVar15 = local_210[lVar38 + 3];
    iVar16 = local_210[lVar38 + 5];
    iVar17 = local_210[lVar38 + 1];
    iVar18 = local_210[lVar38 + 2];
    iVar19 = local_210[lVar38 + 7];
    iVar6 = local_210[lVar38 + 6] + local_210[lVar38 + 4];
    iVar28 = local_210[lVar38 + 4] - local_210[lVar38 + 6];
    iVar2 = local_210[lVar38] * 0x2000 + 0x8020000;
    iVar20 = iVar2 + iVar28 * 0x319;
    iVar22 = (iVar15 + iVar17) * 0x2a50;
    iVar23 = (iVar16 + iVar17) * 0x253e;
    iVar24 = (iVar19 + iVar17) * 0x1e02;
    iVar3 = iVar6 * 0x24f9 + iVar18 * 0x2bf1 + iVar20;
    iVar4 = iVar22 + iVar17 * -0x40a5 + iVar23 + iVar24;
    iVar21 = iVar2 + iVar28 * 0xf95;
    puVar13 = (undefined *)(*(long *)(param_4 + lVar38) + (ulong)param_5);
    iVar5 = iVar6 * -0xa20 + iVar18 * 0x21e0 + iVar21;
    iVar25 = (iVar16 + iVar15) * -0xad5;
    *puVar13 = *(undefined *)(lVar36 + ((ulong)((uint)(iVar4 + iVar3) >> 0x12) & 0x3ff));
    iVar26 = (iVar19 + iVar15) * -0x253e;
    iVar22 = iVar22 + iVar15 * 0x1acb + iVar25 + iVar26;
    puVar13[0xc] = *(undefined *)(lVar36 + ((ulong)((uint)(iVar3 - iVar4) >> 0x12) & 0x3ff));
    iVar20 = iVar6 * -0x24f9 + iVar18 * 0x100c + iVar20;
    iVar27 = (iVar19 + iVar16) * -0x1508;
    puVar13[1] = *(undefined *)(lVar36 + ((ulong)((uint)(iVar22 + iVar5) >> 0x12) & 0x3ff));
    iVar3 = iVar25 + iVar16 * -0x324f + iVar23 + iVar27;
    puVar13[0xb] = *(undefined *)(lVar36 + ((ulong)((uint)(iVar5 - iVar22) >> 0x12) & 0x3ff));
    iVar5 = iVar2 + iVar28 * -0x1dfe;
    puVar13[2] = *(undefined *)(lVar36 + ((ulong)((uint)(iVar3 + iVar20) >> 0x12) & 0x3ff));
    iVar4 = iVar6 * -0xdf2 + iVar18 * -0x574 + iVar5;
    iVar27 = iVar26 + iVar19 * 0x4694 + iVar24 + iVar27;
    puVar13[10] = *(undefined *)(lVar36 + ((ulong)((uint)(iVar20 - iVar3) >> 0x12) & 0x3ff));
    iVar3 = (iVar16 - iVar15) * 0x1e02 + (iVar19 + iVar17) * 0xad5;
    puVar13[3] = *(undefined *)(lVar36 + ((ulong)((uint)(iVar27 + iVar4) >> 0x12) & 0x3ff));
    iVar22 = iVar3 + iVar17 * 0xa33 + iVar15 * -0xeea;
    iVar5 = iVar6 * 0xdf2 + iVar18 * -0x19b5 + iVar5;
    puVar13[9] = *(undefined *)(lVar36 + ((ulong)((uint)(iVar4 - iVar27) >> 0x12) & 0x3ff));
    iVar3 = iVar3 + iVar16 * 0xc4e + iVar19 * -0x37c1;
    puVar13[4] = *(undefined *)(lVar36 + ((ulong)((uint)(iVar22 + iVar5) >> 0x12) & 0x3ff));
    iVar21 = iVar6 * 0xa20 + iVar18 * -0x2812 + iVar21;
    puVar13[8] = *(undefined *)(lVar36 + ((ulong)((uint)(iVar5 - iVar22) >> 0x12) & 0x3ff));
    puVar13[5] = *(undefined *)(lVar36 + ((ulong)((uint)(iVar3 + iVar21) >> 0x12) & 0x3ff));
    puVar13[7] = *(undefined *)(lVar36 + ((ulong)((uint)(iVar21 - iVar3) >> 0x12) & 0x3ff));
    puVar13[6] = *(undefined *)
                  (lVar36 + ((ulong)((uint)(iVar2 + (iVar28 - iVar18) * 0x2d41) >> 0x12) & 0x3ff));
    lVar38 = lVar40;
  } while (lVar40 != 0x68);
  if (*(long *)(lVar29 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


