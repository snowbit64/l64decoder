// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getGamePadAxisLabel
// Entry Point: 00b209f4
// Size: 36 bytes
// Signature: undefined __thiscall getGamePadAxisLabel(AndroidInputDevice * this, uint param_1, uint param_2)


/* AndroidInputDevice::getGamePadAxisLabel(unsigned int, unsigned int) */

undefined * __thiscall
AndroidInputDevice::getGamePadAxisLabel(AndroidInputDevice *this,uint param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_0050a39f;
  if ((param_1 == 0) && (param_2 < 0xc)) {
    puVar1 = *(undefined **)(*(long *)(this + 0x1448) + (ulong)param_2 * 8);
  }
  return puVar1;
}


