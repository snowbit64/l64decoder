// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078eabc
// Entry Point: 0078eabc
// Size: 212 bytes
// Signature: undefined FUN_0078eabc(void)


void FUN_0078eabc(uint *param_1)

{
  int iVar1;
  long lVar2;
  EntityRegistryManager *this;
  long lVar3;
  Logger *this_00;
  ITextureObject *pIVar4;
  
  lVar2 = EngineManager::getInstance();
  if (*param_1 != 0) {
    this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    lVar3 = EntityRegistryManager::getEntityById(this,*param_1);
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x14) >> 4 & 1) != 0)) {
      pIVar4 = *(ITextureObject **)(lVar3 + 0x88);
      goto LAB_0078eb24;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 0078eb50 to 0078eb57 has its CatchHandler @ 0078eba0 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078eb5c to 0078eb5f has its CatchHandler @ 0078eb90 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Invalid render overlay %d in setTextRenderOverlay\n",(ulong)*param_1
                     );
  }
  pIVar4 = (ITextureObject *)0x0;
LAB_0078eb24:
  FontOverlayRenderer::setRenderTexture(*(FontOverlayRenderer **)(lVar2 + 0xf8),pIVar4);
  return;
}


