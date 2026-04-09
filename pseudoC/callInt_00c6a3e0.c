// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callInt
// Entry Point: 00c6a3e0
// Size: 88 bytes
// Signature: undefined __thiscall callInt(AndroidJNICall * this, char * param_1)


/* AndroidJNICall::callInt(char const*) */

void __thiscall AndroidJNICall::callInt(AndroidJNICall *this,char *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)getEnv();
  uVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,*(undefined8 *)(this + 0x50),param_1,&DAT_00511135);
  _JNIEnv::CallIntMethod((_jobject *)plVar1,*(_jmethodID **)(this + 0x48),uVar2);
  return;
}


