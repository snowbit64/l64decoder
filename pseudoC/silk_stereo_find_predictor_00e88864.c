// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_stereo_find_predictor
// Entry Point: 00e88864
// Size: 1052 bytes
// Signature: undefined silk_stereo_find_predictor(void)


void silk_stereo_find_predictor
               (uint *param_1,undefined8 param_2,undefined8 param_3,int *param_4,undefined4 param_5,
               int param_6)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  int local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  silk_sum_sqr_shift(&local_64,&local_5c,param_2,param_5);
  silk_sum_sqr_shift(&local_68,&local_60,param_3,param_5);
  uVar9 = local_5c;
  if ((int)local_5c <= (int)local_60) {
    uVar9 = local_60;
  }
  iVar1 = (uVar9 & 1) + uVar9;
  local_64 = (int)local_64 >> (iVar1 - local_5c & 0x1f);
  local_68 = local_68 >> (iVar1 - local_60 & 0x1f);
  if ((int)local_64 < 2) {
    local_64 = 1;
  }
  iVar6 = silk_inner_prod_aligned_scale(param_2,param_3,iVar1,param_5);
  iVar12 = -iVar6;
  if (-1 < iVar6) {
    iVar12 = iVar6;
  }
  uVar9 = -local_64;
  if (-1 < (int)local_64) {
    uVar9 = local_64;
  }
  iVar10 = local_64 << (ulong)((int)LZCOUNT(uVar9) - 1U & 0x1f);
  iVar8 = iVar10 >> 0x10;
  sVar2 = 0;
  if (iVar8 != 0) {
    sVar2 = (short)(0x1fffffff / iVar8);
  }
  iVar8 = (int)LZCOUNT(iVar12) - (int)LZCOUNT(uVar9);
  iVar12 = iVar6 << (ulong)((int)LZCOUNT(iVar12) - 1U & 0x1f);
  lVar14 = (long)sVar2 * (long)iVar12;
  uVar3 = -iVar8 - 0x10;
  uVar11 = -0x80000000 >> (uVar3 & 0x1f);
  uVar7 = 0x7fffffff >> (ulong)(uVar3 & 0x1f);
  uVar9 = (int)((ulong)((long)sVar2 *
                       (long)(int)(iVar12 - ((uint)((ulong)((lVar14 >> 0x10) * (long)iVar10) >> 0x1d
                                                   ) & 0xfffffff8))) >> 0x10) +
          (int)((ulong)lVar14 >> 0x10);
  iVar12 = (int)uVar9 >> (iVar8 + 0x10U & 0x1f);
  if (0x1f < iVar8 + 0x10U) {
    iVar12 = 0;
  }
  if ((int)uVar11 <= (int)uVar9) {
    uVar11 = uVar9;
  }
  if ((int)uVar9 <= (int)uVar7) {
    uVar7 = uVar11;
  }
  if (iVar8 == -0x11 || iVar8 + 0x11 < 0 != SCARRY4(iVar8,0x11)) {
    iVar12 = uVar7 << (ulong)(uVar3 & 0x1f);
  }
  if (iVar12 == -0x4000 || iVar12 + 0x4000 < 0 != SCARRY4(iVar12,0x4000)) {
    iVar12 = -0x4000;
  }
  if (0x3fff < iVar12) {
    iVar12 = 0x4000;
  }
  lVar14 = (long)(short)iVar12 * (long)iVar12;
  iVar10 = (int)((ulong)lVar14 >> 0x10);
  iVar8 = -iVar10;
  if (-1 < iVar10) {
    iVar8 = iVar10;
  }
  if (param_6 <= iVar8) {
    param_6 = iVar8;
  }
  if ((int)local_64 < 1) {
    iVar8 = 0;
  }
  else {
    uVar11 = (uint)LZCOUNT(local_64);
    uVar9 = local_64;
    if (uVar11 - 0x18 != 0) {
      if (local_64 < 0x80) {
        uVar9 = local_64 >> (ulong)(0x38 - uVar11 & 0x1f) |
                local_64 << (ulong)(uVar11 - 0x18 & 0x1f);
      }
      else {
        uVar9 = local_64 << (ulong)(uVar11 + 8 & 0x1f) | local_64 >> (ulong)(0x18 - uVar11 & 0x1f);
      }
    }
    uVar7 = 0xb486;
    if ((LZCOUNT(local_64) & 1U) != 0) {
      uVar7 = 0x8000;
    }
    uVar7 = uVar7 >> (ulong)(uVar11 >> 1);
    iVar8 = uVar7 + (int)(((ulong)(uVar9 & 0x7f) * 0xd5000000000000 >> 0x30) * (ulong)uVar7 >> 0x10)
    ;
  }
  iVar8 = *param_4 +
          (int)((ulong)((long)(short)param_6 *
                       (long)((iVar8 << (ulong)(iVar1 >> 1 & 0x1f)) - *param_4)) >> 0x10);
  uVar9 = (local_68 - ((uint)((ulong)((long)(short)iVar12 * (long)iVar6) >> 0xc) & 0xfffffff0)) +
          ((uint)((ulong)((lVar14 >> 0x10) * (long)(int)local_64) >> 10) & 0xffffffc0);
  *param_4 = iVar8;
  if ((int)uVar9 < 1) {
    iVar12 = 0;
  }
  else {
    uVar13 = LZCOUNT(uVar9);
    uVar11 = (uint)uVar13;
    if (uVar11 - 0x18 != 0) {
      if (uVar9 < 0x80) {
        uVar9 = uVar9 >> (ulong)(0x38 - uVar11 & 0x1f) | uVar9 << (ulong)(uVar11 - 0x18 & 0x1f);
      }
      else {
        uVar9 = uVar9 << (ulong)(uVar11 + 8 & 0x1f) | uVar9 >> (ulong)(0x18 - uVar11 & 0x1f);
      }
    }
    uVar7 = 0xb486;
    if ((uVar13 & 1) != 0) {
      uVar7 = 0x8000;
    }
    uVar7 = uVar7 >> (ulong)(uVar11 >> 1);
    iVar12 = uVar7 + (int)(((ulong)(uVar9 & 0x7f) * 0xd5000000000000 >> 0x30) * (ulong)uVar7 >> 0x10
                          );
  }
  if (iVar8 < 2) {
    iVar8 = 1;
  }
  iVar10 = iVar8 << (ulong)((int)LZCOUNT(iVar8) - 1U & 0x1f);
  iVar1 = param_4[1] +
          (int)((ulong)((long)(short)param_6 *
                       (long)((iVar12 << (ulong)(iVar1 >> 1 & 0x1f)) - param_4[1])) >> 0x10);
  iVar12 = iVar10 >> 0x10;
  iVar6 = -iVar1;
  if (-1 < iVar1) {
    iVar6 = iVar1;
  }
  sVar2 = 0;
  if (iVar12 != 0) {
    sVar2 = (short)(0x1fffffff / iVar12);
  }
  param_4[1] = iVar1;
  iVar12 = (int)LZCOUNT(iVar6) - (int)LZCOUNT(iVar8);
  iVar1 = iVar1 << (ulong)((int)LZCOUNT(iVar6) - 1U & 0x1f);
  lVar14 = (long)sVar2 * (long)iVar1;
  uVar4 = -iVar12 - 0xf;
  uVar11 = -0x80000000 >> (uVar4 & 0x1f);
  uVar9 = (int)((ulong)((long)sVar2 *
                       (long)(int)(iVar1 - ((uint)((ulong)((lVar14 >> 0x10) * (long)iVar10) >> 0x1d)
                                           & 0xfffffff8))) >> 0x10) + (int)((ulong)lVar14 >> 0x10);
  uVar7 = (int)uVar9 >> (iVar12 + 0xfU & 0x1f);
  uVar3 = 0x7fffffff >> (ulong)(uVar4 & 0x1f);
  if (0x1f < iVar12 + 0xfU) {
    uVar7 = 0;
  }
  if ((int)uVar11 <= (int)uVar9) {
    uVar11 = uVar9;
  }
  if ((int)uVar9 <= (int)uVar3) {
    uVar3 = uVar11;
  }
  if (iVar12 == -0x10 || iVar12 + 0x10 < 0 != SCARRY4(iVar12,0x10)) {
    uVar7 = uVar3 << (ulong)(uVar4 & 0x1f);
  }
  uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
  if (0x7ffe < uVar7) {
    uVar7 = 0x7fff;
  }
  *param_1 = uVar7;
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


