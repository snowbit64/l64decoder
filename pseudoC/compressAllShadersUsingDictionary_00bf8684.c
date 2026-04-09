// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compressAllShadersUsingDictionary
// Entry Point: 00bf8684
// Size: 808 bytes
// Signature: undefined __thiscall compressAllShadersUsingDictionary(CompiledShaderArchive * this, bool param_1)


/* CompiledShaderArchive::compressAllShadersUsingDictionary(bool) */

void __thiscall
CompiledShaderArchive::compressAllShadersUsingDictionary(CompiledShaderArchive *this,bool param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  PerItemData *pPVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  void **ppvVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uStack_400c8;
  Config aCStack_400c0 [8];
  char *pcStack_400b8;
  undefined4 uStack_400b0;
  undefined **appuStack_400a8 [4];
  void *pvStack_40088;
  void *pvStack_40080;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  if (*(long *)(this + 0x78) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00bf8970 to 00bf897b has its CatchHandler @ 00bf89ac */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "CAN\'T PERFORM DICTIONARY COMPRESSION - NO DICTIONARY\n");
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00bf88e0 to 00bf88eb has its CatchHandler @ 00bf89c4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "PERFORMING DICTIONARY COMPRESSION - THIS TAKES A WHILE\n");
    lVar12 = *(long *)this;
    uStack_400c8 = 0;
    uVar15 = *(long *)(this + 8) - lVar12;
    pPVar5 = (PerItemData *)operator_new__(uVar15 & 0x1fffffffe0);
    uVar14 = (uint)(uVar15 >> 5);
    if (uVar14 != 0) {
      uVar8 = uVar15 >> 5 & 0xffffffff;
      puVar11 = (undefined8 *)(pPVar5 + 0x10);
      puVar10 = (undefined4 *)(lVar12 + 0x10);
      do {
        uVar8 = uVar8 - 1;
        puVar11[-2] = *(undefined8 *)(puVar10 + -2);
        uVar2 = *puVar10;
        *puVar11 = 0;
        *(undefined4 *)(puVar11 + 1) = 0;
        *(undefined4 *)(puVar11 + -1) = uVar2;
        puVar11 = puVar11 + 4;
        puVar10 = puVar10 + 8;
      } while (uVar8 != 0);
    }
    DictionaryCompressor::Main::Main
              ((Main *)appuStack_400a8,*(CompressionDictionary **)(this + 0x78));
    uStack_400b0 = 0;
    aCStack_400c0[0] = (Config)0x1;
    pcStack_400b8 = "Dictionary compression";
                    /* try { // try from 00bf875c to 00bf8777 has its CatchHandler @ 00bf89e0 */
    DictionaryCompressor::Main::execute
              ((Main *)appuStack_400a8,pPVar5,uVar14,(uint *)((long)&uStack_400c8 + 4),
               (uint *)&uStack_400c8,aCStack_400c0);
    if (param_1) {
      if (uVar14 != 0) {
        lVar12 = 0;
        lVar9 = *(long *)this;
        do {
          pvVar6 = *(void **)(lVar9 + lVar12 + 8);
          if (pvVar6 != (void *)0x0) {
            operator_delete__(pvVar6);
            lVar9 = *(long *)this;
          }
          lVar9 = lVar9 + lVar12;
          *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(pPVar5 + lVar12 + 0x10);
          *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)(pPVar5 + lVar12 + 0x18);
          uVar2 = *(undefined4 *)(pPVar5 + lVar12 + 8);
          *(undefined *)(lVar9 + 0x15) = 1;
          *(undefined4 *)(lVar9 + 0x16) = uVar2;
          lVar9 = *(long *)this;
          lVar1 = lVar9 + lVar12;
          lVar12 = lVar12 + 0x20;
          *(undefined *)(lVar1 + 0x14) = 1;
        } while ((uVar15 >> 5 & 0xffffffff) * 0x20 - lVar12 != 0);
      }
    }
    else if (uVar14 != 0) {
      uVar15 = uVar15 >> 5 & 0xffffffff;
      ppvVar13 = (void **)(pPVar5 + 0x10);
      do {
        if (*ppvVar13 != (void *)0x0) {
          operator_delete__(*ppvVar13);
        }
        ppvVar13 = ppvVar13 + 4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    operator_delete__(pPVar5);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00bf8928 to 00bf8933 has its CatchHandler @ 00bf89b0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00bf8868 to 00bf887b has its CatchHandler @ 00bf89dc */
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      (double)(((float)(ulong)(uStack_400c8._4_4_ - (int)uStack_400c8) * 100.0) /
                              (float)(ulong)uStack_400c8._4_4_),
                      "Saved %u bytes from %u bytes (%f%%)\n");
    appuStack_400a8[0] = &PTR_createPerThreadData_00fed078;
    if (pvStack_40088 != (void *)0x0) {
      pvStack_40080 = pvStack_40088;
      operator_delete(pvStack_40088);
    }
  }
  if (*(long *)(lVar3 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


