// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: directoryExists
// Entry Point: 00c60cf4
// Size: 32 bytes
// Signature: undefined __cdecl directoryExists(char * param_1)


/* NativeFileUtil::directoryExists(char const*) */

bool NativeFileUtil::directoryExists(char *param_1)

{
  int iVar1;
  
  iVar1 = getFileType(param_1,true);
  return iVar1 == 2;
}


