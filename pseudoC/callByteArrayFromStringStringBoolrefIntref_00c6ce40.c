// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callByteArrayFromStringStringBoolrefIntref
// Entry Point: 00c6ce40
// Size: 552 bytes
// Signature: undefined __thiscall callByteArrayFromStringStringBoolrefIntref(AndroidJNICall * this, char * param_1, uchar * * param_2, uint * param_3, char * param_4, char * param_5, bool * param_6, uint * param_7)


/* AndroidJNICall::callByteArrayFromStringStringBoolrefIntref(char const*, unsigned char**, unsigned
   int&, char const*, char const*, bool&, unsigned int&) */

void __thiscall
AndroidJNICall::callByteArrayFromStringStringBoolrefIntref
          (AndroidJNICall *this,char *param_1,uchar **param_2,uint *param_3,char *param_4,
          char *param_5,bool *param_6,uint *param_7)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uchar *puVar8;
  
  plVar2 = (long *)getEnv();
  uVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*(undefined8 *)(this + 0x50),param_1,
                     "(Ljava/lang/String;Ljava/lang/String;[Z[I)[B");
  uVar4 = (**(code **)(*plVar2 + 0x538))(plVar2,param_4);
  uVar5 = (**(code **)(*plVar2 + 0x538))(plVar2,param_5);
  uVar6 = (**(code **)(*plVar2 + 0x578))(plVar2,1);
  uVar7 = (**(code **)(*plVar2 + 0x598))(plVar2,1);
  (**(code **)(*plVar2 + 0x678))(plVar2,uVar6,0,1,param_6);
  (**(code **)(*plVar2 + 0x698))(plVar2,uVar7,0,1,param_7);
  uVar3 = _JNIEnv::CallObjectMethod
                    ((_jobject *)plVar2,*(_jmethodID **)(this + 0x48),uVar3,uVar4,uVar5,uVar6,uVar7)
  ;
  uVar1 = (**(code **)(*plVar2 + 0x558))(plVar2,uVar3);
  *param_3 = uVar1;
  if (uVar1 != 0) {
    puVar8 = (uchar *)operator_new__((ulong)uVar1);
    *param_2 = puVar8;
    (**(code **)(*plVar2 + 0x640))(plVar2,uVar3,0,uVar1,puVar8);
  }
  (**(code **)(*plVar2 + 0x638))(plVar2,uVar6,0,1,param_6);
  (**(code **)(*plVar2 + 0x658))(plVar2,uVar7,0,1,param_7);
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar4);
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar5);
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00c6d064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar7);
  return;
}


