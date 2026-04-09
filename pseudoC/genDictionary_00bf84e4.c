// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: genDictionary
// Entry Point: 00bf84e4
// Size: 376 bytes
// Signature: undefined genDictionary(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CompiledShaderArchive::genDictionary() */

void CompiledShaderArchive::genDictionary(void)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long *in_x0;
  PerItemData *pPVar6;
  Logger *this;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  DictionaryCreator aDStack_68 [8];
  Config local_60 [8];
  char *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (in_x0[0xf] == 0) {
    lVar8 = *in_x0;
    lVar2 = in_x0[1];
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 00bf8618 to 00bf861f has its CatchHandler @ 00bf866c */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 00bf8624 to 00bf8627 has its CatchHandler @ 00bf865c */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar12 = lVar2 - lVar8;
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "GENERATING DICTIONARY - THIS TAKES A WHILE\n");
    pPVar6 = (PerItemData *)operator_new__(uVar12 & 0x1fffffffe0);
    uVar11 = (uint)(uVar12 >> 5);
    if (uVar11 != 0) {
      lVar8 = *in_x0;
      uVar7 = 0;
      puVar10 = (undefined8 *)(pPVar6 + 0x10);
      puVar9 = (undefined4 *)(lVar8 + 0x10);
      do {
        uVar1 = (int)uVar7 + 2;
        uVar7 = uVar7 + 1;
        uVar3 = 0;
        if (uVar11 != 0) {
          uVar3 = uVar1 / uVar11;
        }
        puVar10[-2] = *(undefined8 *)(puVar9 + -2);
        lVar2 = lVar8 + (ulong)(uVar1 - uVar3 * uVar11) * 0x20;
        *(undefined4 *)(puVar10 + -1) = *puVar9;
        *puVar10 = *(undefined8 *)(lVar2 + 8);
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(lVar2 + 0x10);
        puVar10 = puVar10 + 4;
        puVar9 = puVar9 + 8;
      } while ((uVar12 >> 5 & 0xffffffff) != uVar7);
    }
    local_60[0] = (Config)0x1;
    local_58 = "Dictionary generation";
    local_50 = 0;
    lVar8 = DictionaryCreator::execute(aDStack_68,pPVar6,uVar11,local_60);
    in_x0[0xf] = lVar8;
    operator_delete__(pPVar6);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


