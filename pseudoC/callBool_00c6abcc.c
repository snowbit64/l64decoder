// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callBool
// Entry Point: 00c6abcc
// Size: 92 bytes
// Signature: undefined __thiscall callBool(AndroidJNICall * this, char * param_1)


/* AndroidJNICall::callBool(char const*) */

bool __thiscall AndroidJNICall::callBool(AndroidJNICall *this,char *param_1)

{
  char cVar1;
  _JNIEnv *p_Var2;
  _jmethodID *p_Var3;
  
  p_Var2 = (_JNIEnv *)getEnv();
  p_Var3 = getMethodId<bool>(this,false,p_Var2,param_1);
  cVar1 = _JNIEnv::CallBooleanMethod((_jobject *)p_Var2,*(_jmethodID **)(this + 0x48),p_Var3);
  return cVar1 != '\0';
}


