// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLoopSynthesisTargetRpm
// Entry Point: 00a4d67c
// Size: 68 bytes
// Signature: undefined __thiscall getLoopSynthesisTargetRpm(AudioSourceSample * this, float * param_1)


/* AudioSourceSample::getLoopSynthesisTargetRpm(float&) */

bool __thiscall AudioSourceSample::getLoopSynthesisTargetRpm(AudioSourceSample *this,float *param_1)

{
  uint *puVar1;
  long lVar2;
  
  puVar1 = (uint *)((long)(this + 0xb0) + ((ulong)*(uint *)(this + 0xac) * 0xe + 1) * 4);
  if (1 < *(uint *)(this + 0xb0)) {
    puVar1 = (uint *)(*(long *)(this + 0xf0) + (ulong)*(uint *)(this + 0xac) * 0x38);
  }
  lVar2 = *(long *)(puVar1 + 10);
  if (lVar2 != 0) {
    *param_1 = *(float *)(lVar2 + 0x7c);
  }
  return lVar2 != 0;
}


