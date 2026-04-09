// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dtFree
// Entry Point: 00dd14d0
// Size: 20 bytes
// Signature: undefined __cdecl dtFree(void * param_1)


/* dtFree(void*) */

void dtFree(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00dd14dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_free_01048418)();
    return;
  }
  return;
}


