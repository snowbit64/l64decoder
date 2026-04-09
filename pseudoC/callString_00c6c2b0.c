// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callString
// Entry Point: 00c6c2b0
// Size: 232 bytes
// Signature: undefined __thiscall callString(AndroidJNICall * this, char * param_1, basic_string * param_2)


/* AndroidJNICall::callString(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void __thiscall AndroidJNICall::callString(AndroidJNICall *this,char *param_1,basic_string *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)getEnv();
  uVar2 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,*(undefined8 *)(this + 0x50),param_1,"()Ljava/lang/String;");
  lVar3 = _JNIEnv::CallObjectMethod((_jobject *)plVar1,*(_jmethodID **)(this + 0x48),uVar2);
  if ((*(byte *)param_2 & 1) == 0) {
    *(undefined2 *)param_2 = 0;
  }
  else {
    **(undefined **)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
  }
  if (lVar3 != 0) {
    lVar4 = (**(code **)(*plVar1 + 0x548))(plVar1,lVar3,0);
    if (lVar4 != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_2);
    }
    (**(code **)(*plVar1 + 0x550))(plVar1,lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00c6c374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar3);
    return;
  }
  return;
}


