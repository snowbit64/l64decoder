// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVelocityImpl
// Entry Point: 00a4ef34
// Size: 64 bytes
// Signature: undefined __cdecl setVelocityImpl(float * param_1)


/* AudioSourceSample::setVelocityImpl(float const*) */

void AudioSourceSample::setVelocityImpl(float *param_1)

{
  float *pfVar1;
  
  pfVar1 = param_1 + 0x2c + (ulong)(uint)param_1[0x2b] * 0xe + 1;
  if (1 < (uint)param_1[0x2c]) {
    pfVar1 = (float *)(*(long *)(param_1 + 0x3c) + (ulong)(uint)param_1[0x2b] * 0x38);
  }
  if (*(long **)(pfVar1 + 0xc) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a4ef6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(pfVar1 + 0xc) + 0x60))();
    return;
  }
  return;
}


