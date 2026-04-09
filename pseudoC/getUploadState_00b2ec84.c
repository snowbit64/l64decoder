// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUploadState
// Entry Point: 00b2ec84
// Size: 20 bytes
// Signature: undefined __thiscall getUploadState(AndroidCloudDevice * this, Session * param_1, char * param_2)


/* AndroidCloudDevice::getUploadState(ICloudDevice::Session*, char const*) */

void __thiscall
AndroidCloudDevice::getUploadState(AndroidCloudDevice *this,Session *param_1,char *param_2)

{
  AndroidJNICall::callIntFromStringInt
            (*(AndroidJNICall **)(this + 0x38),"getUploadState",param_2,*(uint *)(param_1 + 0x20));
  return;
}


