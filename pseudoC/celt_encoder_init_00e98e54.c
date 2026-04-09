// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: celt_encoder_init
// Entry Point: 00e98e54
// Size: 256 bytes
// Signature: undefined celt_encoder_init(void)


undefined8 celt_encoder_init(long *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = opus_custom_mode_create(48000,0x3c0,0);
  if (param_3 < 3) {
    uVar3 = 0xfffffff9;
    if ((param_1 != (long *)0x0) && (lVar2 != 0)) {
      memset(param_1,0,
             (long)(int)((*(int *)(lVar2 + 4) * 4 + *(int *)(lVar2 + 8) * 8 + 0x1000) * param_3 +
                        0xfc));
      uVar1 = *(undefined4 *)(lVar2 + 0xc);
      *param_1 = lVar2;
      *(uint *)(param_1 + 1) = param_3;
      *(uint *)((long)param_1 + 0xc) = param_3;
      *(undefined4 *)((long)param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 5) = uVar1;
      *(undefined8 *)((long)param_1 + 0x34) = 0x100000001;
      *(undefined8 *)((long)param_1 + 0x2c) = 0xffffffff;
      *(undefined4 *)((long)param_1 + 0x4c) = param_4;
      param_1[2] = 0x100000000;
      *(undefined8 *)((long)param_1 + 0x1c) = 0x100000005;
      *(undefined4 *)(param_1 + 8) = 0x18;
      opus_custom_encoder_ctl(param_1,0xfbc);
      uVar1 = resampling_factor(param_2);
      *(undefined4 *)(param_1 + 4) = uVar1;
      return 0;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


