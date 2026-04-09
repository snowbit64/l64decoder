// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyJavaString
// Entry Point: 00c6be64
// Size: 176 bytes
// Signature: undefined __thiscall copyJavaString(AndroidJNICall * this, _JNIEnv * param_1, basic_string * param_2, _jstring * param_3)


/* AndroidJNICall::copyJavaString(_JNIEnv*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, _jstring*) */

void __thiscall
AndroidJNICall::copyJavaString
          (AndroidJNICall *this,_JNIEnv *param_1,basic_string *param_2,_jstring *param_3)

{
  long lVar1;
  
  if ((*(byte *)param_2 & 1) == 0) {
    *(undefined2 *)param_2 = 0;
  }
  else {
    **(undefined **)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
  }
  if (param_3 != (_jstring *)0x0) {
    lVar1 = (**(code **)(*(long *)param_1 + 0x548))(param_1,param_3,0);
    if (lVar1 != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_2);
    }
    (**(code **)(*(long *)param_1 + 0x550))(param_1,param_3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00c6bef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0xb8))(param_1,param_3);
    return;
  }
  return;
}


