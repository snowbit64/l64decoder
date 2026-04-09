// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callVoidFromInt
// Entry Point: 00c6a064
// Size: 100 bytes
// Signature: undefined __thiscall callVoidFromInt(AndroidJNICall * this, char * param_1, uint param_2)


/* AndroidJNICall::callVoidFromInt(char const*, unsigned int) */

void __thiscall AndroidJNICall::callVoidFromInt(AndroidJNICall *this,char *param_1,uint param_2)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  _jmethodID *p_Var3;
  
  p_Var1 = (_JNIEnv *)getEnv();
  p_Var3 = *(_jmethodID **)(this + 0x48);
  p_Var2 = getMethodId<unsigned_int>(this,p_Var1,param_1,param_2);
  _JNIEnv::CallVoidMethod((_jobject *)p_Var1,p_Var3,p_Var2,(ulong)param_2);
  return;
}


