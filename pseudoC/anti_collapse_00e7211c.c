// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: anti_collapse
// Entry Point: 00e7211c
// Size: 1252 bytes
// Signature: undefined anti_collapse(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined4 param_12, undefined4 param_13)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void anti_collapse(long param_1,long param_2,long param_3,uint param_4,uint param_5,int param_6,
                  int param_7,int param_8,long param_9,long param_10,long param_11_00,long param_11,
                  uint param_12,undefined4 param_13)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  bool bVar15;
  short sVar16;
  uint uVar17;
  long lVar18;
  short sVar19;
  uint uVar20;
  short sVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined auVar25 [16];
  undefined auVar26 [16];
  int iVar28;
  int iVar29;
  int iVar30;
  undefined auVar27 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  
  auVar14 = _DAT_004c51c0;
  if (param_7 < param_8) {
    uVar7 = 1 << (ulong)(param_4 & 0x1f);
    if ((int)uVar7 < 2) {
      uVar7 = 1;
    }
    uVar3 = param_5;
    if ((int)param_5 < 2) {
      uVar3 = 1;
    }
    uVar2 = uVar7 & 0x7ffffff8;
    lVar23 = (long)param_7;
    do {
      lVar1 = lVar23 + 1;
      uVar9 = (int)*(short *)(*(long *)(param_1 + 0x18) + lVar1 * 2) -
              (int)*(short *)(*(long *)(param_1 + 0x18) + lVar23 * 2);
      uVar17 = 0;
      if (uVar9 != 0) {
        uVar17 = (*(int *)(param_11 + lVar23 * 4) + 1U) / uVar9;
      }
      uVar17 = uVar17 >> (ulong)(param_4 & 0x1f);
      iVar12 = (int)(short)((short)uVar17 * -0x80);
      if (iVar12 < 0x3c00) {
        if (iVar12 < -0x3c00) {
          uVar17 = 0;
        }
        else {
          uVar10 = uVar17 * 0xf800 & 0x3800;
          iVar8 = uVar10 * 2;
          uVar20 = -((int)(uVar17 * -0x800000) >> 0x1a) - 2;
          uVar17 = (((uVar10 * 0x4fb8 >> 0x10) + 0x39e3) * iVar8 + 0x59140000 >> 0x10) * iVar8 +
                   0x3fff0000 >> 0x10;
          if (iVar12 == -0x801 || iVar12 + 0x801 < 0 != SCARRY4(iVar12,0x801)) {
            uVar17 = uVar17 >> (ulong)(uVar20 & 0x1f);
          }
          else {
            uVar17 = uVar17 << (ulong)(-uVar20 & 0x1f);
          }
        }
      }
      else {
        uVar17 = 0x7f000000;
      }
      iVar8 = uVar9 << (ulong)(param_4 & 0x1f);
      uVar10 = 0x1f - (int)LZCOUNT(iVar8);
      iVar12 = (int)uVar17 >> 1;
      if (0x7ffe < iVar12) {
        iVar12 = 0x7fff;
      }
      sVar16 = celt_rsqrt_norm(iVar8 << (ulong)(0xe - (uVar10 & 0xfffffffe) & 0x1f));
      uVar24 = 0;
      iVar12 = (iVar12 << 0xf) >> 0x10;
      do {
        lVar18 = lVar23 + (long)*(int *)(param_1 + 8) * (long)(int)uVar24;
        lVar22 = lVar18 * 2;
        sVar19 = *(short *)(param_10 + lVar22);
        sVar21 = *(short *)(param_11_00 + lVar22);
        if (param_5 == 1) {
          lVar22 = (lVar23 + *(int *)(param_1 + 8)) * 2;
          sVar5 = *(short *)(param_10 + lVar22);
          sVar6 = *(short *)(param_11_00 + lVar22);
          if (sVar19 <= sVar5) {
            sVar19 = sVar5;
          }
          if (sVar21 <= sVar6) {
            sVar21 = sVar6;
          }
        }
        iVar28 = (int)sVar19;
        if ((int)sVar21 <= (int)sVar19) {
          iVar28 = (int)sVar21;
        }
        uVar17 = *(short *)(param_9 + lVar18 * 2) - iVar28;
        uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
        if (uVar17 >> 0xe == 0) {
          uVar20 = 0;
          if ((uVar17 & 0xffff) < 0x3c01) {
            uVar20 = -uVar17 & 0x3ff;
            iVar28 = uVar20 * 0x20;
            uVar11 = -((int)(short)-uVar17 >> 10) - 2;
            uVar20 = (((uVar20 * 0x4fb80 >> 0x10) + 0x39e3) * iVar28 + 0x59140000 >> 0x10) * iVar28
                     + 0x3fff0000 >> 0x10;
            if ((uVar17 & 0xffff) < 0x801) {
              uVar20 = uVar20 << (ulong)(-uVar11 & 0x1f);
            }
            else {
              uVar20 = uVar20 >> (ulong)(uVar11 & 0x1f);
            }
          }
          iVar28 = (int)uVar20 >> 1;
          if (0x3ffe < iVar28) {
            iVar28 = 0x3fff;
          }
          sVar19 = (short)(iVar28 << 1);
        }
        else {
          sVar19 = 0;
        }
        if (param_4 == 3) {
          if (0x5a80 < sVar19) {
            sVar19 = 0x5a81;
          }
          sVar19 = (short)((uint)(sVar19 * 0x5a82) >> 0xe);
        }
        iVar28 = iVar12;
        if (sVar19 <= iVar12) {
          iVar28 = (int)sVar19;
        }
        if (param_4 != 0x1f) {
          lVar18 = param_2 + uVar24 * (long)param_6 * 2 +
                   (long)((int)*(short *)(*(long *)(param_1 + 0x18) + lVar23 * 2) <<
                         (ulong)(param_4 & 0x1f)) * 2;
          lVar22 = uVar24 + lVar23 * (int)param_5;
          if ((int)uVar9 < 1) {
            bVar4 = *(byte *)(param_3 + lVar22);
            if (uVar7 < 8) {
              bVar15 = false;
              uVar17 = 0;
            }
            else {
              auVar25 = ZEXT816(0);
              auVar26 = ZEXT816(0);
              auVar27 = auVar14;
              uVar17 = uVar2;
              do {
                auVar31._0_4_ = auVar27._0_4_ + 4;
                iVar28 = auVar27._4_4_;
                auVar31._4_4_ = iVar28 + 4;
                iVar29 = auVar27._8_4_;
                auVar31._8_4_ = iVar29 + 4;
                iVar30 = auVar27._12_4_;
                auVar31._12_4_ = iVar30 + 4;
                uVar17 = uVar17 - 8;
                auVar32._8_4_ = 1;
                auVar32._0_8_ = 0x100000001;
                auVar32._12_4_ = 1;
                auVar34 = NEON_ushl(auVar32,auVar27,4);
                auVar27._0_4_ = auVar27._0_4_ + 8;
                auVar27._4_4_ = iVar28 + 8;
                auVar27._8_4_ = iVar29 + 8;
                auVar27._12_4_ = iVar30 + 8;
                auVar36._8_4_ = 1;
                auVar36._0_8_ = 0x100000001;
                auVar36._12_4_ = 1;
                auVar32 = NEON_ushl(auVar36,auVar31,4);
                auVar35[0] = auVar34[0] & bVar4;
                auVar35._1_3_ = 0;
                auVar35[4] = auVar34[4] & bVar4;
                auVar35._5_3_ = 0;
                auVar35[8] = auVar34[8] & bVar4;
                auVar35._9_3_ = 0;
                auVar35[12] = auVar34[12] & bVar4;
                auVar35._13_3_ = 0;
                auVar33[0] = auVar32[0] & bVar4;
                auVar33._1_3_ = 0;
                auVar33[4] = auVar32[4] & bVar4;
                auVar33._5_3_ = 0;
                auVar33[8] = auVar32[8] & bVar4;
                auVar33._9_3_ = 0;
                auVar33[12] = auVar32[12] & bVar4;
                auVar33._13_3_ = 0;
                auVar36 = NEON_cmeq(auVar35,0,2);
                auVar32 = NEON_cmeq(auVar33,0,2);
                auVar34._8_4_ = 1;
                auVar34._0_8_ = 0x100000001;
                auVar34._12_4_ = 1;
                auVar25 = NEON_bit(auVar25,auVar34,auVar36,1);
                auVar13._8_4_ = 1;
                auVar13._0_8_ = 0x100000001;
                auVar13._12_4_ = 1;
                auVar26 = NEON_bit(auVar26,auVar13,auVar32,1);
              } while (uVar17 != 0);
              auVar27 = NEON_cmeq(auVar25,0,2);
              auVar27 = NEON_bit(auVar25,auVar26,auVar27,1);
              auVar27 = NEON_cmtst(auVar27,auVar27,4);
              bVar15 = (auVar27._0_2_ & 1 | (auVar27._4_2_ & 1) << 1 | (auVar27._8_2_ & 1) << 2 |
                       (auVar27._12_2_ & 1) << 3) != 0;
              uVar17 = uVar2;
              if (uVar7 == uVar2) goto LAB_00e725ac;
            }
            do {
              uVar20 = uVar17 + 1;
              if ((bVar4 >> (ulong)(uVar17 & 0x1f) & 1) == 0) {
                bVar15 = true;
              }
              uVar17 = uVar20;
            } while (uVar7 != uVar20);
          }
          else {
            bVar15 = false;
            uVar17 = 0;
            sVar19 = (short)(((iVar28 >> 1) * (int)sVar16 >> 0xf) >> ((int)uVar10 >> 1 & 0x1fU));
            do {
              if ((*(byte *)(param_3 + lVar22) >> (ulong)(uVar17 & 0x1f) & 1) == 0) {
                uVar20 = 0;
                do {
                  param_12 = param_12 * 0x660d + 0xf35f;
                  iVar28 = uVar20 << (ulong)(param_4 & 0x1f);
                  uVar20 = uVar20 + 1;
                  sVar21 = -sVar19;
                  if ((param_12 & 0x8000) != 0) {
                    sVar21 = sVar19;
                  }
                  *(short *)(lVar18 + (long)(int)(iVar28 + uVar17) * 2) = sVar21;
                } while (uVar9 != uVar20);
                bVar15 = true;
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 != uVar7);
          }
LAB_00e725ac:
          if (bVar15) {
            renormalise_vector(lVar18,iVar8,0x7fff,param_13);
          }
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 != uVar3);
      lVar23 = lVar1;
    } while (lVar1 != param_8);
  }
  return;
}


