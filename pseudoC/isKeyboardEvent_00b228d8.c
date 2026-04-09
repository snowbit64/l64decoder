// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isKeyboardEvent
// Entry Point: 00b228d8
// Size: 16 bytes
// Signature: undefined __thiscall isKeyboardEvent(AndroidInputDevice * this, uint param_1)


/* AndroidInputDevice::isKeyboardEvent(unsigned int) */

bool __thiscall AndroidInputDevice::isKeyboardEvent(AndroidInputDevice *this,uint param_1)

{
  return ((param_1 ^ 0xffffffff) & 0x101) == 0;
}


