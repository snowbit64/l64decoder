// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sendConnectionRequest
// Entry Point: 00b3a840
// Size: 632 bytes
// Signature: undefined sendConnectionRequest(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MasterServerManager::sendConnectionRequest() */

void MasterServerManager::sendConnectionRequest(void)

{
  undefined4 *puVar1;
  long lVar2;
  long in_x0;
  ENetNetworkManager *pEVar3;
  GsBitStream *this;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined4 local_54;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pEVar3 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  this = (GsBitStream *)ENetNetworkManager::createWriteStream(pEVar3,0,true);
  local_50 = local_50 & 0xffffffffffffff00;
  GsBitStream::writeBits(this,(uchar *)&local_50,8,true);
  local_50._0_4_ = 0x3cf02b77;
  GsBitStream::writeBits(this,(uchar *)&local_50,0x20,true);
  local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(in_x0 + 0x410));
  GsBitStream::writeBits(this,(uchar *)&local_50,0x20,true);
  local_50 = CONCAT71(local_50._1_7_,(char)*(undefined4 *)(in_x0 + 0x400));
  GsBitStream::writeBits(this,(uchar *)&local_50,8,true);
  if (*(int *)(in_x0 + 0x400) == 1) {
    MasterServerUtil::writeString(this,(char *)(in_x0 + 0x408),8);
  }
  else {
    MasterServerUtil::writeString(this,(basic_string *)(in_x0 + 0x4c8));
  }
  *(undefined *)(in_x0 + 0x4c0) = 0;
  MasterServerUtil::writeString(this,(basic_string *)(in_x0 + 0x110));
  local_54 = 5;
  GsBitStream::writeBits(this,(uchar *)&local_54,5,true);
  GsBitStream::writeBits(this,(uchar *)(in_x0 + 0x414),5,true);
  uVar6 = *(long *)(in_x0 + 0x28) - *(long *)(in_x0 + 0x20);
  iVar4 = (int)(uVar6 >> 4);
  local_50 = CONCAT44(local_50._4_4_,iVar4);
  GsBitStream::writeBits(this,(uchar *)&local_50,0x20,true);
  if (iVar4 != 0) {
    lVar5 = 0;
    do {
      puVar1 = (undefined4 *)(*(long *)(in_x0 + 0x20) + lVar5);
      local_50 = CONCAT44(local_50._4_4_,*puVar1);
      GsBitStream::writeBits(this,(uchar *)&local_50,0x20,true);
      local_50 = CONCAT71(local_50._1_7_,(char)puVar1[1]);
      GsBitStream::writeBits(this,(uchar *)&local_50,8,true);
      local_50 = *(ulong *)(puVar1 + 2);
      GsBitStream::writeBits(this,(uchar *)&local_50,0x40,true);
      lVar5 = lVar5 + 0x10;
    } while ((uVar6 >> 4 & 0xffffffff) * 0x10 - lVar5 != 0);
  }
  pEVar3 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  local_50 = ENetNetworkManager::getLocalAddress(pEVar3,0);
  NetworkAddress::writeToStream((NetworkAddress *)&local_50,this);
  pEVar3 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  local_50 = ENetNetworkManager::getLocalAddress(pEVar3,1);
  NetworkAddress::writeToStream((NetworkAddress *)&local_50,this);
  pEVar3 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  local_50 = ENetNetworkManager::getLocalAddress(pEVar3,2);
  NetworkAddress::writeToStream((NetworkAddress *)&local_50,this);
  pEVar3 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  local_50 = ENetNetworkManager::getLocalAddress(pEVar3,3);
  NetworkAddress::writeToStream((NetworkAddress *)&local_50,this);
  pEVar3 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  ENetNetworkManager::send(pEVar3,this,2,3,'\0',(uint *)(in_x0 + 0x188),false);
  pEVar3 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  ENetNetworkManager::deleteWriteStream(pEVar3,this);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


