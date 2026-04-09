// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: closeConnection
// Entry Point: 00b47794
// Size: 308 bytes
// Signature: undefined __cdecl closeConnection(uint * param_1, bool param_2, uchar param_3)


/* ENetNetworkManager::closeConnection(unsigned int const&, bool, unsigned char) */

void ENetNetworkManager::closeConnection(uint *param_1,bool param_2,uchar param_3)

{
  uint uVar1;
  int iVar2;
  Logger *this;
  uint **ppuVar3;
  uint **ppuVar4;
  uint **ppuVar5;
  
  Mutex::enterCriticalSection();
  ppuVar3 = (uint **)(param_1 + 6);
  ppuVar4 = (uint **)*ppuVar3;
  if (ppuVar4 != (uint **)0x0) {
    uVar1 = *(uint *)(ulong)param_2;
    ppuVar5 = ppuVar3;
    do {
      if (*(uint *)(ppuVar4 + 4) >= uVar1) {
        ppuVar5 = ppuVar4;
      }
      ppuVar4 = (uint **)ppuVar4[*(uint *)(ppuVar4 + 4) < uVar1];
    } while (ppuVar4 != (uint **)0x0);
    if ((ppuVar5 != ppuVar3) && (*(uint *)(ppuVar5 + 4) <= uVar1)) {
      if ((param_3 & 1) == 0) {
        ENetConnection::disconnect((ENetConnection *)ppuVar5[5],6);
        deletePeerById((ENetNetworkManager *)param_1,(__map_iterator)ppuVar5);
      }
      else {
        ENetConnection::disconnect((ENetConnection *)ppuVar5[5],1);
      }
      Mutex::leaveCriticalSection();
      Event::post();
      return;
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00b47888 to 00b4788f has its CatchHandler @ 00b478d8 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 00b47894 to 00b47897 has its CatchHandler @ 00b478c8 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                    "Warning: Disconnecting from unknown target.\n");
  Mutex::leaveCriticalSection();
  return;
}


