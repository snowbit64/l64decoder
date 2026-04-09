// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setEnableGrain
// Entry Point: 008a58ec
// Size: 40 bytes
// Signature: undefined __thiscall setEnableGrain(GranularSynthesisRuntimeSettings * this, int param_1, bool param_2)


/* GranularSynthesisRuntimeSettings::setEnableGrain(int, bool) */

void __thiscall
GranularSynthesisRuntimeSettings::setEnableGrain
          (GranularSynthesisRuntimeSettings *this,int param_1,bool param_2)

{
  if (-1 < param_1) {
    if ((ulong)(uint)param_1 < (ulong)(*(long *)(this + 0x38) - *(long *)(this + 0x30) >> 4)) {
      *(bool *)(*(long *)(this + 0x30) + (ulong)(uint)param_1 * 0x10 + 0xc) = param_2;
    }
  }
  return;
}


