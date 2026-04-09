// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callStringFromStringInt
// Entry Point: 00c6c598
// Size: 308 bytes
// Signature: undefined __thiscall callStringFromStringInt(AndroidJNICall * this, char * param_1, basic_string * param_2, char * param_3, uint param_4)


/* AndroidJNICall::callStringFromStringInt(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, char const*, unsigned int) */

void __thiscall
AndroidJNICall::callStringFromStringInt
          (AndroidJNICall *this,char *param_1,basic_string *param_2,char *param_3,uint param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  plVar1 = (long *)getEnv();
  uVar2 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,*(undefined8 *)(this + 0x50),param_1,
                     "(Ljava/lang/String;I)Ljava/lang/String;");
  uVar3 = (**(code **)(*plVar1 + 0x538))(plVar1,param_3);
  lVar4 = _JNIEnv::CallObjectMethod
                    ((_jobject *)plVar1,*(_jmethodID **)(this + 0x48),uVar2,uVar3,(ulong)param_4);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar3);
  if ((*(byte *)param_2 & 1) == 0) {
    *(undefined2 *)param_2 = 0;
  }
  else {
    **(undefined **)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
  }
  if (lVar4 != 0) {
    lVar5 = (**(code **)(*plVar1 + 0x548))(plVar1,lVar4,0);
    if (lVar5 != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_2);
    }
    (**(code **)(*plVar1 + 0x550))(plVar1,lVar4,lVar5);
                    /* WARNING: Could not recover jumptable at 0x00c6c6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar4);
    return;
  }
  return;
}


