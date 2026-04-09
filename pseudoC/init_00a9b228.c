// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00a9b228
// Size: 244 bytes
// Signature: undefined init(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HeadMountedDisplayManager::init() */

void HeadMountedDisplayManager::init(void)

{
  int iVar1;
  long *in_x0;
  undefined8 uVar2;
  Logger *this;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *in_x0;
  if (in_x0[1] != lVar3) {
    uVar4 = 0;
    do {
      iVar1 = (**(code **)(**(long **)(lVar3 + uVar4 * 8) + 0x18))();
      if (iVar1 == 0) {
        lVar3 = *(long *)(*in_x0 + uVar4 * 8);
        in_x0[4] = lVar3;
        if (lVar3 == 0) {
          return;
        }
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0
           )) {
                    /* try { // try from 00a9b2dc to 00a9b2e3 has its CatchHandler @ 00a9b32c */
          this = (Logger *)operator_new(0x38);
                    /* try { // try from 00a9b2e8 to 00a9b2eb has its CatchHandler @ 00a9b31c */
          Logger::Logger(this);
          LogManager::getInstance()::singletonLogManager = this;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        uVar2 = (**(code **)(*(long *)in_x0[4] + 0x28))();
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "Selected active HMD: %s\n",uVar2);
        return;
      }
      lVar3 = *in_x0;
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(in_x0[1] - lVar3 >> 3));
  }
  in_x0[4] = 0;
  return;
}


