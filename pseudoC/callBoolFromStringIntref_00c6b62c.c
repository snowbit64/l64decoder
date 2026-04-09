// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callBoolFromStringIntref
// Entry Point: 00c6b62c
// Size: 284 bytes
// Signature: undefined __thiscall callBoolFromStringIntref(AndroidJNICall * this, char * param_1, char * param_2, uint * param_3)


/* AndroidJNICall::callBoolFromStringIntref(char const*, char const*, unsigned int&) */

bool __thiscall
AndroidJNICall::callBoolFromStringIntref
          (AndroidJNICall *this,char *param_1,char *param_2,uint *param_3)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  plVar2 = (long *)getEnv();
  uVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*(undefined8 *)(this + 0x50),param_1,"(Ljava/lang/String;[I)Z");
  uVar4 = (**(code **)(*plVar2 + 0x538))(plVar2,param_2);
  uVar5 = (**(code **)(*plVar2 + 0x598))(plVar2,1);
  (**(code **)(*plVar2 + 0x698))(plVar2,uVar5,0,1,param_3);
  cVar1 = _JNIEnv::CallBooleanMethod
                    ((_jobject *)plVar2,*(_jmethodID **)(this + 0x48),uVar3,uVar4,uVar5);
  (**(code **)(*plVar2 + 0x658))(plVar2,uVar5,0,1,param_3);
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar4);
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar5);
  return cVar1 != '\0';
}


