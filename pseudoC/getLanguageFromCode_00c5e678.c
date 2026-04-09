// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLanguageFromCode
// Entry Point: 00c5e678
// Size: 132 bytes
// Signature: undefined __cdecl getLanguageFromCode(char * param_1, LANGUAGE_TYPE * param_2)


/* LanguageUtil::getLanguageFromCode(char const*, LanguageUtil::LANGUAGE_TYPE&) */

bool LanguageUtil::getLanguageFromCode(char *param_1,LANGUAGE_TYPE *param_2)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = strcasecmp(s_codeStrArray,param_1);
  if (iVar3 == 0) {
    bVar2 = true;
    *param_2 = 0;
  }
  else {
    uVar1 = 0;
    do {
      uVar4 = uVar1;
      if (uVar4 == 0x17) goto LAB_00c5e6d8;
      iVar3 = strcasecmp((&PTR_DAT_01047b38)[uVar4],param_1);
      uVar1 = uVar4 + 1;
    } while (iVar3 != 0);
    *param_2 = (LANGUAGE_TYPE)(uVar4 + 1);
LAB_00c5e6d8:
    bVar2 = uVar4 < 0x17;
  }
  return bVar2;
}


