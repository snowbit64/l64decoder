// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPitchImpl
// Entry Point: 008b4598
// Size: 24 bytes
// Signature: undefined __cdecl setPitchImpl(float param_1)


/* LoopSynthesisSample::setPitchImpl(float) */

void LoopSynthesisSample::setPitchImpl(float param_1)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x118) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b45a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(in_x0 + 0x118) + 0x78))();
    return;
  }
  return;
}


