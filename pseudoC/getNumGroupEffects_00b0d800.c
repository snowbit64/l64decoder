// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumGroupEffects
// Entry Point: 00b0d800
// Size: 28 bytes
// Signature: undefined __thiscall getNumGroupEffects(SoftAudioDevice * this, uint param_1)


/* SoftAudioDevice::getNumGroupEffects(unsigned int) const */

ulong __thiscall SoftAudioDevice::getNumGroupEffects(SoftAudioDevice *this,uint param_1)

{
  return (ulong)(*(long *)(this + (ulong)param_1 * 0x18 + 0x2a8) -
                *(long *)(this + (ulong)param_1 * 0x18 + 0x2a0)) >> 2;
}


