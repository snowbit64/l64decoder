// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bb0d4
// Entry Point: 007bb0d4
// Size: 348 bytes
// Signature: undefined FUN_007bb0d4(void)


void FUN_007bb0d4(AnimalCompanionManager *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  EntityRegistryManager *pEVar6;
  long lVar7;
  long lVar8;
  Logger *this;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  long local_80;
  long lStack_78;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar1 = *param_2;
  uVar2 = param_2[4];
  uVar3 = param_2[8];
  pEVar6 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar7 = EntityRegistryManager::getEntityById(pEVar6,uVar2);
  pEVar6 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar8 = EntityRegistryManager::getEntityById(pEVar6,uVar3);
  if ((((lVar7 == 0) || (lVar8 == 0)) || (((uint)*(undefined8 *)(lVar7 + 0x10) >> 5 & 1) == 0)) ||
     ((*(byte *)(lVar8 + 0x10) >> 5 & 1) == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 007bb1ec to 007bb1f3 has its CatchHandler @ 007bb240 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 007bb1f8 to 007bb1fb has its CatchHandler @ 007bb230 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning (script): Invalid entities %u and %u in method \'setCompanionFetchEntity\'.\n"
                      ,(ulong)uVar2,(ulong)uVar3);
  }
  else {
    local_98 = 0;
    uStack_90 = 0;
    local_88 = (void *)0x0;
                    /* try { // try from 007bb1a4 to 007bb1c7 has its CatchHandler @ 007bb258 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&local_98);
    local_80 = lVar7;
    lStack_78 = lVar8;
    AnimalCompanionManager::changeBehaviorState
              (param_1,uVar1,(BehaviorStateChangeParams *)&local_98);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


