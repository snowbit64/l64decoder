// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ec_enc_init
// Entry Point: 00e66460
// Size: 44 bytes
// Signature: undefined ec_enc_init(void)


void ec_enc_init(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined8 *)((long)param_1 + 0x2c) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x14) = 0x2100000000;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0x8000000000000000;
  return;
}


