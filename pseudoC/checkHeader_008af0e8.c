// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkHeader
// Entry Point: 008af0e8
// Size: 360 bytes
// Signature: undefined __cdecl checkHeader(char * param_1, uchar * param_2, GLSHeader * param_3)


/* LoopSynthesisBinaryUtil::checkHeader(char const*, unsigned char const*,
   LoopSynthesisBinaryUtil::GLSHeader&) */

undefined8 LoopSynthesisBinaryUtil::checkHeader(char *param_1,uchar *param_2,GLSHeader *param_3)

{
  int iVar1;
  Logger *pLVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = *(undefined8 *)param_2;
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)param_3 = uVar4;
  *(undefined8 *)(param_3 + 0x18) = uVar6;
  *(undefined8 *)(param_3 + 0x10) = uVar5;
  *(undefined8 *)(param_3 + 0x28) = uVar8;
  *(undefined8 *)(param_3 + 0x20) = uVar7;
  *(undefined8 *)(param_3 + 0x30) = uVar3;
  if (*(int *)param_3 == 0x676c7320) {
    if (0xfffffffd < *(int *)(param_3 + 4) - 0x10U) {
      return 0x38;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008af210 to 008af217 has its CatchHandler @ 008af260 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008af21c to 008af21f has its CatchHandler @ 008af250 */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: \'%s\' has invalid gls version %u.\n",param_1,
                       (ulong)*(uint *)(param_3 + 4));
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008af1c0 to 008af1c7 has its CatchHandler @ 008af274 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008af1cc to 008af1cf has its CatchHandler @ 008af264 */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: \'%s\' is not a gls.\n",param_1);
  }
  return 0;
}


