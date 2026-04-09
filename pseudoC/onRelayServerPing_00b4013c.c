// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onRelayServerPing
// Entry Point: 00b4013c
// Size: 588 bytes
// Signature: undefined __thiscall onRelayServerPing(MasterServerManager * this, GsBitStream * param_1, uint param_2)


/* MasterServerManager::onRelayServerPing(GsBitStream*, unsigned int) */

void __thiscall
MasterServerManager::onRelayServerPing(MasterServerManager *this,GsBitStream *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  void *pvVar6;
  ENetNetworkManager *pEVar7;
  GsBitStream *this_00;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint local_a8 [2];
  uint local_a0;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  ushort local_94 [2];
  uint local_90 [5];
  undefined2 local_7c;
  undefined2 local_7a;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined2 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  ENetNetworkManager::getInstance();
  uVar5 = ENetNetworkManager::getTime();
  lVar10 = *(long *)(this + 0x1f0);
  lVar4 = *(long *)(this + 0x1f8);
  if (*(long *)(this + 0x1f8) - lVar10 == -0x28) {
    while (lVar3 = lVar4, lVar3 != lVar10) {
      pvVar6 = *(void **)(lVar3 + -0x20);
      lVar4 = lVar3 + -0x28;
      if (pvVar6 != (void *)0x0) {
        *(void **)(lVar3 + -0x18) = pvVar6;
        operator_delete(pvVar6);
      }
    }
    *(long *)(this + 0x1f8) = lVar10;
  }
  else {
    std::__ndk1::
    vector<MasterServerManager::RELAY_SERVER_PING_REQUEST_SESSION,std::__ndk1::allocator<MasterServerManager::RELAY_SERVER_PING_REQUEST_SESSION>>
    ::__append((vector<MasterServerManager::RELAY_SERVER_PING_REQUEST_SESSION,std::__ndk1::allocator<MasterServerManager::RELAY_SERVER_PING_REQUEST_SESSION>>
                *)(this + 0x1f0),1);
    lVar10 = *(long *)(this + 0x1f8);
  }
  *(undefined4 *)(lVar10 + -8) = uVar5;
  *(uint *)(lVar10 + -0x24) = param_2;
  GsBitStream::readBits(param_1,(uchar *)(lVar10 + -0x28),0x10,true);
  local_94[0] = 0;
  GsBitStream::readBits(param_1,(uchar *)local_94,0x10,true);
  std::__ndk1::
  vector<MasterServerManager::RelayServerPingRequest,std::__ndk1::allocator<MasterServerManager::RelayServerPingRequest>>
  ::reserve((vector<MasterServerManager::RelayServerPingRequest,std::__ndk1::allocator<MasterServerManager::RelayServerPingRequest>>
             *)(lVar10 + -0x20),(ulong)local_94[0]);
  if (local_94[0] != 0) {
    uVar11 = 0;
    do {
      NetworkAddress::readFromStream((NetworkAddress *)&local_a0,param_1);
      uVar8 = *(ulong *)(this + 0x1e0);
      uVar9 = (uint)(uVar8 >> 0x20);
      uVar1 = uVar9 >> 0xd ^ (uint)(uVar8 >> 0x1b);
      uVar9 = uVar9 >> 0x1b;
      uVar1 = (uVar1 >> uVar9 | uVar1 << 0x20 - uVar9) & 0xffff |
              (uint)*(ushort *)(this + 0x1e8) << 0x10;
      *(ulong *)(this + 0x1e0) = uVar8 * 0x5851f42d4c957f2d + -0x2152ecc841109800;
      *(ushort *)(this + 0x1e8) = *(ushort *)(this + 0x1e8) + 1;
      local_90[0] = uVar1;
      RelayServerUtil::convertIPv4ToIPv6(local_a0,(uchar *)((ulong)local_90 | 4));
      local_7a = 0;
      uStack_74 = 0;
      local_7c = uStack_9c;
      local_70 = 0;
      local_78 = uVar5;
      FUN_00b415d0((vector<MasterServerManager::RelayServerPingRequest,std::__ndk1::allocator<MasterServerManager::RelayServerPingRequest>>
                    *)(lVar10 + -0x20),local_90);
      local_a8[0] = uVar1;
      pEVar7 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
      this_00 = (GsBitStream *)ENetNetworkManager::createWriteStream(pEVar7,0,false);
      GsBitStream::writeAlignedBytes(this_00,(uchar *)local_a8,4);
      pEVar7 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
      ENetNetworkManager::sendUnconnected
                (pEVar7,this_00,CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0)),1);
      pEVar7 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
      ENetNetworkManager::sendUnconnected
                (pEVar7,this_00,CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0)),1);
      pEVar7 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
      ENetNetworkManager::sendUnconnected
                (pEVar7,this_00,CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0)),1);
      pEVar7 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
      ENetNetworkManager::sendUnconnected
                (pEVar7,this_00,CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0)),1);
      pEVar7 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
      ENetNetworkManager::deleteWriteStream(pEVar7,this_00);
      uVar11 = uVar11 + 1;
    } while (uVar11 < local_94[0]);
  }
  ENetNetworkManager::getInstance();
  Event::post();
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


