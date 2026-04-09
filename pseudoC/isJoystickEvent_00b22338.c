// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isJoystickEvent
// Entry Point: 00b22338
// Size: 20 bytes
// Signature: undefined __thiscall isJoystickEvent(AndroidInputDevice * this, uint param_1)


/* AndroidInputDevice::isJoystickEvent(unsigned int) */

bool __thiscall AndroidInputDevice::isJoystickEvent(AndroidInputDevice *this,uint param_1)

{
  return (param_1 & 0x1000010) != 0;
}


