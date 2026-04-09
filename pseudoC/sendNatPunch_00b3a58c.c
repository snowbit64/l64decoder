// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sendNatPunch
// Entry Point: 00b3a58c
// Size: 296 bytes
// Signature: undefined __thiscall sendNatPunch(MasterServerManager * this, NAT_PUNCH_IDS param_1, NetworkAddress param_2, bool param_3)


/* MasterServerManager::sendNatPunch(MasterServerUtil::NAT_PUNCH_IDS, NetworkAddress, bool) */

void __thiscall
MasterServerManager::sendNatPunch
          (MasterServerManager *this,NAT_PUNCH_IDS param_1,NetworkAddress param_2,bool param_3)

{
  long lVar1;
  ulong uVar2;
  ENetNetworkManager *pEVar3;
  GsBitStream *this_00;
  undefined8 local_58;
  undefined2 local_4c;
  long local_48;
  
  local_58 = (ulong)param_2;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = NetworkAddress::operator==
                    ((NetworkAddress *)&local_58,
                     (NetworkAddress *)&NetworkAddress::UNASSIGNED_ADDRESS);
  if ((uVar2 & 1) == 0) {
    pEVar3 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
    uVar2 = ENetNetworkManager::getIsLocalAddress(pEVar3,local_58);
    if ((uVar2 & 1) == 0) {
      pEVar3 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
      this_00 = (GsBitStream *)ENetNetworkManager::createWriteStream(pEVar3,0,false);
      local_4c = CONCAT11(local_4c._1_1_,(char)param_1);
      GsBitStream::writeBits(this_00,(uchar *)&local_4c,8,true);
      local_4c = *(undefined2 *)(this + 0x194);
      GsBitStream::writeBits(this_00,(uchar *)&local_4c,0x10,true);
      if (param_1 == 1) {
        local_4c = local_58._4_2_;
        GsBitStream::writeBits(this_00,(uchar *)&local_4c,0x10,true);
      }
      local_4c = CONCAT11(local_4c._1_1_,param_3);
      GsBitStream::writeBits(this_00,(uchar *)&local_4c,1,true);
      pEVar3 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
      ENetNetworkManager::sendUnconnected(pEVar3,this_00,local_58,0);
      pEVar3 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
      ENetNetworkManager::deleteWriteStream(pEVar3,this_00);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


