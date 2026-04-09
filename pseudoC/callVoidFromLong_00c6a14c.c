// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callVoidFromLong
// Entry Point: 00c6a14c
// Size: 96 bytes
// Signature: undefined __thiscall callVoidFromLong(AndroidJNICall * this, char * param_1, ulonglong param_2)


/* AndroidJNICall::callVoidFromLong(char const*, unsigned long long) */

void __thiscall
AndroidJNICall::callVoidFromLong(AndroidJNICall *this,char *param_1,ulonglong param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)getEnv();
  uVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,*(undefined8 *)(this + 0x50),param_1,&DAT_004d769b);
  _JNIEnv::CallVoidMethod((_jobject *)plVar1,*(_jmethodID **)(this + 0x48),uVar2,param_2);
  return;
}


