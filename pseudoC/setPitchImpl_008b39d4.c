// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPitchImpl
// Entry Point: 008b39d4
// Size: 24 bytes
// Signature: undefined __cdecl setPitchImpl(float param_1)


/* StaticSample::setPitchImpl(float) */

void StaticSample::setPitchImpl(float param_1)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x78) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b39e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(in_x0 + 0x78) + 0x78))();
    return;
  }
  return;
}


