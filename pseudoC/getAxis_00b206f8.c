// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAxis
// Entry Point: 00b206f8
// Size: 36 bytes
// Signature: undefined __thiscall getAxis(AndroidInputDevice * this, uint param_1, uint param_2)


/* AndroidInputDevice::getAxis(unsigned int, unsigned int) */

undefined4 __thiscall
AndroidInputDevice::getAxis(AndroidInputDevice *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_2 < 0xc) && (param_1 < *(uint *)(this + 0x13c8))) {
    uVar1 = *(undefined4 *)(this + (ulong)param_2 * 4 + 0x1450);
  }
  return uVar1;
}


