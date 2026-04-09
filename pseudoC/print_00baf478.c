// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: print
// Entry Point: 00baf478
// Size: 596 bytes
// Signature: undefined __cdecl print(MESSAGE_TYPE param_1, char * param_2, ...)


/* Bt2PhysicsErrorStream::print(Bt2PhysicsErrorStream::MESSAGE_TYPE, char const*, ...) */

void Bt2PhysicsErrorStream::print(MESSAGE_TYPE param_1,char *param_2,...)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  Logger *pLVar6;
  char *in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar7;
  undefined auStack_f0 [8];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar1 = auStack_f0;
  ppuVar2 = &local_c0;
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  local_e8 = in_x3;
  uStack_e0 = in_x4;
  local_d8 = in_x5;
  uStack_d0 = in_x6;
  local_c8 = in_x7;
  if (((*(uint *)(ulong)param_1 >> (ulong)((uint)param_2 & 0x1f) & 1) != 0) && ((uint)param_2 < 4))
  {
    iVar4 = (int)&stack0xffffffffffffffd0;
    switch((ulong)param_2 & 0xffffffff) {
    case 0:
      local_80 = (undefined *)register0x00000008;
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
         local_80 = (undefined *)register0x00000008, iVar5 != 0)) {
                    /* try { // try from 00baf648 to 00baf653 has its CatchHandler @ 00baf6d0 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        local_80 = (undefined *)register0x00000008;
      }
      pLVar6 = (Logger *)
               Logger::errorf(LogManager::getInstance()::singletonLogManager,"Error (physics): ");
      uStack_68 = 0xffffff80ffffffd8;
      ppuStack_78 = ppuVar2;
      puStack_70 = puVar1;
      Logger::errorf(pLVar6,in_x2,iVar4 - 0x50);
      break;
    default:
      local_a0 = (undefined *)register0x00000008;
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
         local_a0 = (undefined *)register0x00000008, iVar5 != 0)) {
                    /* try { // try from 00baf600 to 00baf60b has its CatchHandler @ 00baf6d4 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        local_a0 = (undefined *)register0x00000008;
      }
      pLVar6 = (Logger *)
               Logger::warnf(LogManager::getInstance()::singletonLogManager,"Warning (physics): ");
      uStack_88 = 0xffffff80ffffffd8;
      ppuStack_98 = ppuVar2;
      puStack_90 = puVar1;
      Logger::warnf(pLVar6,in_x2,iVar4 - 0x70);
      break;
    case 2:
      local_c0 = (undefined *)register0x00000008;
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
         local_c0 = (undefined *)register0x00000008, iVar5 != 0)) {
                    /* try { // try from 00baf690 to 00baf69b has its CatchHandler @ 00baf6cc */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        local_c0 = (undefined *)register0x00000008;
      }
      pLVar6 = (Logger *)
               Logger::infof(LogManager::getInstance()::singletonLogManager,"Info (physics): ");
      uStack_a8 = 0xffffff80ffffffd8;
      ppuStack_b8 = ppuVar2;
      puStack_b0 = puVar1;
      Logger::infof(pLVar6,in_x2,iVar4 - 0x90);
    }
  }
  if (*(long *)(lVar3 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


