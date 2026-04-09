// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDeadzone
// Entry Point: 00b20a18
// Size: 24 bytes
// Signature: undefined __thiscall setDeadzone(AndroidInputDevice * this, uint param_1, uint param_2, float param_3)


/* AndroidInputDevice::setDeadzone(unsigned int, unsigned int, float) */

void __thiscall
AndroidInputDevice::setDeadzone(AndroidInputDevice *this,uint param_1,uint param_2,float param_3)

{
  if ((param_1 == 0) && (param_2 < 0xc)) {
    *(float *)(this + (ulong)param_2 * 4 + 0x1480) = param_3;
  }
  return;
}


