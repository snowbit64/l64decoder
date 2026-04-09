// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callByteArrayFromStringStringStringByteArrayBoolrefIntref
// Entry Point: 00c6d068
// Size: 728 bytes
// Signature: undefined __thiscall callByteArrayFromStringStringStringByteArrayBoolrefIntref(AndroidJNICall * this, char * param_1, uchar * * param_2, uint * param_3, char * param_4, char * param_5, char * param_6, uchar * param_7, uint param_8, bool * param_9, uint * param_10)


/* AndroidJNICall::callByteArrayFromStringStringStringByteArrayBoolrefIntref(char const*, unsigned
   char**, unsigned int&, char const*, char const*, char const*, unsigned char const*, unsigned int,
   bool&, unsigned int&) */

void __thiscall
AndroidJNICall::callByteArrayFromStringStringStringByteArrayBoolrefIntref
          (AndroidJNICall *this,char *param_1,uchar **param_2,uint *param_3,char *param_4,
          char *param_5,char *param_6,uchar *param_7,uint param_8,bool *param_9,uint *param_10)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uchar *puVar9;
  long lVar10;
  
  plVar2 = (long *)getEnv();
  uVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*(undefined8 *)(this + 0x50),param_1,
                     "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B[Z[I)[B");
  uVar4 = (**(code **)(*plVar2 + 0x538))(plVar2,param_4);
  uVar5 = (**(code **)(*plVar2 + 0x538))(plVar2,param_5);
  uVar6 = (**(code **)(*plVar2 + 0x538))(plVar2,param_6);
  lVar10 = *(long *)(this + 0x60);
  if (lVar10 == 0) {
    lVar10 = (**(code **)(*plVar2 + 0x580))(plVar2,param_8);
  }
  (**(code **)(*plVar2 + 0x680))(plVar2,lVar10,0,param_8,param_7);
  uVar7 = (**(code **)(*plVar2 + 0x578))(plVar2,1);
  uVar8 = (**(code **)(*plVar2 + 0x598))(plVar2,1);
  (**(code **)(*plVar2 + 0x678))(plVar2,uVar7,0,1,param_9);
  (**(code **)(*plVar2 + 0x698))(plVar2,uVar8,0,1);
  uVar3 = _JNIEnv::CallObjectMethod
                    ((_jobject *)plVar2,*(_jmethodID **)(this + 0x48),uVar3,uVar4,uVar5,uVar6,lVar10
                     ,uVar7,uVar8);
  uVar1 = (**(code **)(*plVar2 + 0x558))(plVar2,uVar3);
  *param_3 = uVar1;
  if (uVar1 != 0) {
    puVar9 = (uchar *)operator_new__((ulong)uVar1);
    *param_2 = puVar9;
    (**(code **)(*plVar2 + 0x640))(plVar2,uVar3,0,uVar1,puVar9);
  }
  (**(code **)(*plVar2 + 0x638))(plVar2,uVar7,0,1,param_9);
  (**(code **)(*plVar2 + 0x658))(plVar2,uVar8,0,1,param_10);
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar4);
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar5);
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar6);
  if (*(long *)(this + 0x60) == 0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar10);
  }
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00c6d33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar8);
  return;
}


