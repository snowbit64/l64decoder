// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callIntFromIntIntArrayrefIntArrayref
// Entry Point: 00c6a868
// Size: 376 bytes
// Signature: undefined __thiscall callIntFromIntIntArrayrefIntArrayref(AndroidJNICall * this, char * param_1, int param_2, uint * param_3, uint param_4, uint * param_5, uint param_6)


/* AndroidJNICall::callIntFromIntIntArrayrefIntArrayref(char const*, int, unsigned int*, unsigned
   int, unsigned int*, unsigned int) */

undefined4 __thiscall
AndroidJNICall::callIntFromIntIntArrayrefIntArrayref
          (AndroidJNICall *this,char *param_1,int param_2,uint *param_3,uint param_4,uint *param_5,
          uint param_6)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  plVar2 = (long *)getEnv();
  uVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*(undefined8 *)(this + 0x50),param_1,"(I[I[I)I");
  uVar4 = (**(code **)(*plVar2 + 0x598))(plVar2,param_4);
  uVar5 = (**(code **)(*plVar2 + 0x598))(plVar2,param_6);
  (**(code **)(*plVar2 + 0x698))(plVar2,uVar4,0,param_4,param_3);
  (**(code **)(*plVar2 + 0x698))(plVar2,uVar5,0,param_6,param_5);
  uVar1 = _JNIEnv::CallIntMethod
                    ((_jobject *)plVar2,*(_jmethodID **)(this + 0x48),uVar3,(ulong)(uint)param_2,
                     uVar4,uVar5);
  (**(code **)(*plVar2 + 0x658))(plVar2,uVar4,0,param_4,param_3);
  (**(code **)(*plVar2 + 0x658))(plVar2,uVar5,0,param_6,param_5);
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar4);
  (**(code **)(*plVar2 + 0xb8))(plVar2,uVar5);
  return uVar1;
}


