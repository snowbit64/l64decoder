// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handleDisconnect
// Entry Point: 00b48cb0
// Size: 248 bytes
// Signature: undefined __thiscall handleDisconnect(ENetNetworkManager * this, _ENetPeer * param_1, uint param_2)


/* ENetNetworkManager::handleDisconnect(_ENetPeer*, unsigned int) */

void __thiscall
ENetNetworkManager::handleDisconnect(ENetNetworkManager *this,_ENetPeer *param_1,uint param_2)

{
  int iVar1;
  Logger *this_00;
  ENetNetworkManager **ppEVar2;
  ENetNetworkManager **ppEVar3;
  ENetNetworkManager **ppEVar4;
  
  ppEVar2 = (ENetNetworkManager **)(this + 0x30);
  ppEVar3 = (ENetNetworkManager **)*ppEVar2;
  ppEVar4 = ppEVar2;
  if (ppEVar3 != (ENetNetworkManager **)0x0) {
    do {
      if (ppEVar3[4] >= param_1) {
        ppEVar4 = ppEVar3;
      }
      ppEVar3 = (ENetNetworkManager **)ppEVar3[ppEVar3[4] < param_1];
    } while (ppEVar3 != (ENetNetworkManager **)0x0);
    if (((ppEVar4 != ppEVar2) && (ppEVar4[4] <= param_1)) && (*(_ENetPeer **)ppEVar4[5] == param_1))
    {
      ENetConnection::handleDisconnect((ENetConnection *)ppEVar4[5],param_2,this);
      deletePeerByPeer(this,(__map_iterator)ppEVar4);
      return;
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00b48d68 to 00b48d6f has its CatchHandler @ 00b48db8 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00b48d74 to 00b48d77 has its CatchHandler @ 00b48da8 */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                    "Warning: Received disconnect from unknown client.\n");
  return;
}


