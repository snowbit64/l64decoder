// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRecordingDeviceId
// Entry Point: 00e36fa0
// Size: 36 bytes
// Signature: undefined __thiscall getRecordingDeviceId(Soloud * this, uint param_1)


/* SoLoud::Soloud::getRecordingDeviceId(unsigned int) */

undefined8 __thiscall SoLoud::Soloud::getRecordingDeviceId(Soloud *this,uint param_1)

{
  if (param_1 < *(uint *)(this + 0x2820)) {
    return *(undefined8 *)(this + (ulong)param_1 * 0x90 + 0x23a0);
  }
  return 0;
}


