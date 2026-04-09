// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDateFormat
// Entry Point: 00c5e798
// Size: 32 bytes
// Signature: undefined __cdecl setDateFormat(DATE_FORMAT param_1)


/* LanguageUtil::setDateFormat(LanguageUtil::DATE_FORMAT) */

void LanguageUtil::setDateFormat(undefined4 param_1)

{
  s_dateFormat = param_1;
  s_dateFormatLoaded = 1;
  return;
}


