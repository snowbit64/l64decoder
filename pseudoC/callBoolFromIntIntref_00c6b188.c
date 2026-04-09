// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callBoolFromIntIntref
// Entry Point: 00c6b188
// Size: 240 bytes
// Signature: undefined __thiscall callBoolFromIntIntref(AndroidJNICall * this, char * param_1, uint param_2, uint * param_3)


/* AndroidJNICall::callBoolFromIntIntref(char const*, unsigned int, unsigned int&) */

bool __thiscall
AndroidJNICall::callBoolFromIntIntref(AndroidJNICall *this,char *param_1,uint param_2,uint *param_3)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)getEnv();
  uVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*(undefined8 *)(this + 0x50),param_1,"(I[I)Z");
  uVar4 = (**(code **)(*plVar2 + 0x598))(plVar2,1);
  (**(code **)(*plVar2 + 0x698))(plVar2,uVar4,0,1,param_3);
  cVar1 = _JNIEnv::CallBooleanMethod
                    ((_jobject *)plVar2,*(_jmethodID **)(this + 0x48),uVar3,(ulong)param_2,uVar4);
  (**(code **)(*plVar2 + 0x658))(plVar2,uVar4,0,1,param_3);
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar4);
  return cVar1 != '\0';
}


