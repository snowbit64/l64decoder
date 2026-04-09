// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDirectionImpl
// Entry Point: 008b4530
// Size: 24 bytes
// Signature: undefined __cdecl setDirectionImpl(float * param_1)


/* LoopSynthesisSample::setDirectionImpl(float const*) */

void LoopSynthesisSample::setDirectionImpl(float *param_1)

{
  if (*(long **)(param_1 + 0x46) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b4540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x46) + 0x68))();
    return;
  }
  return;
}


