// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDirectionImpl
// Entry Point: 008b391c
// Size: 24 bytes
// Signature: undefined __cdecl setDirectionImpl(float * param_1)


/* StaticSample::setDirectionImpl(float const*) */

void StaticSample::setDirectionImpl(float *param_1)

{
  if (*(long **)(param_1 + 0x1e) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b392c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x1e) + 0x68))();
    return;
  }
  return;
}


