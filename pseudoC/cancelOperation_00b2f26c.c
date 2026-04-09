// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelOperation
// Entry Point: 00b2f26c
// Size: 20 bytes
// Signature: undefined __thiscall cancelOperation(AndroidCloudDevice * this, Operation * param_1)


/* AndroidCloudDevice::cancelOperation(ICloudDevice::Operation*) */

void __thiscall AndroidCloudDevice::cancelOperation(AndroidCloudDevice *this,Operation *param_1)

{
  AndroidJNICall::callVoidFromInt
            (*(AndroidJNICall **)(this + 0x38),"cancelOperation",*(uint *)param_1);
  return;
}


