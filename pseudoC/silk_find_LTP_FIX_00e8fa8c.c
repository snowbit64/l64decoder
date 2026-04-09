// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_find_LTP_FIX
// Entry Point: 00e8fa8c
// Size: 856 bytes
// Signature: undefined silk_find_LTP_FIX(void)


void silk_find_LTP_FIX(undefined (*param_1) [16],int *param_2,long param_3,int *param_4,int param_5,
                      uint param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  ulong uVar27;
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  int local_78;
  int local_74;
  int local_70;
  int iStack_6c;
  long local_68;
  
  lVar23 = tpidr_el0;
  local_68 = *(long *)(lVar23 + 0x28);
  if (0 < (int)param_6) {
    uVar27 = (ulong)param_6;
    do {
      lVar26 = param_3 + (long)(-2 - *param_4) * 2;
      silk_sum_sqr_shift(&local_74,&iStack_6c,param_3,param_5 + 5);
      silk_corrMatrix_FIX(lVar26,param_5,5,param_1,&local_78,&local_70,param_7);
      uVar22 = iStack_6c - local_70;
      iVar24 = iStack_6c;
      if ((int)uVar22 < 1) {
        if ((int)uVar22 < 0) {
          local_74 = local_74 >> (-uVar22 & 0x1f);
          iVar24 = local_70;
        }
      }
      else {
        auVar32._4_4_ = uVar22;
        auVar32._0_4_ = uVar22;
        auVar32._8_4_ = uVar22;
        auVar32._12_4_ = uVar22;
        auVar30 = param_1[1];
        auVar28 = NEON_neg(auVar32,4);
        auVar29 = NEON_sshl(*param_1,auVar28,4);
        *(int *)param_1[6] = *(int *)param_1[6] >> (uVar22 & 0x1f);
        auVar32 = param_1[3];
        auVar30 = NEON_sshl(auVar30,auVar28,4);
        auVar31 = NEON_sshl(param_1[2],auVar28,4);
        *(long *)(*param_1 + 8) = auVar29._8_8_;
        *(long *)*param_1 = auVar29._0_8_;
        *(long *)(param_1[1] + 8) = auVar30._8_8_;
        *(long *)param_1[1] = auVar30._0_8_;
        auVar30 = param_1[5];
        auVar32 = NEON_sshl(auVar32,auVar28,4);
        auVar29 = NEON_sshl(param_1[4],auVar28,4);
        *(long *)(param_1[2] + 8) = auVar31._8_8_;
        *(long *)param_1[2] = auVar31._0_8_;
        *(long *)(param_1[3] + 8) = auVar32._8_8_;
        *(long *)param_1[3] = auVar32._0_8_;
        auVar30 = NEON_sshl(auVar30,auVar28,4);
        local_78 = local_78 >> (uVar22 & 0x1f);
        *(long *)(param_1[4] + 8) = auVar29._8_8_;
        *(long *)param_1[4] = auVar29._0_8_;
        *(long *)(param_1[5] + 8) = auVar30._8_8_;
        *(long *)param_1[5] = auVar30._0_8_;
      }
      silk_corrVector_FIX(lVar26,param_3,param_5,5,param_2,iVar24,param_7);
      iVar7 = *(int *)(param_1[1] + 8);
      iVar1 = *(int *)(param_1[1] + 8);
      iVar8 = *(int *)param_1[2];
      iVar2 = *(int *)param_1[2];
      iVar9 = *(int *)(param_1[2] + 8);
      iVar25 = (int)((ulong)((long)local_78 * 0x7ae) >> 0x10);
      iVar24 = local_74;
      if (local_74 < iVar25 + 1) {
        iVar24 = iVar25 + 1;
      }
      lVar26 = (long)iVar24;
      iVar24 = *(int *)(param_1[2] + 8);
      iVar10 = *(int *)param_1[3];
      iVar25 = *(int *)param_1[3];
      iVar11 = *(int *)(param_1[3] + 8);
      uVar21 = 0;
      if (lVar26 != 0) {
        uVar21 = (undefined4)(((long)*(int *)*param_1 << 0x11) / lVar26);
      }
      iVar3 = *(int *)(param_1[3] + 8);
      iVar12 = *(int *)param_1[4];
      iVar4 = *(int *)param_1[4];
      iVar13 = *(int *)(param_1[4] + 8);
      iVar5 = *(int *)(param_1[4] + 8);
      iVar14 = *(int *)param_1[5];
      uVar20 = 0;
      if (lVar26 != 0) {
        uVar20 = (undefined4)(((long)*(int *)(*param_1 + 8) << 0x11) / lVar26);
      }
      param_4 = param_4 + 1;
      uVar19 = 0;
      if (lVar26 != 0) {
        uVar19 = (undefined4)(((long)*(int *)param_1[1] << 0x11) / lVar26);
      }
      iVar6 = *(int *)(*param_1 + 8);
      iVar15 = *(int *)param_1[1];
      *(undefined4 *)*param_1 = uVar21;
      uVar21 = 0;
      if (lVar26 != 0) {
        uVar21 = (undefined4)(((long)iVar6 << 0x11) / lVar26);
      }
      *(undefined4 *)(*param_1 + 4) = uVar20;
      iVar6 = *(int *)param_1[5];
      iVar16 = *(int *)(param_1[5] + 8);
      uVar20 = 0;
      if (lVar26 != 0) {
        uVar20 = (undefined4)(((long)iVar15 << 0x11) / lVar26);
      }
      iVar15 = *(int *)(param_1[5] + 8);
      iVar17 = *(int *)param_1[6];
      *(undefined4 *)(*param_1 + 8) = uVar21;
      *(undefined4 *)(*param_1 + 0xc) = uVar20;
      iVar18 = *(int *)param_1[6];
      uVar21 = 0;
      if (lVar26 != 0) {
        uVar21 = (undefined4)(((long)iVar7 << 0x11) / lVar26);
      }
      uVar20 = 0;
      if (lVar26 != 0) {
        uVar20 = (undefined4)(((long)iVar1 << 0x11) / lVar26);
      }
      *(undefined4 *)param_1[1] = uVar19;
      *(undefined4 *)(param_1[1] + 4) = uVar21;
      uVar21 = 0;
      if (lVar26 != 0) {
        uVar21 = (undefined4)(((long)iVar8 << 0x11) / lVar26);
      }
      uVar19 = 0;
      if (lVar26 != 0) {
        uVar19 = (undefined4)(((long)iVar2 << 0x11) / lVar26);
      }
      *(undefined4 *)(param_1[1] + 8) = uVar20;
      *(undefined4 *)(param_1[1] + 0xc) = uVar21;
      uVar21 = 0;
      if (lVar26 != 0) {
        uVar21 = (undefined4)(((long)iVar9 << 0x11) / lVar26);
      }
      uVar20 = 0;
      if (lVar26 != 0) {
        uVar20 = (undefined4)(((long)iVar24 << 0x11) / lVar26);
      }
      *(undefined4 *)param_1[2] = uVar19;
      *(undefined4 *)(param_1[2] + 4) = uVar21;
      uVar21 = 0;
      if (lVar26 != 0) {
        uVar21 = (undefined4)(((long)iVar10 << 0x11) / lVar26);
      }
      uVar19 = 0;
      if (lVar26 != 0) {
        uVar19 = (undefined4)(((long)iVar25 << 0x11) / lVar26);
      }
      *(undefined4 *)(param_1[2] + 8) = uVar20;
      *(undefined4 *)(param_1[2] + 0xc) = uVar21;
      uVar21 = 0;
      if (lVar26 != 0) {
        uVar21 = (undefined4)(((long)iVar11 << 0x11) / lVar26);
      }
      uVar20 = 0;
      if (lVar26 != 0) {
        uVar20 = (undefined4)(((long)iVar3 << 0x11) / lVar26);
      }
      *(undefined4 *)param_1[3] = uVar19;
      *(undefined4 *)(param_1[3] + 4) = uVar21;
      uVar21 = 0;
      if (lVar26 != 0) {
        uVar21 = (undefined4)(((long)iVar12 << 0x11) / lVar26);
      }
      uVar19 = 0;
      if (lVar26 != 0) {
        uVar19 = (undefined4)(((long)iVar4 << 0x11) / lVar26);
      }
      *(undefined4 *)(param_1[3] + 8) = uVar20;
      *(undefined4 *)(param_1[3] + 0xc) = uVar21;
      uVar21 = 0;
      if (lVar26 != 0) {
        uVar21 = (undefined4)(((long)iVar13 << 0x11) / lVar26);
      }
      uVar20 = 0;
      if (lVar26 != 0) {
        uVar20 = (undefined4)(((long)iVar5 << 0x11) / lVar26);
      }
      *(undefined4 *)param_1[4] = uVar19;
      *(undefined4 *)(param_1[4] + 4) = uVar21;
      uVar21 = 0;
      if (lVar26 != 0) {
        uVar21 = (undefined4)(((long)iVar14 << 0x11) / lVar26);
      }
      uVar19 = 0;
      if (lVar26 != 0) {
        uVar19 = (undefined4)(((long)iVar6 << 0x11) / lVar26);
      }
      *(undefined4 *)(param_1[4] + 8) = uVar20;
      *(undefined4 *)(param_1[4] + 0xc) = uVar21;
      uVar27 = uVar27 - 1;
      uVar21 = 0;
      if (lVar26 != 0) {
        uVar21 = (undefined4)(((long)iVar16 << 0x11) / lVar26);
      }
      uVar20 = 0;
      if (lVar26 != 0) {
        uVar20 = (undefined4)(((long)iVar15 << 0x11) / lVar26);
      }
      *(undefined4 *)param_1[5] = uVar19;
      *(undefined4 *)(param_1[5] + 4) = uVar21;
      uVar21 = 0;
      if (lVar26 != 0) {
        uVar21 = (undefined4)(((long)iVar17 << 0x11) / lVar26);
      }
      uVar19 = 0;
      if (lVar26 != 0) {
        uVar19 = (undefined4)(((long)iVar18 << 0x11) / lVar26);
      }
      *(undefined4 *)(param_1[5] + 8) = uVar20;
      *(undefined4 *)(param_1[5] + 0xc) = uVar21;
      *(undefined4 *)param_1[6] = uVar19;
      param_1 = (undefined (*) [16])(param_1[6] + 4);
      iVar24 = 0;
      if (lVar26 != 0) {
        iVar24 = (int)(((long)*param_2 << 0x11) / lVar26);
      }
      iVar1 = 0;
      if (lVar26 != 0) {
        iVar1 = (int)(((long)param_2[2] << 0x11) / lVar26);
      }
      iVar2 = 0;
      if (lVar26 != 0) {
        iVar2 = (int)(((long)param_2[2] << 0x11) / lVar26);
      }
      *param_2 = iVar24;
      param_2[1] = iVar1;
      iVar24 = 0;
      if (lVar26 != 0) {
        iVar24 = (int)(((long)param_2[4] << 0x11) / lVar26);
      }
      iVar1 = 0;
      if (lVar26 != 0) {
        iVar1 = (int)(((long)param_2[4] << 0x11) / lVar26);
      }
      param_2[2] = iVar2;
      param_2[3] = iVar24;
      param_2[4] = iVar1;
      param_2 = param_2 + 5;
      param_3 = param_3 + (long)param_5 * 2;
    } while (uVar27 != 0);
  }
  if (*(long *)(lVar23 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


