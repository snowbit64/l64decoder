// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLanguageFromStr
// Entry Point: 00c5e624
// Size: 84 bytes
// Signature: undefined __cdecl getLanguageFromStr(char * param_1)


/* LanguageUtil::getLanguageFromStr(char const*) */

ulong LanguageUtil::getLanguageFromStr(char *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = strcmp((&s_strArray)[uVar2],param_1);
    if (iVar1 == 0) goto LAB_00c5e664;
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x18);
  uVar2 = 0;
LAB_00c5e664:
  return uVar2 & 0xffffffff;
}


