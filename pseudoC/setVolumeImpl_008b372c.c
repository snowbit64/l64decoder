// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVolumeImpl
// Entry Point: 008b372c
// Size: 24 bytes
// Signature: undefined __cdecl setVolumeImpl(float param_1)


/* StaticSample::setVolumeImpl(float) */

void StaticSample::setVolumeImpl(float param_1)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x78) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b373c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(in_x0 + 0x78) + 0x50))();
    return;
  }
  return;
}


