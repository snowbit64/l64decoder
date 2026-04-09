// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getElementLoopSynthesisGeneratorAt
// Entry Point: 00a4d5b8
// Size: 56 bytes
// Signature: undefined __thiscall getElementLoopSynthesisGeneratorAt(AudioSourceSample * this, uint param_1)


/* AudioSourceSample::getElementLoopSynthesisGeneratorAt(unsigned int) const */

long __thiscall
AudioSourceSample::getElementLoopSynthesisGeneratorAt(AudioSourceSample *this,uint param_1)

{
  uint *puVar1;
  long lVar2;
  
  puVar1 = (uint *)((long)(this + 0xb0) + ((ulong)param_1 * 0xe + 1) * 4);
  if (1 < *(uint *)(this + 0xb0)) {
    puVar1 = (uint *)(*(long *)(this + 0xf0) + (ulong)param_1 * 0x38);
  }
  lVar2 = 0;
  if (*(long *)(puVar1 + 10) != 0) {
    lVar2 = *(long *)(puVar1 + 10) + 0x10;
  }
  return lVar2;
}


