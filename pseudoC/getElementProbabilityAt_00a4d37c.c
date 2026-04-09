// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getElementProbabilityAt
// Entry Point: 00a4d37c
// Size: 44 bytes
// Signature: undefined __thiscall getElementProbabilityAt(AudioSourceSample * this, uint param_1)


/* AudioSourceSample::getElementProbabilityAt(unsigned int) const */

uint __thiscall AudioSourceSample::getElementProbabilityAt(AudioSourceSample *this,uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)((long)(this + 0xb0) + ((ulong)param_1 * 0xe + 1) * 4);
  if (1 < *(uint *)(this + 0xb0)) {
    puVar1 = (uint *)(*(long *)(this + 0xf0) + (ulong)param_1 * 0x38);
  }
  return *puVar1;
}


