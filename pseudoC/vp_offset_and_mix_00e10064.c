// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _vp_offset_and_mix
// Entry Point: 00e10064
// Size: 572 bytes
// Signature: undefined _vp_offset_and_mix(void)


void _vp_offset_and_mix(uint *param_1,undefined (*param_2) [16],undefined (*param_3) [16],
                       int param_4,undefined8 *param_5,float *param_6,float *param_7)

{
  uint uVar1;
  undefined4 uVar2;
  undefined auVar3 [16];
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined (*pauVar7) [16];
  float *pfVar8;
  ulong uVar9;
  ulong uVar10;
  float *pfVar11;
  undefined8 *puVar12;
  float *pfVar13;
  undefined (*pauVar14) [16];
  long lVar15;
  float *pfVar16;
  undefined (*pauVar17) [16];
  undefined (*pauVar18) [16];
  float fVar19;
  float fVar20;
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  float fVar24;
  float fVar25;
  double dVar26;
  undefined auVar27 [16];
  
  uVar1 = *param_1;
  uVar5 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    lVar4 = *(long *)(param_1 + 2);
    pauVar7 = *(undefined (**) [16])(*(long *)(param_1 + 6) + (long)param_4 * 8);
    fVar19 = *(float *)(lVar4 + (long)param_4 * 4 + 0xc);
    if (param_4 == 1) {
      fVar20 = (float)param_1[0x16];
      do {
        fVar24 = *(float *)*param_2 + *(float *)*pauVar7;
        fVar25 = *(float *)(lVar4 + 0x6c);
        if (fVar24 <= *(float *)(lVar4 + 0x6c)) {
          fVar25 = fVar24;
        }
        fVar24 = fVar19 + *(float *)*param_3;
        if (fVar24 <= fVar25) {
          fVar24 = fVar25;
        }
        *(float *)param_5 = fVar24;
        dVar26 = (double)((fVar25 - *param_7) + 17.2);
        if (fVar25 - *param_7 <= -17.2) {
          dVar26 = (double)NEON_fmadd(dVar26 * -0.0003,(double)fVar20,0x3ff0000000000000);
          fVar25 = (float)dVar26;
        }
        else {
          dVar26 = (double)NEON_fmadd(dVar26 * -0.005,(double)fVar20,0x3ff0000000000000);
          fVar25 = (float)dVar26;
          if (fVar25 < 0.0) {
            fVar25 = 0.0001;
          }
        }
        param_2 = (undefined (*) [16])(*param_2 + 4);
        pauVar7 = (undefined (*) [16])(*pauVar7 + 4);
        param_3 = (undefined (*) [16])(*param_3 + 4);
        param_5 = (undefined8 *)((long)param_5 + 4);
        param_7 = param_7 + 1;
        uVar5 = uVar5 - 1;
        *param_6 = fVar25 * *param_6;
        param_6 = param_6 + 1;
      } while (uVar5 != 0);
    }
    else {
      if (uVar1 < 4) {
        uVar9 = 0;
      }
      else {
        lVar6 = uVar5 * 4;
        pauVar14 = (undefined (*) [16])((long)param_5 + lVar6);
        uVar9 = 0;
        if ((((*param_2 + lVar6 <= param_5 || pauVar14 <= param_2) &&
             (*pauVar7 + lVar6 <= param_5 || pauVar14 <= pauVar7)) &&
            ((undefined8 *)(lVar4 + 0x70U) <= param_5 ||
             pauVar14 <= (undefined (*) [16])(lVar4 + 0x6cU))) &&
           (*param_3 + lVar6 <= param_5 || pauVar14 <= param_3)) {
          uVar9 = uVar5 & 0xfffffffc;
          uVar2 = *(undefined4 *)(lVar4 + 0x6c);
          uVar10 = uVar9;
          puVar12 = param_5;
          pauVar14 = param_3;
          pauVar17 = pauVar7;
          pauVar18 = param_2;
          do {
            auVar22 = *pauVar18;
            auVar27 = *pauVar17;
            auVar3 = *pauVar14;
            uVar10 = uVar10 - 4;
            auVar21._0_4_ = auVar22._0_4_ + auVar27._0_4_;
            auVar21._4_4_ = auVar22._4_4_ + auVar27._4_4_;
            auVar21._8_4_ = auVar22._8_4_ + auVar27._8_4_;
            auVar21._12_4_ = auVar22._12_4_ + auVar27._12_4_;
            auVar22._4_4_ = uVar2;
            auVar22._0_4_ = uVar2;
            auVar22._8_4_ = uVar2;
            auVar22._12_4_ = uVar2;
            auVar22 = NEON_fcmgt(auVar21,auVar22,4);
            auVar27._4_4_ = uVar2;
            auVar27._0_4_ = uVar2;
            auVar27._8_4_ = uVar2;
            auVar27._12_4_ = uVar2;
            auVar22 = NEON_bit(auVar21,auVar27,auVar22,1);
            auVar23._0_4_ = fVar19 + auVar3._0_4_;
            auVar23._4_4_ = fVar19 + auVar3._4_4_;
            auVar23._8_4_ = fVar19 + auVar3._8_4_;
            auVar23._12_4_ = fVar19 + auVar3._12_4_;
            auVar27 = NEON_fcmgt(auVar23,auVar22,4);
            auVar22 = NEON_bit(auVar22,auVar23,auVar27,1);
            puVar12[1] = auVar22._8_8_;
            *puVar12 = auVar22._0_8_;
            puVar12 = puVar12 + 2;
            pauVar14 = pauVar14 + 1;
            pauVar17 = pauVar17 + 1;
            pauVar18 = pauVar18 + 1;
          } while (uVar10 != 0);
          if (uVar9 == uVar5) {
            return;
          }
        }
      }
      lVar15 = uVar9 * 4;
      lVar6 = uVar5 - uVar9;
      pfVar8 = (float *)(*pauVar7 + lVar15);
      pfVar11 = (float *)((long)param_5 + lVar15);
      pfVar13 = (float *)(*param_3 + lVar15);
      pfVar16 = (float *)(*param_2 + lVar15);
      do {
        fVar20 = *(float *)(lVar4 + 0x6c);
        if (*pfVar16 + *pfVar8 <= *(float *)(lVar4 + 0x6c)) {
          fVar20 = *pfVar16 + *pfVar8;
        }
        fVar25 = fVar19 + *pfVar13;
        if (fVar19 + *pfVar13 <= fVar20) {
          fVar25 = fVar20;
        }
        lVar6 = lVar6 + -1;
        *pfVar11 = fVar25;
        pfVar8 = pfVar8 + 1;
        pfVar11 = pfVar11 + 1;
        pfVar13 = pfVar13 + 1;
        pfVar16 = pfVar16 + 1;
      } while (lVar6 != 0);
    }
  }
  return;
}


