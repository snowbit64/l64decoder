// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsoCodeStrPS5
// Entry Point: 00c5e5b4
// Size: 16 bytes
// Signature: undefined __cdecl getIsoCodeStrPS5(LANGUAGE_TYPE param_1)


/* LanguageUtil::getIsoCodeStrPS5(LanguageUtil::LANGUAGE_TYPE) */

undefined8 LanguageUtil::getIsoCodeStrPS5(LANGUAGE_TYPE param_1)

{
  return *(undefined8 *)(s_isoCodeStrArrayPS5 + (ulong)param_1 * 8);
}


