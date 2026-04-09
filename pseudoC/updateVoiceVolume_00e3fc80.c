// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateVoiceVolume
// Entry Point: 00e3fc80
// Size: 36 bytes
// Signature: undefined __thiscall updateVoiceVolume(Soloud * this, uint param_1)


/* SoLoud::Soloud::updateVoiceVolume(unsigned int) */

void __thiscall SoLoud::Soloud::updateVoiceVolume(Soloud *this,uint param_1)

{
  *(float *)(*(long *)(this + (ulong)param_1 * 8 + 0xa0) + 0x40) =
       *(float *)(*(long *)(this + (ulong)param_1 * 8 + 0xa0) + 0x3c) *
       *(float *)(this + (ulong)param_1 * 0x78 + 0x3528);
  return;
}


