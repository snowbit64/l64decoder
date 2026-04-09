// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callFloatFromStringFloat
// Entry Point: 00c6d72c
// Size: 172 bytes
// Signature: undefined __thiscall callFloatFromStringFloat(AndroidJNICall * this, char * param_1, char * param_2, float param_3)


/* AndroidJNICall::callFloatFromStringFloat(char const*, char const*, float) */

undefined4 __thiscall
AndroidJNICall::callFloatFromStringFloat
          (AndroidJNICall *this,char *param_1,char *param_2,float param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  plVar1 = (long *)getEnv();
  uVar2 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,*(undefined8 *)(this + 0x50),param_1,"(Ljava/lang/String;F)F");
  uVar3 = (**(code **)(*plVar1 + 0x538))(plVar1,param_2);
  uVar4 = _JNIEnv::CallFloatMethod
                    ((_jobject *)plVar1,*(_jmethodID **)(this + 0x48),(double)param_3,uVar2,uVar3);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar3);
  return uVar4;
}


