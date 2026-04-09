// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMouseButtonName
// Entry Point: 00b20b40
// Size: 36 bytes
// Signature: undefined __thiscall getMouseButtonName(AndroidInputDevice * this, MOUSE_BUTTONS param_1)


/* AndroidInputDevice::getMouseButtonName(InputDeviceBase::MOUSE_BUTTONS) */

undefined * __thiscall
AndroidInputDevice::getMouseButtonName(AndroidInputDevice *this,MOUSE_BUTTONS param_1)

{
  if (7 < (int)param_1) {
    return &DAT_0050a39f;
  }
  return *(undefined **)(m_mouseButtonName + (ulong)param_1 * 8);
}


