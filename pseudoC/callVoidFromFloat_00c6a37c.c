// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callVoidFromFloat
// Entry Point: 00c6a37c
// Size: 100 bytes
// Signature: undefined __thiscall callVoidFromFloat(AndroidJNICall * this, char * param_1, float param_2)


/* AndroidJNICall::callVoidFromFloat(char const*, float) */

void __thiscall AndroidJNICall::callVoidFromFloat(AndroidJNICall *this,char *param_1,float param_2)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  _jmethodID *p_Var3;
  
  p_Var1 = (_JNIEnv *)getEnv();
  p_Var3 = *(_jmethodID **)(this + 0x48);
  p_Var2 = getMethodId<float>(this,p_Var1,param_1,param_2);
  _JNIEnv::CallVoidMethod((_jobject *)p_Var1,p_Var3,(double)param_2,p_Var2);
  return;
}


