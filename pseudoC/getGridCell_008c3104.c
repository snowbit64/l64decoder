// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getGridCell
// Entry Point: 008c3104
// Size: 528 bytes
// Signature: undefined __thiscall getGridCell(DecalCullingStructure * this, float param_1, float param_2, float param_3, float param_4, uint * param_5, uint * param_6, uint * param_7)


/* DecalCullingStructure::getGridCell(float, float, float, float, unsigned int&, unsigned int&,
   unsigned int&) */

long __thiscall
DecalCullingStructure::getGridCell
          (DecalCullingStructure *this,float param_1,float param_2,float param_3,float param_4,
          uint *param_5,uint *param_6,uint *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  uint uVar16;
  int iVar17;
  float fVar20;
  undefined8 uVar18;
  ulong uVar19;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined8 uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  
  if (param_1 == -3.402823e+38) {
    lVar4 = *(long *)this;
    *param_5 = 0;
    *param_6 = 0;
    *param_7 = 0;
    return lVar4;
  }
  iVar5 = *(int *)(this + 8);
  fVar15 = (float)*(undefined8 *)(this + 0x2c);
  fVar20 = (float)((ulong)*(undefined8 *)(this + 0x2c) >> 0x20);
  iVar27 = iVar5 + -1;
  uVar8 = CONCAT44((int)((param_2 - *(float *)(this + 0x1c)) * fVar20),
                   (int)((param_1 - (float)*(undefined8 *)(this + 0x14)) * fVar15));
  uVar18 = CONCAT44((int)((param_4 - *(float *)(this + 0x1c)) * fVar20),
                    (int)((param_3 - (float)*(undefined8 *)(this + 0x14)) * fVar15));
  uVar26 = NEON_cmgt(CONCAT44(iVar5,iVar5),uVar8,4);
  uVar24 = NEON_cmgt(CONCAT44(iVar5,iVar5),uVar18,4);
  uVar10 = NEON_cmge(uVar8,0,4);
  uVar9 = NEON_bif(uVar8,CONCAT44(iVar27,iVar27),uVar26,1);
  uVar25 = NEON_bsl(uVar24,uVar18,CONCAT44(iVar27,iVar27),1);
  uVar19 = NEON_cmge(uVar18,0,4);
  uVar10 = uVar10 & uVar9;
  uVar19 = uVar19 & uVar25;
  uVar16 = CONCAT13((byte)(uVar10 >> 0x18) ^ (byte)(uVar19 >> 0x18),
                    CONCAT12((byte)(uVar10 >> 0x10) ^ (byte)(uVar19 >> 0x10),
                             CONCAT11((byte)(uVar10 >> 8) ^ (byte)(uVar19 >> 8),
                                      (byte)uVar10 ^ (byte)uVar19)));
  uVar7 = (uint)(CONCAT17((byte)(uVar10 >> 0x38) ^ (byte)(uVar19 >> 0x38),
                          CONCAT16((byte)(uVar10 >> 0x30) ^ (byte)(uVar19 >> 0x30),
                                   CONCAT15((byte)(uVar10 >> 0x28) ^ (byte)(uVar19 >> 0x28),
                                            CONCAT14((byte)(uVar10 >> 0x20) ^ (byte)(uVar19 >> 0x20)
                                                     ,uVar16)))) >> 0x20);
  if ((int)uVar7 <= (int)uVar16) {
    uVar7 = uVar16;
  }
  uVar11 = (uint)(uVar10 >> 0x20);
  uVar16 = (uint)uVar10;
  if (uVar7 == 0) {
    uVar7 = *(int *)(this + 0xc) - 1;
  }
  else {
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar1 = *(int *)(MathUtil::s_multiplyDeBruijnBitPosition +
                    (ulong)((uVar7 | uVar7 >> 0x10) * 0x7c4acdd >> 0x1b) * 4) + 1;
    uVar7 = (*(int *)(this + 0xc) -
            *(int *)(MathUtil::s_multiplyDeBruijnBitPosition +
                    (ulong)((uVar7 | uVar7 >> 0x10) * 0x7c4acdd >> 0x1b) * 4)) - 2;
    uVar16 = (int)uVar16 >> (uVar1 & 0x1f);
    uVar11 = (int)uVar11 >> (uVar1 & 0x1f);
  }
  *param_5 = uVar7;
  uVar1 = (uVar16 | uVar16 << 8) & 0xff00ff;
  *param_6 = uVar16;
  uVar16 = (uVar11 | uVar11 << 8) & 0xff00ff;
  *param_7 = uVar11;
  uVar11 = (uVar1 | uVar1 << 4) & 0xf0f0f0f;
  uVar16 = (uVar16 | uVar16 << 4) & 0xf0f0f0f;
  uVar1 = *(uint *)(this + 0xc);
  uVar11 = (uVar11 | uVar11 << 2) & 0x33333333;
  uVar16 = (uVar16 | uVar16 << 2) & 0x33333333;
  uVar16 = ((uVar11 | uVar11 << 1) & 0x55555555 | (uVar16 << 2 | uVar16 << 1) & 0xaaaaaaaa) <<
           (ulong)((uVar1 + ~uVar7) * 2 & 0x1f);
  uVar7 = uVar16 + uVar7;
  if (2 < uVar1) {
    uVar11 = uVar1 - 2;
    if (uVar11 < 8) {
      uVar6 = 1;
    }
    else {
      iVar13 = 0;
      iVar14 = 0;
      uVar2 = uVar11 & 0xfffffff8;
      iVar17 = 0;
      iVar21 = 0;
      iVar22 = 0;
      iVar23 = 0;
      uVar6 = uVar2 | 1;
      iVar12 = 0;
      uVar3 = uVar2;
      iVar5 = 1;
      iVar27 = 2;
      iVar28 = 3;
      iVar29 = 4;
      do {
        auVar33._0_4_ = iVar5 * 2;
        auVar33._4_4_ = iVar27 * 2;
        auVar33._8_4_ = iVar28 * 2;
        auVar33._12_4_ = iVar29 * 2;
        uVar3 = uVar3 - 8;
        auVar32 = NEON_neg(auVar33,4);
        auVar30._0_4_ = iVar5 * -2 + -8;
        auVar30._4_4_ = iVar27 * -2 + -8;
        auVar30._8_4_ = iVar28 * -2 + -8;
        auVar30._12_4_ = iVar29 * -2 + -8;
        auVar31._4_4_ = uVar16;
        auVar31._0_4_ = uVar16;
        auVar31._8_4_ = uVar16;
        auVar31._12_4_ = uVar16;
        auVar33 = NEON_ushl(auVar31,auVar32,4);
        auVar32._4_4_ = uVar16;
        auVar32._0_4_ = uVar16;
        auVar32._8_4_ = uVar16;
        auVar32._12_4_ = uVar16;
        auVar31 = NEON_ushl(auVar32,auVar30,4);
        uVar7 = auVar33._0_4_ + uVar7;
        iVar12 = auVar33._4_4_ + iVar12;
        iVar13 = auVar33._8_4_ + iVar13;
        iVar14 = auVar33._12_4_ + iVar14;
        iVar17 = auVar31._0_4_ + iVar17;
        iVar21 = auVar31._4_4_ + iVar21;
        iVar22 = auVar31._8_4_ + iVar22;
        iVar23 = auVar31._12_4_ + iVar23;
        iVar5 = iVar5 + 8;
        iVar27 = iVar27 + 8;
        iVar28 = iVar28 + 8;
        iVar29 = iVar29 + 8;
      } while (uVar3 != 0);
      uVar7 = iVar17 + uVar7 + iVar21 + iVar12 + iVar22 + iVar13 + iVar23 + iVar14;
      if (uVar11 == uVar2) goto LAB_008c3304;
    }
    uVar11 = uVar6 << 1;
    iVar5 = ~uVar6 + uVar1;
    do {
      iVar5 = iVar5 + -1;
      uVar7 = (uVar16 >> (ulong)(uVar11 & 0x1f)) + uVar7;
      uVar11 = uVar11 + 2;
    } while (iVar5 != 0);
  }
LAB_008c3304:
  return *(long *)this + (ulong)uVar7 * 0x20;
}


