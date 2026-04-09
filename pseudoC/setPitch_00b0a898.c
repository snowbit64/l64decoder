// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPitch
// Entry Point: 00b0a898
// Size: 24 bytes
// Signature: undefined __thiscall setPitch(NullAudioSource * this, float param_1)


/* NullAudioSource::setPitch(float) */

void __thiscall NullAudioSource::setPitch(NullAudioSource *this,float param_1)

{
  if (param_1 <= 0.1) {
    param_1 = 0.1;
  }
  *(float *)(this + 0xc) = param_1;
  return;
}


