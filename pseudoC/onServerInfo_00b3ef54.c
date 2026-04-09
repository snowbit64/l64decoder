// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onServerInfo
// Entry Point: 00b3ef54
// Size: 464 bytes
// Signature: undefined __cdecl onServerInfo(GsBitStream * param_1, uint param_2)


/* MasterServerManager::onServerInfo(GsBitStream*, unsigned int) */

void MasterServerManager::onServerInfo(GsBitStream *param_1,uint param_2)

{
  long lVar1;
  ulong *puVar2;
  ServerOverviewInfo *pSVar3;
  GsBitStream *this;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint local_74;
  uint local_70;
  uint local_6c;
  NetworkAddress aNStack_68 [8];
  uint local_60 [2];
  long local_58;
  
  this = (GsBitStream *)(ulong)param_2;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  param_1[0x208] = (GsBitStream)0x0;
  local_6c = 0;
  GsBitStream::readBits(this,(uchar *)&local_6c,0x20,true);
  local_70 = 0;
  GsBitStream::readBits(this,(uchar *)&local_70,0x20,true);
  uVar7 = local_6c;
  uVar6 = (ulong)local_6c;
  *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)(param_1 + 0x418);
  puVar2 = (ulong *)operator_new__(uVar6 << 7 | 8);
  puVar5 = puVar2 + 1;
  *puVar2 = uVar6;
  if (uVar7 != 0) {
    puVar2 = puVar2 + 6;
    lVar4 = uVar6 << 7;
    do {
      puVar2[-4] = 0;
      puVar2[-3] = 0;
      lVar4 = lVar4 + -0x80;
      puVar2[-2] = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      puVar2[6] = 0;
      puVar2[5] = 0;
      puVar2[8] = 0;
      puVar2[7] = 0;
      puVar2[10] = 0;
      puVar2[9] = 0;
      puVar2 = puVar2 + 0x10;
    } while (lVar4 != 0);
    if (uVar7 != 0) {
      uVar7 = 0;
      do {
        local_74 = 0;
        uVar6 = NetworkAddress::readFromStream(aNStack_68,this);
        if ((((uVar6 & 1) == 0) ||
            (uVar6 = GsBitStream::readBits(this,(uchar *)local_60,0x20,true), (uVar6 & 1) == 0)) ||
           (uVar6 = GsBitStream::readBits(this,(uchar *)&local_74,0x20,true), (uVar6 & 1) == 0)) {
LAB_00b3f0d0:
          local_6c = 0;
          break;
        }
        FUN_00b4098c(param_1 + 0x418,aNStack_68);
        if (local_6c < local_74 + uVar7) goto LAB_00b3f0d0;
        if (local_74 != 0) {
          uVar8 = 0;
          do {
            uVar6 = ServerOverviewInfo::readFromStream
                              ((ServerOverviewInfo *)(puVar5 + (ulong)(uVar7 + uVar8) * 0x10),this,
                               local_60[0]);
            if ((uVar6 & 1) == 0) goto LAB_00b3f0d0;
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_74);
          uVar7 = uVar7 + uVar8;
        }
      } while (uVar7 < local_6c);
    }
  }
  pSVar3 = (ServerOverviewInfo *)GenericMpManager::getInstance();
  filterServers(pSVar3,(uint *)puVar5,(uint)&local_6c);
  onServerInfoRead((MasterServerManager *)param_1,(ServerOverviewInfo *)puVar5,local_6c,local_70);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


