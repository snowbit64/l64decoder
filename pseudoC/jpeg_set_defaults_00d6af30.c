// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_set_defaults
// Entry Point: 00d6af30
// Size: 360 bytes
// Signature: undefined jpeg_set_defaults(void)


void jpeg_set_defaults(long *param_1)

{
  code **ppcVar1;
  long lVar2;
  
  if (*(int *)((long)param_1 + 0x24) != 100) {
    lVar2 = *param_1;
    *(int *)(lVar2 + 0x2c) = *(int *)((long)param_1 + 0x24);
    ppcVar1 = (code **)*param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x15;
    (**ppcVar1)(param_1);
  }
  if (param_1[0xd] == 0) {
    lVar2 = (**(code **)param_1[1])(param_1,0,0x3c0);
    param_1[0xd] = lVar2;
  }
  *(undefined4 *)(param_1 + 0xb) = 8;
  param_1[9] = 0x100000001;
  jpeg_set_linear_quality(param_1,0x32,1);
  FUN_00d6bfdc(param_1,param_1 + 0x14,&DAT_00548348,&DAT_00548359);
  FUN_00d6bfdc(param_1,param_1 + 0x18,&DAT_00548382,&DAT_00548393);
  FUN_00d6bfdc(param_1,param_1 + 0x15,&DAT_00548365,&DAT_00548376);
  FUN_00d6bfdc(param_1,param_1 + 0x19,&DAT_00548435,&DAT_00548446);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x23] = 0;
  param_1[0x1e] = 0x101010101010101;
  param_1[0x1f] = 0x101010101010101;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined *)((long)param_1 + 0x124) = 1;
  *(undefined *)(param_1 + 0x24) = 0;
  param_1[0x20] = 0x505050505050505;
  param_1[0x21] = 0x505050505050505;
  *(undefined2 *)((long)param_1 + 0x122) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(bool *)((long)param_1 + 0x121) = 8 < *(int *)(param_1 + 0xb);
  *(undefined *)((long)param_1 + 0x13b) = 0;
  *(undefined4 *)((long)param_1 + 0x144) = 0;
  *(undefined2 *)((long)param_1 + 0x139) = 0x101;
  *(undefined4 *)((long)param_1 + 0x13c) = 0x10001;
  jpeg_default_colorspace(param_1);
  return;
}


