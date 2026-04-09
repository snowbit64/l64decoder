// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isPointerEvent
// Entry Point: 00b22674
// Size: 8 bytes
// Signature: undefined __thiscall isPointerEvent(AndroidInputDevice * this, uint param_1)


/* AndroidInputDevice::isPointerEvent(unsigned int) */

uint __thiscall AndroidInputDevice::isPointerEvent(AndroidInputDevice *this,uint param_1)

{
  return param_1 >> 1 & 1;
}


