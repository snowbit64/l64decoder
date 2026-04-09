// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDateFormat
// Entry Point: 00c5e6fc
// Size: 108 bytes
// Signature: undefined getDateFormat(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LanguageUtil::getDateFormat() */

undefined4 LanguageUtil::getDateFormat(void)

{
  if (s_dateFormatLoaded == '\0') {
    if (s_systemPropertiesLoaded == '\0') {
      loadSystemProperties();
    }
    s_dateFormat = s_systemDateFormat;
    s_dateFormatLoaded = '\x01';
  }
  return s_dateFormat;
}


