// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_15x15
// Entry Point: 00d893a4
// Size: 1388 bytes
// Signature: undefined jpeg_idct_15x15(void)


void jpeg_idct_15x15(long param_1,long param_2,long param_3,long param_4,uint param_5)

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
  long lVar28;
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
  int local_250 [120];
  long local_70;
  
  lVar28 = tpidr_el0;
  local_70 = *(long *)(lVar28 + 0x28);
  lVar33 = *(long *)(param_1 + 0x198);
  lVar35 = *(long *)(param_2 + 0x58);
  lVar34 = 0;
  do {
    psVar7 = (short *)(param_3 + lVar34 * 2);
    piVar8 = (int *)(lVar35 + lVar34 * 4);
    lVar1 = lVar34 + 1;
    lVar37 = (long)piVar8[0x10] * (long)psVar7[0x10];
    lVar39 = (long)piVar8[0x30] * (long)psVar7[0x30];
    lVar9 = (long)piVar8[0x20] * (long)psVar7[0x20] + lVar37;
    lVar29 = lVar37 - (long)piVar8[0x20] * (long)psVar7[0x20];
    uVar14 = (long)(*piVar8 * (int)*psVar7) << 0xd | 0x400;
    lVar41 = uVar14 + lVar39 * -0xdfc;
    lVar43 = uVar14 + lVar39 * 0x249d;
    lVar36 = uVar14 + lVar39 * -0x2d42;
    lVar39 = lVar29 * 0x176 + lVar9 * 0x2ace + lVar43;
    lVar44 = (long)piVar8[0x18] * (long)psVar7[0x18];
    lVar46 = (long)piVar8[0x38] * (long)psVar7[0x38];
    lVar10 = lVar29 * -0xcc7 + lVar9 * -0x1182 + lVar43;
    lVar31 = (long)piVar8[8] * (long)psVar7[8];
    lVar38 = (long)piVar8[0x28] * (long)psVar7[0x28];
    lVar45 = lVar36 + lVar29 * 0x16a0;
    lVar11 = lVar37 * 0x2e13 + lVar9 * -0x2ace + lVar29 * 0x176 + lVar41;
    lVar40 = ((lVar44 - lVar46) + lVar31) * 0x1a9a;
    lVar37 = lVar9 * 0x1182 + lVar37 * -0x2e13 + lVar29 * -0xcc7 + lVar41;
    lVar41 = lVar29 * 0xb50 + lVar9 * 0x194c + lVar41;
    lVar30 = lVar40 + lVar31 * 0x1071;
    lVar40 = lVar40 + (lVar44 - lVar46) * -0x45a4;
    lVar9 = lVar43 + lVar9 * -0x194c + lVar29 * 0xb50;
    lVar42 = lVar38 * 0x2731 + (lVar31 - lVar46) * 0x2d02;
    lVar43 = lVar44 * 0x2b0a + lVar46 * 0x4ea3 + lVar42;
    lVar47 = lVar38 * -0x2731 + (lVar31 - lVar46) * 0x2731;
    local_250[lVar34 + 0x70] = (int)((ulong)(lVar39 - lVar43) >> 0xb);
    lVar32 = (lVar46 + lVar31) * 0x1268;
    local_250[lVar34 + 0x68] = (int)((ulong)(lVar41 - lVar30) >> 0xb);
    lVar12 = lVar44 * -0x1a9a + lVar31 * 0xf39 + lVar38 * -0x2731 + lVar32;
    local_250[lVar34 + 0x10] = (int)((ulong)(lVar47 + lVar45) >> 0xb);
    lVar42 = lVar44 * -0x1a9a + lVar31 * -0x2399 + lVar42;
    local_250[lVar34 + 8] = (int)((ulong)(lVar30 + lVar41) >> 0xb);
    local_250[lVar34 + 0x58] = (int)((ulong)(lVar11 - lVar12) >> 0xb);
    lVar32 = lVar38 * 0x2731 + lVar44 * -0x2b0a + lVar46 * -0x1bd1 + lVar32;
    local_250[lVar34] = (int)((ulong)(lVar43 + lVar39) >> 0xb);
    local_250[lVar34 + 0x60] = (int)((ulong)(lVar45 - lVar47) >> 0xb);
    local_250[lVar34 + 0x18] = (int)((ulong)(lVar12 + lVar11) >> 0xb);
    local_250[lVar34 + 0x20] = (int)((ulong)(lVar40 + lVar9) >> 0xb);
    local_250[lVar34 + 0x50] = (int)((ulong)(lVar9 - lVar40) >> 0xb);
    local_250[lVar34 + 0x28] = (int)((ulong)(lVar32 + lVar10) >> 0xb);
    local_250[lVar34 + 0x48] = (int)((ulong)(lVar10 - lVar32) >> 0xb);
    local_250[lVar34 + 0x30] = (int)((ulong)(lVar42 + lVar37) >> 0xb);
    local_250[lVar34 + 0x40] = (int)((ulong)(lVar37 - lVar42) >> 0xb);
    local_250[lVar34 + 0x38] = (int)((ulong)(lVar36 + lVar29 * -0x2d40) >> 0xb);
    lVar34 = lVar1;
  } while ((int)lVar1 != 8);
  lVar33 = lVar33 + -0x180;
  lVar34 = 0;
  do {
    lVar35 = lVar34 + 8;
    iVar17 = local_250[lVar34 + 1];
    iVar18 = local_250[lVar34 + 5];
    iVar15 = local_250[lVar34 + 2];
    iVar19 = local_250[lVar34 + 3];
    iVar2 = local_250[lVar34] * 0x2000 + 0x8020000;
    iVar16 = local_250[lVar34 + 6];
    iVar20 = local_250[lVar34 + 7];
    iVar6 = local_250[lVar34 + 4] + iVar15;
    iVar27 = iVar15 - local_250[lVar34 + 4];
    iVar21 = iVar2 + iVar16 * 0x249d;
    iVar22 = iVar18 * 0x2731 + (iVar17 - iVar20) * 0x2d02;
    iVar3 = iVar27 * 0x176 + iVar6 * 0x2ace + iVar21;
    iVar4 = iVar19 * 0x2b0a + iVar20 * 0x4ea3 + iVar22;
    puVar13 = (undefined *)(*(long *)(param_4 + lVar34) + (ulong)param_5);
    iVar26 = ((iVar19 - iVar20) + iVar17) * 0x1a9a;
    iVar23 = iVar2 + iVar16 * -0xdfc;
    iVar24 = iVar26 + iVar17 * 0x1071;
    *puVar13 = *(undefined *)(lVar33 + ((ulong)((uint)(iVar4 + iVar3) >> 0x12) & 0x3ff));
    iVar5 = iVar27 * 0xb50 + iVar6 * 0x194c + iVar23;
    puVar13[0xe] = *(undefined *)(lVar33 + ((ulong)((uint)(iVar3 - iVar4) >> 0x12) & 0x3ff));
    iVar2 = iVar2 + iVar16 * -0x2d42;
    iVar16 = iVar18 * -0x2731 + (iVar17 - iVar20) * 0x2731;
    puVar13[1] = *(undefined *)(lVar33 + ((ulong)((uint)(iVar24 + iVar5) >> 0x12) & 0x3ff));
    iVar25 = iVar2 + iVar27 * 0x16a0;
    puVar13[0xd] = *(undefined *)(lVar33 + ((ulong)((uint)(iVar5 - iVar24) >> 0x12) & 0x3ff));
    iVar5 = (iVar20 + iVar17) * 0x1268;
    iVar3 = iVar15 * 0x2e13 + iVar6 * -0x2ace + iVar27 * 0x176 + iVar23;
    puVar13[2] = *(undefined *)(lVar33 + ((ulong)((uint)(iVar16 + iVar25) >> 0x12) & 0x3ff));
    iVar4 = iVar19 * -0x1a9a + iVar17 * 0xf39 + iVar18 * -0x2731 + iVar5;
    puVar13[0xc] = *(undefined *)(lVar33 + ((ulong)((uint)(iVar25 - iVar16) >> 0x12) & 0x3ff));
    iVar26 = iVar26 + (iVar19 - iVar20) * -0x45a4;
    iVar5 = iVar18 * 0x2731 + iVar19 * -0x2b0a + iVar20 * -0x1bd1 + iVar5;
    puVar13[3] = *(undefined *)(lVar33 + ((ulong)((uint)(iVar4 + iVar3) >> 0x12) & 0x3ff));
    iVar16 = iVar21 + iVar6 * -0x194c + iVar27 * 0xb50;
    puVar13[0xb] = *(undefined *)(lVar33 + ((ulong)((uint)(iVar3 - iVar4) >> 0x12) & 0x3ff));
    puVar13[4] = *(undefined *)(lVar33 + ((ulong)((uint)(iVar26 + iVar16) >> 0x12) & 0x3ff));
    iVar21 = iVar27 * -0xcc7 + iVar6 * -0x1182 + iVar21;
    puVar13[10] = *(undefined *)(lVar33 + ((ulong)((uint)(iVar16 - iVar26) >> 0x12) & 0x3ff));
    iVar23 = iVar6 * 0x1182 + iVar15 * -0x2e13 + iVar27 * -0xcc7 + iVar23;
    puVar13[5] = *(undefined *)(lVar33 + ((ulong)((uint)(iVar5 + iVar21) >> 0x12) & 0x3ff));
    iVar22 = iVar19 * -0x1a9a + iVar17 * -0x2399 + iVar22;
    puVar13[9] = *(undefined *)(lVar33 + ((ulong)((uint)(iVar21 - iVar5) >> 0x12) & 0x3ff));
    puVar13[6] = *(undefined *)(lVar33 + ((ulong)((uint)(iVar22 + iVar23) >> 0x12) & 0x3ff));
    puVar13[8] = *(undefined *)(lVar33 + ((ulong)((uint)(iVar23 - iVar22) >> 0x12) & 0x3ff));
    puVar13[7] = *(undefined *)
                  (lVar33 + ((ulong)((uint)(iVar2 + iVar27 * -0x2d40) >> 0x12) & 0x3ff));
    lVar34 = lVar35;
  } while (lVar35 != 0x78);
  if (*(long *)(lVar28 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


