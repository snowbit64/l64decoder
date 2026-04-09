// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callLongFromString
// Entry Point: 00c6ab34
// Size: 152 bytes
// Signature: undefined __thiscall callLongFromString(AndroidJNICall * this, char * param_1, char * param_2)


/* AndroidJNICall::callLongFromString(char const*, char const*) */

undefined8 __thiscall
AndroidJNICall::callLongFromString(AndroidJNICall *this,char *param_1,char *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)getEnv();
  uVar2 = (**(code **)(*plVar1 + 0x538))(plVar1,param_2);
  uVar3 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,*(undefined8 *)(this + 0x50),param_1,"(Ljava/lang/String;)J");
  uVar3 = _JNIEnv::CallLongMethod((_jobject *)plVar1,*(_jmethodID **)(this + 0x48),uVar3,uVar2);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


