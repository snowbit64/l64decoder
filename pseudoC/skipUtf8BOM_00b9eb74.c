// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: skipUtf8BOM
// Entry Point: 00b9eb74
// Size: 48 bytes
// Signature: undefined __cdecl skipUtf8BOM(char * param_1)


/* StringUtil::skipUtf8BOM(char const*) */

char * StringUtil::skipUtf8BOM(char *param_1)

{
  long lVar1;
  
  if ((*param_1 == -0x11) && (param_1[1] == -0x45)) {
    lVar1 = 3;
    if (param_1[2] != -0x41) {
      lVar1 = 0;
    }
    param_1 = param_1 + lVar1;
  }
  return param_1;
}


