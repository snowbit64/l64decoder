// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHandleFromVoice
// Entry Point: 00e3cfb8
// Size: 36 bytes
// Signature: undefined __thiscall getHandleFromVoice(Soloud * this, uint param_1)


/* SoLoud::Soloud::getHandleFromVoice(unsigned int) const */

uint __thiscall SoLoud::Soloud::getHandleFromVoice(Soloud *this,uint param_1)

{
  if (*(long *)(this + (ulong)param_1 * 8 + 0xa0) != 0) {
    return param_1 + 1 | *(int *)(*(long *)(this + (ulong)param_1 * 8 + 0xa0) + 8) << 0xc;
  }
  return 0;
}


