// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: validateAndFix
// Entry Point: 00a99aa4
// Size: 504 bytes
// Signature: undefined validateAndFix(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftVirtualTextureDesc::validateAndFix() */

undefined8 SoftVirtualTextureDesc::validateAndFix(void)

{
  int iVar1;
  uint *in_x0;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  
  if (*in_x0 < 0x4001) {
    uVar6 = NEON_cnt((ulong)*in_x0,1);
    uVar5 = NEON_uaddlv(uVar6,1);
    if ((uint)CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar5) < 2) {
      if (in_x0[4] < 0x4001) {
        uVar6 = NEON_cnt((ulong)in_x0[4],1);
        uVar5 = NEON_uaddlv(uVar6,1);
        if (((uint)CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar5) < 2) && (in_x0[5] < 0x4001)) {
          uVar6 = NEON_cnt((ulong)in_x0[5],1);
          uVar5 = NEON_uaddlv(uVar6,1);
          if ((uint)CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar5) < 2) {
            if (in_x0[3] < 2) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar1 != 0)) {
                    /* try { // try from 00a99c64 to 00a99c6f has its CatchHandler @ 00a99c9c */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
              LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                 "ERROR: SoftVirtualTextureDesc must have border size at least 2 (not %u)\n"
                                 ,(ulong)in_x0[3]);
              return 0;
            }
            return 1;
          }
        }
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 00a99c1c to 00a99c27 has its CatchHandler @ 00a99ca0 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      uVar3 = (ulong)in_x0[4];
      pcVar2 = "ERROR: SoftVirtualTextureDesc has invalid palette texture size %u x %u\n";
      uVar4 = (ulong)in_x0[5];
      goto LAB_00a99ba8;
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00a99bd4 to 00a99bdf has its CatchHandler @ 00a99ca4 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  uVar3 = (ulong)*in_x0;
  pcVar2 = "ERROR: SoftVirtualTextureDesc has invalid index texture size %u x %u\n";
  uVar4 = uVar3;
LAB_00a99ba8:
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar2,uVar3,uVar4);
  return 0;
}


