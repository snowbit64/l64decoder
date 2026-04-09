// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6a488
// Entry Point: 00d6a488
// Size: 60 bytes
// Signature: undefined FUN_00d6a488(void)


void FUN_00d6a488(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)(param_1 + 0x200) + 8);
  *(undefined *)(*(long *)(param_1 + 0x1e0) + 0x18) = 0;
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00d6a4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x200) + 0x10))(param_1);
  return;
}


