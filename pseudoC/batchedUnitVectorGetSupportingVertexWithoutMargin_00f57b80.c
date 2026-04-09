// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: batchedUnitVectorGetSupportingVertexWithoutMargin
// Entry Point: 00f57b80
// Size: 316 bytes
// Signature: undefined __thiscall batchedUnitVectorGetSupportingVertexWithoutMargin(btBoxShape * this, btVector3 * param_1, btVector3 * param_2, int param_3)


/* btBoxShape::batchedUnitVectorGetSupportingVertexWithoutMargin(btVector3 const*, btVector3*, int)
   const */

void __thiscall
btBoxShape::batchedUnitVectorGetSupportingVertexWithoutMargin
          (btBoxShape *this,btVector3 *param_1,btVector3 *param_2,int param_3)

{
  ulong uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined4 *puVar6;
  ulong uVar14;
  long lVar15;
  long lVar16;
  float *pfVar17;
  undefined4 *puVar18;
  float *pfVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  undefined auVar22 [16];
  undefined8 uVar23;
  undefined auVar24 [16];
  float fVar25;
  float fVar26;
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  float fVar30;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  if (0 < param_3) {
    uVar14 = (ulong)(uint)param_3;
    if ((uint)param_3 < 5) {
      lVar16 = 0;
    }
    else {
      lVar16 = 0;
      if ((param_1 + uVar14 * 0x10 + -4 <= param_2 ||
           (btBoxShape *)(param_2 + uVar14 * 0x10) <= param_1) &&
         (this + 0x38 <= param_2 || (btBoxShape *)(param_2 + uVar14 * 0x10) <= this + 0x2c)) {
        uVar1 = 4;
        if ((param_3 & 3U) != 0) {
          uVar1 = uVar14 & 3;
        }
        lVar16 = uVar14 - uVar1;
        puVar18 = (undefined4 *)param_1;
        puVar20 = (undefined4 *)param_2;
        lVar15 = lVar16;
        do {
          auVar27._0_4_ = *puVar18;
          puVar6 = puVar18 + 1;
          puVar7 = puVar18 + 2;
          auVar27._4_4_ = puVar18[4];
          puVar8 = puVar18 + 5;
          puVar9 = puVar18 + 6;
          auVar27._8_4_ = puVar18[8];
          puVar10 = puVar18 + 9;
          puVar11 = puVar18 + 10;
          auVar27._12_4_ = puVar18[0xc];
          puVar12 = puVar18 + 0xd;
          puVar13 = puVar18 + 0xe;
          puVar18 = puVar18 + 0x10;
          auVar28 = NEON_fcmge(auVar27,0,4);
          lVar15 = lVar15 + -4;
          auVar22._4_4_ = *puVar8;
          auVar22._0_4_ = *puVar6;
          auVar22._8_4_ = *puVar10;
          auVar22._12_4_ = *puVar12;
          auVar29 = NEON_fcmge(auVar22,0,4);
          auVar24._4_4_ = *puVar9;
          auVar24._0_4_ = *puVar7;
          auVar24._8_4_ = *puVar11;
          auVar24._12_4_ = *puVar13;
          auVar27 = NEON_fcmge(auVar24,0,4);
          fVar26 = (float)*(undefined8 *)(this + 0x2c);
          fVar30 = (float)*(undefined8 *)(this + 0x30);
          fVar25 = (float)*(undefined8 *)(this + 0x34);
          auVar2._4_4_ = -fVar26;
          auVar2._0_4_ = -fVar26;
          auVar2._8_4_ = -fVar26;
          auVar2._12_4_ = -fVar26;
          auVar4._4_4_ = fVar26;
          auVar4._0_4_ = fVar26;
          auVar4._8_4_ = fVar26;
          auVar4._12_4_ = fVar26;
          auVar22 = NEON_bsl(auVar28,auVar4,auVar2,1);
          auVar3._4_4_ = fVar30;
          auVar3._0_4_ = fVar30;
          auVar3._8_4_ = fVar30;
          auVar3._12_4_ = fVar30;
          auVar5._4_4_ = -fVar30;
          auVar5._0_4_ = -fVar30;
          auVar5._8_4_ = -fVar30;
          auVar5._12_4_ = -fVar30;
          auVar24 = NEON_bsl(auVar29,auVar3,auVar5,1);
          auVar28._4_4_ = fVar25;
          auVar28._0_4_ = fVar25;
          auVar28._8_4_ = fVar25;
          auVar28._12_4_ = fVar25;
          auVar29._4_4_ = -fVar25;
          auVar29._0_4_ = -fVar25;
          auVar29._8_4_ = -fVar25;
          auVar29._12_4_ = -fVar25;
          auVar28 = NEON_bsl(auVar27,auVar28,auVar29,1);
          *puVar20 = auVar22._0_4_;
          puVar20[1] = auVar24._0_4_;
          puVar20[2] = auVar28._0_4_;
          puVar20[3] = 0;
          puVar20[4] = auVar22._4_4_;
          puVar20[5] = auVar24._4_4_;
          puVar20[6] = auVar28._4_4_;
          puVar20[7] = 0;
          puVar20[8] = auVar22._8_4_;
          puVar20[9] = auVar24._8_4_;
          puVar20[10] = auVar28._8_4_;
          puVar20[0xb] = 0;
          puVar20[0xc] = auVar22._12_4_;
          puVar20[0xd] = auVar24._12_4_;
          puVar20[0xe] = auVar28._12_4_;
          puVar20[0xf] = 0;
          puVar20 = puVar20 + 0x10;
        } while (lVar15 != 0);
      }
    }
    lVar15 = uVar14 - lVar16;
    pfVar17 = (float *)(param_1 + lVar16 * 0x10 + 8);
    pfVar19 = (float *)(param_2 + lVar16 * 0x10 + 8);
    do {
      uVar23 = *(undefined8 *)(this + 0x2c);
      fVar25 = *(float *)(this + 0x34);
      fVar26 = *pfVar17;
      uVar21 = NEON_fcmge(*(undefined8 *)(pfVar17 + -2),0,4);
      pfVar19[1] = 0.0;
      uVar21 = NEON_bsl(uVar21,uVar23,CONCAT44(-(float)((ulong)uVar23 >> 0x20),-(float)uVar23),1);
      if (fVar26 < 0.0) {
        fVar25 = -fVar25;
      }
      lVar15 = lVar15 + -1;
      *(undefined8 *)(pfVar19 + -2) = uVar21;
      *pfVar19 = fVar25;
      pfVar17 = pfVar17 + 4;
      pfVar19 = pfVar19 + 4;
    } while (lVar15 != 0);
  }
  return;
}


