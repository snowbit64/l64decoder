// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getData
// Entry Point: 00b06304
// Size: 112 bytes
// Signature: undefined __thiscall getData(AndroidAchievements * this, uint param_1, bool * param_2, uint * param_3)


/* AndroidAchievements::getData(unsigned int, bool&, unsigned int&) */

undefined8 __thiscall
AndroidAchievements::getData(AndroidAchievements *this,uint param_1,bool *param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  AndroidJNICall *this_00;
  
  this_00 = *(AndroidJNICall **)this;
  *param_3 = 0;
  bVar1 = AndroidJNICall::callBoolFromInt(this_00,"isUnlocked",param_1);
  *param_2 = (bool)(bVar1 & 1);
  if ((bVar1 & 1) != 0) {
    uVar2 = AndroidJNICall::callLongFromInt(*(AndroidJNICall **)this,"getUnlockTime",param_1);
    *param_3 = uVar2;
  }
  return 1;
}


