// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFrequencyFilterImpl
// Entry Point: 008b4580
// Size: 24 bytes
// Signature: undefined __cdecl setFrequencyFilterImpl(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6)


/* LoopSynthesisSample::setFrequencyFilterImpl(float, float, float, float, float, float) */

void LoopSynthesisSample::setFrequencyFilterImpl
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x118) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b4590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(in_x0 + 0x118) + 0x80))();
    return;
  }
  return;
}


