// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bb274
// Entry Point: 007bb274
// Size: 304 bytes
// Signature: undefined FUN_007bb274(void)


void FUN_007bb274(AnimalCompanionManager *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  EntityRegistryManager *this;
  long lVar5;
  Logger *this_00;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  long local_70;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = *param_2;
  uVar2 = param_2[4];
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar5 = EntityRegistryManager::getEntityById(this,uVar2);
  if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x10) >> 5 & 1) == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 007bb360 to 007bb367 has its CatchHandler @ 007bb3b4 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 007bb36c to 007bb36f has its CatchHandler @ 007bb3a4 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning (script): Invalid entity id %u in method \'setCompanionFeed\'.\n",
                      (ulong)uVar2);
  }
  else {
    local_88 = 0;
    uStack_80 = 0;
    local_78 = (void *)0x0;
                    /* try { // try from 007bb318 to 007bb33b has its CatchHandler @ 007bb3cc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&local_88);
    local_70 = lVar5;
    AnimalCompanionManager::changeBehaviorState
              (param_1,uVar1,(BehaviorStateChangeParams *)&local_88);
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


