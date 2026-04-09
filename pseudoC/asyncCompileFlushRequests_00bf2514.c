// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: asyncCompileFlushRequests
// Entry Point: 00bf2514
// Size: 532 bytes
// Signature: undefined __thiscall asyncCompileFlushRequests(ShaderManager * this, bool param_1, bool param_2)


/* ShaderManager::asyncCompileFlushRequests(bool, bool) */

bool __thiscall
ShaderManager::asyncCompileFlushRequests(ShaderManager *this,bool param_1,bool param_2)

{
  uint uVar1;
  void **ppvVar2;
  int iVar3;
  ShaderManager SVar4;
  int iVar5;
  Logger *pLVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  do {
    Mutex::enterCriticalSection();
    if ((this[0x90] != (ShaderManager)0x0) && (param_2)) {
      ppvVar2 = *(void ***)(this + 0x148);
      *(undefined8 *)(this + 0x168) = 0;
      uVar8 = *(long *)(this + 0x150) - (long)ppvVar2;
      while (0x10 < uVar8) {
        operator_delete(*ppvVar2);
        ppvVar2 = (void **)(*(long *)(this + 0x148) + 8);
        *(void ***)(this + 0x148) = ppvVar2;
        uVar8 = *(long *)(this + 0x150) - (long)ppvVar2;
      }
      if (uVar8 >> 3 == 1) {
        uVar7 = 0x100;
      }
      else {
        if (uVar8 >> 3 != 2) goto LAB_00bf2610;
        uVar7 = 0x200;
      }
      *(undefined8 *)(this + 0x160) = uVar7;
    }
LAB_00bf2610:
    iVar5 = *(int *)(this + 0x170);
    lVar9 = *(long *)(this + 0x168);
    if (lVar9 == 0) {
      iVar3 = *(int *)(this + 0x170);
      Mutex::leaveCriticalSection();
      if (iVar3 == 0) {
        SVar4 = this[0x90];
        this[0x90] = (ShaderManager)0x0;
        if (SVar4 != (ShaderManager)0x0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar5 != 0)) {
                    /* try { // try from 00bf26e8 to 00bf26ef has its CatchHandler @ 00bf2738 */
            pLVar6 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bf26f4 to 00bf26f7 has its CatchHandler @ 00bf2728 */
            Logger::Logger(pLVar6);
            LogManager::getInstance()::singletonLogManager = pLVar6;
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                            "Background compilation failed with errors\n");
        }
        return SVar4 == (ShaderManager)0x0;
      }
    }
    else {
      Mutex::leaveCriticalSection();
    }
    if ((param_1) && (uVar1 = iVar5 + (int)lVar9, uVar1 % 100 == 0)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 00bf2670 to 00bf2677 has its CatchHandler @ 00bf274c */
        pLVar6 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bf267c to 00bf267f has its CatchHandler @ 00bf273c */
        Logger::Logger(pLVar6);
        LogManager::getInstance()::singletonLogManager = pLVar6;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        "Waiting for %u shaders to compile\n",(ulong)uVar1);
    }
    Event::wait((Event *)(this + 0xcc),0xffffffff);
  } while( true );
}


