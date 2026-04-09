// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: celt_decoder_init
// Entry Point: 00e6a1b4
// Size: 244 bytes
// Signature: undefined celt_decoder_init(void)


int celt_decoder_init(long *param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = opus_custom_mode_create(48000,0x3c0,0);
  if (2 < param_3) {
    return -1;
  }
  if (param_1 != (long *)0x0) {
    memset(param_1,0,
           (long)(int)((*(int *)(lVar4 + 4) * 4 + 0x2030) * param_3 + *(int *)(lVar4 + 8) * 0x10 +
                      0x5c));
    *param_1 = lVar4;
    *(uint *)(param_1 + 2) = param_3;
    uVar1 = *(undefined4 *)(lVar4 + 4);
    *(undefined8 *)((long)param_1 + 0x14) = 1;
    uVar2 = *(undefined4 *)(lVar4 + 0xc);
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(uint *)((long)param_1 + 0xc) = param_3;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar2;
    *(undefined4 *)(param_1 + 4) = 1;
    *(uint *)((long)param_1 + 0x24) = (uint)(param_3 == 1);
    *(undefined4 *)(param_1 + 5) = 0;
    opus_custom_decoder_ctl(param_1,0xfbc);
    iVar3 = resampling_factor(param_2);
    *(int *)((long)param_1 + 0x14) = iVar3;
    return -(uint)(iVar3 == 0);
  }
  return -7;
}


