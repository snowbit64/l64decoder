// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callVoidFromIntFloatInt
// Entry Point: 00c6a0c8
// Size: 132 bytes
// Signature: undefined __thiscall callVoidFromIntFloatInt(AndroidJNICall * this, char * param_1, uint param_2, float param_3, uint param_4)


/* AndroidJNICall::callVoidFromIntFloatInt(char const*, unsigned int, float, unsigned int) */

void __thiscall
AndroidJNICall::callVoidFromIntFloatInt
          (AndroidJNICall *this,char *param_1,uint param_2,float param_3,uint param_4)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  _jmethodID *p_Var3;
  
  p_Var1 = (_JNIEnv *)getEnv();
  p_Var3 = *(_jmethodID **)(this + 0x48);
  p_Var2 = getMethodId<unsigned_int,float,unsigned_int>(this,p_Var1,param_1,param_2,param_3,param_4)
  ;
  _JNIEnv::CallVoidMethod
            ((_jobject *)p_Var1,p_Var3,(double)param_3,p_Var2,(ulong)param_2,(ulong)param_4);
  return;
}


