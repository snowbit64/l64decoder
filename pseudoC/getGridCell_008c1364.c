// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getGridCell
// Entry Point: 008c1364
// Size: 536 bytes
// Signature: undefined __thiscall getGridCell(CullingGrid2D * this, BoundingVolume * param_1, uint * param_2, uint * param_3, uint * param_4)


/* CullingGrid2D::getGridCell(BoundingVolume const*, unsigned int&, unsigned int&, unsigned int&) */

long __thiscall
CullingGrid2D::getGridCell
          (CullingGrid2D *this,BoundingVolume *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined8 uVar23;
  ulong uVar24;
  float fVar25;
  float fVar27;
  undefined8 uVar26;
  undefined8 uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  
  if (param_1 == (BoundingVolume *)0x0) {
    lVar5 = *(long *)this;
    *param_2 = 0;
    *param_3 = 0;
    *param_4 = 0;
    return lVar5;
  }
  fVar4 = *(float *)(param_1 + 0x18);
  iVar6 = *(int *)(this + 8);
  fVar25 = (float)*(undefined8 *)(this + 0x2c);
  fVar27 = (float)((ulong)*(undefined8 *)(this + 0x2c) >> 0x20);
  uVar26 = CONCAT44(iVar6 + -1,iVar6 + -1);
  uVar16 = CONCAT44((int)(((*(float *)(param_1 + 0x14) - fVar4) - *(float *)(this + 0x1c)) * fVar27)
                    ,(int)(((*(float *)(param_1 + 0xc) - fVar4) -
                           (float)*(undefined8 *)(this + 0x14)) * fVar25));
  uVar10 = CONCAT44((int)(((fVar4 + *(float *)(param_1 + 0x14)) - *(float *)(this + 0x1c)) * fVar27)
                    ,(int)(((fVar4 + *(float *)(param_1 + 0xc)) -
                           (float)*(undefined8 *)(this + 0x14)) * fVar25));
  uVar28 = NEON_cmgt(CONCAT44(iVar6,iVar6),uVar16,4);
  uVar23 = NEON_cmgt(CONCAT44(iVar6,iVar6),uVar10,4);
  uVar18 = NEON_cmge(uVar16,0,4);
  uVar17 = NEON_bif(uVar16,uVar26,uVar28,1);
  uVar24 = NEON_bsl(uVar23,uVar10,uVar26,1);
  uVar11 = NEON_cmge(uVar10,0,4);
  uVar18 = uVar18 & uVar17;
  uVar11 = uVar11 & uVar24;
  uVar8 = CONCAT13((byte)(uVar11 >> 0x18) ^ (byte)(uVar18 >> 0x18),
                   CONCAT12((byte)(uVar11 >> 0x10) ^ (byte)(uVar18 >> 0x10),
                            CONCAT11((byte)(uVar11 >> 8) ^ (byte)(uVar18 >> 8),
                                     (byte)uVar11 ^ (byte)uVar18)));
  uVar9 = (uint)(CONCAT17((byte)(uVar11 >> 0x38) ^ (byte)(uVar18 >> 0x38),
                          CONCAT16((byte)(uVar11 >> 0x30) ^ (byte)(uVar18 >> 0x30),
                                   CONCAT15((byte)(uVar11 >> 0x28) ^ (byte)(uVar18 >> 0x28),
                                            CONCAT14((byte)(uVar11 >> 0x20) ^ (byte)(uVar18 >> 0x20)
                                                     ,uVar8)))) >> 0x20);
  if ((int)uVar9 <= (int)uVar8) {
    uVar9 = uVar8;
  }
  uVar19 = (uint)(uVar18 >> 0x20);
  uVar8 = (uint)uVar18;
  if (uVar9 == 0) {
    uVar9 = *(int *)(this + 0xc) - 1;
  }
  else {
    uVar9 = uVar9 | uVar9 >> 1;
    uVar9 = uVar9 | uVar9 >> 2;
    uVar9 = uVar9 | uVar9 >> 4;
    uVar9 = uVar9 | uVar9 >> 8;
    uVar1 = *(int *)(MathUtil::s_multiplyDeBruijnBitPosition +
                    (ulong)((uVar9 | uVar9 >> 0x10) * 0x7c4acdd >> 0x1b) * 4) + 1;
    uVar9 = (*(int *)(this + 0xc) -
            *(int *)(MathUtil::s_multiplyDeBruijnBitPosition +
                    (ulong)((uVar9 | uVar9 >> 0x10) * 0x7c4acdd >> 0x1b) * 4)) - 2;
    uVar8 = (int)uVar8 >> (uVar1 & 0x1f);
    uVar19 = (int)uVar19 >> (uVar1 & 0x1f);
  }
  *param_2 = uVar9;
  uVar1 = (uVar8 | uVar8 << 8) & 0xff00ff;
  *param_3 = uVar8;
  uVar8 = (uVar19 | uVar19 << 8) & 0xff00ff;
  *param_4 = uVar19;
  uVar19 = (uVar1 | uVar1 << 4) & 0xf0f0f0f;
  uVar8 = (uVar8 | uVar8 << 4) & 0xf0f0f0f;
  uVar1 = *(uint *)(this + 0xc);
  uVar19 = (uVar19 | uVar19 << 2) & 0x33333333;
  uVar8 = (uVar8 | uVar8 << 2) & 0x33333333;
  uVar8 = ((uVar19 | uVar19 << 1) & 0x55555555 | (uVar8 << 2 | uVar8 << 1) & 0xaaaaaaaa) <<
          (ulong)((uVar1 + ~uVar9) * 2 & 0x1f);
  uVar9 = uVar8 + uVar9;
  if (2 < uVar1) {
    uVar19 = uVar1 - 2;
    if (uVar19 < 8) {
      uVar7 = 1;
    }
    else {
      iVar13 = 0;
      iVar14 = 0;
      uVar2 = uVar19 & 0xfffffff8;
      iVar15 = 0;
      iVar20 = 0;
      iVar21 = 0;
      iVar22 = 0;
      uVar7 = uVar2 | 1;
      iVar12 = 0;
      uVar3 = uVar2;
      iVar6 = 1;
      iVar29 = 2;
      iVar30 = 3;
      iVar31 = 4;
      do {
        auVar35._0_4_ = iVar6 * 2;
        auVar35._4_4_ = iVar29 * 2;
        auVar35._8_4_ = iVar30 * 2;
        auVar35._12_4_ = iVar31 * 2;
        uVar3 = uVar3 - 8;
        auVar34 = NEON_neg(auVar35,4);
        auVar32._0_4_ = iVar6 * -2 + -8;
        auVar32._4_4_ = iVar29 * -2 + -8;
        auVar32._8_4_ = iVar30 * -2 + -8;
        auVar32._12_4_ = iVar31 * -2 + -8;
        auVar33._4_4_ = uVar8;
        auVar33._0_4_ = uVar8;
        auVar33._8_4_ = uVar8;
        auVar33._12_4_ = uVar8;
        auVar35 = NEON_ushl(auVar33,auVar34,4);
        auVar34._4_4_ = uVar8;
        auVar34._0_4_ = uVar8;
        auVar34._8_4_ = uVar8;
        auVar34._12_4_ = uVar8;
        auVar33 = NEON_ushl(auVar34,auVar32,4);
        uVar9 = auVar35._0_4_ + uVar9;
        iVar12 = auVar35._4_4_ + iVar12;
        iVar13 = auVar35._8_4_ + iVar13;
        iVar14 = auVar35._12_4_ + iVar14;
        iVar15 = auVar33._0_4_ + iVar15;
        iVar20 = auVar33._4_4_ + iVar20;
        iVar21 = auVar33._8_4_ + iVar21;
        iVar22 = auVar33._12_4_ + iVar22;
        iVar6 = iVar6 + 8;
        iVar29 = iVar29 + 8;
        iVar30 = iVar30 + 8;
        iVar31 = iVar31 + 8;
      } while (uVar3 != 0);
      uVar9 = iVar15 + uVar9 + iVar20 + iVar12 + iVar21 + iVar13 + iVar22 + iVar14;
      if (uVar19 == uVar2) goto LAB_008c156c;
    }
    uVar19 = uVar7 << 1;
    iVar6 = ~uVar7 + uVar1;
    do {
      iVar6 = iVar6 + -1;
      uVar9 = (uVar8 >> (ulong)(uVar19 & 0x1f)) + uVar9;
      uVar19 = uVar19 + 2;
    } while (iVar6 != 0);
  }
LAB_008c156c:
  return *(long *)this + (ulong)uVar9 * 0x48;
}


