// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callBoolFromByteArrayString
// Entry Point: 00c6bb1c
// Size: 288 bytes
// Signature: undefined __thiscall callBoolFromByteArrayString(AndroidJNICall * this, char * param_1, uchar * param_2, uint param_3, char * param_4)


/* AndroidJNICall::callBoolFromByteArrayString(char const*, unsigned char const*, unsigned int, char
   const*) */

bool __thiscall
AndroidJNICall::callBoolFromByteArrayString
          (AndroidJNICall *this,char *param_1,uchar *param_2,uint param_3,char *param_4)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = (ulong)param_3;
  plVar2 = (long *)getEnv();
  uVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*(undefined8 *)(this + 0x50),param_1,"([BILjava/lang/String;)Z");
  lVar6 = *(long *)(this + 0x60);
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*plVar2 + 0x580))(plVar2,uVar5);
  }
  (**(code **)(*plVar2 + 0x680))(plVar2,lVar6,0,uVar5,param_2);
  uVar4 = (**(code **)(*plVar2 + 0x538))(plVar2,param_4);
  cVar1 = _JNIEnv::CallBooleanMethod
                    ((_jobject *)plVar2,*(_jmethodID **)(this + 0x48),uVar3,lVar6,uVar5,uVar4);
  if (*(long *)(this + 0x60) == 0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar6);
  }
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar4);
  return cVar1 != '\0';
}


