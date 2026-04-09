// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_decode_pulses
// Entry Point: 00e658dc
// Size: 1148 bytes
// Signature: undefined silk_decode_pulses(void)


void silk_decode_pulses(undefined8 param_1,long param_2,long param_3,undefined4 param_4,uint param_5
                       )

{
  undefined8 *puVar1;
  short *psVar2;
  uint uVar3;
  undefined1 *puVar4;
  long lVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  uint *puVar13;
  ulong uVar14;
  int local_110 [20];
  uint local_c0 [20];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  iVar8 = ec_dec_icdf(param_1,silk_rate_levels_iCDF +
                              ((param_3 << 0x20) >> 0x21) + (long)((int)param_3 >> 1) * 8,8);
  uVar3 = (int)param_5 >> 4;
  if ((int)(param_5 & 0xfffffff0) < (int)param_5) {
    uVar3 = uVar3 + 1;
  }
  uVar14 = (ulong)uVar3;
  if (0 < (int)uVar3) {
    uVar10 = 0;
    do {
      local_110[uVar10] = 0;
      uVar9 = ec_dec_icdf(param_1,silk_pulses_per_block_iCDF + (long)iVar8 * 0x12,8);
      if (uVar9 == 0x11) {
        iVar12 = 0;
        do {
          puVar4 = silk_pulses_per_block_iCDF;
          if (iVar12 == 9) {
            puVar4 = silk_pulses_per_block_iCDF + 1;
          }
          iVar12 = iVar12 + 1;
          uVar9 = ec_dec_icdf(param_1,puVar4 + 0xa2,8);
        } while (uVar9 == 0x11);
        local_110[uVar10] = iVar12;
      }
      local_c0[uVar10] = uVar9;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar14);
    if (0 < (int)uVar3) {
      lVar11 = 0;
      puVar13 = local_c0;
      do {
        while( true ) {
          puVar1 = (undefined8 *)(param_2 + (long)((int)lVar11 >> 0xc) * 2);
          if ((int)*puVar13 < 1) break;
          silk_shell_decoder(puVar1,param_1);
          puVar13 = puVar13 + 1;
          lVar11 = lVar11 + 0x10000;
          if (uVar14 * 0x10000 - lVar11 == 0) goto LAB_00e65a34;
        }
        puVar1[1] = 0;
        *puVar1 = 0;
        puVar1[3] = 0;
        puVar1[2] = 0;
        puVar13 = puVar13 + 1;
        lVar11 = lVar11 + 0x10000;
      } while (uVar14 * 0x10000 - lVar11 != 0);
LAB_00e65a34:
      if (0 < (int)uVar3) {
        uVar10 = 0;
        do {
          iVar8 = local_110[uVar10];
          if (0 < iVar8) {
            psVar2 = (short *)(param_2 +
                              (long)(int)(-((uint)uVar10 >> 0xf & 1) & 0xfff00000 |
                                         ((uint)uVar10 & 0xffff) << 4) * 2);
            sVar7 = *psVar2;
            iVar12 = iVar8;
            do {
              sVar6 = ec_dec_icdf(param_1,&silk_lsb_iCDF,8);
              iVar12 = iVar12 + -1;
              sVar7 = sVar6 + sVar7 * 2;
            } while (iVar12 != 0);
            sVar6 = psVar2[1];
            *psVar2 = sVar7;
            iVar12 = iVar8;
            do {
              sVar7 = ec_dec_icdf(param_1,&silk_lsb_iCDF,8);
              iVar12 = iVar12 + -1;
              sVar6 = sVar7 + sVar6 * 2;
            } while (iVar12 != 0);
            sVar7 = psVar2[2];
            psVar2[1] = sVar6;
            iVar12 = iVar8;
            do {
              sVar6 = ec_dec_icdf(param_1,&silk_lsb_iCDF,8);
              iVar12 = iVar12 + -1;
              sVar7 = sVar6 + sVar7 * 2;
            } while (iVar12 != 0);
            sVar6 = psVar2[3];
            psVar2[2] = sVar7;
            iVar12 = iVar8;
            do {
              sVar7 = ec_dec_icdf(param_1,&silk_lsb_iCDF,8);
              iVar12 = iVar12 + -1;
              sVar6 = sVar7 + sVar6 * 2;
            } while (iVar12 != 0);
            sVar7 = psVar2[4];
            psVar2[3] = sVar6;
            iVar12 = iVar8;
            do {
              sVar6 = ec_dec_icdf(param_1,&silk_lsb_iCDF,8);
              iVar12 = iVar12 + -1;
              sVar7 = sVar6 + sVar7 * 2;
            } while (iVar12 != 0);
            sVar6 = psVar2[5];
            psVar2[4] = sVar7;
            iVar12 = iVar8;
            do {
              sVar7 = ec_dec_icdf(param_1,&silk_lsb_iCDF,8);
              iVar12 = iVar12 + -1;
              sVar6 = sVar7 + sVar6 * 2;
            } while (iVar12 != 0);
            sVar7 = psVar2[6];
            psVar2[5] = sVar6;
            iVar12 = iVar8;
            do {
              sVar6 = ec_dec_icdf(param_1,&silk_lsb_iCDF,8);
              iVar12 = iVar12 + -1;
              sVar7 = sVar6 + sVar7 * 2;
            } while (iVar12 != 0);
            sVar6 = psVar2[7];
            psVar2[6] = sVar7;
            iVar12 = iVar8;
            do {
              sVar7 = ec_dec_icdf(param_1,&silk_lsb_iCDF,8);
              iVar12 = iVar12 + -1;
              sVar6 = sVar7 + sVar6 * 2;
            } while (iVar12 != 0);
            sVar7 = psVar2[8];
            psVar2[7] = sVar6;
            iVar12 = iVar8;
            do {
              sVar6 = ec_dec_icdf(param_1,&silk_lsb_iCDF,8);
              iVar12 = iVar12 + -1;
              sVar7 = sVar6 + sVar7 * 2;
            } while (iVar12 != 0);
            sVar6 = psVar2[9];
            psVar2[8] = sVar7;
            iVar12 = iVar8;
            do {
              sVar7 = ec_dec_icdf(param_1,&silk_lsb_iCDF,8);
              iVar12 = iVar12 + -1;
              sVar6 = sVar7 + sVar6 * 2;
            } while (iVar12 != 0);
            sVar7 = psVar2[10];
            psVar2[9] = sVar6;
            iVar12 = iVar8;
            do {
              sVar6 = ec_dec_icdf(param_1,&silk_lsb_iCDF,8);
              iVar12 = iVar12 + -1;
              sVar7 = sVar6 + sVar7 * 2;
            } while (iVar12 != 0);
            sVar6 = psVar2[0xb];
            psVar2[10] = sVar7;
            iVar12 = iVar8;
            do {
              sVar7 = ec_dec_icdf(param_1,&silk_lsb_iCDF,8);
              iVar12 = iVar12 + -1;
              sVar6 = sVar7 + sVar6 * 2;
            } while (iVar12 != 0);
            sVar7 = psVar2[0xc];
            psVar2[0xb] = sVar6;
            iVar12 = iVar8;
            do {
              sVar6 = ec_dec_icdf(param_1,&silk_lsb_iCDF,8);
              iVar12 = iVar12 + -1;
              sVar7 = sVar6 + sVar7 * 2;
            } while (iVar12 != 0);
            sVar6 = psVar2[0xd];
            psVar2[0xc] = sVar7;
            iVar12 = iVar8;
            do {
              sVar7 = ec_dec_icdf(param_1,&silk_lsb_iCDF,8);
              iVar12 = iVar12 + -1;
              sVar6 = sVar7 + sVar6 * 2;
            } while (iVar12 != 0);
            sVar7 = psVar2[0xe];
            psVar2[0xd] = sVar6;
            iVar12 = iVar8;
            do {
              sVar6 = ec_dec_icdf(param_1,&silk_lsb_iCDF,8);
              iVar12 = iVar12 + -1;
              sVar7 = sVar6 + sVar7 * 2;
            } while (iVar12 != 0);
            sVar6 = psVar2[0xf];
            psVar2[0xe] = sVar7;
            iVar12 = iVar8;
            do {
              sVar7 = ec_dec_icdf(param_1,&silk_lsb_iCDF,8);
              iVar12 = iVar12 + -1;
              sVar6 = sVar7 + sVar6 * 2;
            } while (iVar12 != 0);
            psVar2[0xf] = sVar6;
            local_c0[uVar10] = local_c0[uVar10] | iVar8 << 5;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar14);
      }
    }
  }
  silk_decode_signs(param_1,param_2,param_5,param_3,param_4,local_c0);
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


