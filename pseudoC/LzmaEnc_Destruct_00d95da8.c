// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaEnc_Destruct
// Entry Point: 00d95da8
// Size: 128 bytes
// Signature: undefined LzmaEnc_Destruct(void)


void LzmaEnc_Destruct(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  
  MatchFinder_Free(param_1 + 0x38,param_3);
  (**(code **)(param_2 + 8))(param_2,*(undefined8 *)(param_1 + 0x33be8));
  (**(code **)(param_2 + 8))(param_2,*(undefined8 *)(param_1 + 0x3d368));
  pcVar1 = *(code **)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x33be8) = 0;
  *(undefined8 *)(param_1 + 0x3d368) = 0;
  (*pcVar1)(param_2,*(undefined8 *)(param_1 + 0x3d318));
  *(undefined8 *)(param_1 + 0x3d318) = 0;
  return;
}


