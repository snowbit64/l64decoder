// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_decode_float
// Entry Point: 00e5f194
// Size: 532 bytes
// Signature: undefined opus_decode_float(void)


void opus_decode_float(long param_1,byte *param_2,uint param_3,long param_4,uint param_5,int param_6
                      )

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined (*pauVar9) [16];
  float *pfVar10;
  short *psVar11;
  ulong uVar12;
  uint uVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined4 auStack_80 [4];
  short asStack_70 [4];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((int)param_5 < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    if (((param_2 != (byte *)0x0) && (0 < (int)param_3)) && (param_6 == 0)) {
      iVar1 = *(int *)(param_1 + 0xc);
      if ((*param_2 & 3) == 0) {
        uVar13 = 1;
      }
      else if ((*param_2 & 3) == 3) {
        if (param_3 < 2) {
          uVar5 = 0xfffffffc;
          goto LAB_00e5f374;
        }
        uVar13 = param_2[1] & 0x3f;
      }
      else {
        uVar13 = 2;
      }
      iVar4 = opus_packet_get_samples_per_frame(param_2,iVar1);
      uVar13 = iVar4 * uVar13;
      uVar5 = 0xfffffffc;
      if (((int)uVar13 < 1) || (iVar1 * 3 < (int)(uVar13 * 0x19))) goto LAB_00e5f374;
      if (uVar13 <= param_5) {
        param_5 = uVar13;
      }
    }
    lVar3 = -((long)*(int *)(param_1 + 8) * (long)(int)param_5 * 2 + 0xfU & 0xfffffffffffffff0);
    *(undefined4 *)((long)auStack_80 + lVar3) = 0;
    uVar5 = opus_decode_native(param_1,param_2,param_3,(long)asStack_70 + lVar3,param_5,param_6,0,0)
    ;
    if (0 < (int)uVar5) {
      uVar13 = *(int *)(param_1 + 8) * (int)uVar5;
      uVar6 = (ulong)uVar13;
      if (0 < (int)uVar13) {
        if (uVar13 < 0x10) {
          uVar8 = 0;
        }
        else {
          uVar8 = uVar6 & 0xfffffff0;
          pauVar9 = (undefined (*) [16])(&stack0xffffffffffffffa0 + lVar3);
          pfVar10 = (float *)(param_4 + 0x20);
          uVar12 = uVar8;
          do {
            auVar14 = pauVar9[-1];
            auVar16 = *pauVar9;
            pauVar9 = pauVar9 + 2;
            uVar12 = uVar12 - 0x10;
            auVar17._0_4_ = (int)auVar14._8_2_;
            auVar17._4_4_ = (int)auVar14._10_2_;
            auVar17._8_4_ = (int)auVar14._12_2_;
            auVar17._12_4_ = (int)auVar14._14_2_;
            auVar19._0_4_ = (int)auVar14._0_2_;
            auVar19._4_4_ = (int)auVar14._2_2_;
            auVar19._8_4_ = (int)auVar14._4_2_;
            auVar19._12_4_ = (int)auVar14._6_2_;
            auVar18._0_4_ = (int)auVar16._8_2_;
            auVar18._4_4_ = (int)auVar16._10_2_;
            auVar18._8_4_ = (int)auVar16._12_2_;
            auVar18._12_4_ = (int)auVar16._14_2_;
            auVar15._0_4_ = (int)auVar16._0_2_;
            auVar15._4_4_ = (int)auVar16._2_2_;
            auVar15._8_4_ = (int)auVar16._4_2_;
            auVar15._12_4_ = (int)auVar16._6_2_;
            auVar17 = NEON_scvtf(auVar17,4);
            auVar14 = NEON_scvtf(auVar19,4);
            auVar19 = NEON_scvtf(auVar18,4);
            auVar16 = NEON_scvtf(auVar15,4);
            pfVar10[-4] = auVar14._8_4_ * 3.051758e-05;
            pfVar10[-3] = auVar14._12_4_ * 3.051758e-05;
            pfVar10[-8] = auVar14._0_4_ * 3.051758e-05;
            pfVar10[-7] = auVar14._4_4_ * 3.051758e-05;
            *pfVar10 = auVar17._8_4_ * 3.051758e-05;
            pfVar10[1] = auVar17._12_4_ * 3.051758e-05;
            pfVar10[-4] = auVar17._0_4_ * 3.051758e-05;
            pfVar10[-3] = auVar17._4_4_ * 3.051758e-05;
            pfVar10[4] = auVar16._8_4_ * 3.051758e-05;
            pfVar10[5] = auVar16._12_4_ * 3.051758e-05;
            *pfVar10 = auVar16._0_4_ * 3.051758e-05;
            pfVar10[1] = auVar16._4_4_ * 3.051758e-05;
            pfVar10[8] = auVar19._8_4_ * 3.051758e-05;
            pfVar10[9] = auVar19._12_4_ * 3.051758e-05;
            pfVar10[4] = auVar19._0_4_ * 3.051758e-05;
            pfVar10[5] = auVar19._4_4_ * 3.051758e-05;
            pfVar10 = pfVar10 + 0x10;
          } while (uVar12 != 0);
          if (uVar8 == uVar6) goto LAB_00e5f374;
        }
        lVar7 = uVar6 - uVar8;
        pfVar10 = (float *)(param_4 + uVar8 * 4);
        psVar11 = (short *)((long)asStack_70 + lVar3 + uVar8 * 2);
        do {
          lVar7 = lVar7 + -1;
          *pfVar10 = (float)(int)*psVar11 * 3.051758e-05;
          pfVar10 = pfVar10 + 1;
          psVar11 = psVar11 + 1;
        } while (lVar7 != 0);
      }
    }
  }
LAB_00e5f374:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


