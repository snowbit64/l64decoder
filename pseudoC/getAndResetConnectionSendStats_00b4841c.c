// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAndResetConnectionSendStats
// Entry Point: 00b4841c
// Size: 172 bytes
// Signature: undefined __thiscall getAndResetConnectionSendStats(ENetNetworkManager * this, uint * param_1, uint * param_2, uint * param_3)


/* ENetNetworkManager::getAndResetConnectionSendStats(unsigned int const&, unsigned int&, unsigned
   int&) */

undefined8 __thiscall
ENetNetworkManager::getAndResetConnectionSendStats
          (ENetNetworkManager *this,uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  ENetNetworkManager **ppEVar2;
  ENetNetworkManager *pEVar3;
  ENetNetworkManager **ppEVar4;
  ENetNetworkManager **ppEVar5;
  
  Mutex::enterCriticalSection();
  ppEVar5 = (ENetNetworkManager **)(this + 0x18);
  ppEVar4 = (ENetNetworkManager **)*ppEVar5;
  if (ppEVar4 != (ENetNetworkManager **)0x0) {
    uVar1 = *param_1;
    ppEVar2 = ppEVar5;
    do {
      if (*(uint *)(ppEVar4 + 4) >= uVar1) {
        ppEVar2 = ppEVar4;
      }
      ppEVar4 = (ENetNetworkManager **)ppEVar4[*(uint *)(ppEVar4 + 4) < uVar1];
    } while (ppEVar4 != (ENetNetworkManager **)0x0);
    if ((ppEVar2 != ppEVar5) && (*(uint *)(ppEVar2 + 4) <= uVar1)) {
      pEVar3 = ppEVar2[5];
      *param_2 = *(uint *)(pEVar3 + 0x46c);
      *param_3 = *(uint *)(pEVar3 + 0x470);
      *(undefined8 *)(pEVar3 + 0x46c) = 0;
    }
  }
  Mutex::leaveCriticalSection();
  return 0;
}


