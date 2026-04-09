// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSystemLanguage
// Entry Point: 00c5e534
// Size: 48 bytes
// Signature: undefined getSystemLanguage(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LanguageUtil::getSystemLanguage() */

undefined4 LanguageUtil::getSystemLanguage(void)

{
  if (s_systemPropertiesLoaded == '\0') {
    loadSystemProperties();
  }
  return s_systemLanguageType;
}


