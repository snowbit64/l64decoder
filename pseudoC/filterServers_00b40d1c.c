// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: filterServers
// Entry Point: 00b40d1c
// Size: 556 bytes
// Signature: undefined __cdecl filterServers(ServerOverviewInfo * param_1, uint * param_2, uint param_3)


/* MasterServerManager::filterServers(MasterServerManager::ServerOverviewInfo*, unsigned int&,
   unsigned int) const */

void MasterServerManager::filterServers(ServerOverviewInfo *param_1,uint *param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar5 = (uint *)(ulong)param_3;
  if (((UserBlockManager::getInstance()::instance & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&UserBlockManager::getInstance()::instance), iVar3 != 0)) {
                    /* try { // try from 00b40f0c to 00b40f17 has its CatchHandler @ 00b40f48 */
    UserBlockManager::UserBlockManager
              ((UserBlockManager *)UserBlockManager::getInstance()::instance);
    __cxa_atexit(UserBlockManager::~UserBlockManager,UserBlockManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&UserBlockManager::getInstance()::instance);
  }
  if (*puVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar8 = 0;
    uVar7 = 0;
    puVar9 = (undefined8 *)param_2;
    do {
      puVar11 = puVar9 + 10;
      pcVar6 = (char *)puVar9[0xc];
      puVar10 = puVar9 + 0xd;
      if ((*(byte *)puVar11 & 1) == 0) {
        pcVar6 = (char *)((long)puVar9 + 0x51);
      }
      pcVar1 = (char *)((long)puVar9 + 0x69);
      if ((*(byte *)puVar10 & 1) != 0) {
        pcVar1 = (char *)puVar9[0xf];
      }
      uVar4 = UserBlockManager::getIsUserBlocked
                        ((UserBlockManager *)UserBlockManager::getInstance()::instance,pcVar6,pcVar1
                         ,*(PLATFORM_ID *)(puVar9 + 9));
      if ((uVar4 & 1) == 0) {
        uVar4 = (ulong)uVar7;
        if (uVar8 != uVar4) {
          *(undefined8 *)(param_2 + uVar4 * 0x20) = *puVar9;
          if ((*(byte *)(param_2 + uVar4 * 0x20 + 2) & 1) != 0) {
            operator_delete(*(void **)(param_2 + uVar4 * 0x20 + 6));
          }
          uVar13 = puVar9[2];
          uVar12 = puVar9[1];
          *(undefined8 *)(param_2 + uVar4 * 0x20 + 6) = puVar9[3];
          *(undefined8 *)(param_2 + uVar4 * 0x20 + 4) = uVar13;
          *(undefined8 *)(param_2 + uVar4 * 0x20 + 2) = uVar12;
          *(undefined2 *)(puVar9 + 1) = 0;
          *(undefined8 *)(param_2 + uVar4 * 0x20 + 8) = puVar9[4];
          if ((*(byte *)(param_2 + uVar4 * 0x20 + 10) & 1) != 0) {
            operator_delete(*(void **)(param_2 + uVar4 * 0x20 + 0xe));
          }
          uVar13 = puVar9[6];
          uVar12 = puVar9[5];
          *(undefined8 *)(param_2 + uVar4 * 0x20 + 0xe) = puVar9[7];
          *(undefined8 *)(param_2 + uVar4 * 0x20 + 0xc) = uVar13;
          *(undefined8 *)(param_2 + uVar4 * 0x20 + 10) = uVar12;
          *(undefined2 *)(puVar9 + 5) = 0;
          uVar2 = *(uint *)(puVar9 + 9);
          *(undefined8 *)(param_2 + uVar4 * 0x20 + 0x10) = puVar9[8];
          param_2[uVar4 * 0x20 + 0x12] = uVar2;
          if ((*(byte *)(param_2 + uVar4 * 0x20 + 0x14) & 1) != 0) {
            operator_delete(*(void **)(param_2 + uVar4 * 0x20 + 0x18));
          }
          uVar13 = puVar9[0xb];
          uVar12 = *puVar11;
          *(undefined8 *)(param_2 + uVar4 * 0x20 + 0x18) = puVar9[0xc];
          *(undefined8 *)(param_2 + uVar4 * 0x20 + 0x16) = uVar13;
          *(undefined8 *)(param_2 + uVar4 * 0x20 + 0x14) = uVar12;
          *(byte *)puVar11 = 0;
          *(undefined *)((long)puVar9 + 0x51) = 0;
          if ((*(byte *)(param_2 + uVar4 * 0x20 + 0x1a) & 1) != 0) {
            operator_delete(*(void **)(param_2 + uVar4 * 0x20 + 0x1e));
          }
          uVar13 = puVar9[0xe];
          uVar12 = *puVar10;
          *(undefined8 *)(param_2 + uVar4 * 0x20 + 0x1e) = puVar9[0xf];
          *(undefined8 *)(param_2 + uVar4 * 0x20 + 0x1c) = uVar13;
          *(undefined8 *)(param_2 + uVar4 * 0x20 + 0x1a) = uVar12;
          *(byte *)puVar10 = 0;
          *(char *)((long)puVar9 + 0x69) = '\0';
        }
        uVar7 = uVar7 + 1;
      }
      uVar8 = uVar8 + 1;
      puVar9 = puVar9 + 0x10;
    } while (uVar8 < *puVar5);
  }
  *puVar5 = uVar7;
  return;
}


