// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callBoolFromInt
// Entry Point: 00c6b098
// Size: 116 bytes
// Signature: undefined __thiscall callBoolFromInt(AndroidJNICall * this, char * param_1, int param_2)


/* AndroidJNICall::callBoolFromInt(char const*, int) */

bool __thiscall AndroidJNICall::callBoolFromInt(AndroidJNICall *this,char *param_1,int param_2)

{
  char cVar1;
  _JNIEnv *p_Var2;
  _jmethodID *p_Var3;
  _jmethodID *p_Var4;
  
  p_Var2 = (_JNIEnv *)getEnv();
  p_Var4 = *(_jmethodID **)(this + 0x48);
  p_Var3 = getMethodId<bool,int>(this,false,p_Var2,param_1,param_2);
  cVar1 = _JNIEnv::CallBooleanMethod((_jobject *)p_Var2,p_Var4,p_Var3,(ulong)(uint)param_2);
  return cVar1 != '\0';
}


