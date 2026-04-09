// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callFloat
// Entry Point: 00c6d5d8
// Size: 88 bytes
// Signature: undefined __thiscall callFloat(AndroidJNICall * this, char * param_1)


/* AndroidJNICall::callFloat(char const*) */

void __thiscall AndroidJNICall::callFloat(AndroidJNICall *this,char *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)getEnv();
  uVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,*(undefined8 *)(this + 0x50),param_1,"(void)F");
  _JNIEnv::CallFloatMethod((_jobject *)plVar1,*(_jmethodID **)(this + 0x48),uVar2);
  return;
}


