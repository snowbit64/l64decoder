// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compute_dense
// Entry Point: 00ea4b38
// Size: 1196 bytes
// Signature: undefined compute_dense(void)


void compute_dense(undefined (**param_1) [16],undefined8 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined (*pauVar6) [16];
  char *pcVar7;
  float *pfVar8;
  ulong uVar9;
  long lVar10;
  undefined (*pauVar11) [16];
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float in_s18;
  float in_s20;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  
  uVar1 = *(uint *)((long)param_1 + 0x14);
  uVar4 = (ulong)uVar1;
  if ((int)uVar1 < 1) goto LAB_00ea4c54;
  uVar2 = *(uint *)(param_1 + 2);
  pauVar6 = *param_1;
  if ((uVar1 < 8) ||
     ((param_2 < *pauVar6 + uVar4 && (pauVar6 < (undefined (*) [16])((long)param_2 + uVar4 * 4)))))
  {
    uVar9 = 0;
LAB_00ea4b70:
    lVar10 = uVar4 - uVar9;
    pcVar7 = *pauVar6 + uVar9;
    pfVar8 = (float *)((long)param_2 + uVar9 * 4);
    do {
      lVar10 = lVar10 + -1;
      *pfVar8 = (float)(int)*pcVar7;
      pcVar7 = pcVar7 + 1;
      pfVar8 = pfVar8 + 1;
    } while (lVar10 != 0);
  }
  else if (uVar1 < 0x10) {
    uVar5 = 0;
LAB_00ea4f8c:
    uVar9 = uVar4 & 0xfffffff8;
    lVar10 = uVar5 - uVar9;
    puVar12 = (undefined8 *)(*pauVar6 + uVar5);
    puVar14 = (undefined8 *)((long)param_2 + uVar5 * 4);
    do {
      uVar16 = *puVar12;
      lVar10 = lVar10 + 8;
      auVar18._0_4_ = (int)(short)(char)((ulong)uVar16 >> 0x20);
      auVar18._4_4_ = (int)(short)(char)((ulong)uVar16 >> 0x28);
      auVar18._8_4_ = (int)(short)(char)((ulong)uVar16 >> 0x30);
      auVar18._12_4_ = (int)(short)(char)((ulong)uVar16 >> 0x38);
      auVar17._0_4_ = (int)(short)(char)uVar16;
      auVar17._4_4_ = (int)(short)(char)((ulong)uVar16 >> 8);
      auVar17._8_4_ = (int)(short)(char)((ulong)uVar16 >> 0x10);
      auVar17._12_4_ = (int)(short)(char)((ulong)uVar16 >> 0x18);
      auVar20 = NEON_scvtf(auVar18,4);
      auVar17 = NEON_scvtf(auVar17,4);
      puVar14[1] = auVar17._8_8_;
      *puVar14 = auVar17._0_8_;
      puVar14[3] = auVar20._8_8_;
      puVar14[2] = auVar20._0_8_;
      puVar12 = puVar12 + 1;
      puVar14 = puVar14 + 4;
    } while (lVar10 != 0);
    if (uVar9 != uVar4) goto LAB_00ea4b70;
  }
  else {
    uVar9 = uVar4 & 0xfffffff0;
    uVar5 = uVar9;
    puVar12 = param_2;
    pauVar11 = pauVar6;
    do {
      auVar17 = *pauVar11;
      uVar5 = uVar5 - 0x10;
      auVar18 = NEON_ext(auVar17,auVar17,8,1);
      auVar21._0_4_ = (int)(short)auVar17[4];
      auVar21._4_4_ = (int)(short)auVar17[5];
      auVar21._8_4_ = (int)(short)auVar17[6];
      auVar21._12_4_ = (int)(short)auVar17[7];
      auVar20._0_4_ = (int)(short)auVar17[0];
      auVar20._4_4_ = (int)(short)auVar17[1];
      auVar20._8_4_ = (int)(short)auVar17[2];
      auVar20._12_4_ = (int)(short)auVar17[3];
      auVar21 = NEON_scvtf(auVar21,4);
      auVar22._0_4_ = (int)(short)auVar18[4];
      auVar22._4_4_ = (int)(short)auVar18[5];
      auVar22._8_4_ = (int)(short)auVar18[6];
      auVar22._12_4_ = (int)(short)auVar18[7];
      auVar19._0_4_ = (int)(short)auVar18[0];
      auVar19._4_4_ = (int)(short)auVar18[1];
      auVar19._8_4_ = (int)(short)auVar18[2];
      auVar19._12_4_ = (int)(short)auVar18[3];
      auVar17 = NEON_scvtf(auVar20,4);
      auVar18 = NEON_scvtf(auVar22,4);
      auVar20 = NEON_scvtf(auVar19,4);
      puVar12[1] = auVar17._8_8_;
      *puVar12 = auVar17._0_8_;
      puVar12[3] = auVar21._8_8_;
      puVar12[2] = auVar21._0_8_;
      puVar12[5] = auVar20._8_8_;
      puVar12[4] = auVar20._0_8_;
      puVar12[7] = auVar18._8_8_;
      puVar12[6] = auVar18._0_8_;
      puVar12 = puVar12 + 8;
      pauVar11 = pauVar11 + 1;
    } while (uVar5 != 0);
    if (uVar9 != uVar4) {
      uVar5 = uVar9;
      if ((uVar1 >> 3 & 1) == 0) goto LAB_00ea4b70;
      goto LAB_00ea4f8c;
    }
  }
  if ((0 < (int)uVar2) && (0 < (int)uVar1)) {
    uVar9 = 0;
    pauVar6 = param_1[1];
    do {
      uVar15 = *(undefined4 *)((long)param_2 + uVar9 * 4);
      pauVar11 = pauVar6;
      puVar13 = param_3;
      uVar5 = (ulong)uVar2;
      do {
        puVar3 = *pauVar11;
        uVar5 = uVar5 - 1;
        pauVar11 = (undefined (*) [16])(*pauVar11 + uVar4);
        uVar15 = NEON_fmadd((float)(int)(char)*puVar3,*puVar13,uVar15);
        *(undefined4 *)((long)param_2 + uVar9 * 4) = uVar15;
        puVar13 = puVar13 + 1;
      } while (uVar5 != 0);
      uVar9 = uVar9 + 1;
      pauVar6 = (undefined (*) [16])(*pauVar6 + 1);
    } while (uVar9 != uVar4);
  }
  if (0 < (int)uVar1) {
    if (uVar1 < 8) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar4 & 0xfffffff8;
      pauVar6 = (undefined (*) [16])(param_2 + 2);
      uVar9 = uVar5;
      do {
        auVar17 = pauVar6[-1];
        auVar20 = *pauVar6;
        uVar9 = uVar9 - 8;
        *(float *)*pauVar6 = auVar17._8_4_ * 0.0078125;
        *(float *)(*pauVar6 + 4) = auVar17._12_4_ * 0.0078125;
        *(float *)pauVar6[-1] = auVar17._0_4_ * 0.0078125;
        *(float *)(pauVar6[-1] + 4) = auVar17._4_4_ * 0.0078125;
        *(float *)pauVar6[1] = auVar20._8_4_ * 0.0078125;
        *(float *)(pauVar6[1] + 4) = auVar20._12_4_ * 0.0078125;
        *(float *)*pauVar6 = auVar20._0_4_ * 0.0078125;
        *(float *)(*pauVar6 + 4) = auVar20._4_4_ * 0.0078125;
        pauVar6 = pauVar6 + 2;
      } while (uVar9 != 0);
      if (uVar5 == uVar4) goto LAB_00ea4c54;
    }
    lVar10 = uVar4 - uVar5;
    pfVar8 = (float *)((long)param_2 + uVar5 * 4);
    do {
      lVar10 = lVar10 + -1;
      *pfVar8 = *pfVar8 * 0.0078125;
      pfVar8 = pfVar8 + 1;
    } while (lVar10 != 0);
  }
