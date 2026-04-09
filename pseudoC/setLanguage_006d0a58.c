// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLanguage
// Entry Point: 006d0a58
// Size: 116 bytes
// Signature: undefined __thiscall setLanguage(Application * this, LANGUAGE_TYPE param_1)


/* Application::setLanguage(LanguageUtil::LANGUAGE_TYPE) */

bool __thiscall Application::setLanguage(Application *this,LANGUAGE_TYPE param_1)

{
  Application AVar1;
  LocalizationManager *this_00;
  
  AVar1 = this[(ulong)param_1 + 0x1d0];
  if (AVar1 != (Application)0x0) {
    LanguageUtil::setLanguage(param_1);
    Properties::setInt(*(Properties **)(this + 0x188),"game.language",param_1);
    (**(code **)(**(long **)(this + 0x188) + 0x30))();
    this_00 = (LocalizationManager *)LocalizationManager::getInstance();
    LocalizationManager::setLanguage(this_00,param_1);
  }
  return AVar1 != (Application)0x0;
}


