// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_NLSF_encode
// Entry Point: 00e94744
// Size: 864 bytes
// Signature: undefined silk_NLSF_encode(void)


void silk_NLSF_encode(undefined *param_1,short *param_2,short *param_3,short *param_4,int param_5,
                     uint param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  uint uVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  short *psVar22;
  short *psVar23;
  short *psVar24;
  int iVar25;
  ulong uVar26;
  long lVar27;
  int aiStack_140 [2];
  short asStack_138 [4];
  undefined *local_130;
  long local_128;
  ulong local_120;
  short *local_118;
  short *local_110;
  ulong local_108;
  int local_100;
  int local_fc;
  long local_f8;
  undefined4 *local_f0;
  int local_e4;
  undefined auStack_e0 [32];
  undefined auStack_c0 [16];
  undefined2 auStack_b0 [16];
  undefined2 auStack_90 [16];
  long local_70;
  
  local_128 = tpidr_el0;
  local_70 = *(long *)(local_128 + 0x28);
  uVar26 = (ulong)param_6;
  local_130 = param_1;
  local_118 = param_4;
  local_fc = param_5;
  silk_NLSF_stabilize(param_2,*(undefined8 *)(param_3 + 0x20),(long)param_3[1]);
  uVar15 = (ulong)*param_3;
  lVar27 = (long)&local_130 -
           ((-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar15 & 0xffffffff) << 2) + 0xf &
           0xfffffffffffffff0);
  local_110 = param_2;
  silk_NLSF_VQ(lVar27,param_2,*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 8),uVar15,
               (long)param_3[1]);
  uVar15 = (-(ulong)(param_6 >> 0x1f) & 0xfffffffc00000000 | uVar26 << 2) + 0xf & 0xfffffffffffffff0
  ;
  lVar14 = lVar27 - uVar15;
  local_f8 = lVar14;
  silk_insertion_sort_increasing(lVar27,lVar14,(long)*param_3,uVar26);
  puVar17 = (undefined4 *)(lVar14 - uVar15);
  iVar6 = param_6 << 4;
  local_120 = uVar26;
  local_f0 = puVar17;
  if (0 < (int)param_6) {
    uVar15 = 0;
    local_100 = (local_fc << 0xe) >> 0x10;
    local_108 = uVar26;
    do {
      uVar26 = (ulong)param_3[1];
      iVar12 = *(int *)(local_f8 + uVar15 * 4);
      if (0 < (long)uVar26) {
        lVar14 = (long)iVar12 * uVar26;
        uVar26 = uVar26 & 0xffffffff;
        psVar22 = (short *)(*(long *)(param_3 + 8) + lVar14 * 2);
        puVar20 = auStack_b0;
        puVar21 = auStack_90;
        pbVar18 = (byte *)(*(long *)(param_3 + 4) + lVar14);
        psVar23 = local_110;
        psVar24 = local_118;
        do {
          sVar4 = *psVar22;
          psVar22 = psVar22 + 1;
          sVar5 = *psVar24;
          psVar24 = psVar24 + 1;
          iVar8 = (int)sVar4 * (int)sVar4;
          iVar13 = -(int)sVar5;
          if (-1 < sVar5) {
            iVar13 = (int)sVar5;
          }
          iVar25 = (int)LZCOUNT(iVar8);
          iVar9 = (int)LZCOUNT(iVar13) - iVar25;
          iVar8 = iVar8 << (ulong)(iVar25 - 1U & 0x1f);
          uVar19 = -iVar9 - 8;
          iVar25 = iVar8 >> 0x10;
          iVar13 = (int)sVar5 << (ulong)((int)LZCOUNT(iVar13) - 1U & 0x1f);
          sVar5 = 0;
          if (iVar25 != 0) {
            sVar5 = (short)(0x1fffffff / iVar25);
          }
          lVar14 = (long)sVar5 * (long)iVar13;
          uVar2 = -0x80000000 >> (uVar19 & 0x1f);
          uVar1 = (int)((ulong)((long)sVar5 *
                               (long)(int)(iVar13 - ((uint)((ulong)((lVar14 >> 0x10) * (long)iVar8)
                                                           >> 0x1d) & 0xfffffff8))) >> 0x10) +
                  (int)((ulong)lVar14 >> 0x10);
          uVar7 = 0x7fffffff >> (ulong)(uVar19 & 0x1f);
          uVar3 = (undefined2)((int)uVar1 >> (iVar9 + 8U & 0x1f));
          if (0x34 < iVar9 + 0x1dU) {
            uVar3 = 0;
          }
          if ((int)uVar2 <= (int)uVar1) {
            uVar2 = uVar1;
          }
          *puVar21 = (short)((uint)((int)(short)(*psVar23 + (ushort)*pbVar18 * -0x80) * (int)sVar4)
                            >> 0xe);
          if ((int)uVar1 <= (int)uVar7) {
            uVar7 = uVar2;
          }
          if (iVar9 == -9 || iVar9 + 9 < 0 != SCARRY4(iVar9,9)) {
            uVar3 = (short)(uVar7 << (ulong)(uVar19 & 0x1f));
          }
          uVar26 = uVar26 - 1;
          *puVar20 = uVar3;
          puVar20 = puVar20 + 1;
          puVar21 = puVar21 + 1;
          pbVar18 = pbVar18 + 1;
          psVar23 = psVar23 + 1;
        } while (uVar26 != 0);
      }
      silk_NLSF_unpack(auStack_e0,auStack_c0,param_3,iVar12);
      iVar13 = local_fc;
      uVar16 = *(undefined8 *)(param_3 + 0x1c);
      sVar5 = param_3[2];
      sVar4 = param_3[3];
      *(short *)((long)puVar17 + (-8 - (long)iVar6)) = param_3[1];
      *(int *)((long)puVar17 + (-0x10 - (long)iVar6)) = iVar13;
      iVar13 = silk_NLSF_del_dec_quant
                         ((long)puVar17 + ((ulong)(uint)((int)uVar15 << 4) - (long)iVar6),auStack_90
                          ,auStack_b0,auStack_c0,auStack_e0,uVar16,(long)sVar5,sVar4);
      pbVar18 = (byte *)(*(long *)(param_3 + 0xc) + (long)(param_7 >> 1) * (long)*param_3);
      if (iVar12 == 0) {
        uVar19 = 0x100;
      }
      else {
        pbVar18 = pbVar18 + iVar12;
        uVar19 = (uint)pbVar18[-1];
      }
      iVar12 = silk_lin2log(uVar19 - *pbVar18);
      local_f0[uVar15] = iVar13 + (iVar12 * -0x10000 + 0x4000000 >> 0x10) * local_100;
      uVar15 = uVar15 + 1;
    } while (uVar15 != local_108);
  }
  puVar11 = local_f0;
  silk_insertion_sort_increasing(local_f0,&local_e4,local_120,1);
  puVar10 = local_130;
  *local_130 = (char)*(undefined4 *)(local_f8 + (long)local_e4 * 4);
  memcpy(local_130 + 1,(void *)((long)puVar17 + ((long)local_e4 * 0x10 - (long)iVar6)),
         (long)param_3[1]);
  silk_NLSF_decode(local_110,puVar10,param_3);
  if (*(long *)(local_128 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*puVar11);
}