LAB_00ea4c54:
  if (*(int *)(param_1 + 3) == 0) {
    if (0 < (int)uVar1) {
      if (uVar1 == 1) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar4 & 0xfffffffe;
        pfVar8 = (float *)((long)param_2 + 4);
        uVar9 = uVar5;
        do {
          fVar25 = *(float *)*(undefined (*) [16])(pfVar8 + -1);
          fVar24 = *pfVar8;
          fVar23 = -fVar25;
          if (0.0 <= fVar25) {
            fVar23 = fVar25;
          }
          fVar26 = -fVar24;
          if (0.0 <= fVar24) {
            fVar26 = fVar24;
          }
          fVar28 = (float)NEON_fmadd(fVar23,0x41c80000,0x3f000000);
          if ((fVar25 < 8.0) && (-8.0 < fVar25)) {
            in_s18 = *(float *)(&DAT_005696b0 + (long)(int)fVar28 * 4);
          }
          fVar29 = (float)NEON_fmadd(fVar26,0x41c80000,0x3f000000);
          if (fVar24 < 8.0 && -8.0 < fVar24) {
            in_s20 = *(float *)(&DAT_005696b0 + (long)(int)fVar29 * 4);
          }
          fVar31 = (float)NEON_fmsub(in_s18,in_s18,0x3f800000);
          fVar23 = (float)NEON_fmadd((float)(int)(float)(int)fVar28,0xbd23d70a,fVar23);
          fVar28 = (float)NEON_fmsub(in_s20,in_s20,0x3f800000);
          fVar26 = (float)NEON_fmadd((float)(int)(float)(int)fVar29,0xbd23d70a,fVar26);
          uVar15 = NEON_fmsub(in_s18,fVar23,0x3f800000);
          uVar27 = NEON_fmsub(in_s20,fVar26,0x3f800000);
          uVar30 = NEON_fmadd(fVar23 * fVar31,uVar15,in_s18);
          uVar15 = NEON_fnmadd(fVar23 * fVar31,uVar15,-in_s18);
          in_s18 = (float)NEON_fmadd(fVar26 * fVar28,uVar27,in_s20);
          fVar23 = (float)NEON_fnmadd(fVar26 * fVar28,uVar27,-in_s20);
          if (0.0 <= fVar25) {
            uVar15 = uVar30;
          }
          if (0.0 <= fVar24) {
            fVar23 = in_s18;
          }
          if (8.0 <= fVar25) {
            uVar15 = 0x3f800000;
          }
          if (8.0 <= fVar24) {
            fVar23 = 1.0;
          }
          uVar27 = 0xbf800000;
          if (-8.0 < fVar25 || 8.0 <= fVar25) {
            uVar27 = uVar15;
          }
          *(undefined4 *)*(undefined (*) [16])(pfVar8 + -1) = uVar27;
          fVar25 = -1.0;
          if (-8.0 < fVar24 || 8.0 <= fVar24) {
            fVar25 = fVar23;
          }
          uVar9 = uVar9 - 2;
          *pfVar8 = fVar25;
          pfVar8 = pfVar8 + 2;
        } while (uVar9 != 0);
        if (uVar5 == uVar4) {
          return;
        }
      }
      lVar10 = uVar4 - uVar5;
      pfVar8 = (float *)((long)param_2 + uVar5 * 4);
      do {
        fVar24 = *pfVar8;
        fVar23 = 1.0;
        if ((fVar24 < 8.0) && (fVar23 = -1.0, -8.0 < fVar24)) {
          fVar23 = -fVar24;
          if (0.0 <= fVar24) {
            fVar23 = fVar24;
          }
          fVar25 = (float)NEON_fmadd(fVar23,0x41c80000,0x3f000000);
          fVar26 = *(float *)(&DAT_005696b0 + (long)(int)fVar25 * 4);
          fVar23 = (float)NEON_fmadd((float)(int)(float)(int)fVar25,0xbd23d70a,fVar23);
          fVar25 = (float)NEON_fmsub(fVar26,fVar26,0x3f800000);
          uVar15 = NEON_fmsub(fVar26,fVar23,0x3f800000);
          fVar28 = (float)NEON_fmadd(fVar23 * fVar25,uVar15,fVar26);
          fVar23 = (float)NEON_fnmadd(fVar23 * fVar25,uVar15,-fVar26);
          if (0.0 <= fVar24) {
            fVar23 = fVar28;
          }
        }
        lVar10 = lVar10 + -1;
        *pfVar8 = fVar23;
        pfVar8 = pfVar8 + 1;
      } while (lVar10 != 0);
    }
  }
  else if (0 < (int)uVar1) {
    do {
      fVar23 = *(float *)param_2 * 0.5;
      uVar15 = 0x3f800000;
      if ((fVar23 < 8.0) && (uVar15 = 0xbf800000, -8.0 < fVar23)) {
        fVar24 = -fVar23;
        if (0.0 <= fVar23) {
          fVar24 = fVar23;
        }
        fVar25 = (float)NEON_fmadd(fVar24,0x41c80000,0x3f000000);
        fVar26 = *(float *)(&DAT_005696b0 + (long)(int)fVar25 * 4);
        fVar24 = (float)NEON_fmadd((float)(int)(float)(int)fVar25,0xbd23d70a,fVar24);
        fVar25 = (float)NEON_fmsub(fVar26,fVar26,0x3f800000);
        uVar15 = NEON_fmsub(fVar26,fVar24,0x3f800000);
        uVar27 = NEON_fmadd(fVar24 * fVar25,uVar15,fVar26);
        uVar15 = NEON_fnmadd(fVar24 * fVar25,uVar15,-fVar26);
        if (0.0 <= fVar23) {
          uVar15 = uVar27;
        }
      }
      uVar15 = NEON_fmadd(uVar15,0x3f000000,0x3f000000);
      uVar4 = uVar4 - 1;
      *(undefined4 *)param_2 = uVar15;
      param_2 = (undefined8 *)((long)param_2 + 4);
    } while (uVar4 != 0);
  }
  return;
}


