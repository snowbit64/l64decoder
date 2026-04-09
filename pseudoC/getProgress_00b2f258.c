// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getProgress
// Entry Point: 00b2f258
// Size: 20 bytes
// Signature: undefined __thiscall getProgress(AndroidCloudDevice * this, Operation * param_1)


/* AndroidCloudDevice::getProgress(ICloudDevice::Operation*) */

void __thiscall AndroidCloudDevice::getProgress(AndroidCloudDevice *this,Operation *param_1)

{
  AndroidJNICall::callFloatFromInt(*(AndroidJNICall **)(this + 0x38),"getProgress",*(uint *)param_1)
  ;
  return;
}


