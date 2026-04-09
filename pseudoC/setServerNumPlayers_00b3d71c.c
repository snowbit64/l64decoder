// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setServerNumPlayers
// Entry Point: 00b3d71c
// Size: 216 bytes
// Signature: undefined __thiscall setServerNumPlayers(MasterServerManager * this, uint param_1)


/* MasterServerManager::setServerNumPlayers(unsigned int) */

void __thiscall MasterServerManager::setServerNumPlayers(MasterServerManager *this,uint param_1)

{
  long lVar1;
  ENetNetworkManager *pEVar2;
  GsBitStream *this_00;
  uchar local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (0x1f < param_1) {
    param_1 = 0x20;
  }
  *(uint *)(this + 0x78) = param_1;
  if (*(int *)(this + 0x178) == 7) {
    pEVar2 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
    this_00 = (GsBitStream *)ENetNetworkManager::createWriteStream(pEVar2,0,true);
    local_3c[0] = '\v';
    GsBitStream::writeBits(this_00,local_3c,8,true);
    GsBitStream::writeBits(this_00,(uchar *)(this + 0x78),5,true);
    pEVar2 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
    ENetNetworkManager::send(pEVar2,this_00,2,3,'\0',(uint *)(this + 0x188),false);
    pEVar2 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
    ENetNetworkManager::deleteWriteStream(pEVar2,this_00);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


