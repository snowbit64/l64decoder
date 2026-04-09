// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTitleName
// Entry Point: 00b000c4
// Size: 28 bytes
// Signature: undefined getTitleName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LanguageStringManager::getTitleName() const */

void LanguageStringManager::getTitleName(void)

{
  LocalizationManager *this;
  
  this = (LocalizationManager *)LocalizationManager::getInstance();
  LocalizationManager::getTranslatedString(this,"Farming Simulator 23");
  return;
}


