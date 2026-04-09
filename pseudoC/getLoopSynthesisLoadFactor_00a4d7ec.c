// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLoopSynthesisLoadFactor
// Entry Point: 00a4d7ec
// Size: 96 bytes
// Signature: undefined __thiscall getLoopSynthesisLoadFactor(AudioSourceSample * this, float * param_1)


/* AudioSourceSample::getLoopSynthesisLoadFactor(float&) */

bool __thiscall
AudioSourceSample::getLoopSynthesisLoadFactor(AudioSourceSample *this,float *param_1)

{
  uint *puVar1;
  long lVar2;
  float fVar3;
  
  puVar1 = (uint *)((long)(this + 0xb0) + ((ulong)*(uint *)(this + 0xac) * 0xe + 1) * 4);
  if (1 < *(uint *)(this + 0xb0)) {
    puVar1 = (uint *)(*(long *)(this + 0xf0) + (ulong)*(uint *)(this + 0xac) * 0x38);
  }
  lVar2 = *(long *)(puVar1 + 10);
  if (lVar2 != 0) {
    fVar3 = (float)LoopSynthesisGenerator::getLoadFactor();
    *param_1 = fVar3;
  }
  return lVar2 != 0;
}


