// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTimeFormat
// Entry Point: 00c5e854
// Size: 32 bytes
// Signature: undefined __cdecl setTimeFormat(TIME_FORMAT param_1)


/* LanguageUtil::setTimeFormat(LanguageUtil::TIME_FORMAT) */

void LanguageUtil::setTimeFormat(undefined4 param_1)

{
  s_timeFormat = param_1;
  s_timeFormatLoaded = 1;
  return;
}


