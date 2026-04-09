// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00baac54
// Size: 560 bytes
// Signature: undefined init(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2PhysicsContextManager::init() */

undefined8 Bt2PhysicsContextManager::init(void)

{
  long lVar1;
  int iVar2;
  Bt2PhysicsErrorStream **in_x0;
  Bt2PhysicsErrorStream *this;
  undefined8 *puVar3;
  undefined auStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = EnvUtil::getNumOfProcessors();
  if ((iVar2 - 1U < 2) || (iVar2 = EnvUtil::getNumOfProcessors(), 0xfffffffd < iVar2 - 3U)) {
    iVar2 = EnvUtil::getNumOfProcessors();
    if (iVar2 - 1U < 2) {
      iVar2 = 1;
    }
    else {
      iVar2 = EnvUtil::getNumOfProcessors();
      iVar2 = iVar2 + -1;
    }
  }
  else {
    iVar2 = 2;
  }
  *(int *)(in_x0 + 9) = iVar2;
  this = (Bt2PhysicsErrorStream *)operator_new(4);
                    /* try { // try from 00baacd8 to 00baacdb has its CatchHandler @ 00baaea4 */
  Bt2PhysicsErrorStream::Bt2PhysicsErrorStream
            (this,*(bool *)((long)in_x0 + 0x57),*(bool *)(in_x0 + 0xb));
  *in_x0 = this;
  if (*(char *)((long)in_x0 + 0x59) != '\0') {
    puVar3 = (undefined8 *)operator_new(0x18);
    puVar3[1] = 0;
    puVar3[2] = 0;
    in_x0[0xc] = (Bt2PhysicsErrorStream *)puVar3;
    *puVar3 = &PTR__Bt2PhysicsDebugUserAllocator_00feaee0;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00baadb8 to 00baadc3 has its CatchHandler @ 00baae8c */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"Physics System\n");
  FUN_00baaeb8(auStack_78);
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00baae00 to 00baae0b has its CatchHandler @ 00baae88 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  Version: %s\n",
                    auStack_78);
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00baae48 to 00baae53 has its CatchHandler @ 00baae84 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  Thread(s): %u\n",
                    (ulong)*(uint *)(in_x0 + 9));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


