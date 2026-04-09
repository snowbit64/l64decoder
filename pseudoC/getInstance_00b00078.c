// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 00b00078
// Size: 12 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LanguageStringManager::getInstance() */

undefined1 * LanguageStringManager::getInstance(void)

{
  return &s_singletonLanguageStringManager;
}


