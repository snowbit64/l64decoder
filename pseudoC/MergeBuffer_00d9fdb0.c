// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MergeBuffer
// Entry Point: 00d9fdb0
// Size: 340 bytes
// Signature: undefined __thiscall MergeBuffer(MaskedOcclusionCullingPrivate * this, MaskedOcclusionCulling * param_1)


/* MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::MergeBuffer(MaskedOcclusionCulling*)
    */

void __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::MergeBuffer
          (MaskedOcclusionCullingPrivate *this,MaskedOcclusionCulling *param_1)

{
  undefined (*pauVar1) [16];
  unkbyte9 *pVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  float fVar9;
  undefined auVar10 [16];
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  
  if (0 < *(int *)(this + 0x130) * *(int *)(this + 300)) {
    lVar15 = 0;
    lVar16 = 0;
    do {
      lVar17 = *(long *)(param_1 + 0x138);
      pauVar1 = (undefined (*) [16])(lVar17 + lVar15);
      auVar22 = *pauVar1;
      auVar18._8_4_ = 0xffffffe1;
      auVar18._0_8_ = 0xffffffe1ffffffe1;
      auVar18._12_4_ = 0xffffffe1;
      auVar18 = NEON_sshl(auVar22,auVar18,4);
      auVar19 = NEON_cmeq(auVar18,0,2);
      auVar18 = pauVar1[2];
      if (CONCAT17(auVar19[15] | auVar19[7],
                   CONCAT16(auVar19[14] | auVar19[6],
                            CONCAT15(auVar19[13] | auVar19[5],
                                     CONCAT14(auVar19[12] | auVar19[4],
                                              CONCAT13(auVar19[11] | auVar19[3],
                                                       CONCAT12(auVar19[10] | auVar19[2],
                                                                CONCAT11(auVar19[9] | auVar19[1],
                                                                         auVar19[8] | auVar19[0]))))
                                    ))) != 0) {
        pVar2 = (unkbyte9 *)(*(long *)(this + 0x138) + lVar15);
        uVar13 = *(undefined8 *)((long)pVar2 + 8);
        auVar31 = *(undefined (*) [16])(pVar2 + 1);
        auVar19[9] = (char)((ulong)uVar13 >> 8);
        auVar19._0_9_ = *pVar2;
        auVar19[10] = (char)((ulong)uVar13 >> 0x10);
        auVar19[11] = (char)((ulong)uVar13 >> 0x18);
        auVar19[12] = (char)((ulong)uVar13 >> 0x20);
        auVar19[13] = (char)((ulong)uVar13 >> 0x28);
        auVar19[14] = (char)((ulong)uVar13 >> 0x30);
        auVar19[15] = (char)((ulong)uVar13 >> 0x38);
        auVar22 = NEON_fmax(auVar19,auVar22,4);
        *(long *)((long)pVar2 + 8) = auVar22._8_8_;
        *(long *)pVar2 = auVar22._0_8_;
        auVar33._0_4_ = auVar31._0_4_ - auVar22._0_4_;
        auVar33._4_4_ = auVar31._4_4_ - auVar22._4_4_;
        auVar33._8_4_ = auVar31._8_4_ - auVar22._8_4_;
        auVar33._12_4_ = auVar31._12_4_ - auVar22._12_4_;
        lVar3 = *(long *)(this + 0x138) + lVar15;
        auVar22._8_4_ = 0xffffffe1;
        auVar22._0_8_ = 0xffffffe1ffffffe1;
        auVar22._12_4_ = 0xffffffe1;
        auVar22 = NEON_sshl(auVar33,auVar22,4);
        uVar14 = *(undefined8 *)(lVar3 + 0x28);
        bVar23 = (byte)((ulong)uVar14 >> 8);
        bVar24 = (byte)((ulong)uVar14 >> 0x10);
        bVar25 = (byte)((ulong)uVar14 >> 0x18);
        bVar26 = (byte)((ulong)uVar14 >> 0x20);
        bVar27 = (byte)((ulong)uVar14 >> 0x28);
        bVar28 = (byte)((ulong)uVar14 >> 0x30);
        bVar29 = (byte)((ulong)uVar14 >> 0x38);
        uVar13 = *(undefined8 *)(unkbyte9 *)(lVar3 + 0x20);
        auVar31[9] = bVar23;
        auVar31._0_9_ = *(unkbyte9 *)(lVar3 + 0x20);
        auVar31[10] = bVar24;
        auVar31[11] = bVar25;
        auVar31[12] = bVar26;
        auVar31[13] = bVar27;
        auVar31[14] = bVar28;
        auVar31[15] = bVar29;
        auVar19 = NEON_cmeq(auVar31,0,2);
        *(byte *)(lVar3 + 0x30) = ~auVar22[8] & ~auVar19[8] & (byte)uVar14;
        *(byte *)(lVar3 + 0x31) = ~auVar22[9] & ~auVar19[9] & bVar23;
        *(byte *)(lVar3 + 0x32) = ~auVar22[10] & ~auVar19[10] & bVar24;
        *(byte *)(lVar3 + 0x33) = ~auVar22[11] & ~auVar19[11] & bVar25;
        *(byte *)(lVar3 + 0x34) = ~auVar22[12] & ~auVar19[12] & bVar26;
        *(byte *)(lVar3 + 0x35) = ~auVar22[13] & ~auVar19[13] & bVar27;
        *(byte *)(lVar3 + 0x36) = ~auVar22[14] & ~auVar19[14] & bVar28;
        *(byte *)(lVar3 + 0x37) = ~auVar22[15] & ~auVar19[15] & bVar29;
        *(byte *)(lVar3 + 0x20) = ~auVar22[0] & ~auVar19[0] & (byte)uVar13;
        *(byte *)(lVar3 + 0x21) = ~auVar22[1] & ~auVar19[1] & (byte)((ulong)uVar13 >> 8);
        *(byte *)(lVar3 + 0x22) = ~auVar22[2] & ~auVar19[2] & (byte)((ulong)uVar13 >> 0x10);
        *(byte *)(lVar3 + 0x23) = ~auVar22[3] & ~auVar19[3] & (byte)((ulong)uVar13 >> 0x18);
        *(byte *)(lVar3 + 0x24) = ~auVar22[4] & ~auVar19[4] & (byte)((ulong)uVar13 >> 0x20);
        *(byte *)(lVar3 + 0x25) = ~auVar22[5] & ~auVar19[5] & (byte)((ulong)uVar13 >> 0x28);
        *(byte *)(lVar3 + 0x26) = ~auVar22[6] & ~auVar19[6] & (byte)((ulong)uVar13 >> 0x30);
        *(byte *)(lVar3 + 0x27) = ~auVar22[7] & ~auVar19[7] & (byte)((ulong)uVar13 >> 0x38);
      }
      auVar22 = NEON_cmtst(auVar18,auVar18,4);
      if (CONCAT17(auVar22[15] | auVar22[7],
                   CONCAT16(auVar22[14] | auVar22[6],
                            CONCAT15(auVar22[13] | auVar22[5],
                                     CONCAT14(auVar22[12] | auVar22[4],
                                              CONCAT13(auVar22[11] | auVar22[3],
                                                       CONCAT12(auVar22[10] | auVar22[2],
                                                                CONCAT11(auVar22[9] | auVar22[1],
                                                                         auVar22[8] | auVar22[0]))))
                                    ))) != 0) {
        auVar33 = NEON_cmeq(auVar18,0,2);
        pVar2 = (unkbyte9 *)(*(long *)(this + 0x138) + lVar15);
        auVar22 = *(undefined (*) [16])(lVar17 + lVar15 + 0x10);
        uVar13 = *(undefined8 *)((long)pVar2 + 8);
        auVar19 = *(undefined (*) [16])(pVar2 + 1);
        fVar9 = (float)*(undefined8 *)pVar2;
        auVar30._0_4_ = auVar22._0_4_ - fVar9;
        fVar11 = (float)((ulong)*(undefined8 *)pVar2 >> 0x20);
        auVar30._4_4_ = auVar22._4_4_ - fVar11;
        auVar30._8_4_ = auVar22._8_4_ - (float)uVar13;
        fVar12 = (float)((ulong)uVar13 >> 0x20);
        auVar30._12_4_ = auVar22._12_4_ - fVar12;
        auVar4._8_4_ = 0xffffffe1;
        auVar4._0_8_ = 0xffffffe1ffffffe1;
        auVar4._12_4_ = 0xffffffe1;
        auVar31 = NEON_sshl(auVar30,auVar4,4);
        auVar32[0] = auVar31[0] | auVar33[0];
        auVar32[1] = auVar31[1] | auVar33[1];
        auVar32[2] = auVar31[2] | auVar33[2];
        auVar32[3] = auVar31[3] | auVar33[3];
        auVar32[4] = auVar31[4] | auVar33[4];
        auVar32[5] = auVar31[5] | auVar33[5];
        auVar32[6] = auVar31[6] | auVar33[6];
        auVar32[7] = auVar31[7] | auVar33[7];
        auVar32[8] = auVar31[8] | auVar33[8];
        auVar32[9] = auVar31[9] | auVar33[9];
        auVar32[10] = auVar31[10] | auVar33[10];
        auVar32[11] = auVar31[11] | auVar33[11];
        auVar32[12] = auVar31[12] | auVar33[12];
        auVar32[13] = auVar31[13] | auVar33[13];
        auVar32[14] = auVar31[14] | auVar33[14];
        auVar32[15] = auVar31[15] | auVar33[15];
        auVar34._0_4_ = (auVar19._0_4_ + auVar19._0_4_) - (auVar22._0_4_ + fVar9);
        auVar34._4_4_ = (auVar19._4_4_ + auVar19._4_4_) - (auVar22._4_4_ + fVar11);
        auVar34._8_4_ = (auVar19._8_4_ + auVar19._8_4_) - (auVar22._8_4_ + (float)uVar13);
        auVar34._12_4_ = (auVar19._12_4_ + auVar19._12_4_) - (auVar22._12_4_ + fVar12);
        auVar20[0] = auVar18[0] & ~auVar32[0];
        auVar20[1] = auVar18[1] & ~auVar32[1];
        auVar20[2] = auVar18[2] & ~auVar32[2];
        auVar20[3] = auVar18[3] & ~auVar32[3];
        auVar20[4] = auVar18[4] & ~auVar32[4];
        auVar20[5] = auVar18[5] & ~auVar32[5];
        auVar20[6] = auVar18[6] & ~auVar32[6];
        auVar20[7] = auVar18[7] & ~auVar32[7];
        auVar20[8] = auVar18[8] & ~auVar32[8];
        auVar20[9] = auVar18[9] & ~auVar32[9];
        auVar20[10] = auVar18[10] & ~auVar32[10];
        auVar20[11] = auVar18[11] & ~auVar32[11];
        auVar20[12] = auVar18[12] & ~auVar32[12];
        auVar20[13] = auVar18[13] & ~auVar32[13];
        auVar20[14] = auVar18[14] & ~auVar32[14];
        auVar20[15] = auVar18[15] & ~auVar32[15];
        auVar5._8_4_ = 0xffffffe1;
        auVar5._0_8_ = 0xffffffe1ffffffe1;
        auVar5._12_4_ = 0xffffffe1;
        auVar31 = NEON_sshl(auVar34,auVar5,4);
        auVar6._8_8_ = 0xffffffffffffffff;
        auVar6._0_8_ = 0xffffffffffffffff;
        auVar33 = NEON_cmeq(auVar20,auVar6,4);
        auVar18 = *(undefined (*) [16])(pVar2 + 2);
        auVar35[0] = (auVar31[0] | auVar33[0]) & ~auVar32[0];
        auVar35[1] = (auVar31[1] | auVar33[1]) & ~auVar32[1];
        auVar35[2] = (auVar31[2] | auVar33[2]) & ~auVar32[2];
        auVar35[3] = (auVar31[3] | auVar33[3]) & ~auVar32[3];
        auVar35[4] = (auVar31[4] | auVar33[4]) & ~auVar32[4];
        auVar35[5] = (auVar31[5] | auVar33[5]) & ~auVar32[5];
        auVar35[6] = (auVar31[6] | auVar33[6]) & ~auVar32[6];
        auVar35[7] = (auVar31[7] | auVar33[7]) & ~auVar32[7];
        auVar35[8] = (auVar31[8] | auVar33[8]) & ~auVar32[8];
        auVar35[9] = (auVar31[9] | auVar33[9]) & ~auVar32[9];
        auVar35[10] = (auVar31[10] | auVar33[10]) & ~auVar32[10];
        auVar35[11] = (auVar31[11] | auVar33[11]) & ~auVar32[11];
        auVar35[12] = (auVar31[12] | auVar33[12]) & ~auVar32[12];
        auVar35[13] = (auVar31[13] | auVar33[13]) & ~auVar32[13];
        auVar35[14] = (auVar31[14] | auVar33[14]) & ~auVar32[14];
        auVar35[15] = (auVar31[15] | auVar33[15]) & ~auVar32[15];
        auVar31 = NEON_cmlt(auVar32,0,4);
        auVar33 = NEON_cmlt(auVar35,0,4);
        auVar31 = NEON_bsl(auVar31,auVar19,auVar22,1);
        auVar21[0] = auVar18[0] & ~auVar35[0] | auVar20[0];
        auVar21[1] = auVar18[1] & ~auVar35[1] | auVar20[1];
        auVar21[2] = auVar18[2] & ~auVar35[2] | auVar20[2];
        auVar21[3] = auVar18[3] & ~auVar35[3] | auVar20[3];
        auVar21[4] = auVar18[4] & ~auVar35[4] | auVar20[4];
        auVar21[5] = auVar18[5] & ~auVar35[5] | auVar20[5];
        auVar21[6] = auVar18[6] & ~auVar35[6] | auVar20[6];
        auVar21[7] = auVar18[7] & ~auVar35[7] | auVar20[7];
        auVar21[8] = auVar18[8] & ~auVar35[8] | auVar20[8];
        auVar21[9] = auVar18[9] & ~auVar35[9] | auVar20[9];
        auVar21[10] = auVar18[10] & ~auVar35[10] | auVar20[10];
        auVar21[11] = auVar18[11] & ~auVar35[11] | auVar20[11];
        auVar21[12] = auVar18[12] & ~auVar35[12] | auVar20[12];
        auVar21[13] = auVar18[13] & ~auVar35[13] | auVar20[13];
        auVar21[14] = auVar18[14] & ~auVar35[14] | auVar20[14];
        auVar21[15] = auVar18[15] & ~auVar35[15] | auVar20[15];
        auVar18 = NEON_bif(auVar22,auVar19,auVar33,1);
        auVar7._8_8_ = 0xffffffffffffffff;
        auVar7._0_8_ = 0xffffffffffffffff;
        auVar22 = NEON_cmeq(auVar21,auVar7,4);
        auVar18 = NEON_fmin(auVar31,auVar18,4);
        auVar8._8_4_ = 0x7f7fffff;
        auVar8._0_8_ = 0x7f7fffff7f7fffff;
        auVar8._12_4_ = 0x7f7fffff;
        auVar19 = NEON_bsl(auVar22,auVar8,auVar18,1);
        auVar10[9] = (char)((ulong)uVar13 >> 8);
        auVar10._0_9_ = *pVar2;
        auVar10[10] = (char)((ulong)uVar13 >> 0x10);
        auVar10[11] = (char)((ulong)uVar13 >> 0x18);
        auVar10[12] = (char)((ulong)uVar13 >> 0x20);
        auVar10[13] = (char)((ulong)uVar13 >> 0x28);
        auVar10[14] = (char)((ulong)uVar13 >> 0x30);
        auVar10[15] = (char)((ulong)uVar13 >> 0x38);
        auVar18 = NEON_bif(auVar18,auVar10,auVar22,1);
        *(long *)((long)pVar2 + 8) = auVar18._8_8_;
        *(long *)pVar2 = auVar18._0_8_;
        *(long *)((long)pVar2 + 0x18) = auVar19._8_8_;
        *(long *)(pVar2 + 1) = auVar19._0_8_;
        lVar17 = *(long *)(this + 0x138) + lVar15;
        *(byte *)(lVar17 + 0x30) = auVar21[8] & ~auVar22[8];
        *(byte *)(lVar17 + 0x31) = auVar21[9] & ~auVar22[9];
        *(byte *)(lVar17 + 0x32) = auVar21[10] & ~auVar22[10];
        *(byte *)(lVar17 + 0x33) = auVar21[11] & ~auVar22[11];
        *(byte *)(lVar17 + 0x34) = auVar21[12] & ~auVar22[12];
        *(byte *)(lVar17 + 0x35) = auVar21[13] & ~auVar22[13];
        *(byte *)(lVar17 + 0x36) = auVar21[14] & ~auVar22[14];
        *(byte *)(lVar17 + 0x37) = auVar21[15] & ~auVar22[15];
        *(byte *)(lVar17 + 0x20) = auVar21[0] & ~auVar22[0];
        *(byte *)(lVar17 + 0x21) = auVar21[1] & ~auVar22[1];
        *(byte *)(lVar17 + 0x22) = auVar21[2] & ~auVar22[2];
        *(byte *)(lVar17 + 0x23) = auVar21[3] & ~auVar22[3];
        *(byte *)(lVar17 + 0x24) = auVar21[4] & ~auVar22[4];
        *(byte *)(lVar17 + 0x25) = auVar21[5] & ~auVar22[5];
        *(byte *)(lVar17 + 0x26) = auVar21[6] & ~auVar22[6];
        *(byte *)(lVar17 + 0x27) = auVar21[7] & ~auVar22[7];
      }
      lVar16 = lVar16 + 1;
      lVar15 = lVar15 + 0x30;
    } while (lVar16 < (long)*(int *)(this + 0x130) * (long)*(int *)(this + 300));
  }
  return;
}


