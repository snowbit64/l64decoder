// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e75068
// Entry Point: 00e75068
// Size: 1804 bytes
// Signature: undefined FUN_00e75068(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)


ulong FUN_00e75068(int *param_1,short *param_2,ulong param_3,uint param_4,uint param_5,
                  short *param_6,int param_7,undefined4 param_8,uint param_9)

{
  byte *pbVar1;
  short sVar2;
  short *psVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  short *psVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  undefined auStack_88 [4];
  short local_84;
  short sStack_80;
  uint local_7c;
  uint uStack_78;
  int local_74;
  uint local_6c;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  uVar23 = (ulong)param_5;
  lVar15 = *(long *)(param_1 + 2);
  lVar4 = *(long *)(lVar15 + 0x88);
  lVar16 = (long)*(short *)(*(long *)(lVar15 + 0x80) +
                           (long)(param_1[4] + *(int *)(lVar15 + 8) * (param_7 + 1)) * 2);
  uVar14 = (uint)param_3;
  local_6c = param_4;
  if (param_7 == -1) {
    lVar15 = (long)*(short *)(*(long *)(lVar15 + 0x80) + (long)param_1[4] * 2);
    iVar13 = param_4 - 1;
    pbVar1 = (byte *)(lVar4 + lVar15);
    uVar21 = (ulong)*pbVar1 + 1 >> 1;
    uVar20 = (uint)uVar21;
    uVar22 = uVar20;
    if (iVar13 <= (int)(uint)pbVar1[uVar21]) {
      uVar22 = 0;
    }
    uVar12 = (uint)*pbVar1;
    if (iVar13 <= (int)(uint)pbVar1[uVar21]) {
      uVar12 = uVar20;
    }
    uVar20 = uVar22 + uVar12 + 1 >> 1;
    if (iVar13 <= (int)(uint)pbVar1[uVar20]) {
      uVar12 = uVar20;
      uVar20 = uVar22;
    }
    uVar22 = uVar20 + uVar12 + 1 >> 1;
    if (iVar13 <= (int)(uint)pbVar1[uVar22]) {
      uVar12 = uVar22;
      uVar22 = uVar20;
    }
    uVar20 = uVar22 + uVar12 + 1 >> 1;
    if (iVar13 <= (int)(uint)pbVar1[uVar20]) {
      uVar12 = uVar20;
      uVar20 = uVar22;
    }
    uVar22 = uVar20 + uVar12 + 1 >> 1;
    if (iVar13 <= (int)(uint)pbVar1[uVar22]) {
      uVar12 = uVar22;
      uVar22 = uVar20;
    }
    uVar20 = uVar22 + uVar12 + 1 >> 1;
    if (iVar13 <= (int)(uint)pbVar1[uVar20]) {
      uVar12 = uVar20;
      uVar20 = uVar22;
    }
    if (uVar20 == 0) {
      if ((int)param_4 <= (int)((uint)pbVar1[uVar12] - iVar13)) {
        uVar12 = 0;
      }
    }
    else if ((int)(iVar13 - (uint)pbVar1[uVar20]) <= (int)((uint)pbVar1[uVar12] - iVar13)) {
      uVar12 = uVar20;
    }
joined_r0x00e753a0:
    if (uVar12 != 0) {
      uVar21 = (ulong)uVar12;
      iVar13 = *(byte *)(lVar4 + lVar15 + uVar21) + 1;
      iVar19 = param_1[10] - iVar13;
      param_1[10] = iVar19;
      if (iVar19 < 0) {
        uVar17 = uVar21;
        do {
          iVar19 = iVar13 + iVar19;
          uVar21 = uVar17 - 1;
          param_1[10] = iVar19;
          if (uVar21 == 0) goto LAB_00e75454;
          iVar13 = *(byte *)(lVar16 + lVar4 + -1 + uVar17) + 1;
          iVar19 = iVar19 - iVar13;
          param_1[10] = iVar19;
          uVar17 = uVar21;
        } while (iVar19 < 0);
        if ((int)uVar21 == 0) goto LAB_00e75454;
      }
      uVar14 = (uint)uVar21;
      if (7 < uVar14) {
        uVar21 = (ulong)((uVar14 & 7 | 8) << (ulong)((uVar14 >> 3) - 1 & 0x1f));
      }
      if (*param_1 == 0) {
        uVar23 = alg_unquant(param_2,param_3 & 0xffffffff,uVar21 & 0xffffffff,param_1[6],uVar23,
                             *(undefined8 *)(param_1 + 8),param_8);
        if (*(long *)(lVar8 + 0x28) == local_68) {
          return uVar23;
        }
      }
      else {
        uVar23 = alg_quant(param_2,param_3 & 0xffffffff,uVar21 & 0xffffffff,param_1[6],uVar23,
                           *(undefined8 *)(param_1 + 8),param_8,param_1[1],param_1[0xf]);
        if (*(long *)(lVar8 + 0x28) == local_68) {
          return uVar23;
        }
      }
      goto LAB_00e75770;
    }
LAB_00e75454:
    if (param_1[1] == 0) {
      uVar12 = 0;
    }
    else {
      uVar22 = (int)(1L << (uVar23 & 0x3f)) - 1;
      uVar12 = uVar22 & param_9;
      param_9 = uVar12;
      if (uVar12 == 0) {
        memset(param_2,0,-(param_3 >> 0x1f & 1) & 0xfffffffe00000000 | (param_3 & 0xffffffff) << 1);
      }
      else {
        if (param_6 == (short *)0x0) {
          if (0 < (int)uVar14) {
            uVar14 = param_1[0xe];
            uVar23 = param_3 & 0xffffffff;
            psVar18 = param_2;
            do {
              uVar14 = uVar14 * 0x19660d + 0x3c6ef35f;
              uVar23 = uVar23 - 1;
              *psVar18 = (short)((int)uVar14 >> 0x14);
              psVar18 = psVar18 + 1;
            } while (uVar23 != 0);
            goto LAB_00e7571c;
          }
        }
        else {
          uVar22 = uVar12;
          if (0 < (int)uVar14) {
            uVar14 = param_1[0xe];
            uVar23 = param_3 & 0xffffffff;
            psVar18 = param_2;
            do {
              uVar14 = uVar14 * 0x19660d + 0x3c6ef35f;
              sVar2 = 4;
              if ((uVar14 & 0x8000) == 0) {
                sVar2 = -4;
              }
              uVar23 = uVar23 - 1;
              *psVar18 = sVar2 + *param_6;
              psVar18 = psVar18 + 1;
              param_6 = param_6 + 1;
            } while (uVar23 != 0);
LAB_00e7571c:
            param_1[0xe] = uVar14;
          }
        }
        renormalise_vector(param_2,param_3 & 0xffffffff,param_8,param_1[0xf]);
        uVar12 = uVar22;
      }
    }
  }
  else {
    pbVar1 = (byte *)(lVar4 + lVar16);
    bVar5 = *pbVar1;
    if (((int)uVar14 < 3) || ((int)param_4 <= (int)(pbVar1[bVar5] + 0xc))) {
      iVar13 = param_4 - 1;
      uVar21 = (ulong)bVar5 + 1 >> 1;
      uVar20 = (uint)uVar21;
      uVar22 = uVar20;
      if (iVar13 <= (int)(uint)pbVar1[uVar21]) {
        uVar22 = 0;
      }
      uVar12 = (uint)bVar5;
      if (iVar13 <= (int)(uint)pbVar1[uVar21]) {
        uVar12 = uVar20;
      }
      uVar20 = uVar22 + uVar12 + 1 >> 1;
      if (iVar13 <= (int)(uint)pbVar1[uVar20]) {
        uVar12 = uVar20;
        uVar20 = uVar22;
      }
      uVar22 = uVar20 + uVar12 + 1 >> 1;
      if (iVar13 <= (int)(uint)pbVar1[uVar22]) {
        uVar12 = uVar22;
        uVar22 = uVar20;
      }
      uVar20 = uVar22 + uVar12 + 1 >> 1;
      if (iVar13 <= (int)(uint)pbVar1[uVar20]) {
        uVar12 = uVar20;
        uVar20 = uVar22;
      }
      uVar22 = uVar20 + uVar12 + 1 >> 1;
      if (iVar13 <= (int)(uint)pbVar1[uVar22]) {
        uVar12 = uVar22;
        uVar22 = uVar20;
      }
      uVar20 = uVar22 + uVar12 + 1 >> 1;
      if (iVar13 <= (int)(uint)pbVar1[uVar20]) {
        uVar12 = uVar20;
        uVar20 = uVar22;
      }
      lVar15 = lVar16;
      if (uVar20 == 0) {
        if ((int)param_4 <= (int)((uint)pbVar1[uVar12] - iVar13)) {
          uVar12 = uVar20;
        }
      }
      else if ((int)(iVar13 - (uint)pbVar1[uVar20]) <= (int)((uint)pbVar1[uVar12] - iVar13)) {
        uVar12 = uVar20;
      }
      goto joined_r0x00e753a0;
    }
    uVar21 = (ulong)(uVar14 >> 1);
    iVar13 = param_7 + -1;
    psVar18 = param_2 + uVar21;
    if (param_5 == 1) {
      param_9 = param_9 & 1 | param_9 << 1;
      uVar23 = 1;
      uVar22 = 1;
    }
    else {
      uVar22 = (int)(param_5 + 1) >> 1;
    }
    FUN_00e75978(param_1,auStack_88,param_2,psVar18,uVar21,&local_6c,uVar22,uVar23,iVar13,0,&param_9
                );
    uVar20 = param_9;
    if ((1 < (int)param_5) && ((uStack_78 & 0x3fff) != 0)) {
      if ((int)uStack_78 < 0x2001) {
        local_7c = local_7c + ((int)((uVar14 >> 1) << 3) >> (6U - param_7 & 0x1f));
        local_7c = local_7c & (int)local_7c >> 0x1f;
      }
      else {
        local_7c = local_7c - ((int)local_7c >> (5U - param_7 & 0x1f));
      }
    }
    iVar19 = local_6c - local_7c;
    iVar7 = (int)(short)param_8;
    iVar6 = param_1[10] - local_74;
    if (iVar19 < 0) {
      iVar19 = iVar19 + 1;
    }
    param_1[10] = iVar6;
    uVar14 = local_6c;
    if (iVar19 >> 1 <= (int)local_6c) {
      uVar14 = iVar19 >> 1;
    }
    psVar3 = (short *)0x0;
    if (param_6 != (short *)0x0) {
      psVar3 = param_6 + uVar21;
    }
    uVar14 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
    iVar19 = local_6c - uVar14;
    if ((int)uVar14 < iVar19) {
      iVar11 = FUN_00e75068(param_1,psVar18,uVar21,iVar19,uVar22,psVar3,iVar13,
                            sStack_80 * iVar7 + 0x4000U >> 0xf,(int)param_9 >> (uVar22 & 0x1f));
      iVar19 = (param_1[10] - iVar6) + iVar19;
      bVar10 = uStack_78 != 0x4000;
      bVar9 = false;
      if (bVar10) {
        bVar9 = iVar19 + -0x18 < 0;
      }
      iVar6 = iVar19 + -0x18;
      if ((!bVar10 || iVar19 == 0x18) || bVar9 != (bVar10 && SBORROW4(iVar19,0x18))) {
        iVar6 = 0;
      }
      uVar12 = FUN_00e75068(param_1,param_2,uVar21,iVar6 + uVar14,uVar22,param_6,iVar13,
                            local_84 * iVar7 + 0x4000U >> 0xf,uVar20);
      uVar12 = uVar12 | iVar11 << (ulong)((int)param_5 >> 1 & 0x1f);
    }
    else {
      uVar12 = FUN_00e75068(param_1,param_2,uVar21,uVar14,uVar22,param_6,iVar13,
                            local_84 * iVar7 + 0x4000U >> 0xf,param_9);
      bVar10 = uStack_78 != 0;
      iVar6 = (param_1[10] - iVar6) + uVar14;
      bVar9 = false;
      if (bVar10) {
        bVar9 = iVar6 + -0x18 < 0;
      }
      iVar11 = iVar6 + -0x18;
      if ((!bVar10 || iVar6 == 0x18) || bVar9 != (bVar10 && SBORROW4(iVar6,0x18))) {
        iVar11 = 0;
      }
      iVar13 = FUN_00e75068(param_1,psVar18,uVar21,iVar11 + iVar19,uVar22,psVar3,iVar13,
                            sStack_80 * iVar7 + 0x4000U >> 0xf,(int)uVar20 >> (uVar22 & 0x1f));
      uVar12 = iVar13 << (ulong)((int)param_5 >> 1 & 0x1f) | uVar12;
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return (ulong)uVar12;
  }
LAB_00e75770:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


