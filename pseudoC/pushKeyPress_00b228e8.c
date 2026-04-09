// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushKeyPress
// Entry Point: 00b228e8
// Size: 40 bytes
// Signature: undefined __thiscall pushKeyPress(AndroidInputDevice * this, uint param_1)


/* AndroidInputDevice::pushKeyPress(unsigned int) */

void __thiscall AndroidInputDevice::pushKeyPress(AndroidInputDevice *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x1044);
  *(uint *)(this + 0x1044) = uVar1 + 1;
  *(uint *)(this + (ulong)uVar1 * 4 + 0x40) = param_1;
  if (*(int *)(this + 0x1044) == 0x400) {
    *(undefined4 *)(this + 0x1044) = 0;
  }
  return;
}


