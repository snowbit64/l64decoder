// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumIso2CodeStrs
// Entry Point: 00c5e5c4
// Size: 36 bytes
// Signature: undefined __cdecl getNumIso2CodeStrs(LANGUAGE_TYPE param_1)


/* LanguageUtil::getNumIso2CodeStrs(LanguageUtil::LANGUAGE_TYPE) */

ulong LanguageUtil::getNumIso2CodeStrs(LANGUAGE_TYPE param_1)

{
  return (ulong)((&DAT_0211f308)[(ulong)param_1 * 3] - (&s_iso2CodeStrsArray)[(ulong)param_1 * 3])
         >> 3;
}


