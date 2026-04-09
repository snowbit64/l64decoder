// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isGamepadEvent
// Entry Point: 00b228c8
// Size: 16 bytes
// Signature: undefined __thiscall isGamepadEvent(AndroidInputDevice * this, uint param_1)


/* AndroidInputDevice::isGamepadEvent(unsigned int) */

bool __thiscall AndroidInputDevice::isGamepadEvent(AndroidInputDevice *this,uint param_1)

{
  return ((param_1 ^ 0xffffffff) & 0x401) == 0;
}


