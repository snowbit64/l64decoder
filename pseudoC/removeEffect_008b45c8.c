// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeEffect
// Entry Point: 008b45c8
// Size: 24 bytes
// Signature: undefined __cdecl removeEffect(uint param_1)


/* LoopSynthesisSample::removeEffect(unsigned int) */

void LoopSynthesisSample::removeEffect(uint param_1)

{
  if (*(long **)((ulong)param_1 + 0x118) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b45d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)((ulong)param_1 + 0x118) + 0x90))();
    return;
  }
  return;
}


