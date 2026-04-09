// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fileExists
// Entry Point: 00c60cd4
// Size: 32 bytes
// Signature: undefined __cdecl fileExists(char * param_1)


/* NativeFileUtil::fileExists(char const*) */

bool NativeFileUtil::fileExists(char *param_1)

{
  int iVar1;
  
  iVar1 = getFileType(param_1,true);
  return iVar1 == 1;
}


