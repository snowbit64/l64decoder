// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVelocityImpl
// Entry Point: 008b3904
// Size: 24 bytes
// Signature: undefined __cdecl setVelocityImpl(float * param_1)


/* StaticSample::setVelocityImpl(float const*) */

void StaticSample::setVelocityImpl(float *param_1)

{
  if (*(long **)(param_1 + 0x1e) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b3914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x1e) + 0x60))();
    return;
  }
  return;
}


