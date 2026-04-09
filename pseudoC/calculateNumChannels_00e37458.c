// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateNumChannels
// Entry Point: 00e37458
// Size: 36 bytes
// Signature: undefined __thiscall calculateNumChannels(Soloud * this, uint param_1)


/* SoLoud::Soloud::calculateNumChannels(unsigned int) const */

undefined4 __thiscall SoLoud::Soloud::calculateNumChannels(Soloud *this,uint param_1)

{
  if (param_1 - 1 < 6) {
    return *(undefined4 *)(&DAT_0055f9c4 + (long)(int)(param_1 - 1) * 4);
  }
  return 2;
}


