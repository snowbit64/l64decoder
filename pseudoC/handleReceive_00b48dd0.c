// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handleReceive
// Entry Point: 00b48dd0
// Size: 308 bytes
// Signature: undefined __thiscall handleReceive(ENetNetworkManager * this, _ENetPeer * param_1, _ENetPacket * param_2)


/* ENetNetworkManager::handleReceive(_ENetPeer*, _ENetPacket*) */

void __thiscall
ENetNetworkManager::handleReceive(ENetNetworkManager *this,_ENetPeer *param_1,_ENetPacket *param_2)

{
  long lVar1;
  int iVar2;
  ENetNetworkManager **ppEVar3;
  ENetNetworkManager **ppEVar4;
  ENetNetworkManager **ppEVar5;
  GsBitStream aGStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ppEVar3 = (ENetNetworkManager **)(this + 0x30);
  ppEVar4 = (ENetNetworkManager **)*ppEVar3;
  ppEVar5 = ppEVar3;
  if (ppEVar4 != (ENetNetworkManager **)0x0) {
    do {
      if (ppEVar4[4] >= param_1) {
        ppEVar5 = ppEVar4;
      }
      ppEVar4 = (ENetNetworkManager **)ppEVar4[ppEVar4[4] < param_1];
    } while (ppEVar4 != (ENetNetworkManager **)0x0);
    if (((ppEVar5 != ppEVar3) && (ppEVar5[4] <= param_1)) && (*(_ENetPeer **)ppEVar5[5] == param_1))
    {
      GsBitStream::GsBitStream
                (aGStack_58,*(uchar **)(param_2 + 0x10),*(uint *)(param_2 + 0x18),false);
                    /* try { // try from 00b48ea0 to 00b48eab has its CatchHandler @ 00b48f1c */
      ENetConnection::handleReceive((ENetConnection *)ppEVar5[5],aGStack_58,this);
      GsBitStream::~GsBitStream(aGStack_58);
      goto LAB_00b48e64;
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00b48ec8 to 00b48ed3 has its CatchHandler @ 00b48f04 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                    "Warning: Received packet from unknown peer.\n");
LAB_00b48e64:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


