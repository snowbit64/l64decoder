// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkAllRelayServerPingRequests
// Entry Point: 00b3ae78
// Size: 788 bytes
// Signature: undefined checkAllRelayServerPingRequests(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MasterServerManager::checkAllRelayServerPingRequests() */

void MasterServerManager::checkAllRelayServerPingRequests(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long in_x0;
  ENetNetworkManager *pEVar4;
  GsBitStream *this;
  void *pvVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint local_78;
  undefined4 local_74;
  undefined2 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(long *)(in_x0 + 0x1f0) != *(long *)(in_x0 + 0x1f8)) {
    ENetNetworkManager::getInstance();
    iVar3 = ENetNetworkManager::getTime();
    puVar11 = *(undefined8 **)(in_x0 + 0x1f0);
    puVar10 = *(undefined8 **)(in_x0 + 0x1f8);
    if (puVar10 != puVar11) {
      uVar14 = 0;
      uVar12 = 0;
      do {
        if ((uint)(iVar3 - *(int *)(puVar11 + uVar14 * 5 + 4)) < 0x2711) {
          for (lVar15 = puVar11[uVar14 * 5 + 1]; lVar15 != puVar11[uVar14 * 5 + 2];
              lVar15 = lVar15 + 0x24) {
            if (*(short *)(lVar15 + 0x20) == 0) {
              uVar12 = uVar12 + 1;
              goto LAB_00b3aee8;
            }
          }
        }
        pEVar4 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
        this = (GsBitStream *)ENetNetworkManager::createWriteStream(pEVar4,0,false);
        local_70 = CONCAT11(local_70._1_1_,0x1c);
        GsBitStream::writeBits(this,(uchar *)&local_70,8,true);
        puVar10 = puVar11 + uVar14 * 5;
        local_70 = *(short *)puVar10;
        GsBitStream::writeBits(this,(uchar *)&local_70,0x10,true);
        local_70 = (short)((uint)(*(int *)(puVar10 + 2) - *(int *)(puVar10 + 1)) >> 2) * -0x71c7;
        GsBitStream::writeBits(this,(uchar *)&local_70,0x10,true);
        lVar1 = puVar10[2];
        for (lVar15 = puVar10[1]; lVar15 != lVar1; lVar15 = lVar15 + 0x24) {
          uVar6 = (uint)*(ushort *)(lVar15 + 0x20);
          if (uVar6 == 0) {
            uVar16 = 0xffffffff;
          }
          else {
            uVar16 = 0;
            if (uVar6 != 0) {
              uVar16 = *(uint *)(lVar15 + 0x1c) / uVar6;
            }
          }
          local_78 = 0;
          RelayServerUtil::convertIPv6ToIPv4((uchar *)(lVar15 + 4),&local_78);
          NetworkAddress::NetworkAddress
                    ((NetworkAddress *)&local_70,local_78,*(ushort *)(lVar15 + 0x14));
          NetworkAddress::writeToStream((NetworkAddress *)&local_70,this);
          local_74 = uVar16;
          GsBitStream::writeBits(this,(uchar *)&local_74,0x20,true);
          local_74._0_2_ = *(undefined2 *)(lVar15 + 0x20);
          GsBitStream::writeBits(this,(uchar *)&local_74,0x10,true);
          local_74 = CONCAT22(local_74._2_2_,*(undefined2 *)(lVar15 + 0x16));
          GsBitStream::writeBits(this,(uchar *)&local_74,0x10,true);
        }
        pEVar4 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
        ENetNetworkManager::send
                  (pEVar4,this,2,3,'\0',(uint *)((long)puVar11 + uVar14 * 0x28 + 4),false);
        pEVar4 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
        ENetNetworkManager::deleteWriteStream(pEVar4,this);
        puVar11 = *(undefined8 **)(in_x0 + 0x1f8);
        puVar10 = (undefined8 *)(*(long *)(in_x0 + 0x1f0) + uVar14 * 0x28);
        puVar9 = puVar10 + 5;
        puVar13 = puVar10;
        if (puVar10 + 5 == puVar11) {
LAB_00b3b10c:
          do {
            pvVar5 = (void *)puVar9[-4];
            puVar11 = puVar9 + -5;
            if (pvVar5 != (void *)0x0) {
              puVar9[-3] = pvVar5;
              operator_delete(pvVar5);
            }
            puVar9 = puVar11;
          } while (puVar11 != puVar10);
        }
        else {
          do {
            pvVar5 = (void *)puVar13[1];
            *puVar13 = puVar13[5];
            if (pvVar5 != (void *)0x0) {
              puVar13[2] = pvVar5;
              operator_delete(pvVar5);
              puVar13[2] = 0;
              puVar13[3] = 0;
            }
            uVar18 = puVar13[7];
            uVar17 = puVar13[6];
            puVar10 = puVar13 + 5;
            uVar8 = puVar13[8];
            puVar13[6] = 0;
            puVar13[7] = 0;
            puVar13[8] = 0;
            puVar13[2] = uVar18;
            puVar13[1] = uVar17;
            puVar13[3] = uVar8;
            puVar9 = puVar13 + 10;
            *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(puVar13 + 9);
            puVar13 = puVar10;
          } while (puVar9 != puVar11);
          puVar9 = *(undefined8 **)(in_x0 + 0x1f8);
          if (puVar10 != *(undefined8 **)(in_x0 + 0x1f8)) goto LAB_00b3b10c;
        }
        puVar11 = *(undefined8 **)(in_x0 + 0x1f0);
        *(undefined8 **)(in_x0 + 0x1f8) = puVar10;
LAB_00b3aee8:
        uVar14 = (ulong)uVar12;
        uVar7 = ((long)puVar10 - (long)puVar11 >> 3) * -0x3333333333333333;
      } while (uVar14 <= uVar7 && uVar7 - uVar14 != 0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


