// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getConnectionNetworkAddress
// Entry Point: 00b49320
// Size: 100 bytes
// Signature: undefined __thiscall getConnectionNetworkAddress(ENetNetworkManager * this, uint * param_1, NetworkAddress * param_2)


/* ENetNetworkManager::getConnectionNetworkAddress(unsigned int const&, NetworkAddress&) */

undefined8 __thiscall
ENetNetworkManager::getConnectionNetworkAddress
          (ENetNetworkManager *this,uint *param_1,NetworkAddress *param_2)

{
  uint uVar1;
  undefined2 uVar2;
  ENetNetworkManager **ppEVar3;
  ENetNetworkManager **ppEVar4;
  ENetNetworkManager **ppEVar5;
  
  ppEVar3 = (ENetNetworkManager **)(this + 0x18);
  ppEVar5 = (ENetNetworkManager **)*ppEVar3;
  if (ppEVar5 != (ENetNetworkManager **)0x0) {
    uVar1 = *param_1;
    ppEVar4 = ppEVar3;
    do {
      if (*(uint *)(ppEVar5 + 4) >= uVar1) {
        ppEVar4 = ppEVar5;
      }
      ppEVar5 = (ENetNetworkManager **)ppEVar5[*(uint *)(ppEVar5 + 4) < uVar1];
    } while (ppEVar5 != (ENetNetworkManager **)0x0);
    if ((ppEVar4 != ppEVar3) && (*(uint *)(ppEVar4 + 4) <= uVar1)) {
      uVar2 = *(undefined2 *)(*(long *)ppEVar4[5] + 0x28);
      *(undefined4 *)param_2 = *(undefined4 *)(*(long *)ppEVar4[5] + 0x24);
      *(undefined2 *)(param_2 + 4) = uVar2;
      return 1;
    }
  }
  return 0;
}


