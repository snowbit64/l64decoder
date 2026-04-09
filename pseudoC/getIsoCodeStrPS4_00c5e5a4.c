// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsoCodeStrPS4
// Entry Point: 00c5e5a4
// Size: 16 bytes
// Signature: undefined __cdecl getIsoCodeStrPS4(LANGUAGE_TYPE param_1)


/* LanguageUtil::getIsoCodeStrPS4(LanguageUtil::LANGUAGE_TYPE) */

undefined8 LanguageUtil::getIsoCodeStrPS4(LANGUAGE_TYPE param_1)

{
  return *(undefined8 *)(s_isoCodeStrArrayPS4 + (ulong)param_1 * 8);
}


