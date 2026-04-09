// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPitchImpl
// Entry Point: 00a4f048
// Size: 64 bytes
// Signature: undefined __cdecl setPitchImpl(float param_1)


/* AudioSourceSample::setPitchImpl(float) */

void AudioSourceSample::setPitchImpl(float param_1)

{
  uint *puVar1;
  long in_x0;
  
  puVar1 = (uint *)(in_x0 + 0xb0) + (ulong)*(uint *)(in_x0 + 0xac) * 0xe + 1;
  if (1 < *(uint *)(in_x0 + 0xb0)) {
    puVar1 = (uint *)(*(long *)(in_x0 + 0xf0) + (ulong)*(uint *)(in_x0 + 0xac) * 0x38);
  }
  if (*(long **)(puVar1 + 0xc) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a4f080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(puVar1 + 0xc) + 0x78))();
    return;
  }
  return;
}


