// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e9ed4
// Entry Point: 006e9ed4
// Size: 116 bytes
// Signature: undefined FUN_006e9ed4(void)


void FUN_006e9ed4(char **param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)MasterServerManager::getInstance();
  MasterServerManager::setCallbacks
            (pcVar1,*param_1,param_1[2],param_1[4],param_1[6],param_1[8],param_1[10],param_1[0xc],
             param_1[0xe],param_1[0x10],param_1[0x12]);
  return;
}


