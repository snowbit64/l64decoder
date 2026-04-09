// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callBoolFromByteArrayInt
// Entry Point: 00c6ba2c
// Size: 240 bytes
// Signature: undefined __thiscall callBoolFromByteArrayInt(AndroidJNICall * this, char * param_1, uchar * param_2, uint param_3, uint param_4)


/* AndroidJNICall::callBoolFromByteArrayInt(char const*, unsigned char const*, unsigned int,
   unsigned int) */

bool __thiscall
AndroidJNICall::callBoolFromByteArrayInt
          (AndroidJNICall *this,char *param_1,uchar *param_2,uint param_3,uint param_4)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = (ulong)param_3;
  plVar2 = (long *)getEnv();
  uVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*(undefined8 *)(this + 0x50),param_1,"([BII)Z");
  lVar5 = *(long *)(this + 0x60);
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*plVar2 + 0x580))(plVar2,uVar4);
  }
  (**(code **)(*plVar2 + 0x680))(plVar2,lVar5,0,uVar4,param_2);
  cVar1 = _JNIEnv::CallBooleanMethod
                    ((_jobject *)plVar2,*(_jmethodID **)(this + 0x48),uVar3,lVar5,uVar4,
                     (ulong)param_4);
  if (*(long *)(this + 0x60) == 0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar5);
  }
  return cVar1 != '\0';
}


