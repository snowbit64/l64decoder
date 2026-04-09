// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTimeFormat
// Entry Point: 00c5e7b8
// Size: 108 bytes
// Signature: undefined getTimeFormat(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LanguageUtil::getTimeFormat() */

undefined4 LanguageUtil::getTimeFormat(void)

{
  if (s_timeFormatLoaded == '\0') {
    if (s_systemPropertiesLoaded == '\0') {
      loadSystemProperties();
    }
    s_timeFormat = s_systemTimeFormat;
    s_timeFormatLoaded = '\x01';
  }
  return s_timeFormat;
}


