// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callFloatFromInt
// Entry Point: 00c6d6cc
// Size: 96 bytes
// Signature: undefined __thiscall callFloatFromInt(AndroidJNICall * this, char * param_1, uint param_2)


/* AndroidJNICall::callFloatFromInt(char const*, unsigned int) */

void __thiscall AndroidJNICall::callFloatFromInt(AndroidJNICall *this,char *param_1,uint param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)getEnv();
  uVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,*(undefined8 *)(this + 0x50),param_1,&DAT_004d76a0);
  _JNIEnv::CallFloatMethod((_jobject *)plVar1,*(_jmethodID **)(this + 0x48),uVar2,(ulong)param_2);
  return;
}


