// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isAbsolutePath
// Entry Point: 00c633b4
// Size: 16 bytes
// Signature: undefined __cdecl isAbsolutePath(char * param_1)


/* PathUtil::isAbsolutePath(char const*) */

bool PathUtil::isAbsolutePath(char *param_1)

{
  return *param_1 == '/';
}


