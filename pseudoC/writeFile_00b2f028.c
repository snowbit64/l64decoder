// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeFile
// Entry Point: 00b2f028
// Size: 40 bytes
// Signature: undefined __thiscall writeFile(AndroidCloudDevice * this, Session * param_1, char * param_2, uchar * param_3, uint param_4, char * param_5)


/* AndroidCloudDevice::writeFile(ICloudDevice::Session*, char const*, unsigned char const*, unsigned
   int, char const*) */

void __thiscall
AndroidCloudDevice::writeFile
          (AndroidCloudDevice *this,Session *param_1,char *param_2,uchar *param_3,uint param_4,
          char *param_5)

{
  AndroidJNICall::callIntFromStringStringByteArrayInt
            (*(AndroidJNICall **)(this + 0x38),"writeFile",param_2,param_5,param_3,param_4,
             *(uint *)(param_1 + 0x20));
  return;
}


