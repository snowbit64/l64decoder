// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getElementFrequencyAt
// Entry Point: 00a4d3d4
// Size: 112 bytes
// Signature: undefined __thiscall getElementFrequencyAt(AudioSourceSample * this, uint param_1)


/* AudioSourceSample::getElementFrequencyAt(unsigned int) const */

ulong __thiscall AudioSourceSample::getElementFrequencyAt(AudioSourceSample *this,uint param_1)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = (uint *)((long)(this + 0xb0) + ((ulong)param_1 * 0xe + 1) * 4);
  if (1 < *(uint *)(this + 0xb0)) {
    puVar1 = (uint *)(*(long *)(this + 0xf0) + (ulong)param_1 * 0x38);
  }
  if (*(long *)(puVar1 + 10) != 0) {
    lVar2 = LoopSynthesisResource::getLoopSynthesisData();
    return (ulong)*(uint *)(lVar2 + 0xc);
  }
  if (*(long *)(puVar1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a4d434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(**(long **)(*(long *)(puVar1 + 8) + 0x48) + 0x28))();
    return uVar3;
  }
  return 1;
}


