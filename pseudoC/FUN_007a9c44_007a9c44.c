// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a9c44
// Entry Point: 007a9c44
// Size: 296 bytes
// Signature: undefined FUN_007a9c44(void)


void FUN_007a9c44(long param_1,float *param_2)

{
  long *plVar1;
  int iVar2;
  Logger *this;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  if (*(char *)(param_2 + 4) != '\0') {
    uVar3 = (ulong)*(ushort *)(param_1 + 0x196);
    if (*(ushort *)(param_1 + 0x196) != 0) {
      lVar4 = uVar3 * 8;
      lVar5 = 0;
      while( true ) {
        fVar7 = *param_2;
        plVar1 = (long *)(param_1 + 0x178);
        if ((int)uVar3 != 1) {
          plVar1 = (long *)(*(long *)(param_1 + 0x178) + lVar5);
        }
        fVar6 = *(float *)(*plVar1 + 0x50);
        *(float *)(*plVar1 + 0x50) = fVar7;
        if (fVar7 <= 0.0 == 0.0 < fVar6) {
          GsMaterial::initMaterialAttributes();
        }
        if (lVar4 + -8 == lVar5) break;
        uVar3 = (ulong)*(ushort *)(param_1 + 0x196);
        lVar5 = lVar5 + 8;
      }
    }
    GsShape::refreshFlagsFromMaterials();
    return;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 007a9d2c to 007a9d33 has its CatchHandler @ 007a9d7c */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 007a9d38 to 007a9d3b has its CatchHandler @ 007a9d6c */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                    "Warning: setReflectionMapScaling non-shared is not supported yet.\n");
  return;
}


