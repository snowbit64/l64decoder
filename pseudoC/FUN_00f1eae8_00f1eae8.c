// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f1eae8
// Entry Point: 00f1eae8
// Size: 108 bytes
// Signature: undefined FUN_00f1eae8(void)


void FUN_00f1eae8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = tpidr_el0;
                    /* WARNING: Could not recover jumptable at 0x00f1eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_01018088)[**(byte **)(*(long *)(param_1 + 0x20) + 0x18)])();
  return;
}


