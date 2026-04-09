// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btAlignedFreeInternal
// Entry Point: 00f9b074
// Size: 40 bytes
// Signature: undefined __cdecl btAlignedFreeInternal(void * param_1)


/* btAlignedFreeInternal(void*) */

void btAlignedFreeInternal(void *param_1)

{
  if (param_1 != (void *)0x0) {
    gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f9b094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_01048e40)();
    return;
  }
  return;
}


