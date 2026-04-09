// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVoiceVolume
// Entry Point: 00e3fc40
// Size: 64 bytes
// Signature: undefined __thiscall setVoiceVolume(Soloud * this, uint param_1, float param_2)


/* SoLoud::Soloud::setVoiceVolume(unsigned int, float) */

void __thiscall SoLoud::Soloud::setVoiceVolume(Soloud *this,uint param_1,float param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + (ulong)param_1 * 8 + 0xa0);
  this[0x224f0] = (Soloud)0x1;
  if (lVar1 != 0) {
    *(float *)(lVar1 + 0x3c) = param_2;
    *(float *)(lVar1 + 0x40) = *(float *)(this + (ulong)param_1 * 0x78 + 0x3528) * param_2;
  }
  return;
}


