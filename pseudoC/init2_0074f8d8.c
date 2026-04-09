// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init2
// Entry Point: 0074f8d8
// Size: 72 bytes
// Signature: undefined __thiscall init2(EngineManager * this, Properties * param_1, char * param_2, IRenderDevice * param_3)


/* EngineManager::init2(Properties*, char const*, IRenderDevice*) */

undefined8 __thiscall
EngineManager::init2(EngineManager *this,Properties *param_1,char *param_2,IRenderDevice *param_3)

{
  LANGUAGE_TYPE LVar1;
  LocalizationManager *this_00;
  
  *(IRenderDevice **)(this + 0xc0) = param_3;
  HardwareScalability::init
            ((HardwareScalability *)(this + 0x198),param_1,param_2,param_3,
             *(PERFORMANCE_CLASS *)(this + 0x2a8));
  this_00 = (LocalizationManager *)LocalizationManager::getInstance();
  LVar1 = LanguageUtil::getLanguage();
  LocalizationManager::setLanguage(this_00,LVar1);
  return 1;
}


