// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGrowthNextState
// Entry Point: 00855090
// Size: 344 bytes
// Signature: undefined __thiscall setGrowthNextState(FieldCropsUpdater * this, uint param_1, uint param_2, uint param_3)


/* FieldCropsUpdater::setGrowthNextState(unsigned int, unsigned int, unsigned int) */

void __thiscall
FieldCropsUpdater::setGrowthNextState
          (FieldCropsUpdater *this,uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = (ulong)param_3;
  if ((param_1 < 0x20) && (*(int *)(this + (ulong)param_1 * 100 + 0x60) != 0)) {
    if (param_2 < 0x40) {
      if (param_3 < 0x100) {
        this[(ulong)param_2 + (ulong)param_1 * 100 + 0x80] = SUB41(param_3,0);
        return;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 008551b0 to 008551bb has its CatchHandler @ 008551e8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar2 = "Error: Next growth state %u for crop type %u is too big. Maximum allowed is %u\n.";
      uVar4 = 0xff;
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 00855168 to 00855173 has its CatchHandler @ 008551ec */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar2 = 
      "Error: Next growth state source %u for crop type %u is too big. Maximum allowed is %u\n.";
      uVar4 = 0x3f;
      uVar3 = (ulong)param_2;
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar2,uVar3,
                       (ulong)param_1,uVar4);
  }
  return;
}


