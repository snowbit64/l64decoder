// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: utf8Strlen
// Entry Point: 00b9fa8c
// Size: 68 bytes
// Signature: undefined __cdecl utf8Strlen(char * param_1)


/* StringUtil::utf8Strlen(char const*) */

int StringUtil::utf8Strlen(char *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*param_1 == '\0') {
      return iVar2;
    }
    uVar1 = utf8Next(param_1);
    iVar2 = iVar2 + 1;
    param_1 = param_1 + uVar1;
  } while (uVar1 != 0);
  return 0;
}


