// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumUnlocked
// Entry Point: 00b063b4
// Size: 16 bytes
// Signature: undefined getNumUnlocked(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidAchievements::getNumUnlocked() */

void AndroidAchievements::getNumUnlocked(void)

{
  AndroidJNICall **in_x0;
  
  AndroidJNICall::callInt(*in_x0,"getNumUnlocked");
  return;
}


