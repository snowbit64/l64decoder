// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeDistanceField
// Entry Point: 00a96f70
// Size: 588 bytes
// Signature: undefined __cdecl computeDistanceField(uchar * param_1, uint param_2, uint param_3, float * param_4, uint param_5)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImageUtil::computeDistanceField(unsigned char const*, unsigned int, unsigned int, float*,
   unsigned int) */

void ImageUtil::computeDistanceField
               (uchar *param_1,uint param_2,uint param_3,float *param_4,uint param_5)

{
  float *pfVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined (*pauVar9) [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  int iVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  
  uVar3 = param_5 * 2 + param_2;
  uVar4 = param_5 * 2 + param_3;
  uVar22 = (ulong)param_2;
  memset(param_4,0,(ulong)(uVar3 * uVar4) << 2);
  auVar13 = _DAT_004c4f40;
  auVar12 = _DAT_004c4d70;
  auVar11 = _DAT_004c4a50;
  auVar10 = _DAT_004c37b0;
  if (param_3 != 0) {
    uVar7 = param_5 + param_5 * uVar3;
    uVar21 = uVar22 & 0xfffffff8;
    uVar17 = 0;
    uVar18 = 0;
    uVar20 = uVar22 & 0xfffffff0;
    uVar5 = uVar7;
    do {
      if (param_2 != 0) {
        if (param_2 < 8) {
LAB_00a9703c:
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          uVar6 = uVar7 + uVar3 * uVar18;
          uVar8 = uVar18 * param_2;
          uVar19 = (uint)(uVar22 - 1);
          if (((CARRY4(uVar6,uVar19) == false) && (uVar22 - 1 >> 0x20 == 0)) &&
             (CARRY4(uVar8,uVar19) == false)) {
            if ((param_4 + uVar6 < param_1 + uVar8 + uVar22) &&
               (param_1 + uVar8 < param_4 + uVar22 + uVar6)) goto LAB_00a9703c;
            uVar15 = uVar20;
            uVar6 = uVar5;
            uVar8 = uVar17;
            if (param_2 < 0x10) {
              uVar15 = 0;
            }
            else {
              do {
                pauVar9 = (undefined (*) [16])(param_1 + uVar8);
                pfVar1 = param_4 + uVar6;
                uVar15 = uVar15 - 0x10;
                auVar24 = a64_TBL(ZEXT816(0),*pauVar9,ZEXT816(0),auVar12);
                auVar26 = a64_TBL(ZEXT816(0),*pauVar9,ZEXT816(0),auVar10);
                auVar28 = a64_TBL(ZEXT816(0),*pauVar9,ZEXT816(0),auVar11);
                auVar29 = a64_TBL(ZEXT816(0),*pauVar9,ZEXT816(0),auVar13);
                auVar24 = NEON_ucvtf(auVar24,4);
                auVar25 = NEON_ucvtf(auVar26,4);
                auVar28 = NEON_ucvtf(auVar28,4);
                auVar29 = NEON_ucvtf(auVar29,4);
                auVar26._0_8_ = CONCAT44(auVar24._4_4_ / 255.0,auVar24._0_4_ / 255.0);
                auVar26._8_4_ = auVar24._8_4_ / 255.0;
                auVar26._12_4_ = auVar24._12_4_ / 255.0;
                auVar24._0_8_ = CONCAT44(auVar25._4_4_ / 255.0,auVar25._0_4_ / 255.0);
                auVar24._8_4_ = auVar25._8_4_ / 255.0;
                auVar24._12_4_ = auVar25._12_4_ / 255.0;
                auVar25._0_8_ = CONCAT44(auVar28._4_4_ / 255.0,auVar28._0_4_ / 255.0);
                auVar25._8_4_ = auVar28._8_4_ / 255.0;
                auVar25._12_4_ = auVar28._12_4_ / 255.0;
                *(long *)(pfVar1 + 10) = auVar24._8_8_;
                *(undefined8 *)(pfVar1 + 8) = auVar24._0_8_;
                *(long *)(pfVar1 + 0xe) = auVar25._8_8_;
                *(undefined8 *)(pfVar1 + 0xc) = auVar25._0_8_;
                pfVar1[4] = auVar29._8_4_ / 255.0;
                pfVar1[5] = auVar29._12_4_ / 255.0;
                *pfVar1 = auVar29._0_4_ / 255.0;
                pfVar1[1] = auVar29._4_4_ / 255.0;
                *(long *)(pfVar1 + 6) = auVar26._8_8_;
                *(undefined8 *)(pfVar1 + 4) = auVar26._0_8_;
                uVar6 = uVar6 + 0x10;
                uVar8 = uVar8 + 0x10;
              } while (uVar15 != 0);
              if (uVar20 == uVar22) goto LAB_00a9701c;
              uVar15 = uVar20;
              if ((param_2 >> 3 & 1) == 0) goto LAB_00a97040;
            }
            lVar16 = uVar15 - uVar21;
            do {
              iVar14 = (int)uVar15;
              lVar16 = lVar16 + 8;
              auVar29._0_8_ = *(ulong *)(param_1 + (uVar17 + iVar14));
              auVar29._8_8_ = 0;
              uVar15 = (ulong)(iVar14 + 8);
              puVar2 = (undefined8 *)(param_4 + (uVar5 + iVar14));
              auVar24 = a64_TBL(ZEXT816(0),auVar29,ZEXT816(0),auVar12);
              auVar26 = a64_TBL(ZEXT816(0),auVar29,ZEXT816(0),auVar13);
              auVar24 = NEON_ucvtf(auVar24,4);
              auVar26 = NEON_ucvtf(auVar26,4);
              auVar28._0_8_ = CONCAT44(auVar24._4_4_ / 255.0,auVar24._0_4_ / 255.0);
              auVar28._8_4_ = auVar24._8_4_ / 255.0;
              auVar28._12_4_ = auVar24._12_4_ / 255.0;
              auVar27._0_8_ = CONCAT44(auVar26._4_4_ / 255.0,auVar26._0_4_ / 255.0);
              auVar27._8_4_ = auVar26._8_4_ / 255.0;
              auVar27._12_4_ = auVar26._12_4_ / 255.0;
              puVar2[1] = auVar27._8_8_;
              *puVar2 = auVar27._0_8_;
              puVar2[3] = auVar28._8_8_;
              puVar2[2] = auVar28._0_8_;
            } while (lVar16 != 0);
            uVar15 = uVar21;
            if (uVar21 == uVar22) goto LAB_00a9701c;
          }
        }
LAB_00a97040:
        lVar16 = uVar22 - uVar15;
        do {
          iVar14 = (int)uVar15;
          lVar16 = lVar16 + -1;
          uVar15 = (ulong)(iVar14 + 1);
          fVar23 = (float)NEON_ucvtf((uint)param_1[uVar17 + iVar14]);
          param_4[uVar5 + iVar14] = fVar23 / 255.0;
        } while (lVar16 != 0);
      }
LAB_00a9701c:
      uVar18 = uVar18 + 1;
      uVar17 = uVar17 + param_2;
      uVar5 = uVar5 + uVar3;
    } while (uVar18 != param_3);
  }
  computeDistanceField(uVar3,uVar4,param_4);
  return;
}


