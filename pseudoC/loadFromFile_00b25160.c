// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadFromFile
// Entry Point: 00b25160
// Size: 456 bytes
// Signature: undefined __thiscall loadFromFile(DomXMLFile * this, char * param_1, bool param_2)


/* DomXMLFile::loadFromFile(char const*, bool) */

DomXMLFile __thiscall DomXMLFile::loadFromFile(DomXMLFile *this,char *param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  char *pcVar5;
  
  plVar4 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,
                                    false);
  if (plVar4 == (long *)0x0) {
    if (param_2) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 00b252a8 to 00b252b3 has its CatchHandler @ 00b2532c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Failed to open xml file \'%s\'.\n",param_1);
    }
  }
  else {
    uVar1 = (**(code **)(*plVar4 + 0x48))();
    if ((int)uVar1 < 1) {
      if (param_2) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 00b252f0 to 00b252fb has its CatchHandler @ 00b25328 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: Trying to open empty xml file \'%s\'.\n",param_1);
      }
    }
    else {
      pcVar5 = (char *)operator_new__((long)(int)uVar1);
      uVar2 = (**(code **)(*plVar4 + 0x28))(plVar4,pcVar5,uVar1);
      if (uVar2 == uVar1) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)(this + 0x10));
        loadFromMemory(this,pcVar5,uVar1,param_1,true,false);
      }
      operator_delete__(pcVar5);
    }
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  return this[8];
}


