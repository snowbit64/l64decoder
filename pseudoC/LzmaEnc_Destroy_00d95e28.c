// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaEnc_Destroy
// Entry Point: 00d95e28
// Size: 140 bytes
// Signature: undefined LzmaEnc_Destroy(void)


void LzmaEnc_Destroy(long param_1,long param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  MatchFinder_Free(param_1 + 0x38,param_3);
  (**(code **)(param_2 + 8))(param_2,*(undefined8 *)(param_1 + 0x33be8));
  (**(code **)(param_2 + 8))(param_2,*(undefined8 *)(param_1 + 0x3d368));
  UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x33be8) = 0;
  *(undefined8 *)(param_1 + 0x3d368) = 0;
  (*UNRECOVERED_JUMPTABLE)(param_2,*(undefined8 *)(param_1 + 0x3d318));
  UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x3d318) = 0;
                    /* WARNING: Could not recover jumptable at 0x00d95eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,param_1);
  return;
}


