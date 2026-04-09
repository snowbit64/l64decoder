// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sendConnectionToServerRequest
// Entry Point: 00b3ad24
// Size: 340 bytes
// Signature: undefined __cdecl sendConnectionToServerRequest(uint param_1, uint param_2)


/* MasterServerManager::sendConnectionToServerRequest(unsigned int, unsigned int) */

void MasterServerManager::sendConnectionToServerRequest(uint param_1,uint param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ENetNetworkManager *pEVar4;
  GsBitStream *this;
  uchar local_40 [4];
  uint local_3c;
  long local_38;
  
  uVar3 = (ulong)param_1;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(uVar3 + 0x330) = 1;
  *(undefined4 *)(uVar3 + 400) = 0;
  *(undefined *)(uVar3 + 0x390) = 0;
  *(undefined2 *)(uVar3 + 0x398) = 0;
  *(undefined4 *)(uVar3 + 0x394) = 0;
  *(undefined4 *)(uVar3 + 0x39c) = 0;
  if ((*(byte *)(uVar3 + 0x3a0) & 1) == 0) {
    *(undefined2 *)(uVar3 + 0x3a0) = 0;
    bVar1 = *(byte *)(uVar3 + 0x3b8);
  }
  else {
    **(undefined **)(uVar3 + 0x3b0) = 0;
    *(undefined8 *)(uVar3 + 0x3a8) = 0;
    bVar1 = *(byte *)(uVar3 + 0x3b8);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined2 *)(uVar3 + 0x3b8) = 0;
  }
  else {
    **(undefined **)(uVar3 + 0x3c8) = 0;
    *(undefined8 *)(uVar3 + 0x3c0) = 0;
  }
  *(undefined8 *)(uVar3 + 1000) = 0;
  *(undefined8 *)(uVar3 + 0x3e0) = 0;
  *(undefined8 *)(uVar3 + 0x3f8) = 0;
  *(undefined8 *)(uVar3 + 0x3f0) = 0;
  *(undefined8 *)(uVar3 + 0x3d8) = 0;
  *(undefined8 *)(uVar3 + 0x3d0) = 0;
  pEVar4 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  this = (GsBitStream *)ENetNetworkManager::createWriteStream(pEVar4,0,true);
  local_40[0] = '\x13';
  GsBitStream::writeBits(this,local_40,8,true);
  local_3c = param_2;
  GsBitStream::writeBits(this,(uchar *)&local_3c,0x20,true);
  MasterServerUtil::writeString(this,(basic_string *)(uVar3 + 0x338));
  GsBitStream::writeBits(this,(uchar *)&GenericMpManager::MP_MANAGER_SESSION_TYPE,4,true);
  MasterServerUtil::writeString(this,(basic_string *)(uVar3 + 0x4e8));
  pEVar4 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  ENetNetworkManager::send(pEVar4,this,2,3,'\0',(uint *)(uVar3 + 0x188),false);
  pEVar4 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  ENetNetworkManager::deleteWriteStream(pEVar4,this);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


