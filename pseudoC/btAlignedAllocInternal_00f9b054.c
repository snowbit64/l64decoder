// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btAlignedAllocInternal
// Entry Point: 00f9b054
// Size: 32 bytes
// Signature: undefined __cdecl btAlignedAllocInternal(ulong param_1, int param_2)


/* btAlignedAllocInternal(unsigned long, int) */

void btAlignedAllocInternal(ulong param_1,int param_2)

{
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
                    /* WARNING: Could not recover jumptable at 0x00f9b070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e38)(param_1,param_2);
  return;
}


