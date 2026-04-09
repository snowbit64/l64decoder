// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callVoidFromByteArray
// Entry Point: 00c6b948
// Size: 228 bytes
// Signature: undefined __thiscall callVoidFromByteArray(AndroidJNICall * this, char * param_1, uchar * param_2, uint param_3)


/* AndroidJNICall::callVoidFromByteArray(char const*, unsigned char const*, unsigned int) */

void __thiscall
AndroidJNICall::callVoidFromByteArray
          (AndroidJNICall *this,char *param_1,uchar *param_2,uint param_3)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = (ulong)param_3;
  plVar1 = (long *)getEnv();
  uVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,*(undefined8 *)(this + 0x50),param_1,"([BI)V");
  lVar4 = *(long *)(this + 0x60);
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*plVar1 + 0x580))(plVar1,uVar3);
  }
  (**(code **)(*plVar1 + 0x680))(plVar1,lVar4,0,uVar3,param_2);
  _JNIEnv::CallVoidMethod((_jobject *)plVar1,*(_jmethodID **)(this + 0x48),uVar2,lVar4,uVar3);
  if (*(long *)(this + 0x60) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c6ba28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xb8))(plVar1,lVar4);
  return;
}


