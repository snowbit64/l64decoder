// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initTranslation
// Entry Point: 0074ed80
// Size: 36 bytes
// Signature: undefined initTranslation(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineManager::initTranslation() */

void EngineManager::initTranslation(void)

{
  LocalizationManager *this;
  
  this = (LocalizationManager *)LocalizationManager::getInstance();
  LocalizationManager::loadData<86,24>
            (this,(LANGUAGE_TYPE *)EngineLocalizationData::m_languages,
             (char **)EngineLocalizationData::m_pData);
  return;
}


