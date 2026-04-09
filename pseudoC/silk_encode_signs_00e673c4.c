// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_encode_signs
// Entry Point: 00e673c4
// Size: 852 bytes
// Signature: undefined silk_encode_signs(void)


void silk_encode_signs(undefined8 param_1,long param_2,int param_3,short param_4,short param_5,
                      uint *param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  undefined local_5c;
  undefined local_5b;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_5b = 0;
  if (7 < param_3) {
    uVar2 = (uint)(short)(param_5 + param_4 * 2);
    uVar4 = (ulong)(param_3 + 8U >> 4);
    pcVar5 = (char *)(param_2 + 7);
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
        if (pcVar5[-7] != '\0') {
          ec_enc_icdf(param_1,((uint)(int)pcVar5[-7] >> 7) + 1 & 0xff,&local_5c,8);
        }
        if (pcVar5[-6] != '\0') {
          ec_enc_icdf(param_1,((uint)(int)pcVar5[-6] >> 7) + 1 & 0xff,&local_5c,8);
        }
        if (pcVar5[-5] != '\0') {
          ec_enc_icdf(param_1,((uint)(int)pcVar5[-5] >> 7) + 1 & 0xff,&local_5c,8);
        }
        if (pcVar5[-4] != '\0') {
          ec_enc_icdf(param_1,((uint)(int)pcVar5[-4] >> 7) + 1 & 0xff,&local_5c,8);
        }
        if (pcVar5[-3] != '\0') {
          ec_enc_icdf(param_1,((uint)(int)pcVar5[-3] >> 7) + 1 & 0xff,&local_5c,8);
        }
        if (pcVar5[-2] != '\0') {
          ec_enc_icdf(param_1,((uint)(int)pcVar5[-2] >> 7) + 1 & 0xff,&local_5c,8);
        }
        if (pcVar5[-1] != '\0') {
          ec_enc_icdf(param_1,((uint)(int)pcVar5[-1] >> 7) + 1 & 0xff,&local_5c,8);
        }
        if (*pcVar5 != '\0') {
          ec_enc_icdf(param_1,((uint)(int)*pcVar5 >> 7) + 1 & 0xff,&local_5c,8);
        }
        if (pcVar5[1] != '\0') {
          ec_enc_icdf(param_1,((uint)(int)pcVar5[1] >> 7) + 1 & 0xff,&local_5c,8);
        }
        if (pcVar5[2] != '\0') {
          ec_enc_icdf(param_1,((uint)(int)pcVar5[2] >> 7) + 1 & 0xff,&local_5c,8);
        }
        if (pcVar5[3] != '\0') {
          ec_enc_icdf(param_1,((uint)(int)pcVar5[3] >> 7) + 1 & 0xff,&local_5c,8);
        }
        if (pcVar5[4] != '\0') {
          ec_enc_icdf(param_1,((uint)(int)pcVar5[4] >> 7) + 1 & 0xff,&local_5c,8);
        }
        if (pcVar5[5] != '\0') {
          ec_enc_icdf(param_1,((uint)(int)pcVar5[5] >> 7) + 1 & 0xff,&local_5c,8);
        }
        if (pcVar5[6] != '\0') {
          ec_enc_icdf(param_1,((uint)(int)pcVar5[6] >> 7) + 1 & 0xff,&local_5c,8);
        }
        if (pcVar5[7] != '\0') {
          ec_enc_icdf(param_1,((uint)(int)pcVar5[7] >> 7) + 1 & 0xff,&local_5c,8);
        }
        if (pcVar5[8] != '\0') {
          ec_enc_icdf(param_1,((uint)(int)pcVar5[8] >> 7) + 1 & 0xff,&local_5c,8);
        }
      }
      param_6 = param_6 + 1;
      uVar4 = uVar4 - 1;
      pcVar5 = pcVar5 + 0x10;
    } while (uVar4 != 0);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


