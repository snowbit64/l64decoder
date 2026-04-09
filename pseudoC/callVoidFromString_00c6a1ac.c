// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callVoidFromString
// Entry Point: 00c6a1ac
// Size: 140 bytes
// Signature: undefined __thiscall callVoidFromString(AndroidJNICall * this, char * param_1, char * param_2)


/* AndroidJNICall::callVoidFromString(char const*, char const*) */

void __thiscall AndroidJNICall::callVoidFromString(AndroidJNICall *this,char *param_1,char *param_2)

{
  long *plVar1;
  _jstring *p_Var2;
  _jmethodID *p_Var3;
  _jmethodID *p_Var4;
  
  plVar1 = (long *)getEnv();
  p_Var2 = (_jstring *)(**(code **)(*plVar1 + 0x538))(plVar1,param_2);
  p_Var4 = *(_jmethodID **)(this + 0x48);
  p_Var3 = getMethodId<_jstring*>(this,(_JNIEnv *)plVar1,param_1,p_Var2);
  _JNIEnv::CallVoidMethod((_jobject *)plVar1,p_Var4,p_Var3,p_Var2);
                    /* WARNING: Could not recover jumptable at 0x00c6a234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xb8))(plVar1,p_Var2);
  return;
}


