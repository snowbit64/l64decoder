// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callIntFromInt
// Entry Point: 00c6a4d4
// Size: 96 bytes
// Signature: undefined __thiscall callIntFromInt(AndroidJNICall * this, char * param_1, uint param_2)


/* AndroidJNICall::callIntFromInt(char const*, unsigned int) */

void __thiscall AndroidJNICall::callIntFromInt(AndroidJNICall *this,char *param_1,uint param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)getEnv();
  uVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,*(undefined8 *)(this + 0x50),param_1,&DAT_004dee61);
  _JNIEnv::CallIntMethod((_jobject *)plVar1,*(_jmethodID **)(this + 0x48),uVar2,(ulong)param_2);
  return;
}


