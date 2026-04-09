// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callIntFromStringStringByteArrayInt
// Entry Point: 00c6a6e0
// Size: 392 bytes
// Signature: undefined __thiscall callIntFromStringStringByteArrayInt(AndroidJNICall * this, char * param_1, char * param_2, char * param_3, uchar * param_4, uint param_5, uint param_6)


/* AndroidJNICall::callIntFromStringStringByteArrayInt(char const*, char const*, char const*,
   unsigned char const*, unsigned int, unsigned int) */

undefined4 __thiscall
AndroidJNICall::callIntFromStringStringByteArrayInt
          (AndroidJNICall *this,char *param_1,char *param_2,char *param_3,uchar *param_4,
          uint param_5,uint param_6)

{
  bool bVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar7 = (ulong)param_5;
  plVar3 = (long *)getEnv();
  uVar4 = (**(code **)(*plVar3 + 0x538))(plVar3,param_2);
  uVar5 = (**(code **)(*plVar3 + 0x538))(plVar3,param_3);
  if (param_5 == 0) {
    uVar8 = 0;
    bVar1 = true;
  }
  else {
    bVar1 = param_5 <= *(uint *)(this + 0x68);
    if (bVar1) {
      uVar8 = *(undefined8 *)(this + 0x60);
    }
    else {
      uVar8 = (**(code **)(*plVar3 + 0x580))(plVar3,uVar7);
    }
    (**(code **)(*plVar3 + 0x558))(plVar3,uVar8);
    (**(code **)(*plVar3 + 0x680))(plVar3,uVar8,0,uVar7,param_4);
  }
  uVar6 = (**(code **)(*plVar3 + 0x108))
                    (plVar3,*(undefined8 *)(this + 0x50),param_1,
                     "(Ljava/lang/String;Ljava/lang/String;[BII)I");
  uVar2 = _JNIEnv::CallIntMethod
                    ((_jobject *)plVar3,*(_jmethodID **)(this + 0x48),uVar6,uVar4,uVar5,uVar8,uVar7,
                     (ulong)param_6);
  (**(code **)(*plVar3 + 0xb8))(plVar3,uVar4);
  (**(code **)(*plVar3 + 0xb8))(plVar3,uVar5);
  if (!bVar1) {
    (**(code **)(*plVar3 + 0xb8))(plVar3,uVar8);
  }
  return uVar2;
}


