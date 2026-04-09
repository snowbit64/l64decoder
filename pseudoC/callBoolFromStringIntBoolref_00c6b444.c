// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callBoolFromStringIntBoolref
// Entry Point: 00c6b444
// Size: 364 bytes
// Signature: undefined __thiscall callBoolFromStringIntBoolref(AndroidJNICall * this, char * param_1, char * param_2, uint param_3, bool * param_4)


/* AndroidJNICall::callBoolFromStringIntBoolref(char const*, char const*, unsigned int, bool&) */

bool __thiscall
AndroidJNICall::callBoolFromStringIntBoolref
          (AndroidJNICall *this,char *param_1,char *param_2,uint param_3,bool *param_4)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  char local_5c [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)getEnv();
  uVar4 = (**(code **)(*plVar3 + 0x108))
                    (plVar3,*(undefined8 *)(this + 0x50),param_1,"(Ljava/lang/String;I[Z)Z");
  uVar5 = (**(code **)(*plVar3 + 0x538))(plVar3,param_2);
  local_5c[0] = *param_4;
  uVar6 = (**(code **)(*plVar3 + 0x578))(plVar3,1);
  (**(code **)(*plVar3 + 0x678))(plVar3,uVar6,0,1,local_5c);
  cVar2 = _JNIEnv::CallBooleanMethod
                    ((_jobject *)plVar3,*(_jmethodID **)(this + 0x48),uVar4,uVar5,(ulong)param_3,
                     uVar6);
  (**(code **)(*plVar3 + 0x638))(plVar3,uVar6,0,1,local_5c);
  pcVar7 = *(code **)(*plVar3 + 0xb8);
  *param_4 = local_5c[0] != '\0';
  (*pcVar7)(plVar3,uVar5);
  (**(code **)(*plVar3 + 0xb8))(plVar3,uVar6);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return cVar2 != '\0';
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


