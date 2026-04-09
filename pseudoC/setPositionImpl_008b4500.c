// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPositionImpl
// Entry Point: 008b4500
// Size: 24 bytes
// Signature: undefined __cdecl setPositionImpl(float * param_1)


/* LoopSynthesisSample::setPositionImpl(float const*) */

void LoopSynthesisSample::setPositionImpl(float *param_1)

{
  if (*(long **)(param_1 + 0x46) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b4510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x46) + 0x58))();
    return;
  }
  return;
}


