// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079a4d8
// Entry Point: 0079a4d8
// Size: 760 bytes
// Signature: undefined FUN_0079a4d8(void)


void FUN_0079a4d8(uint *param_1)

{
  long lVar1;
  int iVar2;
  EntityRegistryManager *pEVar3;
  NetworkStream *this;
  NetworkStream *pNVar4;
  ENetNetworkManager *pEVar5;
  GsBitStream *pGVar6;
  uint uVar7;
  PacketPriority PVar8;
  char *pcVar9;
  PacketReliability PVar10;
  uint local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pEVar3 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  this = (NetworkStream *)EntityRegistryManager::getEntityById(pEVar3,*param_1);
  if (param_1[0x16] == 4) {
    pEVar3 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    uVar7 = (uint)(float)param_1[0x14];
LAB_0079a548:
    pNVar4 = (NetworkStream *)EntityRegistryManager::getEntityById(pEVar3,uVar7);
  }
  else {
    pNVar4 = this;
    if (param_1[0x16] == 1) {
      pEVar3 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
      uVar7 = param_1[0x14];
      goto LAB_0079a548;
    }
  }
  if ((this == (NetworkStream *)0x0) || (pNVar4 == (NetworkStream *)0x0)) goto LAB_0079a70c;
  pcVar9 = *(char **)(param_1 + 4);
  iVar2 = strcmp(pcVar9,"high");
  if (iVar2 == 0) {
    PVar8 = 1;
  }
  else {
    iVar2 = strcmp(pcVar9,"medium");
    if (iVar2 != 0) {
      iVar2 = strcmp(pcVar9,"low");
      if (iVar2 == 0) {
        PVar8 = 3;
        goto LAB_0079a5d4;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 0079a74c to 0079a757 has its CatchHandler @ 0079a7d4 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: Invalid stream priority \'%s\' defaulting to medium priority.\n",
                        *(undefined8 *)(param_1 + 4));
    }
    PVar8 = 2;
  }
LAB_0079a5d4:
  pcVar9 = *(char **)(param_1 + 8);
  iVar2 = strcmp(pcVar9,"unreliable_sequenced");
  if (iVar2 == 0) {
    PVar10 = 1;
  }
  else {
    iVar2 = strcmp(pcVar9,"reliable");
    if (iVar2 == 0) {
      PVar10 = 2;
    }
    else {
      iVar2 = strcmp(pcVar9,"reliable_ordered");
      if (iVar2 == 0) {
        PVar10 = 3;
      }
      else {
        iVar2 = strcmp(pcVar9,"reliable_sequenced");
        if (iVar2 == 0) {
          PVar10 = 4;
        }
        else {
          iVar2 = strcmp(pcVar9,"unreliable");
          if (iVar2 != 0) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar2 != 0)) {
                    /* try { // try from 0079a794 to 0079a79f has its CatchHandler @ 0079a7d0 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                              "Warning: Invalid stream reliability \'%s\' defaulting to unreliable reliability.\n"
                              ,*(undefined8 *)(param_1 + 8));
          }
          PVar10 = 0;
        }
      }
    }
  }
  uVar7 = param_1[0xc];
  pEVar5 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  pGVar6 = (GsBitStream *)NetworkStream::getWriteStream();
  local_6c = NetworkStream::getConnectionId();
  ENetNetworkManager::send(pEVar5,pGVar6,PVar8,PVar10,(char)uVar7,&local_6c,false);
  if (*(char *)(param_1 + 0x10) != '\0') {
    pGVar6 = (GsBitStream *)NetworkStream::getWriteStream();
    if (pGVar6 != (GsBitStream *)0x0) {
      GsBitStream::~GsBitStream(pGVar6);
      operator_delete(pGVar6);
    }
    pEVar5 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
    pGVar6 = (GsBitStream *)ENetNetworkManager::createWriteStream(pEVar5,2,false);
    NetworkStream::setWriteStream(this,pGVar6);
  }
LAB_0079a70c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


