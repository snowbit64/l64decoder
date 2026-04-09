// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_12x6
// Entry Point: 00d826bc
// Size: 1668 bytes
// Signature: undefined jpeg_fdct_12x6(void)


void jpeg_fdct_12x6(undefined8 *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
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
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  long lVar60;
  int iVar61;
  int iVar62;
  long lVar63;
  int iVar64;
  long lVar65;
  long lVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  
  lVar4 = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  do {
    pbVar1 = (byte *)(*(long *)(param_2 + lVar4) + (param_3 & 0xffffffff));
    lVar7 = (ulong)pbVar1[0xb] + (ulong)*pbVar1;
    lVar60 = (ulong)pbVar1[9] + (ulong)pbVar1[2];
    lVar66 = (ulong)pbVar1[8] + (ulong)pbVar1[3];
    lVar63 = (ulong)pbVar1[6] + (ulong)pbVar1[5];
    lVar65 = lVar63 + lVar7;
    lVar7 = lVar7 - lVar63;
    lVar9 = lVar60 - lVar66;
    lVar66 = lVar66 + lVar60;
    lVar8 = (ulong)*pbVar1 - (ulong)pbVar1[0xb];
    lVar60 = (ulong)pbVar1[7] + (ulong)pbVar1[4];
    lVar63 = (ulong)pbVar1[10] + (ulong)pbVar1[1];
    lVar6 = (ulong)pbVar1[1] - (ulong)pbVar1[10];
    lVar13 = (ulong)pbVar1[2] - (ulong)pbVar1[9];
    lVar14 = (ulong)pbVar1[3] - (ulong)pbVar1[8];
    iVar23 = (int)lVar63;
    iVar24 = (int)lVar60;
    lVar3 = (ulong)pbVar1[4] - (ulong)pbVar1[7];
    lVar10 = (ulong)pbVar1[5] - (ulong)pbVar1[6];
    lVar5 = (lVar3 + lVar6) * 0x1151;
    lVar3 = lVar5 + lVar3 * -0x3b21;
    lVar5 = lVar5 + lVar6 * 0x187e;
    lVar6 = (lVar13 + lVar8) * 0x23e7 + 0x400;
    lVar12 = (lVar14 + lVar8) * 0x1b8d;
    lVar11 = (lVar14 + lVar13) * -0x5e8;
    piVar2 = (int *)((long)param_1 + lVar4 * 4);
    piVar2[2] = (int)(lVar63 + (lVar9 * 0x2bb5 - lVar60) + lVar7 * 0x2bb6 + 0x400U >> 0xb);
    piVar2[3] = (int)(lVar3 + (lVar8 - lVar14) * 0x29cf + (lVar10 + lVar13) * -0x1151 + 0x400U >>
                     0xb);
    lVar4 = lVar4 + 8;
    *piVar2 = ((int)lVar66 + iVar23 + iVar24 + (int)lVar65) * 4 + -0x1800;
    piVar2[1] = (int)((ulong)(lVar6 + lVar8 * -0x1296 + lVar12 + lVar5 + lVar10 * 0x5e8) >> 0xb);
    piVar2[4] = (int)((lVar65 - lVar66) * 0x2731 + 0x400U >> 0xb);
    piVar2[5] = (int)((ulong)(((lVar6 + lVar13 * -0x4add + lVar11) - lVar3) + lVar10 * 0x1b8d) >>
                     0xb);
    piVar2[6] = ((int)lVar7 - ((iVar23 - iVar24) + (int)lVar9)) * 4;
    piVar2[7] = (int)(((lVar12 + lVar14 * 0x173a + lVar11) - lVar5) + lVar10 * -0x23e7 + 0x400U >>
                     0xb);
  } while (lVar4 != 0x30);
  iVar23 = (int)param_1[0xc];
  iVar19 = (int)param_1[8];
  iVar43 = iVar23 + iVar19;
  iVar24 = (int)((ulong)param_1[0xc] >> 0x20);
  iVar20 = (int)((ulong)param_1[8] >> 0x20);
  iVar44 = iVar24 + iVar20;
  iVar25 = (int)param_1[0xd];
  iVar21 = (int)param_1[9];
  iVar45 = iVar25 + iVar21;
  iVar26 = (int)((ulong)param_1[0xd] >> 0x20);
  iVar22 = (int)((ulong)param_1[9] >> 0x20);
  iVar46 = iVar26 + iVar22;
  iVar19 = iVar19 - iVar23;
  iVar20 = iVar20 - iVar24;
  iVar21 = iVar21 - iVar25;
  iVar22 = iVar22 - iVar26;
  iVar67 = (int)*param_1;
  iVar15 = (int)param_1[0x14];
  iVar27 = iVar15 + iVar67;
  iVar68 = (int)((ulong)*param_1 >> 0x20);
  iVar16 = (int)((ulong)param_1[0x14] >> 0x20);
  iVar28 = iVar16 + iVar68;
  iVar69 = (int)param_1[1];
  iVar17 = (int)param_1[0x15];
  iVar29 = iVar17 + iVar69;
  iVar70 = (int)((ulong)param_1[1] >> 0x20);
  iVar18 = (int)((ulong)param_1[0x15] >> 0x20);
  iVar30 = iVar18 + iVar70;
  lVar65 = (long)iVar43 + (long)iVar27;
  lVar66 = (long)iVar44 + (long)iVar28;
  lVar60 = (long)iVar45 + (long)iVar29;
  lVar63 = (long)iVar46 + (long)iVar30;
  iVar23 = (int)param_1[0x10];
  iVar47 = (int)param_1[4];
  iVar51 = iVar23 + iVar47;
  iVar24 = (int)((ulong)param_1[0x10] >> 0x20);
  iVar48 = (int)((ulong)param_1[4] >> 0x20);
  iVar53 = iVar24 + iVar48;
  iVar25 = (int)param_1[0x11];
  iVar49 = (int)param_1[5];
  iVar55 = iVar25 + iVar49;
  iVar26 = (int)((ulong)param_1[0x11] >> 0x20);
  iVar50 = (int)((ulong)param_1[5] >> 0x20);
  iVar57 = iVar26 + iVar50;
  iVar67 = iVar67 - iVar15;
  iVar68 = iVar68 - iVar16;
  iVar69 = iVar69 - iVar17;
  iVar70 = iVar70 - iVar18;
  iVar47 = iVar47 - iVar23;
  iVar48 = iVar48 - iVar24;
  iVar49 = iVar49 - iVar25;
  iVar50 = iVar50 - iVar26;
  lVar3 = ((long)iVar19 + (long)iVar67) * 0x14d3 + 0x8000;
  lVar5 = ((long)iVar20 + (long)iVar68) * 0x14d3 + 0x8000;
  lVar4 = ((long)iVar21 + (long)iVar69) * 0x14d3 + 0x8000;
  lVar7 = ((long)iVar22 + (long)iVar70) * 0x14d3 + 0x8000;
  iVar52 = (int)param_1[2];
  iVar35 = (int)param_1[0x16];
  iVar59 = iVar35 + iVar52;
  iVar54 = (int)((ulong)param_1[2] >> 0x20);
  iVar36 = (int)((ulong)param_1[0x16] >> 0x20);
  iVar61 = iVar36 + iVar54;
  iVar56 = (int)param_1[3];
  iVar37 = (int)param_1[0x17];
  iVar62 = iVar37 + iVar56;
  iVar58 = (int)((ulong)param_1[3] >> 0x20);
  iVar38 = (int)((ulong)param_1[0x17] >> 0x20);
  iVar64 = iVar38 + iVar58;
  iVar23 = (int)param_1[10];
  iVar15 = (int)param_1[0xe];
  iVar71 = iVar15 + iVar23;
  iVar24 = (int)((ulong)param_1[10] >> 0x20);
  iVar16 = (int)((ulong)param_1[0xe] >> 0x20);
  iVar72 = iVar16 + iVar24;
  iVar25 = (int)param_1[0xb];
  iVar17 = (int)param_1[0xf];
  iVar73 = iVar17 + iVar25;
  iVar26 = (int)((ulong)param_1[0xb] >> 0x20);
  iVar18 = (int)((ulong)param_1[0xf] >> 0x20);
  iVar74 = iVar18 + iVar26;
  iVar31 = (int)param_1[6];
  iVar39 = (int)param_1[0x12];
  iVar75 = iVar39 + iVar31;
  iVar32 = (int)((ulong)param_1[6] >> 0x20);
  iVar40 = (int)((ulong)param_1[0x12] >> 0x20);
  iVar76 = iVar40 + iVar32;
  iVar33 = (int)param_1[7];
  iVar41 = (int)param_1[0x13];
  iVar77 = iVar41 + iVar33;
  iVar34 = (int)((ulong)param_1[7] >> 0x20);
  iVar42 = (int)((ulong)param_1[0x13] >> 0x20);
  iVar78 = iVar42 + iVar34;
  lVar9 = (long)iVar71 + (long)iVar59;
  lVar10 = (long)iVar72 + (long)iVar61;
  lVar6 = (long)iVar73 + (long)iVar62;
  lVar8 = (long)iVar74 + (long)iVar64;
  iVar23 = iVar23 - iVar15;
  iVar24 = iVar24 - iVar16;
  iVar25 = iVar25 - iVar17;
  iVar26 = iVar26 - iVar18;
  iVar52 = iVar52 - iVar35;
  iVar54 = iVar54 - iVar36;
  iVar56 = iVar56 - iVar37;
  iVar58 = iVar58 - iVar38;
  iVar31 = iVar31 - iVar39;
  iVar32 = iVar32 - iVar40;
  iVar33 = iVar33 - iVar41;
  iVar34 = iVar34 - iVar42;
  param_1[1] = CONCAT44((int)((ulong)((lVar63 + iVar57) * 0x38e4 + 0x8000) >> 0x10),
                        (int)((ulong)((lVar60 + iVar55) * 0x38e4 + 0x8000) >> 0x10));
  *param_1 = CONCAT44((int)((ulong)((lVar66 + iVar53) * 0x38e4 + 0x8000) >> 0x10),
                      (int)((ulong)((lVar65 + iVar51) * 0x38e4 + 0x8000) >> 0x10));
  param_1[3] = CONCAT44((int)((ulong)((lVar8 + iVar78) * 0x38e4 + 0x8000) >> 0x10),
                        (int)((ulong)((lVar6 + iVar77) * 0x38e4 + 0x8000) >> 0x10));
  param_1[2] = CONCAT44((int)((ulong)((lVar10 + iVar76) * 0x38e4 + 0x8000) >> 0x10),
                        (int)((ulong)((lVar9 + iVar75) * 0x38e4 + 0x8000) >> 0x10));
  param_1[9] = CONCAT44((int)((ulong)(((long)iVar30 - (long)iVar46) * 0x45ad + 0x8000) >> 0x10),
                        (int)((ulong)(((long)iVar29 - (long)iVar45) * 0x45ad + 0x8000) >> 0x10));
  param_1[8] = CONCAT44((int)((ulong)(((long)iVar28 - (long)iVar44) * 0x45ad + 0x8000) >> 0x10),
                        (int)((ulong)(((long)iVar27 - (long)iVar43) * 0x45ad + 0x8000) >> 0x10));
  param_1[0xb] = CONCAT44((int)((ulong)(((long)iVar64 - (long)iVar74) * 0x45ad + 0x8000) >> 0x10),
                          (int)((ulong)(((long)iVar62 - (long)iVar73) * 0x45ad + 0x8000) >> 0x10));
  param_1[10] = CONCAT44((int)((ulong)(((long)iVar61 - (long)iVar72) * 0x45ad + 0x8000) >> 0x10),
                         (int)((ulong)(((long)iVar59 - (long)iVar71) * 0x45ad + 0x8000) >> 0x10));
  param_1[0x11] =
       CONCAT44((int)((ulong)((lVar63 + (long)iVar57 * -2) * 0x283a + 0x8000) >> 0x10),
                (int)((ulong)((lVar60 + (long)iVar55 * -2) * 0x283a + 0x8000) >> 0x10));
  param_1[0x10] =
       CONCAT44((int)((ulong)((lVar66 + (long)iVar53 * -2) * 0x283a + 0x8000) >> 0x10),
                (int)((ulong)((lVar65 + (long)iVar51 * -2) * 0x283a + 0x8000) >> 0x10));
  param_1[0x13] =
       CONCAT44((int)((ulong)((lVar8 + (long)iVar78 * -2) * 0x283a + 0x8000) >> 0x10),
                (int)((ulong)((lVar6 + (long)iVar77 * -2) * 0x283a + 0x8000) >> 0x10));
  param_1[0x12] =
       CONCAT44((int)((ulong)((lVar10 + (long)iVar76 * -2) * 0x283a + 0x8000) >> 0x10),
                (int)((ulong)((lVar9 + (long)iVar75 * -2) * 0x283a + 0x8000) >> 0x10));
  lVar60 = ((long)iVar23 + (long)iVar52) * 0x14d3 + 0x8000;
  lVar63 = ((long)iVar24 + (long)iVar54) * 0x14d3 + 0x8000;
  lVar65 = ((long)iVar25 + (long)iVar56) * 0x14d3 + 0x8000;
  lVar66 = ((long)iVar26 + (long)iVar58) * 0x14d3 + 0x8000;
  param_1[5] = CONCAT44((int)((ulong)(lVar7 + ((long)iVar50 + (long)iVar70) * 0x38e4) >> 0x10),
                        (int)((ulong)(lVar4 + ((long)iVar49 + (long)iVar69) * 0x38e4) >> 0x10));
  param_1[4] = CONCAT44((int)((ulong)(lVar5 + ((long)iVar48 + (long)iVar68) * 0x38e4) >> 0x10),
                        (int)((ulong)(lVar3 + ((long)iVar47 + (long)iVar67) * 0x38e4) >> 0x10));
  param_1[7] = CONCAT44((int)((ulong)(lVar66 + ((long)iVar34 + (long)iVar58) * 0x38e4) >> 0x10),
                        (int)((ulong)(lVar65 + ((long)iVar33 + (long)iVar56) * 0x38e4) >> 0x10));
  param_1[6] = CONCAT44((int)((ulong)(lVar63 + ((long)iVar32 + (long)iVar54) * 0x38e4) >> 0x10),
                        (int)((ulong)(lVar60 + ((long)iVar31 + (long)iVar52) * 0x38e4) >> 0x10));
  param_1[0xd] = CONCAT44((int)((ulong)(((long)iVar70 - ((long)iVar50 + (long)iVar22)) * 0x38e4 +
                                       0x8000) >> 0x10),
                          (int)((ulong)(((long)iVar69 - ((long)iVar49 + (long)iVar21)) * 0x38e4 +
                                       0x8000) >> 0x10));
  param_1[0xc] = CONCAT44((int)((ulong)(((long)iVar68 - ((long)iVar48 + (long)iVar20)) * 0x38e4 +
                                       0x8000) >> 0x10),
                          (int)((ulong)(((long)iVar67 - ((long)iVar47 + (long)iVar19)) * 0x38e4 +
                                       0x8000) >> 0x10));
  param_1[0xf] = CONCAT44((int)((ulong)(((long)iVar58 - ((long)iVar34 + (long)iVar26)) * 0x38e4 +
                                       0x8000) >> 0x10),
                          (int)((ulong)(((long)iVar56 - ((long)iVar33 + (long)iVar25)) * 0x38e4 +
                                       0x8000) >> 0x10));
  param_1[0xe] = CONCAT44((int)((ulong)(((long)iVar54 - ((long)iVar32 + (long)iVar24)) * 0x38e4 +
                                       0x8000) >> 0x10),
                          (int)((ulong)(((long)iVar52 - ((long)iVar31 + (long)iVar23)) * 0x38e4 +
                                       0x8000) >> 0x10));
  param_1[0x15] =
       CONCAT44((int)((ulong)(lVar7 + ((long)iVar22 - (long)iVar50) * 0x38e4) >> 0x10),
                (int)((ulong)(lVar4 + ((long)iVar21 - (long)iVar49) * 0x38e4) >> 0x10));
  param_1[0x14] =
       CONCAT44((int)((ulong)(lVar5 + ((long)iVar20 - (long)iVar48) * 0x38e4) >> 0x10),
                (int)((ulong)(lVar3 + ((long)iVar19 - (long)iVar47) * 0x38e4) >> 0x10));
  param_1[0x17] =
       CONCAT44((int)((ulong)(lVar66 + ((long)iVar26 - (long)iVar34) * 0x38e4) >> 0x10),
                (int)((ulong)(lVar65 + ((long)iVar25 - (long)iVar33) * 0x38e4) >> 0x10));
  param_1[0x16] =
       CONCAT44((int)((ulong)(lVar63 + ((long)iVar24 - (long)iVar32) * 0x38e4) >> 0x10),
                (int)((ulong)(lVar60 + ((long)iVar23 - (long)iVar31) * 0x38e4) >> 0x10));
  return;
}


