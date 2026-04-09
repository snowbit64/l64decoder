// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compute_gru
// Entry Point: 00ea4fe4
// Size: 2400 bytes
// Signature: undefined compute_gru(void)


void compute_gru(undefined (**param_1) [16],undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  undefined (*pauVar9) [16];
  float *pfVar10;
  char *pcVar11;
  undefined8 *puVar12;
  float *pfVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined (*pauVar19) [16];
  char *pcVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined (*pauVar25) [16];
  undefined (*pauVar26) [16];
  float *pfVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  float fVar53;
  undefined8 local_238 [16];
  undefined8 local_1b8 [2];
  undefined auStack_1a8 [112];
  undefined8 local_138 [16];
  float local_b8 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  uVar3 = *(uint *)((long)param_1 + 0x1c);
  uVar21 = (ulong)(int)uVar3;
  if ((int)uVar3 < 1) goto LAB_00ea591c;
  uVar1 = *(uint *)(param_1 + 3);
  uVar18 = (ulong)uVar1;
  uVar17 = (ulong)uVar3;
  pauVar19 = *param_1;
  if (uVar3 < 8) {
    uVar22 = 0;
LAB_00ea5124:
    lVar23 = uVar17 - uVar22;
    pcVar20 = *pauVar19 + uVar22;
    pfVar10 = (float *)((long)local_138 + uVar22 * 4);
    do {
      lVar23 = lVar23 + -1;
      *pfVar10 = (float)(int)*pcVar20;
      pcVar20 = pcVar20 + 1;
      pfVar10 = pfVar10 + 1;
    } while (lVar23 != 0);
  }
  else if (uVar3 < 0x10) {
    uVar24 = 0;
LAB_00ea5040:
    uVar22 = uVar17 & 0xfffffff8;
    lVar23 = uVar24 - uVar22;
    puVar12 = (undefined8 *)(*pauVar19 + uVar24);
    puVar15 = (undefined8 *)((long)local_138 + uVar24 * 4);
    do {
      uVar29 = *puVar12;
      lVar23 = lVar23 + 8;
      auVar43._0_4_ = (int)(short)(char)((ulong)uVar29 >> 0x20);
      auVar43._4_4_ = (int)(short)(char)((ulong)uVar29 >> 0x28);
      auVar43._8_4_ = (int)(short)(char)((ulong)uVar29 >> 0x30);
      auVar43._12_4_ = (int)(short)(char)((ulong)uVar29 >> 0x38);
      auVar33._0_4_ = (int)(short)(char)uVar29;
      auVar33._4_4_ = (int)(short)(char)((ulong)uVar29 >> 8);
      auVar33._8_4_ = (int)(short)(char)((ulong)uVar29 >> 0x10);
      auVar33._12_4_ = (int)(short)(char)((ulong)uVar29 >> 0x18);
      auVar38 = NEON_scvtf(auVar43,4);
      auVar33 = NEON_scvtf(auVar33,4);
      puVar15[1] = auVar33._8_8_;
      *puVar15 = auVar33._0_8_;
      puVar15[3] = auVar38._8_8_;
      puVar15[2] = auVar38._0_8_;
      puVar12 = puVar12 + 1;
      puVar15 = puVar15 + 4;
    } while (lVar23 != 0);
    if (uVar22 != uVar17) goto LAB_00ea5124;
  }
  else {
    uVar22 = uVar17 & 0xfffffff0;
    puVar12 = local_138;
    uVar24 = uVar22;
    pauVar25 = pauVar19;
    do {
      auVar33 = *pauVar25;
      uVar24 = uVar24 - 0x10;
      auVar43 = NEON_ext(auVar33,auVar33,8,1);
      auVar40._0_4_ = (int)(short)auVar33[4];
      auVar40._4_4_ = (int)(short)auVar33[5];
      auVar40._8_4_ = (int)(short)auVar33[6];
      auVar40._12_4_ = (int)(short)auVar33[7];
      auVar38._0_4_ = (int)(short)auVar33[0];
      auVar38._4_4_ = (int)(short)auVar33[1];
      auVar38._8_4_ = (int)(short)auVar33[2];
      auVar38._12_4_ = (int)(short)auVar33[3];
      auVar40 = NEON_scvtf(auVar40,4);
      auVar44._0_4_ = (int)(short)auVar43[4];
      auVar44._4_4_ = (int)(short)auVar43[5];
      auVar44._8_4_ = (int)(short)auVar43[6];
      auVar44._12_4_ = (int)(short)auVar43[7];
      auVar47._0_4_ = (int)(short)auVar43[0];
      auVar47._4_4_ = (int)(short)auVar43[1];
      auVar47._8_4_ = (int)(short)auVar43[2];
      auVar47._12_4_ = (int)(short)auVar43[3];
      auVar33 = NEON_scvtf(auVar38,4);
      auVar43 = NEON_scvtf(auVar44,4);
      auVar38 = NEON_scvtf(auVar47,4);
      puVar12[1] = auVar33._8_8_;
      *puVar12 = auVar33._0_8_;
      puVar12[3] = auVar40._8_8_;
      puVar12[2] = auVar40._0_8_;
      puVar12[5] = auVar38._8_8_;
      puVar12[4] = auVar38._0_8_;
      puVar12[7] = auVar43._8_8_;
      puVar12[6] = auVar43._0_8_;
      puVar12 = puVar12 + 8;
      pauVar25 = pauVar25 + 1;
    } while (uVar24 != 0);
    if (uVar22 != uVar17) {
      uVar24 = uVar22;
      if ((uVar3 >> 3 & 1) == 0) goto LAB_00ea5124;
      goto LAB_00ea5040;
    }
  }
  pauVar19 = param_1[1];
  bVar6 = 0 < (int)uVar1 && 0 < (int)uVar3;
  iVar5 = (int)(uVar21 * 3);
  if (0 < (int)uVar1 && 0 < (int)uVar3) {
    uVar24 = 0;
    pauVar25 = pauVar19;
    do {
      uVar28 = *(undefined4 *)((long)local_138 + uVar24 * 4);
      pauVar26 = pauVar25;
      puVar14 = param_3;
      uVar22 = uVar18;
      do {
        puVar7 = *pauVar26;
        uVar22 = uVar22 - 1;
        pauVar26 = (undefined (*) [16])(*pauVar26 + uVar21 * 3);
        uVar28 = NEON_fmadd((float)(int)(char)*puVar7,*puVar14,uVar28);
        puVar14 = puVar14 + 1;
      } while (uVar22 != 0);
      *(undefined4 *)((long)local_138 + uVar24 * 4) = uVar28;
      uVar24 = uVar24 + 1;
      pauVar25 = (undefined (*) [16])(*pauVar25 + 1);
    } while (uVar24 != uVar17);
    pauVar25 = param_1[2];
    if ((int)uVar3 < 1) goto LAB_00ea5300;
LAB_00ea51d8:
    uVar24 = 0;
    pauVar26 = pauVar25;
    do {
      uVar28 = *(undefined4 *)((long)local_138 + uVar24 * 4);
      pauVar9 = pauVar26;
      puVar14 = param_2;
      uVar22 = uVar17;
      do {
        puVar7 = *pauVar9;
        uVar22 = uVar22 - 1;
        pauVar9 = (undefined (*) [16])(*pauVar9 + iVar5);
        uVar28 = NEON_fmadd((float)(int)(char)*puVar7,*puVar14,uVar28);
        puVar14 = puVar14 + 1;
      } while (uVar22 != 0);
      *(undefined4 *)((long)local_138 + uVar24 * 4) = uVar28;
      uVar24 = uVar24 + 1;
      pauVar26 = (undefined (*) [16])(*pauVar26 + 1);
    } while (uVar24 != uVar17);
    if ((int)uVar3 < 1) goto LAB_00ea5300;
    uVar24 = uVar17;
    puVar12 = local_138;
    do {
      fVar48 = *(float *)puVar12 * 0.0078125 * 0.5;
      uVar28 = 0x3f800000;
      if ((fVar48 < 8.0) && (uVar28 = 0xbf800000, -8.0 < fVar48)) {
        fVar49 = -fVar48;
        if (0.0 <= fVar48) {
          fVar49 = fVar48;
        }
        fVar50 = (float)NEON_fmadd(fVar49,0x41c80000,0x3f000000);
        fVar51 = *(float *)(&DAT_005696b0 + (long)(int)fVar50 * 4);
        fVar49 = (float)NEON_fmadd((float)(int)(float)(int)fVar50,0xbd23d70a,fVar49);
        fVar50 = (float)NEON_fmsub(fVar51,fVar51,0x3f800000);
        uVar28 = NEON_fmsub(fVar51,fVar49,0x3f800000);
        uVar52 = NEON_fmadd(fVar49 * fVar50,uVar28,fVar51);
        uVar28 = NEON_fnmadd(fVar49 * fVar50,uVar28,-fVar51);
        if (0.0 <= fVar48) {
          uVar28 = uVar52;
        }
      }
      uVar28 = NEON_fmadd(uVar28,0x3f000000,0x3f000000);
      uVar24 = uVar24 - 1;
      *(undefined4 *)puVar12 = uVar28;
      puVar12 = (undefined8 *)((long)puVar12 + 4);
    } while (uVar24 != 0);
    if ((int)uVar3 < 1) goto LAB_00ea5300;
    pauVar26 = *param_1;
    if (uVar3 < 8) {
      uVar22 = 0;
LAB_00ea53fc:
      lVar23 = uVar17 - uVar22;
      pfVar10 = (float *)((long)local_1b8 + uVar22 * 4);
      pcVar20 = *pauVar26 + uVar22 + uVar17;
      do {
        lVar23 = lVar23 + -1;
        *pfVar10 = (float)(int)*pcVar20;
        pfVar10 = pfVar10 + 1;
        pcVar20 = pcVar20 + 1;
      } while (lVar23 != 0);
    }
    else if (uVar3 < 0x10) {
      uVar24 = 0;
LAB_00ea5314:
      uVar22 = uVar17 & 0xfffffff8;
      lVar23 = uVar24 - uVar22;
      puVar12 = (undefined8 *)(*pauVar26 + uVar24 + uVar17);
      puVar15 = (undefined8 *)((long)local_1b8 + uVar24 * 4);
      do {
        uVar29 = *puVar12;
        lVar23 = lVar23 + 8;
        auVar35._0_4_ = (int)(short)(char)((ulong)uVar29 >> 0x20);
        auVar35._4_4_ = (int)(short)(char)((ulong)uVar29 >> 0x28);
        auVar35._8_4_ = (int)(short)(char)((ulong)uVar29 >> 0x30);
        auVar35._12_4_ = (int)(short)(char)((ulong)uVar29 >> 0x38);
        auVar30._0_4_ = (int)(short)(char)uVar29;
        auVar30._4_4_ = (int)(short)(char)((ulong)uVar29 >> 8);
        auVar30._8_4_ = (int)(short)(char)((ulong)uVar29 >> 0x10);
        auVar30._12_4_ = (int)(short)(char)((ulong)uVar29 >> 0x18);
        auVar38 = NEON_scvtf(auVar35,4);
        auVar33 = NEON_scvtf(auVar30,4);
        puVar15[1] = auVar33._8_8_;
        *puVar15 = auVar33._0_8_;
        puVar15[3] = auVar38._8_8_;
        puVar15[2] = auVar38._0_8_;
        puVar12 = puVar12 + 1;
        puVar15 = puVar15 + 4;
      } while (lVar23 != 0);
      if (uVar22 != uVar17) goto LAB_00ea53fc;
    }
    else {
      uVar22 = uVar17 & 0xfffffff0;
      puVar12 = local_1b8;
      pauVar9 = (undefined (*) [16])(*pauVar26 + uVar17);
      uVar24 = uVar22;
      do {
        auVar33 = *pauVar9;
        uVar24 = uVar24 - 0x10;
        auVar38 = NEON_ext(auVar33,auVar33,8,1);
        auVar41._0_4_ = (int)(short)auVar33[4];
        auVar41._4_4_ = (int)(short)auVar33[5];
        auVar41._8_4_ = (int)(short)auVar33[6];
        auVar41._12_4_ = (int)(short)auVar33[7];
        auVar31._0_4_ = (int)(short)auVar33[0];
        auVar31._4_4_ = (int)(short)auVar33[1];
        auVar31._8_4_ = (int)(short)auVar33[2];
        auVar31._12_4_ = (int)(short)auVar33[3];
        auVar43 = NEON_scvtf(auVar41,4);
        auVar45._0_4_ = (int)(short)auVar38[4];
        auVar45._4_4_ = (int)(short)auVar38[5];
        auVar45._8_4_ = (int)(short)auVar38[6];
        auVar45._12_4_ = (int)(short)auVar38[7];
        auVar36._0_4_ = (int)(short)auVar38[0];
        auVar36._4_4_ = (int)(short)auVar38[1];
        auVar36._8_4_ = (int)(short)auVar38[2];
        auVar36._12_4_ = (int)(short)auVar38[3];
        auVar33 = NEON_scvtf(auVar31,4);
        auVar47 = NEON_scvtf(auVar45,4);
        auVar38 = NEON_scvtf(auVar36,4);
        puVar12[1] = auVar33._8_8_;
        *puVar12 = auVar33._0_8_;
        puVar12[3] = auVar43._8_8_;
        puVar12[2] = auVar43._0_8_;
        puVar12[5] = auVar38._8_8_;
        puVar12[4] = auVar38._0_8_;
        puVar12[7] = auVar47._8_8_;
        puVar12[6] = auVar47._0_8_;
        puVar12 = puVar12 + 8;
        pauVar9 = pauVar9 + 1;
      } while (uVar24 != 0);
      if (uVar22 != uVar17) {
        uVar24 = uVar22;
        if ((uVar3 >> 3 & 1) == 0) goto LAB_00ea53fc;
        goto LAB_00ea5314;
      }
    }
    uVar24 = uVar17;
    if (bVar6) goto LAB_00ea542c;
  }
  else {
    bVar6 = false;
    pauVar25 = param_1[2];
    if (0 < (int)uVar3) goto LAB_00ea51d8;
LAB_00ea5300:
    uVar24 = uVar21;
    if (!bVar6) goto LAB_00ea591c;
LAB_00ea542c:
    uVar22 = 0;
    pauVar26 = pauVar19;
    do {
      uVar28 = *(undefined4 *)((long)local_1b8 + uVar22 * 4);
      pauVar9 = pauVar26;
      puVar14 = param_3;
      uVar16 = uVar18;
      do {
        puVar7 = *pauVar9;
        uVar16 = uVar16 - 1;
        pauVar9 = (undefined (*) [16])(*pauVar9 + iVar5);
        uVar28 = NEON_fmadd((float)(int)(char)puVar7[uVar24],*puVar14,uVar28);
        puVar14 = puVar14 + 1;
      } while (uVar16 != 0);
      *(undefined4 *)((long)local_1b8 + uVar22 * 4) = uVar28;
      uVar22 = uVar22 + 1;
      pauVar26 = (undefined (*) [16])(*pauVar26 + 1);
    } while (uVar22 != uVar17);
    bVar6 = true;
  }
  if ((int)uVar3 < 1) {
LAB_00ea5598:
    if (!bVar6) goto LAB_00ea591c;
    lVar23 = uVar21 << 1;
LAB_00ea578c:
    pcVar20 = *pauVar19 + lVar23;
    uVar21 = 0;
    do {
      uVar28 = *(undefined4 *)((long)local_238 + uVar21 * 4);
      pcVar11 = pcVar20;
      puVar14 = param_3;
      uVar24 = uVar18;
      do {
        cVar2 = *pcVar11;
        uVar24 = uVar24 - 1;
        pcVar11 = pcVar11 + iVar5;
        uVar28 = NEON_fmadd((float)(int)cVar2,*puVar14,uVar28);
        puVar14 = puVar14 + 1;
      } while (uVar24 != 0);
      *(undefined4 *)((long)local_238 + uVar21 * 4) = uVar28;
      uVar21 = uVar21 + 1;
      pcVar20 = pcVar20 + 1;
    } while (uVar21 != uVar17);
  }
  else {
    uVar22 = 0;
    pcVar20 = *pauVar25 + uVar24;
    do {
      uVar28 = *(undefined4 *)((long)local_1b8 + uVar22 * 4);
      pcVar11 = pcVar20;
      puVar14 = param_2;
      uVar24 = uVar17;
      do {
        cVar2 = *pcVar11;
        uVar24 = uVar24 - 1;
        pcVar11 = pcVar11 + iVar5;
        uVar28 = NEON_fmadd((float)(int)cVar2,*puVar14,uVar28);
        puVar14 = puVar14 + 1;
      } while (uVar24 != 0);
      *(undefined4 *)((long)local_1b8 + uVar22 * 4) = uVar28;
      uVar22 = uVar22 + 1;
      pcVar20 = pcVar20 + 1;
    } while (uVar22 != uVar17);
    if ((int)uVar3 < 1) goto LAB_00ea5598;
    uVar24 = uVar17;
    puVar12 = local_1b8;
    do {
      fVar48 = *(float *)puVar12 * 0.0078125 * 0.5;
      uVar28 = 0x3f800000;
      if ((fVar48 < 8.0) && (uVar28 = 0xbf800000, -8.0 < fVar48)) {
        fVar49 = -fVar48;
        if (0.0 <= fVar48) {
          fVar49 = fVar48;
        }
        fVar50 = (float)NEON_fmadd(fVar49,0x41c80000,0x3f000000);
        fVar51 = *(float *)(&DAT_005696b0 + (long)(int)fVar50 * 4);
        fVar49 = (float)NEON_fmadd((float)(int)(float)(int)fVar50,0xbd23d70a,fVar49);
        fVar50 = (float)NEON_fmsub(fVar51,fVar51,0x3f800000);
        uVar28 = NEON_fmsub(fVar51,fVar49,0x3f800000);
        uVar52 = NEON_fmadd(fVar49 * fVar50,uVar28,fVar51);
        uVar28 = NEON_fnmadd(fVar49 * fVar50,uVar28,-fVar51);
        if (0.0 <= fVar48) {
          uVar28 = uVar52;
        }
      }
      uVar28 = NEON_fmadd(uVar28,0x3f000000,0x3f000000);
      uVar24 = uVar24 - 1;
      *(undefined4 *)puVar12 = uVar28;
      puVar12 = (undefined8 *)((long)puVar12 + 4);
    } while (uVar24 != 0);
    lVar23 = uVar21 * 2;
    if ((int)uVar3 < 1) {
      if (!bVar6) goto LAB_00ea591c;
      lVar23 = (long)(int)lVar23;
      goto LAB_00ea578c;
    }
    pauVar26 = *param_1;
    if (uVar3 < 8) {
      uVar24 = 0;
LAB_00ea56c4:
      lVar8 = uVar17 - uVar24;
      pfVar10 = (float *)((long)local_238 + uVar24 * 4);
      pcVar20 = *pauVar26 + uVar24 + lVar23;
      do {
        lVar8 = lVar8 + -1;
        *pfVar10 = (float)(int)*pcVar20;
        pfVar10 = pfVar10 + 1;
        pcVar20 = pcVar20 + 1;
      } while (lVar8 != 0);
    }
    else if (uVar3 < 0x10) {
      uVar21 = 0;
LAB_00ea55dc:
      uVar24 = uVar17 & 0xfffffff8;
      lVar8 = uVar21 - uVar24;
      puVar12 = (undefined8 *)(*pauVar26 + uVar21 + lVar23);
      puVar15 = (undefined8 *)((long)local_238 + uVar21 * 4);
      do {
        uVar29 = *puVar12;
        lVar8 = lVar8 + 8;
        auVar37._0_4_ = (int)(short)(char)((ulong)uVar29 >> 0x20);
        auVar37._4_4_ = (int)(short)(char)((ulong)uVar29 >> 0x28);
        auVar37._8_4_ = (int)(short)(char)((ulong)uVar29 >> 0x30);
        auVar37._12_4_ = (int)(short)(char)((ulong)uVar29 >> 0x38);
        auVar32._0_4_ = (int)(short)(char)uVar29;
        auVar32._4_4_ = (int)(short)(char)((ulong)uVar29 >> 8);
        auVar32._8_4_ = (int)(short)(char)((ulong)uVar29 >> 0x10);
        auVar32._12_4_ = (int)(short)(char)((ulong)uVar29 >> 0x18);
        auVar38 = NEON_scvtf(auVar37,4);
        auVar33 = NEON_scvtf(auVar32,4);
        puVar15[1] = auVar33._8_8_;
        *puVar15 = auVar33._0_8_;
        puVar15[3] = auVar38._8_8_;
        puVar15[2] = auVar38._0_8_;
        puVar12 = puVar12 + 1;
        puVar15 = puVar15 + 4;
      } while (lVar8 != 0);
      if (uVar24 != uVar17) goto LAB_00ea56c4;
    }
    else {
      uVar24 = uVar17 & 0xfffffff0;
      puVar12 = local_238;
      pauVar9 = (undefined (*) [16])(*pauVar26 + lVar23);
      uVar21 = uVar24;
      do {
        auVar33 = *pauVar9;
        uVar21 = uVar21 - 0x10;
        auVar38 = NEON_ext(auVar33,auVar33,8,1);
        auVar42._0_4_ = (int)(short)auVar33[4];
        auVar42._4_4_ = (int)(short)auVar33[5];
        auVar42._8_4_ = (int)(short)auVar33[6];
        auVar42._12_4_ = (int)(short)auVar33[7];
        auVar34._0_4_ = (int)(short)auVar33[0];
        auVar34._4_4_ = (int)(short)auVar33[1];
        auVar34._8_4_ = (int)(short)auVar33[2];
        auVar34._12_4_ = (int)(short)auVar33[3];
        auVar43 = NEON_scvtf(auVar42,4);
        auVar46._0_4_ = (int)(short)auVar38[4];
        auVar46._4_4_ = (int)(short)auVar38[5];
        auVar46._8_4_ = (int)(short)auVar38[6];
        auVar46._12_4_ = (int)(short)auVar38[7];
        auVar39._0_4_ = (int)(short)auVar38[0];
        auVar39._4_4_ = (int)(short)auVar38[1];
        auVar39._8_4_ = (int)(short)auVar38[2];
        auVar39._12_4_ = (int)(short)auVar38[3];
        auVar33 = NEON_scvtf(auVar34,4);
        auVar47 = NEON_scvtf(auVar46,4);
        auVar38 = NEON_scvtf(auVar39,4);
        puVar12[1] = auVar33._8_8_;
        *puVar12 = auVar33._0_8_;
        puVar12[3] = auVar43._8_8_;
        puVar12[2] = auVar43._0_8_;
        puVar12[5] = auVar38._8_8_;
        puVar12[4] = auVar38._0_8_;
        puVar12[7] = auVar47._8_8_;
        puVar12[6] = auVar47._0_8_;
        puVar12 = puVar12 + 8;
        pauVar9 = pauVar9 + 1;
      } while (uVar21 != 0);
      if (uVar24 != uVar17) {
        uVar21 = uVar24;
        if ((uVar3 >> 3 & 1) == 0) goto LAB_00ea56c4;
        goto LAB_00ea55dc;
      }
    }
    if (0 < (int)uVar3) {
      if (uVar3 < 8) {
        uVar24 = 0;
      }
      else {
        uVar24 = uVar17 & 0xfffffff8;
        pauVar26 = (undefined (*) [16])(param_2 + 4);
        pauVar9 = (undefined (*) [16])auStack_1a8;
        pfVar10 = local_b8 + 4;
        uVar21 = uVar24;
        do {
          auVar33 = pauVar26[-1];
          auVar38 = *pauVar26;
          pauVar26 = pauVar26 + 2;
          uVar21 = uVar21 - 8;
          auVar43 = pauVar9[-1];
          auVar47 = *pauVar9;
          pauVar9 = pauVar9 + 2;
          *pfVar10 = auVar33._8_4_ * auVar43._8_4_;
          pfVar10[1] = auVar33._12_4_ * auVar43._12_4_;
          pfVar10[-4] = auVar33._0_4_ * auVar43._0_4_;
          pfVar10[-3] = auVar33._4_4_ * auVar43._4_4_;
          pfVar10[4] = auVar38._8_4_ * auVar47._8_4_;
          pfVar10[5] = auVar38._12_4_ * auVar47._12_4_;
          *pfVar10 = auVar38._0_4_ * auVar47._0_4_;
          pfVar10[1] = auVar38._4_4_ * auVar47._4_4_;
          pfVar10 = pfVar10 + 8;
        } while (uVar21 != 0);
        if (uVar24 == uVar17) goto LAB_00ea5784;
      }
      lVar8 = uVar17 - uVar24;
      pfVar10 = (float *)((long)local_1b8 + uVar24 * 4);
      pfVar13 = (float *)(param_2 + uVar24);
      pfVar27 = local_b8 + uVar24;
      do {
        lVar8 = lVar8 + -1;
        *pfVar27 = *pfVar13 * *pfVar10;
        pfVar10 = pfVar10 + 1;
        pfVar13 = pfVar13 + 1;
        pfVar27 = pfVar27 + 1;
      } while (lVar8 != 0);
    }
LAB_00ea5784:
    lVar23 = (long)(int)lVar23;
    if (bVar6) goto LAB_00ea578c;
  }
  if (0 < (int)uVar3) {
    uVar21 = 0;
    pcVar20 = *pauVar25 + lVar23;
    do {
      uVar28 = *(undefined4 *)((long)local_238 + uVar21 * 4);
      pfVar10 = local_b8;
      pcVar11 = pcVar20;
      uVar18 = uVar17;
      do {
        cVar2 = *pcVar11;
        uVar18 = uVar18 - 1;
        pcVar11 = pcVar11 + iVar5;
        uVar28 = NEON_fmadd((float)(int)cVar2,*pfVar10,uVar28);
        pfVar10 = pfVar10 + 1;
      } while (uVar18 != 0);
      *(undefined4 *)((long)local_238 + uVar21 * 4) = uVar28;
      uVar21 = uVar21 + 1;
      pcVar20 = pcVar20 + 1;
    } while (uVar21 != uVar17);
    if (0 < (int)uVar3) {
      puVar12 = local_238;
      puVar15 = local_138;
      uVar21 = uVar17;
      puVar14 = param_2;
      do {
        fVar49 = *(float *)puVar12 * 0.0078125;
        fVar48 = 1.0;
        if ((fVar49 < 8.0) && (fVar48 = -1.0, -8.0 < fVar49)) {
          fVar48 = -fVar49;
          if (0.0 <= fVar49) {
            fVar48 = fVar49;
          }
          fVar50 = (float)NEON_fmadd(fVar48,0x41c80000,0x3f000000);
          fVar51 = *(float *)(&DAT_005696b0 + (long)(int)fVar50 * 4);
          fVar48 = (float)NEON_fmadd((float)(int)(float)(int)fVar50,0xbd23d70a,fVar48);
          fVar50 = (float)NEON_fmsub(fVar51,fVar51,0x3f800000);
          uVar28 = NEON_fmsub(fVar51,fVar48,0x3f800000);
          fVar53 = (float)NEON_fmadd(fVar48 * fVar50,uVar28,fVar51);
          fVar48 = (float)NEON_fnmadd(fVar48 * fVar50,uVar28,-fVar51);
          if (0.0 <= fVar49) {
            fVar48 = fVar53;
          }
        }
        uVar21 = uVar21 - 1;
        uVar28 = NEON_fmadd(*(float *)puVar15,*puVar14,(1.0 - *(float *)puVar15) * fVar48);
        *(undefined4 *)puVar12 = uVar28;
        puVar12 = (undefined8 *)((long)puVar12 + 4);
        puVar15 = (undefined8 *)((long)puVar15 + 4);
        puVar14 = puVar14 + 1;
      } while (uVar21 != 0);
      if (0 < (int)uVar3) {
        memcpy(param_2,local_238,uVar17 << 2);
      }
    }
  }
LAB_00ea591c:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


