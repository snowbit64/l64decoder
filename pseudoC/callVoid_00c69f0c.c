// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callVoid
// Entry Point: 00c69f0c
// Size: 88 bytes
// Signature: undefined __thiscall callVoid(AndroidJNICall * this, char * param_1)


/* AndroidJNICall::callVoid(char const*) */

void __thiscall AndroidJNICall::callVoid(AndroidJNICall *this,char *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)getEnv();
  uVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,*(undefined8 *)(this + 0x50),param_1,&DAT_004e92e6);
  _JNIEnv::CallVoidMethod((_jobject *)plVar1,*(_jmethodID **)(this + 0x48),uVar2);
  return;
}


