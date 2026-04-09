// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callBoolFromFloat
// Entry Point: 00c6b8d4
// Size: 116 bytes
// Signature: undefined __thiscall callBoolFromFloat(AndroidJNICall * this, char * param_1, float param_2)


/* AndroidJNICall::callBoolFromFloat(char const*, float) */

bool __thiscall AndroidJNICall::callBoolFromFloat(AndroidJNICall *this,char *param_1,float param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)getEnv();
  uVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*(undefined8 *)(this + 0x50),param_1,&DAT_00511139);
  cVar1 = _JNIEnv::CallBooleanMethod
                    ((_jobject *)plVar2,*(_jmethodID **)(this + 0x48),(double)param_2,uVar3);
  return cVar1 != '\0';
}


