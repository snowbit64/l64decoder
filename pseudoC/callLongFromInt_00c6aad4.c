// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callLongFromInt
// Entry Point: 00c6aad4
// Size: 96 bytes
// Signature: undefined __thiscall callLongFromInt(AndroidJNICall * this, char * param_1, int param_2)


/* AndroidJNICall::callLongFromInt(char const*, int) */

void __thiscall AndroidJNICall::callLongFromInt(AndroidJNICall *this,char *param_1,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)getEnv();
  uVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,*(undefined8 *)(this + 0x50),param_1,&DAT_004dc95a);
  _JNIEnv::CallLongMethod
            ((_jobject *)plVar1,*(_jmethodID **)(this + 0x48),uVar2,(ulong)(uint)param_2);
  return;
}


