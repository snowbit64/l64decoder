// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertToLocalTime
// Entry Point: 00b48074
// Size: 260 bytes
// Signature: undefined __thiscall convertToLocalTime(ENetNetworkManager * this, uint * param_1, uint param_2)


/* ENetNetworkManager::convertToLocalTime(unsigned int const&, unsigned int) */

uint __thiscall
ENetNetworkManager::convertToLocalTime(ENetNetworkManager *this,uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  Logger *this_00;
  ENetNetworkManager **ppEVar3;
  ENetNetworkManager **ppEVar4;
  ENetNetworkManager **ppEVar5;
  
  Mutex::enterCriticalSection();
  ppEVar5 = (ENetNetworkManager **)(this + 0x18);
  ppEVar4 = (ENetNetworkManager **)*ppEVar5;
  if (ppEVar4 != (ENetNetworkManager **)0x0) {
    uVar1 = *param_1;
    ppEVar3 = ppEVar5;
    do {
      if (*(uint *)(ppEVar4 + 4) >= uVar1) {
        ppEVar3 = ppEVar4;
      }
      ppEVar4 = (ENetNetworkManager **)ppEVar4[*(uint *)(ppEVar4 + 4) < uVar1];
    } while (ppEVar4 != (ENetNetworkManager **)0x0);
    if ((ppEVar3 != ppEVar5) && (*(uint *)(ppEVar3 + 4) <= uVar1)) {
      param_2 = *(int *)(ppEVar3[5] + 0x474) + param_2;
      goto LAB_00b480fc;
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00b48138 to 00b4813f has its CatchHandler @ 00b48188 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00b48144 to 00b48147 has its CatchHandler @ 00b48178 */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                    "Warning: Convert to local time called with unknown connection.\n");
LAB_00b480fc:
  Mutex::leaveCriticalSection();
  return param_2;
}


