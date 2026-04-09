// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00b06524
// Size: 200 bytes
// Signature: undefined __thiscall init(AndroidInAppPurchase * this, char * param_1)


/* AndroidInAppPurchase::init(char const*) */

uint __thiscall AndroidInAppPurchase::init(AndroidInAppPurchase *this,char *param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  char *pcVar4;
  AndroidJNICall *this_00;
  
  plVar2 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,
                                    false);
  if ((plVar2 == (long *)0x0) || (uVar3 = (**(code **)(*plVar2 + 0x10))(), (uVar3 & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x48))(plVar2);
    pcVar4 = (char *)operator_new__(uVar3 + 1);
    (**(code **)(*plVar2 + 0x28))(plVar2,pcVar4,uVar3 & 0xffffffff);
    this_00 = *(AndroidJNICall **)this;
    pcVar4[uVar3] = '\0';
    uVar1 = AndroidJNICall::callBoolFromString(this_00,"init",pcVar4);
    operator_delete__(pcVar4);
    (**(code **)(*plVar2 + 8))(plVar2);
    uVar1 = uVar1 & 1;
  }
  return uVar1;
}


