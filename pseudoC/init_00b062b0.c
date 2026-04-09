// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00b062b0
// Size: 52 bytes
// Signature: undefined __thiscall init(AndroidAchievements * this, char * param_1)


/* AndroidAchievements::init(char const*) */

void __thiscall AndroidAchievements::init(AndroidAchievements *this,char *param_1)

{
  char *pcVar1;
  AndroidJNICall *this_00;
  
  this_00 = *(AndroidJNICall **)this;
  pcVar1 = (char *)StringUtil::skipUtf8BOM(param_1);
  AndroidJNICall::callVoidFromString(this_00,"init",pcVar1);
  return;
}


