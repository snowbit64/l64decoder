// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRecordingDeviceFrequency
// Entry Point: 00e36f74
// Size: 36 bytes
// Signature: undefined __thiscall getRecordingDeviceFrequency(Soloud * this, uint param_1)


/* SoLoud::Soloud::getRecordingDeviceFrequency(unsigned int) */

undefined4 __thiscall SoLoud::Soloud::getRecordingDeviceFrequency(Soloud *this,uint param_1)

{
  if (param_1 < *(uint *)(this + 0x2820)) {
    return *(undefined4 *)(this + (ulong)param_1 * 0x90 + 0x23b0);
  }
  return 0;
}


