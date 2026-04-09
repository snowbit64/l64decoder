// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tick
// Entry Point: 00b06384
// Size: 16 bytes
// Signature: undefined __thiscall tick(AndroidAchievements * this, float param_1)


/* AndroidAchievements::tick(float) */

void __thiscall AndroidAchievements::tick(AndroidAchievements *this,float param_1)

{
  AndroidJNICall::callVoidFromFloat(*(AndroidJNICall **)this,"tick",param_1);
  return;
}


