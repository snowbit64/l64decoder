// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ea498
// Entry Point: 006ea498
// Size: 52 bytes
// Signature: undefined FUN_006ea498(void)


void FUN_006ea498(char **param_1)

{
  MasterServerManager *this;
  
  this = (MasterServerManager *)MasterServerManager::getInstance();
  MasterServerManager::setServerInfo
            (this,*param_1,param_1[2],(uint)*(ushort *)(param_1 + 4),(uint)*(ushort *)(param_1 + 6),
             *(bool *)(param_1 + 8));
  return;
}


