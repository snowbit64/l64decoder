// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLanguage
// Entry Point: 00c5e564
// Size: 32 bytes
// Signature: undefined __cdecl setLanguage(LANGUAGE_TYPE param_1)


/* LanguageUtil::setLanguage(LanguageUtil::LANGUAGE_TYPE) */

void LanguageUtil::setLanguage(LANGUAGE_TYPE param_1)

{
  s_languageType = param_1;
  s_languageTypeLoaded = 1;
  return;
}


