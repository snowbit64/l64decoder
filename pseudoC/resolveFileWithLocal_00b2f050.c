// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resolveFileWithLocal
// Entry Point: 00b2f050
// Size: 20 bytes
// Signature: undefined __thiscall resolveFileWithLocal(AndroidCloudDevice * this, Session * param_1, char * param_2)


/* AndroidCloudDevice::resolveFileWithLocal(ICloudDevice::Session*, char const*) */

void __thiscall
AndroidCloudDevice::resolveFileWithLocal(AndroidCloudDevice *this,Session *param_1,char *param_2)

{
  AndroidJNICall::callIntFromStringInt
            (*(AndroidJNICall **)(this + 0x38),"resolveFileWithLocal",param_2,
             *(uint *)(param_1 + 0x20));
  return;
}


