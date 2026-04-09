// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00b2e8c0
// Size: 16 bytes
// Signature: undefined __thiscall update(AndroidCloudDevice * this, float param_1)


/* AndroidCloudDevice::update(float) */

void __thiscall AndroidCloudDevice::update(AndroidCloudDevice *this,float param_1)

{
  AndroidJNICall::callBoolFromFloat(*(AndroidJNICall **)(this + 0x38),"update",param_1);
  return;
}


