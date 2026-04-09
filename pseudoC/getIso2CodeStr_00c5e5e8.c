// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIso2CodeStr
// Entry Point: 00c5e5e8
// Size: 28 bytes
// Signature: undefined __cdecl getIso2CodeStr(LANGUAGE_TYPE param_1, uint param_2)


/* LanguageUtil::getIso2CodeStr(LanguageUtil::LANGUAGE_TYPE, unsigned int) */

undefined8 LanguageUtil::getIso2CodeStr(LANGUAGE_TYPE param_1,uint param_2)

{
  return *(undefined8 *)((&s_iso2CodeStrsArray)[(ulong)param_1 * 3] + (ulong)param_2 * 8);
}


