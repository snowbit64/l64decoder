// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AndroidAchievements
// Entry Point: 00b06268
// Size: 52 bytes
// Signature: undefined __thiscall AndroidAchievements(AndroidAchievements * this, char * param_1)


/* AndroidAchievements::AndroidAchievements(char const*) */

void __thiscall AndroidAchievements::AndroidAchievements(AndroidAchievements *this,char *param_1)

{
  AndroidJNICall *this_00;
  
  this_00 = (AndroidJNICall *)operator_new(0x78);
                    /* try { // try from 00b06284 to 00b0628b has its CatchHandler @ 00b0629c */
  AndroidJNICall::AndroidJNICall(this_00,2);
  *(AndroidJNICall **)this = this_00;
  return;
}


