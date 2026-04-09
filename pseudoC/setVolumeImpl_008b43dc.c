// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVolumeImpl
// Entry Point: 008b43dc
// Size: 24 bytes
// Signature: undefined __cdecl setVolumeImpl(float param_1)


/* LoopSynthesisSample::setVolumeImpl(float) */

void LoopSynthesisSample::setVolumeImpl(float param_1)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x118) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b43ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(in_x0 + 0x118) + 0x50))();
    return;
  }
  return;
}


