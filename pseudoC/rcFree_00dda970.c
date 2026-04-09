// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcFree
// Entry Point: 00dda970
// Size: 20 bytes
// Signature: undefined __cdecl rcFree(void * param_1)


/* rcFree(void*) */

void rcFree(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00dda97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_free_01048428)();
    return;
  }
  return;
}


