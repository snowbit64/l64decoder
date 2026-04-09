// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callIntFromIntInt
// Entry Point: 00c6a534
// Size: 112 bytes
// Signature: undefined __thiscall callIntFromIntInt(AndroidJNICall * this, char * param_1, uint param_2, uint param_3)


/* AndroidJNICall::callIntFromIntInt(char const*, unsigned int, unsigned int) */

void __thiscall
AndroidJNICall::callIntFromIntInt(AndroidJNICall *this,char *param_1,uint param_2,uint param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)getEnv();
  uVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,*(undefined8 *)(this + 0x50),param_1,"(II)I");
  _JNIEnv::CallIntMethod
            ((_jobject *)plVar1,*(_jmethodID **)(this + 0x48),uVar2,(ulong)param_2,(ulong)param_3);
  return;
}


