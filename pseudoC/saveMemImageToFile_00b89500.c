// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveMemImageToFile
// Entry Point: 00b89500
// Size: 388 bytes
// Signature: undefined __cdecl saveMemImageToFile(char * param_1, uchar * param_2, uint param_3)


/* ChunkedBitSquare::saveMemImageToFile(char const*, unsigned char*, unsigned int) */

undefined8 ChunkedBitSquare::saveMemImageToFile(char *param_1,uchar *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  Logger *pLVar4;
  
  plVar3 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,1,
                                    false);
  if (plVar3 == (long *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00b895f4 to 00b895fb has its CatchHandler @ 00b896a8 */
      pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 00b89600 to 00b89603 has its CatchHandler @ 00b89698 */
      Logger::Logger(pLVar4);
      LogManager::getInstance()::singletonLogManager = pLVar4;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Failed to open GDM file \'%s\' for writing.\n",param_1);
  }
  else {
    uVar1 = (**(code **)(*plVar3 + 0x30))(plVar3,param_2,param_3);
    (**(code **)(*plVar3 + 8))(plVar3);
    if (uVar1 == param_3) {
      return 1;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00b89644 to 00b8964b has its CatchHandler @ 00b89694 */
      pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 00b89650 to 00b89653 has its CatchHandler @ 00b89684 */
      Logger::Logger(pLVar4);
      LogManager::getInstance()::singletonLogManager = pLVar4;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Failed to write GDM file data to \'%s\'. Written %d vs %u bytes.\n",
                       param_1,(ulong)uVar1,(ulong)param_3);
  }
  return 0;
}


