// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDefaultLocalIp
// Entry Point: 00b48254
// Size: 160 bytes
// Signature: undefined __thiscall getDefaultLocalIp(ENetNetworkManager * this, char * param_1, uint param_2)


/* ENetNetworkManager::getDefaultLocalIp(char*, unsigned int) */

uint __thiscall
ENetNetworkManager::getDefaultLocalIp(ENetNetworkManager *this,char *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint local_140;
  undefined2 local_13c;
  char acStack_138 [256];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_140 = 0;
  local_13c = 0;
  uVar3 = Network::getHostnameByAddress(0,acStack_138,0xff);
  uVar2 = 0;
  if ((uVar3 & 1) != 0) {
    uVar3 = Network::getAddressByHostname(acStack_138,&local_140);
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = Network::getAddressString(local_140,param_1,param_2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


