// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSamplesValuesFromGrainIdx
// Entry Point: 008a4ec4
// Size: 52 bytes
// Signature: undefined __thiscall getSamplesValuesFromGrainIdx(GranularSynthesisRuntimeSettings * this, int param_1)


/* GranularSynthesisRuntimeSettings::getSamplesValuesFromGrainIdx(int) const */

long __thiscall
GranularSynthesisRuntimeSettings::getSamplesValuesFromGrainIdx
          (GranularSynthesisRuntimeSettings *this,int param_1)

{
  if (-1 < param_1) {
    if ((ulong)(uint)param_1 < (ulong)(*(long *)(this + 0x38) - *(long *)(this + 0x30) >> 4)) {
      return *(long *)(this + 0x18) +
             (long)*(int *)(*(long *)(this + 0x30) + (ulong)(uint)param_1 * 0x10) * 2;
    }
  }
  return 0;
}


