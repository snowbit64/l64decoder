// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSystemTimeFormat
// Entry Point: 00c5e824
// Size: 48 bytes
// Signature: undefined getSystemTimeFormat(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LanguageUtil::getSystemTimeFormat() */

undefined4 LanguageUtil::getSystemTimeFormat(void)

{
  if (s_systemPropertiesLoaded == '\0') {
    loadSystemProperties();
  }
  return s_systemTimeFormat;
}


