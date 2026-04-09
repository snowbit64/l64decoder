// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaEnc_PrepareForLzma2
// Entry Point: 00d96f54
// Size: 44 bytes
// Signature: undefined LzmaEnc_PrepareForLzma2(void)


void LzmaEnc_PrepareForLzma2
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(undefined4 *)(param_1 + 0x3d360) = 1;
  FUN_00d96f80(param_1,param_3,param_4,param_5);
  return;
}


