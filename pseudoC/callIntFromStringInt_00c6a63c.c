// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callIntFromStringInt
// Entry Point: 00c6a63c
// Size: 164 bytes
// Signature: undefined __thiscall callIntFromStringInt(AndroidJNICall * this, char * param_1, char * param_2, uint param_3)


/* AndroidJNICall::callIntFromStringInt(char const*, char const*, unsigned int) */

undefined4 __thiscall
AndroidJNICall::callIntFromStringInt(AndroidJNICall *this,char *param_1,char *param_2,uint param_3)

{
  undefined4 uVar1;
  long *plVar2;
  _jstring *p_Var3;
  _jmethodID *p_Var4;
  _jmethodID *p_Var5;
  undefined auVar6 [12];
  
  plVar2 = (long *)getEnv();
  auVar6 = (**(code **)(*plVar2 + 0x538))(plVar2,param_2);
  p_Var3 = auVar6._0_8_;
  p_Var5 = *(_jmethodID **)(this + 0x48);
  p_Var4 = getMethodId<unsigned_int,_jstring*,unsigned_int>
                     (this,auVar6._8_4_,(_JNIEnv *)plVar2,param_1,p_Var3,param_3);
  uVar1 = _JNIEnv::CallIntMethod((_jobject *)plVar2,p_Var5,p_Var4,p_Var3,(ulong)param_3);
  (**(code **)(*plVar2 + 0xb8))(plVar2,p_Var3);
  return uVar1;
}


