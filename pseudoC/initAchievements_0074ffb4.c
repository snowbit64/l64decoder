// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initAchievements
// Entry Point: 0074ffb4
// Size: 68 bytes
// Signature: undefined initAchievements(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineManager::initAchievements() */

void EngineManager::initAchievements(void)

{
  char *pcVar1;
  long in_x0;
  AndroidAchievements *this;
  
  this = (AndroidAchievements *)operator_new(8);
  pcVar1 = (char *)(in_x0 + 0x169);
  if ((*(byte *)(in_x0 + 0x168) & 1) != 0) {
    pcVar1 = *(char **)(in_x0 + 0x178);
  }
                    /* try { // try from 0074ffe4 to 0074ffe7 has its CatchHandler @ 0074fff8 */
  AndroidAchievements::AndroidAchievements(this,pcVar1);
  *(AndroidAchievements **)(in_x0 + 0x2c8) = this;
  return;
}


