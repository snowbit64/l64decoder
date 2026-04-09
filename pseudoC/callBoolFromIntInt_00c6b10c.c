// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callBoolFromIntInt
// Entry Point: 00c6b10c
// Size: 124 bytes
// Signature: undefined __thiscall callBoolFromIntInt(AndroidJNICall * this, char * param_1, int param_2, int param_3)


/* AndroidJNICall::callBoolFromIntInt(char const*, int, int) */

bool __thiscall
AndroidJNICall::callBoolFromIntInt(AndroidJNICall *this,char *param_1,int param_2,int param_3)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)getEnv();
  uVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*(undefined8 *)(this + 0x50),param_1,"(II)Z");
  cVar1 = _JNIEnv::CallBooleanMethod
                    ((_jobject *)plVar2,*(_jmethodID **)(this + 0x48),uVar3,(ulong)(uint)param_2,
                     (ulong)(uint)param_3);
  return cVar1 != '\0';
}


