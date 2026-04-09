// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsLocalAddress
// Entry Point: 00b481c0
// Size: 148 bytes
// Signature: undefined __thiscall getIsLocalAddress(ENetNetworkManager * this, NetworkAddress param_1)


/* ENetNetworkManager::getIsLocalAddress(NetworkAddress) */

uint __thiscall ENetNetworkManager::getIsLocalAddress(ENetNetworkManager *this,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  uVar3 = NetworkAddress::operator==((NetworkAddress *)&local_30,(NetworkAddress *)(this + 0x130));
  if ((((uVar3 & 1) == 0) &&
      (uVar3 = NetworkAddress::operator==
                         ((NetworkAddress *)&local_30,(NetworkAddress *)(this + 0x138)),
      (uVar3 & 1) == 0)) &&
     (uVar3 = NetworkAddress::operator==
                        ((NetworkAddress *)&local_30,(NetworkAddress *)(this + 0x140)),
     (uVar3 & 1) == 0)) {
    uVar2 = NetworkAddress::operator==((NetworkAddress *)&local_30,(NetworkAddress *)(this + 0x148))
    ;
  }
  else {
    uVar2 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


