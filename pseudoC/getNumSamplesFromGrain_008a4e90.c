// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumSamplesFromGrain
// Entry Point: 008a4e90
// Size: 52 bytes
// Signature: undefined __thiscall getNumSamplesFromGrain(GranularSynthesisRuntimeSettings * this, int param_1)


/* GranularSynthesisRuntimeSettings::getNumSamplesFromGrain(int) const */

int __thiscall
GranularSynthesisRuntimeSettings::getNumSamplesFromGrain
          (GranularSynthesisRuntimeSettings *this,int param_1)

{
  int *piVar1;
  
  if (-1 < param_1) {
    if ((ulong)(uint)param_1 < (ulong)(*(long *)(this + 0x38) - *(long *)(this + 0x30) >> 4)) {
      piVar1 = (int *)(*(long *)(this + 0x30) + (ulong)(uint)param_1 * 0x10);
      return (piVar1[1] - *piVar1) + 1;
    }
  }
  return 0;
}


