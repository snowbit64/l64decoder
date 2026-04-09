// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLoopSynthesisTargetLoadFactor
// Entry Point: 00a4d7a8
// Size: 68 bytes
// Signature: undefined __thiscall getLoopSynthesisTargetLoadFactor(AudioSourceSample * this, float * param_1)


/* AudioSourceSample::getLoopSynthesisTargetLoadFactor(float&) */

bool __thiscall
AudioSourceSample::getLoopSynthesisTargetLoadFactor(AudioSourceSample *this,float *param_1)

{
  uint *puVar1;
  long lVar2;
  
  puVar1 = (uint *)((long)(this + 0xb0) + ((ulong)*(uint *)(this + 0xac) * 0xe + 1) * 4);
  if (1 < *(uint *)(this + 0xb0)) {
    puVar1 = (uint *)(*(long *)(this + 0xf0) + (ulong)*(uint *)(this + 0xac) * 0x38);
  }
  lVar2 = *(long *)(puVar1 + 10);
  if (lVar2 != 0) {
    *param_1 = *(float *)(lVar2 + 0x8c);
  }
  return lVar2 != 0;
}


