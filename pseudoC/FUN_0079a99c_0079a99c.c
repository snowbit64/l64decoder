// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079a99c
// Entry Point: 0079a99c
// Size: 196 bytes
// Signature: undefined FUN_0079a99c(void)


void FUN_0079a99c(uint *param_1)

{
  long lVar1;
  EntityRegistryManager *this;
  long lVar2;
  ENetNetworkManager *this_00;
  uint local_54;
  uint local_50;
  uint local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  param_1[0x40] = 0;
  param_1[0x42] = 1;
  param_1[0x44] = 0;
  param_1[0x46] = 1;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar2 = EntityRegistryManager::getEntityById(this,*param_1);
  if (lVar2 != 0) {
    local_4c = 0;
    local_50 = 0;
    this_00 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
    local_54 = NetworkStream::getConnectionId();
    ENetNetworkManager::getAndResetConnectionSendStats(this_00,&local_54,&local_4c,&local_50);
    param_1[0x42] = 1;
    param_1[0x46] = 1;
    param_1[0x40] = local_4c;
    param_1[0x44] = local_50;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


