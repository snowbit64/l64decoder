// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateVoiceRelativePlaySpeed
// Entry Point: 00e3fb04
// Size: 48 bytes
// Signature: undefined __thiscall updateVoiceRelativePlaySpeed(Soloud * this, uint param_1)


/* SoLoud::Soloud::updateVoiceRelativePlaySpeed(unsigned int) */

void __thiscall SoLoud::Soloud::updateVoiceRelativePlaySpeed(Soloud *this,uint param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(this + (ulong)param_1 * 8 + 0xa0);
  fVar2 = *(float *)(this + (ulong)param_1 * 0x78 + 0x3524) * *(float *)(lVar1 + 0x50);
  *(float *)(lVar1 + 0x54) = fVar2;
  *(float *)(lVar1 + 0x48) = fVar2 * *(float *)(lVar1 + 0x44);
  return;
}


