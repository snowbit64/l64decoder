// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaEnc_Encode
// Entry Point: 00d9b4c4
// Size: 96 bytes
// Signature: undefined LzmaEnc_Encode(void)


void LzmaEnc_Encode(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  *(undefined8 *)(param_1 + 0x80) = param_3;
  *(undefined8 *)(param_1 + 0x3d320) = param_2;
  *(undefined4 *)(param_1 + 0x3d360) = 1;
  iVar1 = FUN_00d96f80(param_1,0,param_5,param_6);
  if (iVar1 != 0) {
    return;
  }
  FUN_00d9b524(param_1,param_4);
  return;
}


