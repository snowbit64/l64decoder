// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAchievementProgress
// Entry Point: 00b062ec
// Size: 24 bytes
// Signature: undefined __thiscall setAchievementProgress(AndroidAchievements * this, uint param_1, float param_2, uint param_3)


/* AndroidAchievements::setAchievementProgress(unsigned int, float, unsigned int) */

void __thiscall
AndroidAchievements::setAchievementProgress
          (AndroidAchievements *this,uint param_1,float param_2,uint param_3)

{
  AndroidJNICall::callVoidFromIntFloatInt
            (*(AndroidJNICall **)this,"setAchievementProgress",param_1,param_2,param_3);
  return;
}


