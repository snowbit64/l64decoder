// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e9f48
// Entry Point: 006e9f48
// Size: 76 bytes
// Signature: undefined FUN_006e9f48(void)


void FUN_006e9f48(char **param_1)

{
  MasterServerManager *this;
  char *pcVar1;
  
  if (*(int *)(param_1 + 9) == 8) {
    pcVar1 = param_1[8];
  }
  else {
    pcVar1 = (char *)0x0;
  }
  this = (MasterServerManager *)MasterServerManager::getInstance();
  MasterServerManager::requestConnectionToServer
            (this,*param_1,*(uint *)(param_1 + 2),param_1[4],param_1[6],pcVar1);
  return;
}


