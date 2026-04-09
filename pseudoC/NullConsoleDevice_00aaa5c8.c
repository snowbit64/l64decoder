// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullConsoleDevice
// Entry Point: 00aaa5c8
// Size: 36 bytes
// Signature: undefined __thiscall ~NullConsoleDevice(NullConsoleDevice * this)


/* NullConsoleDevice::~NullConsoleDevice() */

void __thiscall NullConsoleDevice::~NullConsoleDevice(NullConsoleDevice *this)

{
  ~NullConsoleDevice(this);
  operator_delete(this);
  return;
}


