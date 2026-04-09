// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isValidUtf8
// Entry Point: 00b9eba4
// Size: 60 bytes
// Signature: undefined __cdecl isValidUtf8(char * param_1)


/* StringUtil::isValidUtf8(char const*) */

bool StringUtil::isValidUtf8(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  do {
    cVar1 = *param_1;
    if (cVar1 == '\0') break;
    uVar2 = utf8Next(param_1);
    param_1 = param_1 + uVar2;
  } while (uVar2 != 0);
  return cVar1 == '\0';
}


