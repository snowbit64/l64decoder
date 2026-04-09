// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGroupImpl
// Entry Point: 008b45e0
// Size: 24 bytes
// Signature: undefined __cdecl setGroupImpl(uint param_1)


/* LoopSynthesisSample::setGroupImpl(unsigned int) */

void LoopSynthesisSample::setGroupImpl(uint param_1)

{
  if (*(long **)((ulong)param_1 + 0x118) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b45f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)((ulong)param_1 + 0x118) + 0x98))();
    return;
  }
  return;
}


