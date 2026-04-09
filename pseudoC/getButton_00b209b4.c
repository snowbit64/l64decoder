// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getButton
// Entry Point: 00b209b4
// Size: 28 bytes
// Signature: undefined __thiscall getButton(AndroidInputDevice * this, uint param_1, uint param_2)


/* AndroidInputDevice::getButton(unsigned int, unsigned int) */

undefined4 __thiscall
AndroidInputDevice::getButton(AndroidInputDevice *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 == 0) && (param_2 < 0x14)) {
    uVar1 = *(undefined4 *)(this + (ulong)param_2 * 4 + 0x13f8);
  }
  return uVar1;
}


