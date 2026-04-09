// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsoCodeStr
// Entry Point: 00c5e594
// Size: 16 bytes
// Signature: undefined __cdecl getIsoCodeStr(LANGUAGE_TYPE param_1)


/* LanguageUtil::getIsoCodeStr(LanguageUtil::LANGUAGE_TYPE) */

undefined8 LanguageUtil::getIsoCodeStr(LANGUAGE_TYPE param_1)

{
  return *(undefined8 *)(s_isoCodeStrArray + (ulong)param_1 * 8);
}


