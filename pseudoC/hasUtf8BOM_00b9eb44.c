// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: hasUtf8BOM
// Entry Point: 00b9eb44
// Size: 48 bytes
// Signature: undefined __cdecl hasUtf8BOM(char * param_1)


/* StringUtil::hasUtf8BOM(char const*) */

bool StringUtil::hasUtf8BOM(char *param_1)

{
  if ((*param_1 == -0x11) && (param_1[1] == -0x45)) {
    return param_1[2] == -0x41;
  }
  return false;
}


