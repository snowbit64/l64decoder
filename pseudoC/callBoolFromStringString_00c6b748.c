// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callBoolFromStringString
// Entry Point: 00c6b748
// Size: 220 bytes
// Signature: undefined __thiscall callBoolFromStringString(AndroidJNICall * this, char * param_1, char * param_2, char * param_3)


/* AndroidJNICall::callBoolFromStringString(char const*, char const*, char const*) */

bool __thiscall
AndroidJNICall::callBoolFromStringString
          (AndroidJNICall *this,char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  plVar2 = (long *)getEnv();
  uVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*(undefined8 *)(this + 0x50),param_1,
                     "(Ljava/lang/String;Ljava/lang/String;)Z");
  uVar4 = (**(code **)(*plVar2 + 0x538))(plVar2,param_2);
  uVar5 = (**(code **)(*plVar2 + 0x538))(plVar2,param_3);
  cVar1 = _JNIEnv::CallBooleanMethod
                    ((_jobject *)plVar2,*(_jmethodID **)(this + 0x48),uVar3,uVar4,uVar5);
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar4);
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar5);
  return cVar1 != '\0';
}


