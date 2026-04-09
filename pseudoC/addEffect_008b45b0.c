// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addEffect
// Entry Point: 008b45b0
// Size: 24 bytes
// Signature: undefined __cdecl addEffect(uint param_1)


/* LoopSynthesisSample::addEffect(unsigned int) */

void LoopSynthesisSample::addEffect(uint param_1)

{
  if (*(long **)((ulong)param_1 + 0x118) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b45c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)((ulong)param_1 + 0x118) + 0x88))();
    return;
  }
  return;
}


