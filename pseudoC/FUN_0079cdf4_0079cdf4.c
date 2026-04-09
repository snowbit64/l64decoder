// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079cdf4
// Entry Point: 0079cdf4
// Size: 48 bytes
// Signature: undefined FUN_0079cdf4(void)


void FUN_0079cdf4(char **param_1)

{
  FileManager::removeFromCache((FileManager *)FileManager::s_singletonFileManager,*param_1);
  NativeFileUtil::deleteFile(*param_1);
  return;
}


