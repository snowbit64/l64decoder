// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSystemDateFormat
// Entry Point: 00c5e768
// Size: 48 bytes
// Signature: undefined getSystemDateFormat(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LanguageUtil::getSystemDateFormat() */

undefined4 LanguageUtil::getSystemDateFormat(void)

{
  if (s_systemPropertiesLoaded == '\0') {
    loadSystemProperties();
  }
  return s_systemDateFormat;
}


