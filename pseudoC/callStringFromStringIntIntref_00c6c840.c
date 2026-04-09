// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callStringFromStringIntIntref
// Entry Point: 00c6c840
// Size: 436 bytes
// Signature: undefined __thiscall callStringFromStringIntIntref(AndroidJNICall * this, char * param_1, basic_string * param_2, char * param_3, uint param_4, uint * param_5)


/* AndroidJNICall::callStringFromStringIntIntref(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, char const*, unsigned int,
   unsigned int&) */

void __thiscall
AndroidJNICall::callStringFromStringIntIntref
          (AndroidJNICall *this,char *param_1,basic_string *param_2,char *param_3,uint param_4,
          uint *param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  plVar1 = (long *)getEnv();
  uVar2 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,*(undefined8 *)(this + 0x50),param_1,
                     "(Ljava/lang/String;I[I)Ljava/lang/String;");
  uVar3 = (**(code **)(*plVar1 + 0x538))(plVar1,param_3);
  uVar4 = (**(code **)(*plVar1 + 0x598))(plVar1,1);
  (**(code **)(*plVar1 + 0x698))(plVar1,uVar4,0,1,param_5);
  lVar5 = _JNIEnv::CallObjectMethod
                    ((_jobject *)plVar1,*(_jmethodID **)(this + 0x48),uVar2,uVar3,(ulong)param_4,
                     uVar4);
  (**(code **)(*plVar1 + 0x658))(plVar1,uVar4,0,1,param_5);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar3);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar4);
  if ((*(byte *)param_2 & 1) == 0) {
    *(undefined2 *)param_2 = 0;
  }
  else {
    **(undefined **)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
  }
  if (lVar5 != 0) {
    lVar6 = (**(code **)(*plVar1 + 0x548))(plVar1,lVar5,0);
    if (lVar6 != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_2);
    }
    (**(code **)(*plVar1 + 0x550))(plVar1,lVar5,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00c6c9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar5);
    return;
  }
  return;
}


