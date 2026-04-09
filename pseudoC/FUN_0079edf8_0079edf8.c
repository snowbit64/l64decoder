// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079edf8
// Entry Point: 0079edf8
// Size: 36 bytes
// Signature: undefined FUN_0079edf8(void)


void FUN_0079edf8(long param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0079ee18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x30))
            (*(long **)(param_1 + 0x20),*param_2,(ulong)(*(uint3 *)((long)param_2 + 0xc) >> 1));
  return;
}


