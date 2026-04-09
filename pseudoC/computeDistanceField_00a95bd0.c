// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeDistanceField
// Entry Point: 00a95bd0
// Size: 840 bytes
// Signature: undefined __cdecl computeDistanceField(uint param_1, uint param_2, float * param_3)


/* ImageUtil::computeDistanceField(unsigned int, unsigned int, float*) */

void ImageUtil::computeDistanceField(uint param_1,uint param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  short *psVar6;
  short *psVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  long lVar13;
  undefined (*pauVar14) [16];
  unkbyte9 *pVar15;
  undefined8 *puVar16;
  float *pfVar17;
  float *pfVar18;
  undefined8 *puVar19;
  float *pfVar20;
  ulong uVar21;
  ulong uVar22;
  undefined auVar23 [16];
  undefined uVar24;
  undefined uVar25;
  undefined uVar26;
  undefined uVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  undefined auVar35 [16];
  undefined auVar36 [16];
  
  uVar1 = param_2 * param_1;
  uVar22 = (ulong)uVar1;
  psVar6 = (short *)operator_new__(uVar22 << 1);
  psVar7 = (short *)operator_new__(uVar22 << 1);
  uVar21 = uVar22 << 2;
  pfVar8 = (float *)operator_new__(uVar21);
  pfVar9 = (float *)operator_new__(uVar21);
  pfVar10 = (float *)operator_new__(uVar21);
  pfVar11 = (float *)operator_new__(uVar21);
  computeDistanceFieldGradients(param_3,param_1,param_2,pfVar8,pfVar9);
  antiAliasedEuclideanDistanceTransform(param_3,pfVar8,pfVar9,param_1,param_2,psVar6,psVar7,pfVar10)
  ;
  if (uVar1 != 0) {
    if (uVar1 < 8) {
      uVar12 = 0;
LAB_00a95cd4:
      lVar13 = uVar22 - uVar12;
      pfVar17 = pfVar10 + uVar12;
      do {
        fVar2 = *pfVar17;
        uVar24 = SUB41(fVar2,0);
        uVar25 = (undefined)((uint)fVar2 >> 8);
        uVar26 = (undefined)((uint)fVar2 >> 0x10);
        uVar27 = (undefined)((uint)fVar2 >> 0x18);
        if (fVar2 < 0.0) {
          uVar24 = 0;
          uVar25 = 0;
          uVar26 = 0;
          uVar27 = 0;
        }
        lVar13 = lVar13 + -1;
        *pfVar17 = (float)CONCAT13(uVar27,CONCAT12(uVar26,CONCAT11(uVar25,uVar24)));
        pfVar17 = pfVar17 + 1;
      } while (lVar13 != 0);
    }
    else {
      uVar12 = uVar22 & 0xfffffff8;
      pVar15 = (unkbyte9 *)(pfVar10 + 4);
      uVar21 = uVar12;
      do {
        auVar36 = *(undefined (*) [16])(pVar15 + -1);
        uVar4 = *(undefined8 *)((long)pVar15 + 8);
        bVar28 = (byte)((ulong)uVar4 >> 8);
        bVar29 = (byte)((ulong)uVar4 >> 0x10);
        bVar30 = (byte)((ulong)uVar4 >> 0x18);
        bVar31 = (byte)((ulong)uVar4 >> 0x20);
        bVar32 = (byte)((ulong)uVar4 >> 0x28);
        bVar33 = (byte)((ulong)uVar4 >> 0x30);
        bVar34 = (byte)((ulong)uVar4 >> 0x38);
        uVar3 = *(undefined8 *)pVar15;
        uVar21 = uVar21 - 8;
        auVar35 = NEON_fcmge(auVar36,0,4);
        auVar23[9] = bVar28;
        auVar23._0_9_ = *pVar15;
        auVar23[10] = bVar29;
        auVar23[11] = bVar30;
        auVar23[12] = bVar31;
        auVar23[13] = bVar32;
        auVar23[14] = bVar33;
        auVar23[15] = bVar34;
        auVar23 = NEON_fcmge(auVar23,0,4);
        *(byte *)pVar15 = auVar36[8] & auVar35[8];
        *(byte *)((long)pVar15 + 1) = auVar36[9] & auVar35[9];
        *(byte *)((long)pVar15 + 2) = auVar36[10] & auVar35[10];
        *(byte *)((long)pVar15 + 3) = auVar36[11] & auVar35[11];
        *(byte *)((long)pVar15 + 4) = auVar36[12] & auVar35[12];
        *(byte *)((long)pVar15 + 5) = auVar36[13] & auVar35[13];
        *(byte *)((long)pVar15 + 6) = auVar36[14] & auVar35[14];
        *(byte *)((long)pVar15 + 7) = auVar36[15] & auVar35[15];
        *(byte *)(pVar15 + -1) = auVar36[0] & auVar35[0];
        *(byte *)((long)pVar15 + -0xf) = auVar36[1] & auVar35[1];
        *(byte *)((long)pVar15 + -0xe) = auVar36[2] & auVar35[2];
        *(byte *)((long)pVar15 + -0xd) = auVar36[3] & auVar35[3];
        *(byte *)((long)pVar15 + -0xc) = auVar36[4] & auVar35[4];
        *(byte *)((long)pVar15 + -0xb) = auVar36[5] & auVar35[5];
        *(byte *)((long)pVar15 + -10) = auVar36[6] & auVar35[6];
        *(byte *)((long)pVar15 + -9) = auVar36[7] & auVar35[7];
        *(ulong *)((long)pVar15 + 8) =
             CONCAT17(bVar34 & auVar23[15],
                      CONCAT16(bVar33 & auVar23[14],
                               CONCAT15(bVar32 & auVar23[13],
                                        CONCAT14(bVar31 & auVar23[12],
                                                 CONCAT13(bVar30 & auVar23[11],
                                                          CONCAT12(bVar29 & auVar23[10],
                                                                   CONCAT11(bVar28 & auVar23[9],
                                                                            (byte)uVar4 & auVar23[8]
                                                                           )))))));
        *(ulong *)pVar15 =
             CONCAT17((byte)((ulong)uVar3 >> 0x38) & auVar23[7],
                      CONCAT16((byte)((ulong)uVar3 >> 0x30) & auVar23[6],
                               CONCAT15((byte)((ulong)uVar3 >> 0x28) & auVar23[5],
                                        CONCAT14((byte)((ulong)uVar3 >> 0x20) & auVar23[4],
                                                 CONCAT13((byte)((ulong)uVar3 >> 0x18) & auVar23[3],
                                                          CONCAT12((byte)((ulong)uVar3 >> 0x10) &
                                                                   auVar23[2],
                                                                   CONCAT11((byte)((ulong)uVar3 >> 8
                                                                                  ) & auVar23[1],
                                                                            (byte)uVar3 & auVar23[0]
                                                                           )))))));
        pVar15 = pVar15 + 2;
      } while (uVar21 != 0);
      if (uVar12 != uVar22) goto LAB_00a95cd4;
    }
    if (uVar1 != 0) {
      if (uVar1 < 8) {
        uVar12 = 0;
LAB_00a95dc4:
        lVar13 = uVar22 - uVar12;
        pfVar17 = param_3 + uVar12;
        do {
          lVar13 = lVar13 + -1;
          *pfVar17 = 1.0 - *pfVar17;
          pfVar17 = pfVar17 + 1;
        } while (lVar13 != 0);
      }
      else {
        uVar12 = uVar22 & 0xfffffff8;
        pauVar14 = (undefined (*) [16])(param_3 + 4);
        auVar23 = NEON_fmov(0x3f800000,4);
        uVar21 = uVar12;
        do {
          uVar3 = *(undefined8 *)pauVar14[-1];
          auVar36 = *pauVar14;
          uVar21 = uVar21 - 8;
          fVar2 = auVar23._4_4_ - (float)((ulong)uVar3 >> 0x20);
          fVar5 = auVar23._12_4_ - (float)((ulong)*(undefined8 *)(pauVar14[-1] + 8) >> 0x20);
          *(ulong *)(pauVar14[-1] + 8) =
               CONCAT17((char)((uint)fVar5 >> 0x18),
                        CONCAT16((char)((uint)fVar5 >> 0x10),
                                 CONCAT15((char)((uint)fVar5 >> 8),
                                          CONCAT14(SUB41(fVar5,0),
                                                   auVar23._8_4_ -
                                                   (float)*(undefined8 *)(pauVar14[-1] + 8)))));
          *(ulong *)pauVar14[-1] =
               CONCAT17((char)((uint)fVar2 >> 0x18),
                        CONCAT16((char)((uint)fVar2 >> 0x10),
                                 CONCAT15((char)((uint)fVar2 >> 8),
                                          CONCAT14(SUB41(fVar2,0),auVar23._0_4_ - (float)uVar3))));
          *(float *)pauVar14[1] = auVar23._8_4_ - auVar36._8_4_;
          *(float *)(pauVar14[1] + 4) = auVar23._12_4_ - auVar36._12_4_;
          *(float *)*pauVar14 = auVar23._0_4_ - auVar36._0_4_;
          *(float *)(*pauVar14 + 4) = auVar23._4_4_ - auVar36._4_4_;
          pauVar14 = pauVar14 + 2;
        } while (uVar21 != 0);
        if (uVar12 != uVar22) goto LAB_00a95dc4;
      }
      computeDistanceFieldGradients(param_3,param_1,param_2,pfVar8,pfVar9);
      antiAliasedEuclideanDistanceTransform
                (param_3,pfVar8,pfVar9,param_1,param_2,psVar6,psVar7,pfVar11);
      if (uVar1 == 0) goto LAB_00a95d48;
      if (uVar1 < 8) {
        uVar12 = 0;
LAB_00a95e6c:
        lVar13 = uVar22 - uVar12;
        pfVar17 = pfVar11 + uVar12;
        do {
          fVar2 = *pfVar17;
          uVar24 = SUB41(fVar2,0);
          uVar25 = (undefined)((uint)fVar2 >> 8);
          uVar26 = (undefined)((uint)fVar2 >> 0x10);
          uVar27 = (undefined)((uint)fVar2 >> 0x18);
          if (fVar2 < 0.0) {
            uVar24 = 0;
            uVar25 = 0;
            uVar26 = 0;
            uVar27 = 0;
          }
          lVar13 = lVar13 + -1;
          *pfVar17 = (float)CONCAT13(uVar27,CONCAT12(uVar26,CONCAT11(uVar25,uVar24)));
          pfVar17 = pfVar17 + 1;
        } while (lVar13 != 0);
      }
      else {
        uVar12 = uVar22 & 0xfffffff8;
        pVar15 = (unkbyte9 *)(pfVar11 + 4);
        uVar21 = uVar12;
        do {
          auVar23 = *(undefined (*) [16])(pVar15 + -1);
          uVar4 = *(undefined8 *)((long)pVar15 + 8);
          bVar28 = (byte)((ulong)uVar4 >> 8);
          bVar29 = (byte)((ulong)uVar4 >> 0x10);
          bVar30 = (byte)((ulong)uVar4 >> 0x18);
          bVar31 = (byte)((ulong)uVar4 >> 0x20);
          bVar32 = (byte)((ulong)uVar4 >> 0x28);
          bVar33 = (byte)((ulong)uVar4 >> 0x30);
          bVar34 = (byte)((ulong)uVar4 >> 0x38);
          uVar3 = *(undefined8 *)pVar15;
          uVar21 = uVar21 - 8;
          auVar35 = NEON_fcmge(auVar23,0,4);
          auVar36[9] = bVar28;
          auVar36._0_9_ = *pVar15;
          auVar36[10] = bVar29;
          auVar36[11] = bVar30;
          auVar36[12] = bVar31;
          auVar36[13] = bVar32;
          auVar36[14] = bVar33;
          auVar36[15] = bVar34;
          auVar36 = NEON_fcmge(auVar36,0,4);
          *(byte *)pVar15 = auVar23[8] & auVar35[8];
          *(byte *)((long)pVar15 + 1) = auVar23[9] & auVar35[9];
          *(byte *)((long)pVar15 + 2) = auVar23[10] & auVar35[10];
          *(byte *)((long)pVar15 + 3) = auVar23[11] & auVar35[11];
          *(byte *)((long)pVar15 + 4) = auVar23[12] & auVar35[12];
          *(byte *)((long)pVar15 + 5) = auVar23[13] & auVar35[13];
          *(byte *)((long)pVar15 + 6) = auVar23[14] & auVar35[14];
          *(byte *)((long)pVar15 + 7) = auVar23[15] & auVar35[15];
          *(byte *)(pVar15 + -1) = auVar23[0] & auVar35[0];
          *(byte *)((long)pVar15 + -0xf) = auVar23[1] & auVar35[1];
          *(byte *)((long)pVar15 + -0xe) = auVar23[2] & auVar35[2];
          *(byte *)((long)pVar15 + -0xd) = auVar23[3] & auVar35[3];
          *(byte *)((long)pVar15 + -0xc) = auVar23[4] & auVar35[4];
          *(byte *)((long)pVar15 + -0xb) = auVar23[5] & auVar35[5];
          *(byte *)((long)pVar15 + -10) = auVar23[6] & auVar35[6];
          *(byte *)((long)pVar15 + -9) = auVar23[7] & auVar35[7];
          *(ulong *)((long)pVar15 + 8) =
               CONCAT17(bVar34 & auVar36[15],
                        CONCAT16(bVar33 & auVar36[14],
                                 CONCAT15(bVar32 & auVar36[13],
                                          CONCAT14(bVar31 & auVar36[12],
                                                   CONCAT13(bVar30 & auVar36[11],
                                                            CONCAT12(bVar29 & auVar36[10],
                                                                     CONCAT11(bVar28 & auVar36[9],
                                                                              (byte)uVar4 &
                                                                              auVar36[8])))))));
          *(ulong *)pVar15 =
               CONCAT17((byte)((ulong)uVar3 >> 0x38) & auVar36[7],
                        CONCAT16((byte)((ulong)uVar3 >> 0x30) & auVar36[6],
                                 CONCAT15((byte)((ulong)uVar3 >> 0x28) & auVar36[5],
                                          CONCAT14((byte)((ulong)uVar3 >> 0x20) & auVar36[4],
                                                   CONCAT13((byte)((ulong)uVar3 >> 0x18) &
                                                            auVar36[3],
                                                            CONCAT12((byte)((ulong)uVar3 >> 0x10) &
                                                                     auVar36[2],
                                                                     CONCAT11((byte)((ulong)uVar3 >>
                                                                                    8) & auVar36[1],
                                                                              (byte)uVar3 &
                                                                              auVar36[0])))))));
          pVar15 = pVar15 + 2;
        } while (uVar21 != 0);
        if (uVar12 != uVar22) goto LAB_00a95e6c;
      }
      if (uVar1 != 0) {
        if (uVar1 < 8) {
          uVar12 = 0;
        }
        else {
          uVar12 = uVar22 & 0xfffffff8;
          puVar16 = (undefined8 *)(pfVar10 + 4);
          pauVar14 = (undefined (*) [16])(pfVar11 + 4);
          puVar19 = (undefined8 *)(param_3 + 4);
          uVar21 = uVar12;
          do {
            auVar23 = *(undefined (*) [16])(puVar16 + -2);
            uVar4 = puVar16[1];
            uVar3 = *puVar16;
            puVar16 = puVar16 + 4;
            uVar21 = uVar21 - 8;
            auVar36 = pauVar14[-1];
            auVar35 = *pauVar14;
            pauVar14 = pauVar14 + 2;
            fVar2 = (float)((ulong)uVar3 >> 0x20) - auVar35._4_4_;
            fVar5 = (float)((ulong)uVar4 >> 0x20) - auVar35._12_4_;
            *(float *)puVar19 = auVar23._8_4_ - auVar36._8_4_;
            *(float *)((long)puVar19 + 4) = auVar23._12_4_ - auVar36._12_4_;
            *(float *)(puVar19 + -2) = auVar23._0_4_ - auVar36._0_4_;
            *(float *)((long)puVar19 + -0xc) = auVar23._4_4_ - auVar36._4_4_;
            puVar19[1] = CONCAT17((char)((uint)fVar5 >> 0x18),
                                  CONCAT16((char)((uint)fVar5 >> 0x10),
                                           CONCAT15((char)((uint)fVar5 >> 8),
                                                    CONCAT14(SUB41(fVar5,0),
                                                             (float)uVar4 - auVar35._8_4_))));
            *puVar19 = CONCAT17((char)((uint)fVar2 >> 0x18),
                                CONCAT16((char)((uint)fVar2 >> 0x10),
                                         CONCAT15((char)((uint)fVar2 >> 8),
                                                  CONCAT14(SUB41(fVar2,0),
                                                           (float)uVar3 - auVar35._0_4_))));
            puVar19 = puVar19 + 4;
          } while (uVar21 != 0);
          if (uVar12 == uVar22) goto LAB_00a95d48;
        }
        lVar13 = uVar22 - uVar12;
        pfVar17 = pfVar10 + uVar12;
        pfVar18 = pfVar11 + uVar12;
        pfVar20 = param_3 + uVar12;
        do {
          lVar13 = lVar13 + -1;
          *pfVar20 = *pfVar17 - *pfVar18;
          pfVar17 = pfVar17 + 1;
          pfVar18 = pfVar18 + 1;
          pfVar20 = pfVar20 + 1;
        } while (lVar13 != 0);
      }
      goto LAB_00a95d48;
    }
  }
  computeDistanceFieldGradients(param_3,param_1,param_2,pfVar8,pfVar9);
  antiAliasedEuclideanDistanceTransform(param_3,pfVar8,pfVar9,param_1,param_2,psVar6,psVar7,pfVar11)
  ;
LAB_00a95d48:
  operator_delete__(psVar6);
  operator_delete__(psVar7);
  operator_delete__(pfVar8);
  operator_delete__(pfVar9);
  operator_delete__(pfVar10);
  operator_delete__(pfVar11);
  return;
}


