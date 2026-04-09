// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaEnc_MemPrepare
// Entry Point: 00d973a0
// Size: 48 bytes
// Signature: undefined LzmaEnc_MemPrepare(void)


void LzmaEnc_MemPrepare(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                       undefined8 param_5,undefined8 param_6)

{
  *(undefined8 *)(param_1 + 0x78) = param_2;
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  *(undefined4 *)(param_1 + 0x9c) = 1;
  *(undefined4 *)(param_1 + 0x3d360) = 1;
  FUN_00d96f80(param_1,param_4,param_5,param_6);
  return;
}


