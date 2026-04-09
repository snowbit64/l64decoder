// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onNatGetMostRecentExternalPort
// Entry Point: 00b3ff80
// Size: 244 bytes
// Signature: undefined __cdecl onNatGetMostRecentExternalPort(GsBitStream * param_1, uint param_2)


/* MasterServerManager::onNatGetMostRecentExternalPort(GsBitStream*, unsigned int) */

void MasterServerManager::onNatGetMostRecentExternalPort(GsBitStream *param_1,uint param_2)

{
  long lVar1;
  ENetNetworkManager *pEVar2;
  GsBitStream *this;
  undefined2 local_48 [2];
  uchar local_44 [4];
  undefined2 local_40 [2];
  undefined2 local_3c [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  GsBitStream::readBits((GsBitStream *)(ulong)param_2,(uchar *)local_48,0x10,true);
  pEVar2 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  this = (GsBitStream *)ENetNetworkManager::createWriteStream(pEVar2,0,true);
  local_44[0] = '\x17';
  GsBitStream::writeBits(this,local_44,8,true);
  local_40[0] = local_48[0];
  GsBitStream::writeBits(this,(uchar *)local_40,0x10,true);
  local_3c[0] = *(undefined2 *)(param_1 + 0x1d4);
  GsBitStream::writeBits(this,(uchar *)local_3c,0x10,true);
  pEVar2 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  ENetNetworkManager::send(pEVar2,this,2,3,'\0',(uint *)(param_1 + 0x188),false);
  pEVar2 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  ENetNetworkManager::deleteWriteStream(pEVar2,this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


