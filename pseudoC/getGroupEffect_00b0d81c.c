// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getGroupEffect
// Entry Point: 00b0d81c
// Size: 48 bytes
// Signature: undefined __thiscall getGroupEffect(SoftAudioDevice * this, uint param_1, uint param_2)


/* SoftAudioDevice::getGroupEffect(unsigned int, unsigned int) const */

undefined4 __thiscall
SoftAudioDevice::getGroupEffect(SoftAudioDevice *this,uint param_1,uint param_2)

{
  if ((ulong)param_2 <
      (ulong)(*(long *)(this + (ulong)param_1 * 0x18 + 0x2a8) -
              *(long *)(this + (ulong)param_1 * 0x18 + 0x2a0) >> 2)) {
    return *(undefined4 *)(*(long *)(this + (ulong)param_1 * 0x18 + 0x2a0) + (ulong)param_2 * 4);
  }
  return 0xffffffff;
}


