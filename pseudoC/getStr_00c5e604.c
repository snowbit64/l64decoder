// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStr
// Entry Point: 00c5e604
// Size: 16 bytes
// Signature: undefined __cdecl getStr(LANGUAGE_TYPE param_1)


/* LanguageUtil::getStr(LanguageUtil::LANGUAGE_TYPE) */

undefined * LanguageUtil::getStr(LANGUAGE_TYPE param_1)

{
  return (&s_strArray)[param_1];
}


