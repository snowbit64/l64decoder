// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGroup
// Entry Point: 008c05a0
// Size: 24 bytes
// Signature: undefined __cdecl setGroup(uint param_1)


/* StreamedSample::setGroup(unsigned int) */

void StreamedSample::setGroup(uint param_1)

{
  if (*(long **)((ulong)param_1 + 0x38) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008c05b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)((ulong)param_1 + 0x38) + 0x98))();
    return;
  }
  return;
}


