// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callBoolFromBool
// Entry Point: 00c6af44
// Size: 108 bytes
// Signature: undefined __thiscall callBoolFromBool(AndroidJNICall * this, char * param_1, bool param_2)


/* AndroidJNICall::callBoolFromBool(char const*, bool) */

bool __thiscall AndroidJNICall::callBoolFromBool(AndroidJNICall *this,char *param_1,bool param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)getEnv();
  uVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*(undefined8 *)(this + 0x50),param_1,&DAT_004d2bc5);
  cVar1 = _JNIEnv::CallBooleanMethod
                    ((_jobject *)plVar2,*(_jmethodID **)(this + 0x48),uVar3,(ulong)(param_2 & 1));
  return cVar1 != '\0';
}


