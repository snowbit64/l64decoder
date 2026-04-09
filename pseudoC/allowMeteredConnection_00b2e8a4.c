// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allowMeteredConnection
// Entry Point: 00b2e8a4
// Size: 28 bytes
// Signature: undefined __thiscall allowMeteredConnection(AndroidCloudDevice * this, bool param_1)


/* AndroidCloudDevice::allowMeteredConnection(bool) */

void __thiscall AndroidCloudDevice::allowMeteredConnection(AndroidCloudDevice *this,bool param_1)

{
  this[0x40] = (AndroidCloudDevice)param_1;
  AndroidJNICall::callVoidFromBool
            (*(AndroidJNICall **)(this + 0x38),"allowMeteredConnection",param_1);
  return;
}


