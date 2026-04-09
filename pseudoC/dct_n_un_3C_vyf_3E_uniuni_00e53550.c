// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dct_n___un_3C_vyf_3E_uniuni
// Entry Point: 00e53550
// Size: 856 bytes
// Signature: undefined dct_n___un_3C_vyf_3E_uniuni(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dct_n___un_3C_vyf_3E_uniuni(undefined param_1 [16],long param_2,int param_3,uint param_4)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  float fVar16;
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined8 local_190 [32];
  undefined8 local_90 [2];
  float local_80 [20];
  
  if (0x10 < (int)param_4) {
    puts("src/kernel_astc.ispc:570:5: Assertion failed: n <= 16 \n");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  fVar16 = (float)param_4;
  if (-1 < (int)param_4) {
    iVar8 = 0;
    auVar23 = ZEXT416((uint)(fVar16 * 4.0));
    auVar17 = NEON_frecpe(auVar23,4);
    auVar19 = NEON_frecps(auVar23,auVar17,4);
    auVar20._0_4_ = auVar17._0_4_ * auVar19._0_4_;
    auVar20._4_4_ = auVar17._4_4_ * auVar19._4_4_;
    auVar20._8_4_ = auVar17._8_4_ * auVar19._8_4_;
    auVar20._12_4_ = auVar17._12_4_ * auVar19._12_4_;
    auVar23 = NEON_frecps(auVar23,auVar20,4);
    do {
      fVar25 = auVar20._0_4_ * auVar23._0_4_ * (float)iVar8;
      fVar26 = (fVar25 + fVar25) * 3.141593;
      fVar27 = fVar26 * 0.6366197;
      fVar25 = (float)((uint)fVar27 & 0x80000000 ^ (uint)(ABS(fVar27) + 8388608.0 + -8388608.0));
      fVar28 = -1.0;
      if (fVar25 <= fVar27) {
        fVar28 = 0.0;
      }
      fVar28 = fVar28 + fVar25;
      fVar25 = (float)NEON_fmadd(fVar28,0xbfc90fdb,fVar26);
      uVar2 = (int)fVar28 & 3;
      bVar7 = (uVar2 | 2) != 2;
      uVar29 = 0xb48b634d;
      uVar30 = 0x37cfab9c;
      if (bVar7) {
        uVar29 = 0xb2d70013;
        uVar30 = 0x363938a8;
      }
      fVar28 = fVar25 * fVar25;
      uVar29 = NEON_fmadd(fVar28,uVar29,uVar30);
      uVar30 = 0xbab60981;
      if (bVar7) {
        uVar30 = 0xb9501096;
      }
      uVar29 = NEON_fmadd(fVar28,uVar29,uVar30);
      uVar30 = 0x3d2aaaa4;
      if (bVar7) {
        uVar30 = 0x3c088898;
      }
      uVar29 = NEON_fmadd(fVar28,uVar29,uVar30);
      uVar30 = 0xbf000000;
      if (bVar7) {
        uVar30 = 0xbe2aaaab;
      }
      uVar30 = NEON_fmadd(fVar28,uVar29,uVar30);
      fVar26 = (float)NEON_fmadd(fVar28,uVar30,0x3f800000);
      fVar28 = 1.0;
      if (bVar7) {
        fVar28 = fVar25;
      }
      fVar25 = -(fVar28 * fVar26);
      if (1 < uVar2 - 1) {
        fVar25 = fVar28 * fVar26;
      }
      lVar14 = (long)iVar8;
      iVar8 = iVar8 + 1;
      local_80[lVar14] = fVar25;
    } while (iVar8 <= (int)param_4);
  }
  auVar17 = ZEXT416((uint)SQRT(fVar16));
  auVar23 = ZEXT416((uint)SQRT(fVar16 * 0.5));
  auVar19 = NEON_frecpe(auVar17,4);
  auVar20 = NEON_frecpe(auVar23,4);
  auVar22 = NEON_frecps(auVar17,auVar19,4);
  auVar24 = NEON_frecps(auVar23,auVar20,4);
  auVar18._0_4_ = auVar19._0_4_ * auVar22._0_4_;
  auVar18._4_4_ = auVar19._4_4_ * auVar22._4_4_;
  auVar18._8_4_ = auVar19._8_4_ * auVar22._8_4_;
  auVar18._12_4_ = auVar19._12_4_ * auVar22._12_4_;
  auVar19._0_4_ = auVar20._0_4_ * auVar24._0_4_;
  auVar19._4_4_ = auVar20._4_4_ * auVar24._4_4_;
  auVar19._8_4_ = auVar20._8_4_ * auVar24._8_4_;
  auVar19._12_4_ = auVar20._12_4_ * auVar24._12_4_;
  auVar17 = NEON_frecps(auVar17,auVar18,4);
  auVar23 = NEON_frecps(auVar23,auVar19,4);
  local_90[0] = CONCAT44(auVar19._0_4_ * auVar23._0_4_,auVar18._0_4_ * auVar17._0_4_);
  if (0 < (int)param_4) {
    iVar8 = 0;
    uVar10 = 0;
    uVar9 = (ulong)param_4;
    do {
      auVar23 = *(undefined (*) [16])(param_2 + (long)iVar8 * 0x10);
      iVar8 = iVar8 + param_3;
      local_190[uVar10 * 2 + 1] = auVar23._8_8_;
      local_190[uVar10 * 2] = auVar23._0_8_;
      uVar10 = uVar10 + 1;
    } while (uVar9 != uVar10);
    if (0 < (int)param_4) {
      iVar8 = 0;
      uVar10 = 0;
      uVar15 = (uint)(byte)(param_1[0] & SUB161(_DAT_004c4480,0)) +
               (uint)(byte)(param_1[4] & SUB161(_DAT_004c4480,4)) +
               (uint)(byte)(param_1[8] & SUB161(_DAT_004c4480,8)) +
               (uint)(byte)(param_1[12] & SUB161(_DAT_004c4480,0xc));
      iVar4 = param_4 * 4;
      uVar2 = param_4 * 2;
      do {
        uVar11 = 0;
        uVar13 = uVar10 & 0xffffffff;
        auVar23 = ZEXT816(0);
        do {
          iVar6 = 0;
          iVar12 = (int)uVar13;
          if (iVar4 != 0) {
            iVar6 = iVar12 / iVar4;
          }
          uVar5 = iVar12 - iVar6 * iVar4;
          uVar3 = iVar4 - uVar5;
          if (uVar5 == uVar2 || (int)(uVar5 + param_4 * -2) < 0 != SBORROW4(uVar5,uVar2)) {
            uVar3 = uVar5;
          }
          uVar5 = uVar2 - uVar3;
          if ((int)uVar3 <= (int)param_4) {
            uVar5 = uVar3;
          }
          if ((int)param_4 < (int)uVar5) {
            puts("src/kernel_astc.ispc:591:13: Assertion failed: e <= n \n");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          auVar17 = NEON_cmgt(ZEXT416(uVar3),ZEXT416(param_4),4);
          fVar16 = local_80[(int)uVar5];
          auVar24._4_4_ = fVar16;
          auVar24._0_4_ = fVar16;
          auVar24._8_4_ = fVar16;
          auVar24._12_4_ = fVar16;
          auVar17._4_4_ = auVar17._0_4_;
          auVar17._8_4_ = auVar17._0_4_;
          auVar17._12_4_ = auVar17._0_4_;
          auVar21._0_4_ = -fVar16;
          auVar21._4_4_ = -fVar16;
          auVar21._8_4_ = -fVar16;
          auVar21._12_4_ = -fVar16;
          auVar19 = NEON_bsl(auVar17,auVar21,auVar24,1);
          auVar17 = *(undefined (*) [16])(local_190 + uVar11 * 2);
          auVar22._0_4_ = auVar23._0_4_ + auVar17._0_4_ * auVar19._0_4_;
          auVar22._4_4_ = auVar23._4_4_ + auVar17._4_4_ * auVar19._4_4_;
          auVar22._8_4_ = auVar23._8_4_ + auVar17._8_4_ * auVar19._8_4_;
          auVar22._12_4_ = auVar23._12_4_ + auVar17._12_4_ * auVar19._12_4_;
          uVar11 = uVar11 + 1;
          uVar13 = (ulong)(uint)(iVar12 + iVar8);
          auVar23 = auVar22;
        } while (uVar9 != uVar11);
        fVar16 = *(float *)((ulong)local_90 | (ulong)(uVar10 != 0) << 2);
        pfVar1 = (float *)(param_2 + (long)((int)uVar10 * param_3) * 0x10);
        if ((uVar15 & 1) != 0) {
          *pfVar1 = auVar22._0_4_ * fVar16;
        }
        if ((uVar15 >> 1 & 1) != 0) {
          pfVar1[1] = auVar22._4_4_ * fVar16;
        }
        if ((uVar15 >> 2 & 1) != 0) {
          pfVar1[2] = auVar22._8_4_ * fVar16;
        }
        if ((uVar15 >> 3 & 1) != 0) {
          pfVar1[3] = auVar22._12_4_ * fVar16;
        }
        uVar10 = uVar10 + 1;
        iVar8 = iVar8 + 2;
      } while (uVar10 != uVar9);
    }
  }
  return;
}


