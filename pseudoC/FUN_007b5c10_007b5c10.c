// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b5c10
// Entry Point: 007b5c10
// Size: 280 bytes
// Signature: undefined FUN_007b5c10(void)


void FUN_007b5c10(DensityMapVisualizationOverlay *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  Logger *this;
  
  lVar4 = ReflectionUtil::getEntity
                    (*param_2,0x800000000000,"setDensityMapVisualizationOverlayTypeColor",
                     "densityMap");
  if (lVar4 != 0) {
    iVar3 = (**(code **)(**(long **)(lVar4 + 0x50) + 0x60))();
    if (iVar3 != 0) {
      uVar1 = 0;
      if (*(uint *)(lVar4 + 0x80) != 0xffffffff) {
        uVar1 = *(uint *)(lVar4 + 0x80);
      }
      DensityMapVisualizationOverlay::setTypeColor
                (param_1,*(DensityMap **)(lVar4 + 0x50),uVar1,(float)param_2[4],(float)param_2[8],
                 (float)param_2[0xc]);
      return;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 007b5ce8 to 007b5cef has its CatchHandler @ 007b5d38 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 007b5cf4 to 007b5cf7 has its CatchHandler @ 007b5d28 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    lVar2 = lVar4 + 0x29;
    if ((*(byte *)(lVar4 + 0x28) & 1) != 0) {
      lVar2 = *(long *)(lVar4 + 0x38);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Setting type color with untyped density map \'%s\'.\n",lVar2);
  }
  return;
}


