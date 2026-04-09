// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertBuffer
// Entry Point: 00b0e61c
// Size: 872 bytes
// Signature: undefined __thiscall convertBuffer(SoftAudioBuffer * this, float * param_1, void * param_2, uint param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoftAudioBuffer::convertBuffer(float*, void const*, unsigned int) */

void __thiscall
SoftAudioBuffer::convertBuffer(SoftAudioBuffer *this,float *param_1,void *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined auVar6 [12];
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  short *psVar11;
  undefined (*pauVar12) [16];
  float *pfVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  
  auVar23 = _DAT_004c4f40;
  auVar21 = _DAT_004c4d70;
  auVar20 = _DAT_004c4a50;
  auVar6 = _DAT_004c37b0;
  if (*(uint *)(this + 8) < 6) {
    uVar7 = 1 << (ulong)(*(uint *)(this + 8) & 0x1f);
    if ((uVar7 & 3) == 0) {
      if ((uVar7 & 0xc) == 0) {
        if (param_3 != 0) {
          uVar7 = *(uint *)(this + 0x1c);
          uVar9 = (ulong)uVar7;
          uVar8 = 0;
          uVar10 = uVar9 & 0xfffffff8;
          do {
            if (uVar7 != 0) {
              if ((((uVar7 < 8) || (param_3 != 1)) ||
                  ((CARRY4((uint)uVar8,(uint)(uVar9 - 1)) != false || (uVar9 - 1 >> 0x20 != 0)))) ||
                 ((param_2 < param_1 + uVar8 + uVar9 &&
                  (param_1 + uVar8 < (float *)((long)param_2 + uVar9 * 4))))) {
                pfVar13 = (float *)param_2;
                uVar15 = 0;
              }
              else {
                pfVar13 = (float *)((long)param_2 + uVar10 * 4);
                puVar16 = (undefined8 *)((long)param_2 + 0x10);
                uVar19 = uVar8 & 0xffffffff;
                uVar15 = uVar10;
                do {
                  puVar2 = puVar16 + -1;
                  uVar3 = puVar16[-2];
                  uVar5 = puVar16[1];
                  uVar4 = *puVar16;
                  puVar1 = (undefined8 *)(param_1 + uVar19);
                  puVar16 = puVar16 + 4;
                  uVar15 = uVar15 - 8;
                  uVar19 = (ulong)((int)uVar19 + param_3 * 8);
                  puVar1[1] = *puVar2;
                  *puVar1 = uVar3;
                  puVar1[3] = uVar5;
                  puVar1[2] = uVar4;
                } while (uVar15 != 0);
                param_2 = pfVar13;
                uVar15 = uVar10;
                if (uVar10 == uVar9) goto LAB_00b0e8c4;
              }
              uVar18 = (uint)uVar8 + param_3 * (int)uVar15;
              lVar14 = uVar9 - uVar15;
              do {
                param_2 = pfVar13 + 1;
                lVar14 = lVar14 + -1;
                param_1[uVar18] = *pfVar13;
                uVar18 = uVar18 + param_3;
                pfVar13 = (float *)param_2;
              } while (lVar14 != 0);
            }
LAB_00b0e8c4:
            uVar8 = uVar8 + 1;
          } while ((uint)uVar8 != param_3);
        }
      }
      else if (param_3 != 0) {
        uVar18 = *(uint *)(this + 0x1c);
        uVar8 = (ulong)uVar18;
        uVar7 = 0;
        uVar9 = uVar8 & 0xfffffff0;
        do {
          if (uVar18 != 0) {
            if ((((uVar18 < 0x10) || (param_3 != 1)) || (CARRY4(uVar7,(uint)(uVar8 - 1)) != false))
               || (uVar8 - 1 >> 0x20 != 0)) {
              psVar11 = (short *)param_2;
              uVar10 = 0;
            }
            else {
              psVar11 = (short *)((long)param_2 + uVar9 * 2);
              pauVar12 = (undefined (*) [16])((long)param_2 + 0x10);
              uVar10 = uVar9;
              uVar17 = uVar7;
              do {
                auVar20 = pauVar12[-1];
                auVar21 = *pauVar12;
                puVar16 = (undefined8 *)(param_1 + uVar17);
                pauVar12 = pauVar12 + 2;
                uVar10 = uVar10 - 0x10;
                uVar17 = uVar17 + param_3 * 0x10;
                auVar31._0_4_ = (int)auVar20._8_2_;
                auVar31._4_4_ = (int)auVar20._10_2_;
                auVar31._8_4_ = (int)auVar20._12_2_;
                auVar31._12_4_ = (int)auVar20._14_2_;
                auVar23._0_4_ = (int)auVar20._0_2_;
                auVar23._4_4_ = (int)auVar20._2_2_;
                auVar23._8_4_ = (int)auVar20._4_2_;
                auVar23._12_4_ = (int)auVar20._6_2_;
                auVar25._0_4_ = (int)auVar21._8_2_;
                auVar25._4_4_ = (int)auVar21._10_2_;
                auVar25._8_4_ = (int)auVar21._12_2_;
                auVar25._12_4_ = (int)auVar21._14_2_;
                auVar22._0_4_ = (int)auVar21._0_2_;
                auVar22._4_4_ = (int)auVar21._2_2_;
                auVar22._8_4_ = (int)auVar21._4_2_;
                auVar22._12_4_ = (int)auVar21._6_2_;
                auVar24 = NEON_scvtf(auVar31,4);
                auVar20 = NEON_scvtf(auVar23,4);
                auVar26 = NEON_scvtf(auVar25,4);
                auVar23 = NEON_scvtf(auVar22,4);
                auVar21._0_8_ = CONCAT44(auVar20._4_4_ * 3.051758e-05,auVar20._0_4_ * 3.051758e-05);
                auVar21._8_4_ = auVar20._8_4_ * 3.051758e-05;
                auVar21._12_4_ = auVar20._12_4_ * 3.051758e-05;
                auVar20._0_8_ = CONCAT44(auVar23._4_4_ * 3.051758e-05,auVar23._0_4_ * 3.051758e-05);
                auVar20._8_4_ = auVar23._8_4_ * 3.051758e-05;
                auVar20._12_4_ = auVar23._12_4_ * 3.051758e-05;
                puVar16[1] = auVar21._8_8_;
                *puVar16 = auVar21._0_8_;
                *(float *)(puVar16 + 4) = auVar24._8_4_ * 3.051758e-05;
                *(float *)((long)puVar16 + 0x24) = auVar24._12_4_ * 3.051758e-05;
                *(float *)(puVar16 + 2) = auVar24._0_4_ * 3.051758e-05;
                *(float *)((long)puVar16 + 0x14) = auVar24._4_4_ * 3.051758e-05;
                puVar16[5] = auVar20._8_8_;
                puVar16[4] = auVar20._0_8_;
                *(float *)(puVar16 + 8) = auVar26._8_4_ * 3.051758e-05;
                *(float *)((long)puVar16 + 0x44) = auVar26._12_4_ * 3.051758e-05;
                *(float *)(puVar16 + 6) = auVar26._0_4_ * 3.051758e-05;
                *(float *)((long)puVar16 + 0x34) = auVar26._4_4_ * 3.051758e-05;
              } while (uVar10 != 0);
              param_2 = psVar11;
              uVar10 = uVar9;
              if (uVar9 == uVar8) goto LAB_00b0e66c;
            }
            uVar17 = uVar7 + param_3 * (int)uVar10;
            lVar14 = uVar8 - uVar10;
            do {
              param_2 = psVar11 + 1;
              lVar14 = lVar14 + -1;
              param_1[uVar17] = (float)(int)*psVar11 * 3.051758e-05;
              uVar17 = uVar17 + param_3;
              psVar11 = (short *)param_2;
            } while (lVar14 != 0);
          }
LAB_00b0e66c:
          uVar7 = uVar7 + 1;
        } while (uVar7 != param_3);
      }
    }
    else if (param_3 != 0) {
      uVar7 = *(uint *)(this + 0x1c);
      uVar9 = (ulong)uVar7;
      auVar22 = ZEXT816(0);
      uVar8 = 0;
      uVar10 = uVar9 & 0xfffffff0;
      do {
        if (uVar7 != 0) {
          if ((((uVar7 < 0x10) || (param_3 != 1)) ||
              (CARRY4((uint)uVar8,(uint)(uVar9 - 1)) != false)) ||
             ((uVar9 - 1 >> 0x20 != 0 ||
              ((param_2 < (undefined (*) [16])(param_1 + uVar8 + uVar9) &&
               (param_1 + uVar8 < (undefined *)param_2 + uVar9)))))) {
            pauVar12 = (undefined (*) [16])param_2;
            uVar15 = 0;
          }
          else {
            pauVar12 = (undefined (*) [16])((undefined *)param_2 + uVar10);
            uVar19 = uVar8 & 0xffffffff;
            uVar15 = uVar10;
            do {
                    /* WARNING: Load size is inaccurate */
              auVar26 = *param_2;
              pfVar13 = param_1 + uVar19;
              uVar15 = uVar15 - 0x10;
              uVar19 = (ulong)((int)uVar19 + param_3 * 0x10);
              auVar27 = a64_TBL(ZEXT816(0),auVar26,auVar22,auVar20);
              auVar24._12_4_ = 0x1010100b;
              auVar24._0_12_ = auVar6;
              auVar24 = a64_TBL(ZEXT816(0),auVar26,auVar22,auVar24);
              auVar28 = a64_TBL(ZEXT816(0),auVar26,auVar22,auVar21);
              auVar31 = a64_TBL(ZEXT816(0),auVar26,auVar22,auVar23);
              auVar26._0_4_ = auVar27._0_4_ + -0x80;
              auVar26._4_4_ = auVar27._4_4_ + -0x80;
              auVar26._8_4_ = auVar27._8_4_ + -0x80;
              auVar26._12_4_ = auVar27._12_4_ + -0x80;
              auVar30._0_4_ = auVar24._0_4_ + -0x80;
              auVar30._4_4_ = auVar24._4_4_ + -0x80;
              auVar30._8_4_ = auVar24._8_4_ + -0x80;
              auVar30._12_4_ = auVar24._12_4_ + -0x80;
              auVar29._0_4_ = auVar28._0_4_ + -0x80;
              auVar29._4_4_ = auVar28._4_4_ + -0x80;
              auVar29._8_4_ = auVar28._8_4_ + -0x80;
              auVar29._12_4_ = auVar28._12_4_ + -0x80;
              auVar28._0_4_ = auVar31._0_4_ + -0x80;
              auVar28._4_4_ = auVar31._4_4_ + -0x80;
              auVar28._8_4_ = auVar31._8_4_ + -0x80;
              auVar28._12_4_ = auVar31._12_4_ + -0x80;
              auVar24 = NEON_scvtf(auVar26,4);
              auVar26 = NEON_scvtf(auVar30,4);
              auVar30 = NEON_scvtf(auVar29,4);
              auVar28 = NEON_scvtf(auVar28,4);
              auVar27._0_8_ = CONCAT44(auVar24._4_4_ * 0.0078125,auVar24._0_4_ * 0.0078125);
              auVar27._8_4_ = auVar24._8_4_ * 0.0078125;
              auVar27._12_4_ = auVar24._12_4_ * 0.0078125;
              pfVar13[0xc] = auVar26._8_4_ * 0.0078125;
              pfVar13[0xd] = auVar26._12_4_ * 0.0078125;
              pfVar13[8] = auVar26._0_4_ * 0.0078125;
              pfVar13[9] = auVar26._4_4_ * 0.0078125;
              *(long *)(pfVar13 + 0xe) = auVar27._8_8_;
              *(undefined8 *)(pfVar13 + 0xc) = auVar27._0_8_;
              pfVar13[4] = auVar28._8_4_ * 0.0078125;
              pfVar13[5] = auVar28._12_4_ * 0.0078125;
              *pfVar13 = auVar28._0_4_ * 0.0078125;
              pfVar13[1] = auVar28._4_4_ * 0.0078125;
              pfVar13[8] = auVar30._8_4_ * 0.0078125;
              pfVar13[9] = auVar30._12_4_ * 0.0078125;
              pfVar13[4] = auVar30._0_4_ * 0.0078125;
              pfVar13[5] = auVar30._4_4_ * 0.0078125;
              param_2 = (undefined (*) [16])((long)param_2 + 0x10);
            } while (uVar15 != 0);
            param_2 = pauVar12;
            uVar15 = uVar10;
            if (uVar10 == uVar9) goto LAB_00b0e79c;
          }
          uVar18 = (uint)uVar8 + param_3 * (int)uVar15;
          lVar14 = uVar9 - uVar15;
          do {
            param_2 = *pauVar12 + 1;
            lVar14 = lVar14 + -1;
            param_1[uVar18] = (float)((byte)(*pauVar12)[0] - 0x80) * 0.0078125;
            uVar18 = uVar18 + param_3;
            pauVar12 = (undefined (*) [16])param_2;
          } while (lVar14 != 0);
        }
LAB_00b0e79c:
        uVar8 = uVar8 + 1;
      } while ((uint)uVar8 != param_3);
    }
  }
  return;
}


