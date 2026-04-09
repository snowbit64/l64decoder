// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFrequencyFilterImpl
// Entry Point: 008b39bc
// Size: 24 bytes
// Signature: undefined __cdecl setFrequencyFilterImpl(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6)


/* StaticSample::setFrequencyFilterImpl(float, float, float, float, float, float) */

void StaticSample::setFrequencyFilterImpl
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x78) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b39cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(in_x0 + 0x78) + 0x80))();
    return;
  }
  return;
}


