// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: focusChanged
// Entry Point: 00b215e0
// Size: 16 bytes
// Signature: undefined __thiscall focusChanged(AndroidInputDevice * this, bool param_1)


/* AndroidInputDevice::focusChanged(bool) */

void __thiscall AndroidInputDevice::focusChanged(AndroidInputDevice *this,bool param_1)

{
  if (param_1) {
    enableSensors(SUB81(this,0));
    return;
  }
  disableSensors();
  return;
}


