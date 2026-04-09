// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callBoolFromBoolref
// Entry Point: 00c6afb0
// Size: 232 bytes
// Signature: undefined __thiscall callBoolFromBoolref(AndroidJNICall * this, char * param_1, bool * param_2)


/* AndroidJNICall::callBoolFromBoolref(char const*, bool&) */

bool __thiscall
AndroidJNICall::callBoolFromBoolref(AndroidJNICall *this,char *param_1,bool *param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)getEnv();
  uVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*(undefined8 *)(this + 0x50),param_1,"([Z)Z");
  uVar4 = (**(code **)(*plVar2 + 0x578))(plVar2,1);
  (**(code **)(*plVar2 + 0x678))(plVar2,uVar4,0,1,param_2);
  cVar1 = _JNIEnv::CallBooleanMethod((_jobject *)plVar2,*(_jmethodID **)(this + 0x48),uVar3,uVar4);
  (**(code **)(*plVar2 + 0x638))(plVar2,uVar4,0,1,param_2);
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar4);
  return cVar1 != '\0';
}


