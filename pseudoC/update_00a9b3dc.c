// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00a9b3dc
// Size: 484 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HeadMountedDisplayManager::update() */

void HeadMountedDisplayManager::update(void)

{
  int iVar1;
  long *in_x0;
  undefined8 uVar2;
  Logger *pLVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *in_x0;
  if (in_x0[1] != lVar4) {
    uVar5 = 0;
    do {
      (**(code **)(**(long **)(lVar4 + uVar5 * 8) + 0x10))();
      lVar4 = *in_x0;
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < (ulong)(in_x0[1] - lVar4 >> 3));
  }
  if ((long *)in_x0[4] != (long *)0x0) {
    iVar1 = (**(code **)(*(long *)in_x0[4] + 0x18))();
    if (iVar1 == 0) {
      if (in_x0[4] != 0) {
        return;
      }
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 00a9b530 to 00a9b537 has its CatchHandler @ 00a9b5d8 */
        pLVar3 = (Logger *)operator_new(0x38);
                    /* try { // try from 00a9b53c to 00a9b53f has its CatchHandler @ 00a9b5c8 */
        Logger::Logger(pLVar3);
        LogManager::getInstance()::singletonLogManager = pLVar3;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      uVar2 = (**(code **)(*(long *)in_x0[4] + 0x28))();
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        "Deselected HMD: %s\n",uVar2);
      (**(code **)(*(long *)in_x0[4] + 0x38))();
      in_x0[4] = 0;
    }
  }
  lVar4 = *in_x0;
  if (in_x0[1] != lVar4) {
    uVar5 = 0;
    do {
      iVar1 = (**(code **)(**(long **)(lVar4 + uVar5 * 8) + 0x18))();
      if (iVar1 == 0) {
        lVar4 = *(long *)(*in_x0 + uVar5 * 8);
        if (lVar4 == 0) {
          return;
        }
        in_x0[4] = lVar4;
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0
           )) {
                    /* try { // try from 00a9b580 to 00a9b587 has its CatchHandler @ 00a9b5c4 */
          pLVar3 = (Logger *)operator_new(0x38);
                    /* try { // try from 00a9b58c to 00a9b58f has its CatchHandler @ 00a9b5c0 */
          Logger::Logger(pLVar3);
          LogManager::getInstance()::singletonLogManager = pLVar3;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        uVar2 = (**(code **)(*(long *)in_x0[4] + 0x28))();
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "Selected active HMD: %s\n",uVar2);
        return;
      }
      lVar4 = *in_x0;
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < (ulong)(in_x0[1] - lVar4 >> 3));
  }
  return;
}


