// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797658
// Entry Point: 00797658
// Size: 40 bytes
// Signature: undefined FUN_00797658(void)


void FUN_00797658(char **param_1)

{
  GiantsNotificationManager *this;
  
  this = (GiantsNotificationManager *)GiantsNotificationManager::getInstance();
  GiantsNotificationManager::addFilter(this,*param_1,param_1[2]);
  return;
}


