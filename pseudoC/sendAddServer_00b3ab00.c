// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sendAddServer
// Entry Point: 00b3ab00
// Size: 548 bytes
// Signature: undefined sendAddServer(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MasterServerManager::sendAddServer() */

void MasterServerManager::sendAddServer(void)

{
  long lVar1;
  long in_x0;
  ENetNetworkManager *pEVar2;
  GsBitStream *this;
  basic_string *pbVar3;
  long *plVar4;
  uchar local_4c [4];
  uchar local_48 [4];
  uchar local_44 [4];
  short local_40 [2];
  undefined2 local_3c [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(in_x0 + 0x178) == 7) && (*(char *)(in_x0 + 0x38) != '\0')) {
    pEVar2 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
    this = (GsBitStream *)ENetNetworkManager::createWriteStream(pEVar2,0,true);
    local_4c[0] = '\b';
    GsBitStream::writeBits(this,local_4c,8,true);
    MasterServerUtil::writeString(this,(basic_string *)(in_x0 + 0x40));
    MasterServerUtil::writeString(this,(basic_string *)(in_x0 + 0x98));
    MasterServerUtil::writeString(this,(basic_string *)(in_x0 + 0xb0));
    MasterServerUtil::writeString(this,(basic_string *)(in_x0 + 0x58));
    GsBitStream::writeBits(this,(uchar *)(in_x0 + 0x414),5,true);
    GsBitStream::writeBits(this,(uchar *)(in_x0 + 0x74),5,true);
    GsBitStream::writeBits(this,(uchar *)(in_x0 + 0x78),5,true);
    local_48[0] = *(uchar *)(in_x0 + 0x70);
    GsBitStream::writeBits(this,local_48,1,true);
    local_44[0] = *(uchar *)(in_x0 + 0xc9);
    GsBitStream::writeBits(this,local_44,1,true);
    GsBitStream::writeBits(this,(uchar *)&GenericMpManager::MP_MANAGER_SESSION_TYPE,4,true);
    MasterServerUtil::writeString(this,(basic_string *)(in_x0 + 0x4e8));
    local_40[0] = (short)((uint)(*(int *)(in_x0 + 0x88) - *(int *)(in_x0 + 0x80)) >> 3) * -0x3333;
    GsBitStream::writeBits(this,(uchar *)local_40,0x10,true);
    pbVar3 = *(basic_string **)(in_x0 + 0x80);
    if (pbVar3 != *(basic_string **)(in_x0 + 0x88)) {
      do {
        MasterServerUtil::writeString(this,pbVar3);
        GsBitStream::writeAlignedBytes(this,(uchar *)(pbVar3 + 6),0x10);
        pbVar3 = pbVar3 + 10;
      } while (pbVar3 != *(basic_string **)(in_x0 + 0x88));
    }
    local_3c[0] = (undefined2)*(undefined8 *)(in_x0 + 0x100);
    GsBitStream::writeBits(this,(uchar *)local_3c,0x10,true);
    for (plVar4 = *(long **)(in_x0 + 0xf8); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      MasterServerUtil::writeString(this,(basic_string *)(plVar4 + 2));
    }
    pEVar2 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
    ENetNetworkManager::send(pEVar2,this,2,3,'\0',(uint *)(in_x0 + 0x188),false);
    pEVar2 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
    ENetNetworkManager::deleteWriteStream(pEVar2,this);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


