// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertBufferU8
// Entry Point: 00b0ec80
// Size: 348 bytes
// Signature: undefined __thiscall convertBufferU8(SoftAudioBuffer * this, float * param_1, uchar * param_2, uint param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoftAudioBuffer::convertBufferU8(float*, unsigned char const*, unsigned int) */

void __thiscall
SoftAudioBuffer::convertBufferU8(SoftAudioBuffer *this,float *param_1,uchar *param_2,uint param_3)

{
  float *pfVar1;
  uint uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined (*pauVar10) [16];
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  
  auVar6 = _DAT_004c4f40;
  auVar5 = _DAT_004c4d70;
  auVar4 = _DAT_004c4a50;
  auVar3 = _DAT_004c37b0;
  if (param_3 != 0) {
    uVar2 = *(uint *)(this + 0x1c);
    uVar8 = (ulong)uVar2;
    uVar7 = 0;
    uVar9 = uVar8 & 0xfffffff0;
    do {
      if (uVar2 != 0) {
        if ((((uVar2 < 0x10) || (param_3 != 1)) || (CARRY4((uint)uVar7,(uint)(uVar8 - 1)) != false))
           || ((uVar8 - 1 >> 0x20 != 0 ||
               ((param_2 < (undefined (*) [16])(param_1 + uVar7 + uVar8) &&
                (param_1 + uVar7 < param_2 + uVar8)))))) {
          pauVar10 = (undefined (*) [16])param_2;
          uVar11 = 0;
        }
        else {
          pauVar10 = (undefined (*) [16])(param_2 + uVar9);
          uVar13 = uVar7 & 0xffffffff;
          uVar11 = uVar9;
          do {
            pfVar1 = param_1 + uVar13;
            uVar11 = uVar11 - 0x10;
            uVar13 = (ulong)((int)uVar13 + param_3 * 0x10);
            auVar15 = a64_TBL(ZEXT816(0),*(undefined (*) [16])param_2,ZEXT816(0),auVar4);
            auVar16 = a64_TBL(ZEXT816(0),*(undefined (*) [16])param_2,ZEXT816(0),auVar3);
            auVar18 = a64_TBL(ZEXT816(0),*(undefined (*) [16])param_2,ZEXT816(0),auVar5);
            auVar21 = a64_TBL(ZEXT816(0),*(undefined (*) [16])param_2,ZEXT816(0),auVar6);
            auVar17._0_4_ = auVar15._0_4_ + -0x80;
            auVar17._4_4_ = auVar15._4_4_ + -0x80;
            auVar17._8_4_ = auVar15._8_4_ + -0x80;
            auVar17._12_4_ = auVar15._12_4_ + -0x80;
            auVar20._0_4_ = auVar16._0_4_ + -0x80;
            auVar20._4_4_ = auVar16._4_4_ + -0x80;
            auVar20._8_4_ = auVar16._8_4_ + -0x80;
            auVar20._12_4_ = auVar16._12_4_ + -0x80;
            auVar19._0_4_ = auVar18._0_4_ + -0x80;
            auVar19._4_4_ = auVar18._4_4_ + -0x80;
            auVar19._8_4_ = auVar18._8_4_ + -0x80;
            auVar19._12_4_ = auVar18._12_4_ + -0x80;
            auVar18._0_4_ = auVar21._0_4_ + -0x80;
            auVar18._4_4_ = auVar21._4_4_ + -0x80;
            auVar18._8_4_ = auVar21._8_4_ + -0x80;
            auVar18._12_4_ = auVar21._12_4_ + -0x80;
            auVar15 = NEON_scvtf(auVar17,4);
            auVar17 = NEON_scvtf(auVar20,4);
            auVar20 = NEON_scvtf(auVar19,4);
            auVar18 = NEON_scvtf(auVar18,4);
            auVar16._0_8_ = CONCAT44(auVar15._4_4_ * 0.0078125,auVar15._0_4_ * 0.0078125);
            auVar16._8_4_ = auVar15._8_4_ * 0.0078125;
            auVar16._12_4_ = auVar15._12_4_ * 0.0078125;
            pfVar1[0xc] = auVar17._8_4_ * 0.0078125;
            pfVar1[0xd] = auVar17._12_4_ * 0.0078125;
            pfVar1[8] = auVar17._0_4_ * 0.0078125;
            pfVar1[9] = auVar17._4_4_ * 0.0078125;
            *(long *)(pfVar1 + 0xe) = auVar16._8_8_;
            *(undefined8 *)(pfVar1 + 0xc) = auVar16._0_8_;
            pfVar1[4] = auVar18._8_4_ * 0.0078125;
            pfVar1[5] = auVar18._12_4_ * 0.0078125;
            *pfVar1 = auVar18._0_4_ * 0.0078125;
            pfVar1[1] = auVar18._4_4_ * 0.0078125;
            pfVar1[8] = auVar20._8_4_ * 0.0078125;
            pfVar1[9] = auVar20._12_4_ * 0.0078125;
            pfVar1[4] = auVar20._0_4_ * 0.0078125;
            pfVar1[5] = auVar20._4_4_ * 0.0078125;
            param_2 = (uchar *)((long)param_2 + 0x10);
          } while (uVar11 != 0);
          param_2 = (uchar *)pauVar10;
          uVar11 = uVar9;
          if (uVar9 == uVar8) goto LAB_00b0ecd4;
        }
        uVar14 = (uint)uVar7 + param_3 * (int)uVar11;
        lVar12 = uVar8 - uVar11;
        do {
          param_2 = *pauVar10 + 1;
          lVar12 = lVar12 + -1;
          param_1[uVar14] = (float)((byte)(*pauVar10)[0] - 0x80) * 0.0078125;
          uVar14 = uVar14 + param_3;
          pauVar10 = (undefined (*) [16])param_2;
        } while (lVar12 != 0);
      }
LAB_00b0ecd4:
      uVar7 = uVar7 + 1;
    } while ((uint)uVar7 != param_3);
  }
  return;
}


