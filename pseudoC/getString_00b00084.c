// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getString
// Entry Point: 00b00084
// Size: 64 bytes
// Signature: undefined __thiscall getString(LanguageStringManager * this, STRING param_1)


/* LanguageStringManager::getString(LanguageStringManager::STRING) const */

undefined8 __thiscall LanguageStringManager::getString(LanguageStringManager *this,STRING param_1)

{
  int iVar1;
  LocalizationManager *this_00;
  undefined8 uVar2;
  
  if (param_1 < 0x43) {
    iVar1 = *(int *)(&DAT_00524594 + (long)(int)param_1 * 4);
    this_00 = (LocalizationManager *)LocalizationManager::getInstance();
    uVar2 = LocalizationManager::getTranslatedString(this_00,&DAT_00524594 + iVar1);
    return uVar2;
  }
  return 0;
}


