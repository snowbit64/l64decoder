// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079a190
// Entry Point: 0079a190
// Size: 336 bytes
// Signature: undefined FUN_0079a190(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0079a190(uint *param_1)

{
  uchar uVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  EntityRegistryManager *this;
  NetworkStream *this_00;
  uint *puVar7;
  long lVar8;
  long lVar9;
  
  lVar2 = tpidr_el0;
  lVar9 = *(long *)(lVar2 + 0x28);
  MasterServerManager::getInstance();
  uVar6 = MasterServerManager::getHasServer();
  if ((uVar6 & 1) == 0) {
    bVar3 = (bool)GenericMpManager::getInstance();
    GenericMpManager::cleanUpGameSessions(bVar3);
  }
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  this_00 = (NetworkStream *)EntityRegistryManager::getEntityById(this,*param_1);
  if (this_00 != (NetworkStream *)0x0) {
    uVar1 = *(uchar *)(param_1 + 4);
    puVar7 = (uint *)ENetNetworkManager::getInstance();
    NetworkStream::getConnectionId();
    ENetNetworkManager::closeConnection(puVar7,true,uVar1);
    NetworkStream::setReadStream(this_00,(GsBitStream *)0x0);
    if (((DAT_01053c80 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_01053c80), iVar5 != 0)) {
      DAT_01053c58 = 0;
      DAT_01053c50 = 0;
      DAT_01053c40 = &PTR__ScriptingNetworkManager_00fdb4c0;
      _DAT_01053c68 = 0;
      DAT_01053c60 = 0;
      DAT_01053c78 = 0;
      _DAT_01053c70 = 0;
      DAT_01053c48 = &DAT_01053c50;
                    /* try { // try from 0079a2ac to 0079a2af has its CatchHandler @ 0079a2e0 */
      lVar8 = ENetNetworkManager::getInstance();
      *(undefined ****)(lVar8 + 0x1c8) = &DAT_01053c40;
      __cxa_atexit(ScriptingNetworkManager::~ScriptingNetworkManager,&DAT_01053c40,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&DAT_01053c80);
    }
    uVar4 = NetworkStream::getConnectionId();
    ScriptingNetworkManager::deleteAddress((ScriptingNetworkManager *)&DAT_01053c40,uVar4);
  }
  if (*(long *)(lVar2 + 0x28) == lVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


