// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLanguage
// Entry Point: 00c5e4c8
// Size: 108 bytes
// Signature: undefined getLanguage(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LanguageUtil::getLanguage() */

undefined4 LanguageUtil::getLanguage(void)

{
  if (s_languageTypeLoaded == '\0') {
    if (s_systemPropertiesLoaded == '\0') {
      loadSystemProperties();
    }
    s_languageType = s_systemLanguageType;
    s_languageTypeLoaded = '\x01';
  }
  return s_languageType;
}


