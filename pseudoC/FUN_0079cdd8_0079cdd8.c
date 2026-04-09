// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079cdd8
// Entry Point: 0079cdd8
// Size: 28 bytes
// Signature: undefined FUN_0079cdd8(void)


void FUN_0079cdd8(char **param_1)

{
  FileManager::copyFile
            ((FileManager *)FileManager::s_singletonFileManager,*param_1,param_1[2],
             *(bool *)(param_1 + 4));
  return;
}


