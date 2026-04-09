// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079a8a4
// Entry Point: 0079a8a4
// Size: 248 bytes
// Signature: undefined FUN_0079a8a4(void)


void FUN_0079a8a4(uint *param_1)

{
  long lVar1;
  EntityRegistryManager *this;
  long lVar2;
  ENetNetworkManager *this_00;
  uint local_5c;
  undefined8 local_58;
  float local_50;
  uint local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  param_1[0x40] = 0;
  param_1[0x42] = 1;
  param_1[0x44] = 0;
  param_1[0x46] = 4;
  param_1[0x48] = 0;
  param_1[0x4a] = 4;
  param_1[0x4c] = 0;
  param_1[0x4e] = 4;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar2 = EntityRegistryManager::getEntityById(this,*param_1);
  if (lVar2 != 0) {
    local_4c = 0;
    local_50 = 0.0;
    local_58 = 0;
    this_00 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
    local_5c = NetworkStream::getConnectionId();
    ENetNetworkManager::getConnectionStats
              (this_00,&local_5c,&local_4c,&local_50,(float *)((long)&local_58 + 4),
               (float *)&local_58);
    param_1[0x42] = 1;
    param_1[0x46] = 4;
    param_1[0x4a] = 4;
    param_1[0x40] = local_4c;
    param_1[0x44] = (uint)local_50;
    param_1[0x48] = local_58._4_4_;
    param_1[0x4c] = (uint)local_58;
    param_1[0x4e] = 4;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


