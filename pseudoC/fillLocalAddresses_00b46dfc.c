// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fillLocalAddresses
// Entry Point: 00b46dfc
// Size: 272 bytes
// Signature: undefined fillLocalAddresses(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ENetNetworkManager::fillLocalAddresses() */

void ENetNetworkManager::fillLocalAddresses(void)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  int iVar5;
  long in_x0;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ushort *puVar9;
  uint *puVar10;
  ulong uVar11;
  socklen_t local_5c;
  sockaddr local_58;
  uint local_48 [4];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  uVar6 = Network::getLocalAddresses(local_48,4);
  if ((int)uVar6 != 0) {
    local_58.sa_family = 0;
    local_58.sa_data[0] = '\0';
    local_58.sa_data[1] = '\0';
    local_58.sa_data[2] = '\0';
    local_58.sa_data[3] = '\0';
    local_58.sa_data[4] = '\0';
    local_58.sa_data[5] = '\0';
    local_58.sa_data[6] = '\0';
    local_58.sa_data[7] = '\0';
    local_58.sa_data[8] = '\0';
    local_58.sa_data[9] = '\0';
    local_58.sa_data[10] = '\0';
    local_58.sa_data[11] = '\0';
    local_58.sa_data[12] = '\0';
    local_58.sa_data[13] = '\0';
    local_5c = 0x10;
    iVar5 = getsockname(**(int **)(in_x0 + 8),&local_58,&local_5c);
    uVar7 = 0;
    uVar3 = (ushort)local_58.sa_data._0_2_ >> 8 |
            (ushort)(((ushort)local_58.sa_data._0_2_ & 0xff00ff) << 8);
    if (iVar5 != 0) {
      uVar3 = 0;
    }
    if ((int)uVar6 != 1) {
      uVar7 = uVar6 & 0xfffffffe;
      puVar9 = (ushort *)(in_x0 + 0x13c);
      puVar10 = local_48 + 1;
      uVar11 = uVar7;
      do {
        uVar1 = puVar10[-1];
        uVar2 = *puVar10;
        puVar9[-4] = uVar3;
        uVar11 = uVar11 - 2;
        *puVar9 = uVar3;
        puVar10 = puVar10 + 2;
        *(uint *)(puVar9 + -6) = uVar1;
        *(uint *)(puVar9 + -2) = uVar2;
        puVar9 = puVar9 + 8;
      } while (uVar11 != 0);
      if (uVar7 == (uVar6 & 0xffffffff)) goto LAB_00b46ee4;
    }
    puVar9 = (ushort *)(in_x0 + uVar7 * 8 + 0x134);
    lVar8 = (uVar6 & 0xffffffff) - uVar7;
    puVar10 = local_48 + uVar7;
    do {
      uVar1 = *puVar10;
      *puVar9 = uVar3;
      lVar8 = lVar8 + -1;
      *(uint *)(puVar9 + -2) = uVar1;
      puVar9 = puVar9 + 4;
      puVar10 = puVar10 + 1;
    } while (lVar8 != 0);
  }
LAB_00b46ee4:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


