// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_decode_signs
// Entry Point: 00e67718
// Size: 980 bytes
// Signature: undefined silk_decode_signs(void)


void silk_decode_signs(undefined8 param_1,long param_2,int param_3,short param_4,short param_5,
                      uint *param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  short sVar4;
  ulong uVar5;
  short *psVar6;
  undefined local_5c;
  undefined local_5b;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_5b = 0;
  if (7 < param_3) {
    uVar2 = (uint)(short)(param_5 + param_4 * 2);
    uVar5 = (ulong)(param_3 + 8U >> 4);
    psVar6 = (short *)(param_2 + 0x10);
    do {
      if (0 < (int)*param_6) {
        uVar1 = *param_6 & 0x1f;
        if (5 < uVar1) {
          uVar1 = 6;
        }
        local_5c = silk_sign_iCDF
                   [(ulong)uVar1 +
                    ((-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3) -
                    (long)(int)uVar2)];
        if (0 < psVar6[-8]) {
          sVar4 = ec_dec_icdf(param_1,&local_5c,8);
          psVar6[-8] = (sVar4 * 2 + -1) * psVar6[-8];
        }
        if (0 < psVar6[-7]) {
          sVar4 = ec_dec_icdf(param_1,&local_5c,8);
          psVar6[-7] = (sVar4 * 2 + -1) * psVar6[-7];
        }
        if (0 < psVar6[-6]) {
          sVar4 = ec_dec_icdf(param_1,&local_5c,8);
          psVar6[-6] = (sVar4 * 2 + -1) * psVar6[-6];
        }
        if (0 < psVar6[-5]) {
          sVar4 = ec_dec_icdf(param_1,&local_5c,8);
          psVar6[-5] = (sVar4 * 2 + -1) * psVar6[-5];
        }
        if (0 < psVar6[-4]) {
          sVar4 = ec_dec_icdf(param_1,&local_5c,8);
          psVar6[-4] = (sVar4 * 2 + -1) * psVar6[-4];
        }
        if (0 < psVar6[-3]) {
          sVar4 = ec_dec_icdf(param_1,&local_5c,8);
          psVar6[-3] = (sVar4 * 2 + -1) * psVar6[-3];
        }
        if (0 < psVar6[-2]) {
          sVar4 = ec_dec_icdf(param_1,&local_5c,8);
          psVar6[-2] = (sVar4 * 2 + -1) * psVar6[-2];
        }
        if (0 < psVar6[-1]) {
          sVar4 = ec_dec_icdf(param_1,&local_5c,8);
          psVar6[-1] = (sVar4 * 2 + -1) * psVar6[-1];
        }
        if (0 < *psVar6) {
          sVar4 = ec_dec_icdf(param_1,&local_5c,8);
          *psVar6 = (sVar4 * 2 + -1) * *psVar6;
        }
        if (0 < psVar6[1]) {
          sVar4 = ec_dec_icdf(param_1,&local_5c,8);
          psVar6[1] = (sVar4 * 2 + -1) * psVar6[1];
        }
        if (0 < psVar6[2]) {
          sVar4 = ec_dec_icdf(param_1,&local_5c,8);
          psVar6[2] = (sVar4 * 2 + -1) * psVar6[2];
        }
        if (0 < psVar6[3]) {
          sVar4 = ec_dec_icdf(param_1,&local_5c,8);
          psVar6[3] = (sVar4 * 2 + -1) * psVar6[3];
        }
        if (0 < psVar6[4]) {
          sVar4 = ec_dec_icdf(param_1,&local_5c,8);
          psVar6[4] = (sVar4 * 2 + -1) * psVar6[4];
        }
        if (0 < psVar6[5]) {
          sVar4 = ec_dec_icdf(param_1,&local_5c,8);
          psVar6[5] = (sVar4 * 2 + -1) * psVar6[5];
        }
        if (0 < psVar6[6]) {
          sVar4 = ec_dec_icdf(param_1,&local_5c,8);
          psVar6[6] = (sVar4 * 2 + -1) * psVar6[6];
        }
        if (0 < psVar6[7]) {
          sVar4 = ec_dec_icdf(param_1,&local_5c,8);
          psVar6[7] = (sVar4 * 2 + -1) * psVar6[7];
        }
      }
      param_6 = param_6 + 1;
      uVar5 = uVar5 - 1;
      psVar6 = psVar6 + 0x10;
    } while (uVar5 != 0);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


