// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callBoolFromStringBoolIntref
// Entry Point: 00c6b318
// Size: 300 bytes
// Signature: undefined __thiscall callBoolFromStringBoolIntref(AndroidJNICall * this, char * param_1, char * param_2, bool param_3, uint * param_4)


/* AndroidJNICall::callBoolFromStringBoolIntref(char const*, char const*, bool, unsigned int&) */

bool __thiscall
AndroidJNICall::callBoolFromStringBoolIntref
          (AndroidJNICall *this,char *param_1,char *param_2,bool param_3,uint *param_4)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  plVar2 = (long *)getEnv();
  uVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*(undefined8 *)(this + 0x50),param_1,"(Ljava/lang/String;Z[I)Z");
  uVar4 = (**(code **)(*plVar2 + 0x538))(plVar2,param_2);
  uVar5 = (**(code **)(*plVar2 + 0x598))(plVar2,1);
  (**(code **)(*plVar2 + 0x698))(plVar2,uVar5,0,1,param_4);
  cVar1 = _JNIEnv::CallBooleanMethod
                    ((_jobject *)plVar2,*(_jmethodID **)(this + 0x48),uVar3,uVar4,
                     (ulong)(param_3 & 1),uVar5);
  (**(code **)(*plVar2 + 0x658))(plVar2,uVar5,0,1,param_4);
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar4);
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar5);
  return cVar1 != '\0';
}


