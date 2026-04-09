// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMinMaxDistanceImpl
// Entry Point: 008b39a4
// Size: 24 bytes
// Signature: undefined __cdecl setMinMaxDistanceImpl(float param_1, float param_2)


/* StaticSample::setMinMaxDistanceImpl(float, float) */

void StaticSample::setMinMaxDistanceImpl(float param_1,float param_2)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x78) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b39b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(in_x0 + 0x78) + 0x70))();
    return;
  }
  return;
}


