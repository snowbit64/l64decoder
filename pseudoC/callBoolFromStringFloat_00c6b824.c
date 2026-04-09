// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callBoolFromStringFloat
// Entry Point: 00c6b824
// Size: 176 bytes
// Signature: undefined __thiscall callBoolFromStringFloat(AndroidJNICall * this, char * param_1, char * param_2, float param_3)


/* AndroidJNICall::callBoolFromStringFloat(char const*, char const*, float) */

bool __thiscall
AndroidJNICall::callBoolFromStringFloat
          (AndroidJNICall *this,char *param_1,char *param_2,float param_3)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)getEnv();
  uVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*(undefined8 *)(this + 0x50),param_1,"(Ljava/lang/String;F)Z");
  uVar4 = (**(code **)(*plVar2 + 0x538))(plVar2,param_2);
  cVar1 = _JNIEnv::CallBooleanMethod
                    ((_jobject *)plVar2,*(_jmethodID **)(this + 0x48),(double)param_3,uVar3,uVar4);
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar4);
  return cVar1 != '\0';
}


