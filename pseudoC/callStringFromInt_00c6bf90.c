// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callStringFromInt
// Entry Point: 00c6bf90
// Size: 132 bytes
// Signature: undefined __thiscall callStringFromInt(AndroidJNICall * this, char * param_1, char * param_2, uint * param_3, uint param_4)


/* AndroidJNICall::callStringFromInt(char const*, char*, unsigned int&, unsigned int) */

void __thiscall
AndroidJNICall::callStringFromInt
          (AndroidJNICall *this,char *param_1,char *param_2,uint *param_3,uint param_4)

{
  long *plVar1;
  undefined8 uVar2;
  AndroidJNICall *this_00;
  
  plVar1 = (long *)getEnv();
  uVar2 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,*(undefined8 *)(this + 0x50),param_1,"(I)Ljava/lang/String;");
  this_00 = (AndroidJNICall *)
            _JNIEnv::CallObjectMethod
                      ((_jobject *)plVar1,*(_jmethodID **)(this + 0x48),uVar2,(ulong)param_4);
  copyJavaString(this_00,(_JNIEnv *)plVar1,param_2,param_3,(_jstring *)this_00);
  return;
}


