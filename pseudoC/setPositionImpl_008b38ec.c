// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPositionImpl
// Entry Point: 008b38ec
// Size: 24 bytes
// Signature: undefined __cdecl setPositionImpl(float * param_1)


/* StaticSample::setPositionImpl(float const*) */

void StaticSample::setPositionImpl(float *param_1)

{
  if (*(long **)(param_1 + 0x1e) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b38fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x1e) + 0x58))();
    return;
  }
  return;
}


