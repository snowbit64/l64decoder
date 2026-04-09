// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeEffect
// Entry Point: 008b3a04
// Size: 24 bytes
// Signature: undefined __cdecl removeEffect(uint param_1)


/* StaticSample::removeEffect(unsigned int) */

void StaticSample::removeEffect(uint param_1)

{
  if (*(long **)((ulong)param_1 + 0x78) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b3a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)((ulong)param_1 + 0x78) + 0x90))();
    return;
  }
  return;
}


