// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callBoolFromString
// Entry Point: 00c6b278
// Size: 160 bytes
// Signature: undefined __thiscall callBoolFromString(AndroidJNICall * this, char * param_1, char * param_2)


/* AndroidJNICall::callBoolFromString(char const*, char const*) */

bool __thiscall AndroidJNICall::callBoolFromString(AndroidJNICall *this,char *param_1,char *param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)getEnv();
  uVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*(undefined8 *)(this + 0x50),param_1,"(Ljava/lang/String;)Z");
  uVar4 = (**(code **)(*plVar2 + 0x538))(plVar2,param_2);
  cVar1 = _JNIEnv::CallBooleanMethod((_jobject *)plVar2,*(_jmethodID **)(this + 0x48),uVar3,uVar4);
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar4);
  return cVar1 != '\0';
}


