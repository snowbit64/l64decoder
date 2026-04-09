// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCodeStr
// Entry Point: 00c5e584
// Size: 16 bytes
// Signature: undefined __cdecl getCodeStr(LANGUAGE_TYPE param_1)


/* LanguageUtil::getCodeStr(LanguageUtil::LANGUAGE_TYPE) */

undefined * LanguageUtil::getCodeStr(LANGUAGE_TYPE param_1)

{
  return (&s_codeStrArray)[param_1];
}


