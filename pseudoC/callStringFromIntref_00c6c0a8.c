// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callStringFromIntref
// Entry Point: 00c6c0a8
// Size: 256 bytes
// Signature: undefined __thiscall callStringFromIntref(AndroidJNICall * this, char * param_1, char * param_2, uint * param_3, uint * param_4)


/* AndroidJNICall::callStringFromIntref(char const*, char*, unsigned int&, unsigned int&) */

void __thiscall
AndroidJNICall::callStringFromIntref
          (AndroidJNICall *this,char *param_1,char *param_2,uint *param_3,uint *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  _jstring *p_Var4;
  AndroidJNICall *this_00;
  
  plVar1 = (long *)getEnv();
  uVar2 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,*(undefined8 *)(this + 0x50),param_1,"([I)Ljava/lang/String;");
  uVar3 = (**(code **)(*plVar1 + 0x598))(plVar1,1);
  (**(code **)(*plVar1 + 0x698))(plVar1,uVar3,0,1,param_4);
  p_Var4 = (_jstring *)
           _JNIEnv::CallObjectMethod((_jobject *)plVar1,*(_jmethodID **)(this + 0x48),uVar2,uVar3);
  (**(code **)(*plVar1 + 0x658))(plVar1,uVar3,0,1,param_4);
  this_00 = (AndroidJNICall *)(**(code **)(*plVar1 + 0xb8))(plVar1,uVar3);
  copyJavaString(this_00,(_JNIEnv *)plVar1,param_2,param_3,p_Var4);
  return;
}


