// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initializeFromFile
// Entry Point: 00b884a8
// Size: 464 bytes
// Signature: undefined __thiscall initializeFromFile(ChunkedBitSquare * this, char * param_1)


/* ChunkedBitSquare::initializeFromFile(char const*) */

uint __thiscall ChunkedBitSquare::initializeFromFile(ChunkedBitSquare *this,char *param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  uchar *puVar5;
  
  plVar3 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,
                                    false);
  if ((plVar3 == (long *)0x0) || (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3), (uVar4 & 1) == 0))
  {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00b885f8 to 00b88603 has its CatchHandler @ 00b8867c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "GDM file cannot be opened\n");
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  else {
    uVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
    puVar5 = (uchar *)operator_new__((ulong)uVar1);
    iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,puVar5,uVar1);
    if (iVar2 != 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
      uVar1 = initializeFromMemFile(this,puVar5,uVar1);
      operator_delete__(puVar5);
      return uVar1 & 1;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00b88640 to 00b8864b has its CatchHandler @ 00b88678 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "GDM file cannot be read\n");
    (**(code **)(*plVar3 + 8))(plVar3);
    operator_delete__(puVar5);
  }
  return 0;
}


