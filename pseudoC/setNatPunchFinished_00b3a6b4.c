// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setNatPunchFinished
// Entry Point: 00b3a6b4
// Size: 240 bytes
// Signature: undefined __thiscall setNatPunchFinished(MasterServerManager * this, bool param_1)


/* MasterServerManager::setNatPunchFinished(bool) */

void __thiscall MasterServerManager::setNatPunchFinished(MasterServerManager *this,bool param_1)

{
  long lVar1;
  ENetNetworkManager *pEVar2;
  GsBitStream *this_00;
  uchar local_44 [4];
  uchar local_40 [4];
  undefined2 local_3c [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(this + 400) = 0;
  if (*(int *)(this + 0x178) == 7) {
    pEVar2 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
    this_00 = (GsBitStream *)ENetNetworkManager::createWriteStream(pEVar2,0,true);
    local_44[0] = '\x16';
    GsBitStream::writeBits(this_00,local_44,8,true);
    local_40[0] = param_1;
    GsBitStream::writeBits(this_00,local_40,1,true);
    local_3c[0] = *(undefined2 *)(this + 0x194);
    GsBitStream::writeBits(this_00,(uchar *)local_3c,0x10,true);
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


