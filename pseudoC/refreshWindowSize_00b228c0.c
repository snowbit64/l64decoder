// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: refreshWindowSize
// Entry Point: 00b228c0
// Size: 8 bytes
// Signature: undefined __thiscall refreshWindowSize(AndroidInputDevice * this, uint param_1, uint param_2)


/* AndroidInputDevice::refreshWindowSize(unsigned int, unsigned int) */

void __thiscall
AndroidInputDevice::refreshWindowSize(AndroidInputDevice *this,uint param_1,uint param_2)

{
  *(uint *)(this + 0x38) = param_1;
  *(uint *)(this + 0x3c) = param_2;
  return;
}


