// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixels<PixelFormatConverter::R16FtoRGBA32>
// Entry Point: 00a9de90
// Size: 556 bytes
// Signature: void __cdecl convertPixels<PixelFormatConverter::R16FtoRGBA32>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void PixelFormatConverter::convertPixels<PixelFormatConverter::R16FtoRGBA32>(void const*,
   unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixels<PixelFormatConverter::R16FtoRGBA32>
               (void *param_1,uint param_2,void *param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  undefined auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined auVar8 [16];
  uint3 uVar9;
  uint3 uVar10;
  uint3 uVar11;
  uint3 uVar12;
  uint3 uVar13;
  uint3 uVar14;
  uint3 uVar15;
  uint3 uVar16;
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined (*pauVar20) [16];
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong *puVar26;
  undefined (*pauVar27) [16];
  undefined auVar28 [16];
  float fVar29;
  ulong uVar30;
  undefined auVar31 [12];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  float fVar38;
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar43 [16];
  ulong uVar44;
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar32 [16];
  undefined auVar39 [12];
  undefined auVar42 [16];
  
  auVar19 = _DAT_004c4f40;
  auVar18 = _DAT_004c4d70;
  auVar17 = _DAT_004c4870;
  if (param_2 == param_4) {
    uVar1 = param_6;
    param_6 = 1;
  }
  else {
    uVar1 = 1;
  }
  if (param_6 != 0) {
    uVar1 = uVar1 * param_5;
    uVar24 = (ulong)uVar1;
    lVar23 = 0;
    uVar25 = uVar24 & 0xfffffff8;
    pauVar20 = (undefined (*) [16])param_1;
    puVar21 = (ulong *)param_3;
    do {
      if (uVar1 != 0) {
        if ((uVar1 < 8) ||
           ((uVar22 = uVar25, puVar26 = puVar21, pauVar27 = pauVar20,
            puVar21 < (ulong *)((long)param_1 + uVar24 * 2 + lVar23 * (ulong)param_2) &&
            (pauVar20 < (undefined (*) [16])((long)param_3 + uVar24 * 4 + lVar23 * (ulong)param_4)))
           )) {
          uVar22 = 0;
        }
        else {
          do {
            auVar33 = *pauVar27;
            uVar22 = uVar22 - 8;
            auVar34._0_4_ = (uint)auVar33._0_2_ << 0xd;
            auVar34._4_4_ = (uint)auVar33._2_2_ << 0xd;
            auVar34._8_4_ = (uint)auVar33._4_2_ << 0xd;
            auVar34._12_4_ = (uint)auVar33._6_2_ << 0xd;
            auVar40._0_4_ = (uint)auVar33._8_2_ << 0xd;
            auVar40._4_4_ = (uint)auVar33._10_2_ << 0xd;
            auVar40._8_4_ = (uint)auVar33._12_2_ << 0xd;
            auVar40._12_4_ = (uint)auVar33._14_2_ << 0xd;
            auVar45._0_8_ =
                 CONCAT17((char)((uint)auVar34._4_4_ >> 0x18),
                          CONCAT16((char)((uint)auVar34._4_4_ >> 0x10),
                                   (uint6)((((ushort)((uint)auVar34._0_4_ >> 0x10) & 0xff80) & 0xfff
                                           ) << 0x10))) & 0xf80ffffffffffff;
            auVar45._8_2_ = 0;
            auVar45[10] = (byte)(auVar34._8_4_ >> 0x10) & 0x80;
            auVar45[11] = (byte)(auVar34._8_4_ >> 0x18) & 0xf;
            auVar45._12_2_ = 0;
            auVar45[14] = (byte)(auVar34._12_4_ >> 0x10) & 0x80;
            auVar45[15] = (byte)(auVar34._12_4_ >> 0x18) & 0xf;
            auVar47._0_8_ =
                 CONCAT17((char)((uint)auVar40._4_4_ >> 0x18),
                          CONCAT16((char)((uint)auVar40._4_4_ >> 0x10),
                                   (uint6)((((ushort)((uint)auVar40._0_4_ >> 0x10) & 0xff80) & 0xfff
                                           ) << 0x10))) & 0xf80ffffffffffff;
            auVar47._8_2_ = 0;
            auVar47[10] = (byte)(auVar40._8_4_ >> 0x10) & 0x80;
            auVar47[11] = (byte)(auVar40._8_4_ >> 0x18) & 0xf;
            auVar47._12_2_ = 0;
            auVar47[14] = (byte)(auVar40._12_4_ >> 0x10) & 0x80;
            auVar47[15] = (byte)(auVar40._12_4_ >> 0x18) & 0xf;
            uVar13 = (uint3)((uint)auVar34._0_4_ >> 8);
            uVar14 = (uint3)((uint)auVar34._4_4_ >> 8);
            uVar15 = (uint3)(auVar34._8_4_ >> 8);
            uVar16 = (uint3)(auVar34._12_4_ >> 8);
            uVar9 = (uint3)((uint)auVar40._0_4_ >> 8);
            uVar10 = (uint3)((uint)auVar40._4_4_ >> 8);
            uVar11 = (uint3)(auVar40._8_4_ >> 8);
            uVar12 = (uint3)(auVar40._12_4_ >> 8);
            auVar28[10] = 0x80;
            auVar28._0_10_ = (unkuint10)0xf8000000f800000;
            auVar28[11] = 0xf;
            auVar28._12_2_ = 0;
            auVar28[14] = 0x80;
            auVar28[15] = 0xf;
            auVar49 = NEON_cmeq(auVar45,auVar28,4);
            auVar46[10] = 0x80;
            auVar46._0_10_ = (unkuint10)0xf8000000f800000;
            auVar46[11] = 0xf;
            auVar46._12_2_ = 0;
            auVar46[14] = 0x80;
            auVar46[15] = 0xf;
            auVar51 = NEON_cmeq(auVar47,auVar46,4);
            auVar46 = NEON_cmeq(auVar45,0,2);
            auVar48 = NEON_cmeq(auVar47,0,2);
            auVar53[10] = 0x80;
            auVar53._0_10_ = (unkuint10)0xf8000000f800000;
            auVar53[11] = 0xf;
            auVar53._12_2_ = 0;
            auVar53[14] = 0x80;
            auVar53[15] = 0xf;
            auVar53 = NEON_cmtst(auVar34,auVar53,4);
            auVar3[10] = 0x80;
            auVar3._0_10_ = (unkuint10)0xf8000000f800000;
            auVar3[11] = 0xf;
            auVar3._12_2_ = 0;
            auVar3[14] = 0x80;
            auVar3[15] = 0xf;
            auVar28 = NEON_cmtst(auVar40,auVar3,4);
            fVar5 = (float)((uint)(uVar14 & 0xfffe0) * 0x100 + 0x38800000) + -6.103516e-05;
            fVar6 = (float)((uint)(uVar15 & 0xfffe0) * 0x100 + 0x38800000) + -6.103516e-05;
            fVar7 = (float)((uint)(uVar16 & 0xfffe0) * 0x100 + 0x38800000) + -6.103516e-05;
            fVar29 = (float)((uint)(uVar10 & 0xfffe0) * 0x100 + 0x38800000) + -6.103516e-05;
            fVar38 = (float)((uint)(uVar11 & 0xfffe0) * 0x100 + 0x38800000) + -6.103516e-05;
            fVar4 = (float)((uint)(uVar12 & 0xfffe0) * 0x100 + 0x38800000) + -6.103516e-05;
            uVar30 = CONCAT44(auVar34._4_4_,auVar34._0_4_);
            auVar35._0_8_ = uVar30 | 0x7000000070000000;
            auVar35._8_4_ = auVar34._8_4_ | 0x70000000;
            auVar35._12_4_ = auVar34._12_4_ | 0x70000000;
            uVar30 = CONCAT44(auVar40._4_4_,auVar40._0_4_);
            auVar41._0_8_ = uVar30 | 0x7000000070000000;
            auVar41._8_4_ = auVar40._8_4_ | 0x70000000;
            auVar41._12_4_ = auVar40._12_4_ | 0x70000000;
            auVar52[0] = auVar28[0] & ~auVar51[0];
            auVar52[1] = auVar28[1] & ~auVar51[1];
            auVar52[2] = auVar28[2] & ~auVar51[2];
            auVar52[3] = auVar28[3] & ~auVar51[3];
            auVar52[4] = auVar28[4] & ~auVar51[4];
            auVar52[5] = auVar28[5] & ~auVar51[5];
            auVar52[6] = auVar28[6] & ~auVar51[6];
            auVar52[7] = auVar28[7] & ~auVar51[7];
            auVar52[8] = auVar28[8] & ~auVar51[8];
            auVar52[9] = auVar28[9] & ~auVar51[9];
            auVar52[10] = auVar28[10] & ~auVar51[10];
            auVar52[11] = auVar28[11] & ~auVar51[11];
            auVar52[12] = auVar28[12] & ~auVar51[12];
            auVar52[13] = auVar28[13] & ~auVar51[13];
            auVar52[14] = auVar28[14] & ~auVar51[14];
            auVar52[15] = auVar28[15] & ~auVar51[15];
            auVar50[0] = auVar53[0] & ~auVar49[0];
            auVar50[1] = auVar53[1] & ~auVar49[1];
            auVar50[2] = auVar53[2] & ~auVar49[2];
            auVar50[3] = auVar53[3] & ~auVar49[3];
            auVar50[4] = auVar53[4] & ~auVar49[4];
            auVar50[5] = auVar53[5] & ~auVar49[5];
            auVar50[6] = auVar53[6] & ~auVar49[6];
            auVar50[7] = auVar53[7] & ~auVar49[7];
            auVar50[8] = auVar53[8] & ~auVar49[8];
            auVar50[9] = auVar53[9] & ~auVar49[9];
            auVar50[10] = auVar53[10] & ~auVar49[10];
            auVar50[11] = auVar53[11] & ~auVar49[11];
            auVar50[12] = auVar53[12] & ~auVar49[12];
            auVar50[13] = auVar53[13] & ~auVar49[13];
            auVar50[14] = auVar53[14] & ~auVar49[14];
            auVar50[15] = auVar53[15] & ~auVar49[15];
            auVar51[4] = SUB41(fVar5,0);
            auVar51._0_4_ = (float)((uint)(uVar13 & 0xfffe0) * 0x100 + 0x38800000) + -6.103516e-05;
            auVar51[5] = (char)((uint)fVar5 >> 8);
            auVar51[6] = (char)((uint)fVar5 >> 0x10);
            auVar51[7] = (char)((uint)fVar5 >> 0x18);
            auVar51[8] = SUB41(fVar6,0);
            auVar51[9] = (char)((uint)fVar6 >> 8);
            auVar51[10] = (char)((uint)fVar6 >> 0x10);
            auVar51[11] = (char)((uint)fVar6 >> 0x18);
            auVar51[12] = SUB41(fVar7,0);
            auVar51[13] = (char)((uint)fVar7 >> 8);
            auVar51[14] = (char)((uint)fVar7 >> 0x10);
            auVar51[15] = (char)((uint)fVar7 >> 0x18);
            auVar28 = NEON_bit(auVar35,auVar51,auVar46,1);
            auVar49[4] = SUB41(fVar29,0);
            auVar49._0_4_ = (float)((uint)(uVar9 & 0xfffe0) * 0x100 + 0x38800000) + -6.103516e-05;
            auVar49[5] = (char)((uint)fVar29 >> 8);
            auVar49[6] = (char)((uint)fVar29 >> 0x10);
            auVar49[7] = (char)((uint)fVar29 >> 0x18);
            auVar49[8] = SUB41(fVar38,0);
            auVar49[9] = (char)((uint)fVar38 >> 8);
            auVar49[10] = (char)((uint)fVar38 >> 0x10);
            auVar49[11] = (char)((uint)fVar38 >> 0x18);
            auVar49[12] = SUB41(fVar4,0);
            auVar49[13] = (char)((uint)fVar4 >> 8);
            auVar49[14] = (char)((uint)fVar4 >> 0x10);
            auVar49[15] = (char)((uint)fVar4 >> 0x18);
            auVar46 = NEON_bit(auVar41,auVar49,auVar48,1);
            auVar8._4_4_ = (uint)(uVar14 & 0xfffe0) * 0x100 + 0x38000000;
            auVar8._0_4_ = (uint)(uVar13 & 0xfffe0) * 0x100 + 0x38000000;
            auVar8._8_4_ = (uint)(uVar15 & 0xfffe0) * 0x100 + 0x38000000;
            auVar8._12_4_ = (uint)(uVar16 & 0xfffe0) * 0x100 + 0x38000000;
            auVar28 = NEON_bit(auVar28,auVar8,auVar50,1);
            auVar48._4_4_ = (uint)(uVar10 & 0xfffe0) * 0x100 + 0x38000000;
            auVar48._0_4_ = (uint)(uVar9 & 0xfffe0) * 0x100 + 0x38000000;
            auVar48._8_4_ = (uint)(uVar11 & 0xfffe0) * 0x100 + 0x38000000;
            auVar48._12_4_ = (uint)(uVar12 & 0xfffe0) * 0x100 + 0x38000000;
            auVar46 = NEON_bit(auVar46,auVar48,auVar52,1);
            uVar44 = CONCAT17((short)auVar33._10_2_ >> 0xf,
                              (uint7)(((byte)((short)auVar33._8_2_ >> 0xf) & 0x80) << 0x18)) &
                     0x80ffffffffffffff;
            uVar30 = CONCAT17((short)auVar33._2_2_ >> 0xf,
                              (uint7)(((byte)((short)auVar33._0_2_ >> 0xf) & 0x80) << 0x18)) &
                     0x80ffffffffffffff;
            fVar38 = (float)CONCAT13(auVar46[3] | (byte)(uVar44 >> 0x18),auVar46._0_3_);
            auVar39._0_8_ =
                 CONCAT17(auVar46[7] | (byte)(uVar44 >> 0x38),
                          CONCAT16(auVar46[6],CONCAT15(auVar46[5],CONCAT14(auVar46[4],fVar38))));
            auVar39[8] = auVar46[8];
            auVar39[9] = auVar46[9];
            auVar39[10] = auVar46[10];
            auVar39[11] = auVar46[11] | (byte)((short)auVar33._12_2_ >> 0xf) & 0x80;
            auVar42[12] = auVar46[12];
            auVar42._0_12_ = auVar39;
            auVar42[13] = auVar46[13];
            auVar42[14] = auVar46[14];
            auVar42[15] = auVar46[15] | (byte)((short)auVar33._14_2_ >> 0xf) & 0x80;
            fVar29 = (float)CONCAT13(auVar28[3] | (byte)(uVar30 >> 0x18),auVar28._0_3_);
            auVar31._0_8_ =
                 CONCAT17(auVar28[7] | (byte)(uVar30 >> 0x38),
                          CONCAT16(auVar28[6],CONCAT15(auVar28[5],CONCAT14(auVar28[4],fVar29))));
            auVar31[8] = auVar28[8];
            auVar31[9] = auVar28[9];
            auVar31[10] = auVar28[10];
            auVar31[11] = auVar28[11] | (byte)((short)auVar33._4_2_ >> 0xf) & 0x80;
            auVar32[12] = auVar28[12];
            auVar32._0_12_ = auVar31;
            auVar32[13] = auVar28[13];
            auVar32[14] = auVar28[14];
            auVar32[15] = auVar28[15] | (byte)((short)auVar33._6_2_ >> 0xf) & 0x80;
            auVar43._0_4_ = (int)(fVar38 * 255.0);
            auVar43._4_4_ = (int)((float)((ulong)auVar39._0_8_ >> 0x20) * 255.0);
            auVar43._8_4_ = (int)(auVar39._8_4_ * 255.0);
            auVar43._12_4_ = (int)(auVar42._12_4_ * 255.0);
            auVar36._0_4_ = (int)(fVar29 * 255.0);
            auVar36._4_4_ = (int)((float)((ulong)auVar31._0_8_ >> 0x20) * 255.0);
            auVar36._8_4_ = (int)(auVar31._8_4_ * 255.0);
            auVar36._12_4_ = (int)(auVar32._12_4_ * 255.0);
            auVar28 = a64_TBL(ZEXT816(0),auVar36,auVar43,auVar17);
            auVar46 = a64_TBL(ZEXT816(0),auVar28,ZEXT816(0),auVar18);
            auVar28 = a64_TBL(ZEXT816(0),auVar28,ZEXT816(0),auVar19);
            auVar33._0_8_ = auVar46._0_8_ | 0xff000000ff000000;
            auVar33._8_4_ = auVar46._8_4_ | 0xff000000;
            auVar33._12_4_ = auVar46._12_4_ | 0xff000000;
            auVar37._0_8_ = auVar28._0_8_ | 0xff000000ff000000;
            auVar37._8_4_ = auVar28._8_4_ | 0xff000000;
            auVar37._12_4_ = auVar28._12_4_ | 0xff000000;
            puVar26[1] = auVar37._8_8_;
            *puVar26 = auVar37._0_8_;
            puVar26[3] = auVar33._8_8_;
            puVar26[2] = auVar33._0_8_;
            puVar26 = puVar26 + 4;
            pauVar27 = pauVar27 + 1;
          } while (uVar22 != 0);
          uVar22 = uVar25;
          if (uVar25 == uVar24) goto LAB_00a9df24;
        }
        do {
          uVar2 = (uint)*(ushort *)(*pauVar20 + uVar22 * 2) << 0xd;
          if ((uVar2 & 0xf800000) == 0xf800000) {
            fVar29 = (float)(uVar2 | 0x70000000);
          }
          else if ((uVar2 & 0xf800000) == 0) {
            fVar29 = (float)((uVar2 & 0xfffe000) + 0x38800000) + -6.103516e-05;
          }
          else {
            fVar29 = (float)((uVar2 & 0xfffe000) + 0x38000000);
          }
          *(uint *)((long)puVar21 + uVar22 * 4) =
               (int)((float)((uint)fVar29 |
                            (int)(short)*(ushort *)(*pauVar20 + uVar22 * 2) & 0x80000000U) * 255.0)
               | 0xff000000;
          uVar22 = uVar22 + 1;
        } while (uVar24 != uVar22);
      }
LAB_00a9df24:
      pauVar20 = (undefined (*) [16])(*pauVar20 + param_2);
      puVar21 = (ulong *)((long)puVar21 + (ulong)param_4);
      lVar23 = lVar23 + 1;
    } while ((uint)lVar23 != param_6);
  }
  return;
}


