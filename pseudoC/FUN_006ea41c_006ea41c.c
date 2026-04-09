// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ea41c
// Entry Point: 006ea41c
// Size: 88 bytes
// Signature: undefined FUN_006ea41c(void)


void FUN_006ea41c(char **param_1)

{
  MasterServerManager *this;
  
  this = (MasterServerManager *)MasterServerManager::getInstance();
  MasterServerManager::addServer
            (this,*param_1,param_1[2],(uint)*(ushort *)(param_1 + 4),(uint)*(ushort *)(param_1 + 6),
             param_1[8],param_1[10],*(bool *)(param_1 + 0xc),*(bool *)(param_1 + 0xe),
             *(bool *)(param_1 + 0x10));
  return;
}


