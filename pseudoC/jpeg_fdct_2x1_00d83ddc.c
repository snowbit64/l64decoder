// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_2x1
// Entry Point: 00d83ddc
// Size: 80 bytes
// Signature: undefined jpeg_fdct_2x1(void)


void jpeg_fdct_2x1(undefined8 *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar2 = (uint)*(byte *)(*param_2 + (ulong)param_3);
  uVar1 = (uint)((byte *)(*param_2 + (ulong)param_3))[1];
  *(uint *)param_1 = (uVar1 + uVar2) * 0x20 + -0x2000;
  *(uint *)((long)param_1 + 4) = (uVar2 - uVar1) * 0x20;
  return;
}


