// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: send
// Entry Point: 00b47c9c
// Size: 496 bytes
// Signature: undefined __thiscall send(ENetNetworkManager * this, GsBitStream * param_1, PacketPriority param_2, PacketReliability param_3, char param_4, uint * param_5, bool param_6)


/* ENetNetworkManager::send(GsBitStream const*, NetworkManagerBase::PacketPriority,
   NetworkManagerBase::PacketReliability, char, unsigned int const&, bool) */

byte __thiscall
ENetNetworkManager::send
          (ENetNetworkManager *this,GsBitStream *param_1,PacketPriority param_2,
          PacketReliability param_3,char param_4,uint *param_5,bool param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  Logger *this_00;
  ENetNetworkManager **ppEVar4;
  ENetNetworkManager *pEVar5;
  ENetNetworkManager **ppEVar6;
  ENetNetworkManager **ppEVar7;
  uint uVar8;
  
  Mutex::enterCriticalSection();
  if (param_3 < 5) {
    iVar3 = *(int *)(&DAT_00525280 + (long)(int)param_3 * 4);
  }
  else {
    iVar3 = 0;
  }
  if (param_6) {
    if (*(ENetNetworkManager ***)(this + 0x10) == (ENetNetworkManager **)(this + 0x18)) {
      bVar1 = 1;
    }
    else {
      uVar8 = 1;
      ppEVar6 = *(ENetNetworkManager ***)(this + 0x10);
      do {
        uVar2 = ENetConnection::send((ENetConnection *)ppEVar6[5],param_1,iVar3,(uint)(byte)param_4)
        ;
        ppEVar7 = (ENetNetworkManager **)ppEVar6[1];
        if ((ENetNetworkManager **)ppEVar6[1] == (ENetNetworkManager **)0x0) {
          ppEVar7 = ppEVar6 + 2;
          ppEVar4 = (ENetNetworkManager **)*ppEVar7;
          if ((ENetNetworkManager **)*ppEVar4 != ppEVar6) {
            do {
              pEVar5 = *ppEVar7;
              ppEVar7 = (ENetNetworkManager **)(pEVar5 + 0x10);
              ppEVar4 = (ENetNetworkManager **)*ppEVar7;
            } while (*ppEVar4 != pEVar5);
          }
        }
        else {
          do {
            ppEVar4 = ppEVar7;
            ppEVar7 = (ENetNetworkManager **)*ppEVar4;
          } while ((ENetNetworkManager **)*ppEVar4 != (ENetNetworkManager **)0x0);
        }
        uVar8 = uVar2 & uVar8;
        ppEVar6 = ppEVar4;
      } while (ppEVar4 != (ENetNetworkManager **)(this + 0x18));
      bVar1 = uVar8 != 0;
    }
  }
  else {
    ppEVar7 = (ENetNetworkManager **)(this + 0x18);
    ppEVar6 = (ENetNetworkManager **)*ppEVar7;
    if (ppEVar6 != (ENetNetworkManager **)0x0) {
      uVar8 = *param_5;
      ppEVar4 = ppEVar7;
      do {
        if (*(uint *)(ppEVar6 + 4) >= uVar8) {
          ppEVar4 = ppEVar6;
        }
        ppEVar6 = (ENetNetworkManager **)ppEVar6[*(uint *)(ppEVar6 + 4) < uVar8];
      } while (ppEVar6 != (ENetNetworkManager **)0x0);
      if ((ppEVar4 != ppEVar7) && (*(uint *)(ppEVar4 + 4) <= uVar8)) {
        bVar1 = ENetConnection::send((ENetConnection *)ppEVar4[5],param_1,iVar3,(uint)(byte)param_4)
        ;
        goto LAB_00b47e18;
      }
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00b47e4c to 00b47e53 has its CatchHandler @ 00b47e9c */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00b47e58 to 00b47e5b has its CatchHandler @ 00b47e8c */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Send called with unknown target address.\n");
    bVar1 = 0;
  }
LAB_00b47e18:
  Mutex::leaveCriticalSection();
  return bVar1 & 1;
}


