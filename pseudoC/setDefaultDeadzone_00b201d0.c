// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDefaultDeadzone
// Entry Point: 00b201d0
// Size: 20 bytes
// Signature: undefined __thiscall setDefaultDeadzone(AndroidInputDevice * this, float param_1)


/* AndroidInputDevice::setDefaultDeadzone(float) */

void __thiscall AndroidInputDevice::setDefaultDeadzone(AndroidInputDevice *this,float param_1)

{
  *(ulong *)(this + 0x1488) = CONCAT44(param_1,param_1);
  *(ulong *)(this + 0x1480) = CONCAT44(param_1,param_1);
  *(ulong *)(this + 0x1498) = CONCAT44(param_1,param_1);
  *(ulong *)(this + 0x1490) = CONCAT44(param_1,param_1);
  *(ulong *)(this + 0x14a8) = CONCAT44(param_1,param_1);
  *(ulong *)(this + 0x14a0) = CONCAT44(param_1,param_1);
  return;
}


