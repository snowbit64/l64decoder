// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callStringFromStringIntByteArrayrefIntref
// Entry Point: 00c6d340
// Size: 664 bytes
// Signature: undefined __thiscall callStringFromStringIntByteArrayrefIntref(AndroidJNICall * this, char * param_1, basic_string * param_2, char * param_3, uint param_4, uchar * * param_5, uint * param_6, uint * param_7)


/* AndroidJNICall::callStringFromStringIntByteArrayrefIntref(char const*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   char const*, unsigned int, unsigned char*&, unsigned int&, unsigned int&) */

void __thiscall
AndroidJNICall::callStringFromStringIntByteArrayrefIntref
          (AndroidJNICall *this,char *param_1,basic_string *param_2,char *param_3,uint param_4,
          uchar **param_5,uint *param_6,uint *param_7)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uchar *puVar9;
  
  plVar2 = (long *)getEnv();
  uVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*(undefined8 *)(this + 0x50),param_1,
                     "(Ljava/lang/String;I[[B[I)Ljava/lang/String;");
  uVar4 = (**(code **)(*plVar2 + 0x538))(plVar2,param_3);
  uVar5 = (**(code **)(*plVar2 + 0x30))(plVar2,&DAT_004cdcc3);
  uVar6 = (**(code **)(*plVar2 + 0x560))(plVar2,1,uVar5,0);
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar5);
  uVar5 = (**(code **)(*plVar2 + 0x598))(plVar2,1);
  (**(code **)(*plVar2 + 0x698))(plVar2,uVar5,0,1,param_7);
  lVar7 = _JNIEnv::CallObjectMethod
                    ((_jobject *)plVar2,*(_jmethodID **)(this + 0x48),uVar3,uVar4,(ulong)param_4,
                     uVar6,uVar5);
  if ((*(byte *)param_2 & 1) == 0) {
    *(undefined2 *)param_2 = 0;
  }
  else {
    **(undefined **)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
  }
  if (lVar7 != 0) {
    lVar8 = (**(code **)(*plVar2 + 0x548))(plVar2,lVar7,0);
    if (lVar8 != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_2);
    }
    (**(code **)(*plVar2 + 0x550))(plVar2,lVar7,lVar8);
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar7);
  }
  lVar7 = (**(code **)(*plVar2 + 0x568))(plVar2,uVar6,0);
  *param_6 = 0;
  *param_5 = (uchar *)0x0;
  if (lVar7 != 0) {
    uVar1 = (**(code **)(*plVar2 + 0x558))(plVar2,lVar7);
    *param_6 = uVar1;
    if (uVar1 != 0) {
      puVar9 = (uchar *)operator_new__((ulong)uVar1);
      *param_5 = puVar9;
      (**(code **)(*plVar2 + 0x640))(plVar2,lVar7,0,uVar1,puVar9);
    }
  }
  (**(code **)(*plVar2 + 0x658))(plVar2,uVar5,0,1,param_7);
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar4);
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00c6d5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar5);
  return;
}


