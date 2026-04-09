// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNativeName
// Entry Point: 00c5e614
// Size: 16 bytes
// Signature: undefined __cdecl getNativeName(LANGUAGE_TYPE param_1)


/* LanguageUtil::getNativeName(LanguageUtil::LANGUAGE_TYPE) */

undefined8 LanguageUtil::getNativeName(LANGUAGE_TYPE param_1)

{
  return *(undefined8 *)(s_nativeNameArray + (ulong)param_1 * 8);
}


