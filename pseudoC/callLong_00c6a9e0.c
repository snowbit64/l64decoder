// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callLong
// Entry Point: 00c6a9e0
// Size: 88 bytes
// Signature: undefined __thiscall callLong(AndroidJNICall * this, char * param_1)


/* AndroidJNICall::callLong(char const*) */

void __thiscall AndroidJNICall::callLong(AndroidJNICall *this,char *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)getEnv();
  uVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,*(undefined8 *)(this + 0x50),param_1,&DAT_004e69b0);
  _JNIEnv::CallLongMethod((_jobject *)plVar1,*(_jmethodID **)(this + 0x48),uVar2);
  return;
}


