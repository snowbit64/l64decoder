// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cfe74
// Entry Point: 006cfe74
// Size: 148 bytes
// Signature: undefined FUN_006cfe74(void)


void FUN_006cfe74(void)

{
  long lVar1;
  EntityRegistryManager *this;
  void *pvVar2;
  ulong uVar3;
  void *local_40;
  void *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (void *)0x0;
  local_38 = (void *)0x0;
  local_30 = 0;
                    /* try { // try from 006cfe98 to 006cfea7 has its CatchHandler @ 006cff08 */
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  EntityRegistryManager::getEntitiesByTypes(this,0x8000000,(vector *)&local_40);
  pvVar2 = local_38;
  if (local_38 != local_40) {
    uVar3 = 0;
    do {
                    /* try { // try from 006cfec0 to 006cfec3 has its CatchHandler @ 006cff0c */
      AnimalHusbandry::reloadConfiguration();
      uVar3 = (ulong)((int)uVar3 + 1);
      pvVar2 = local_40;
    } while (uVar3 < (ulong)((long)local_38 - (long)local_40 >> 3));
  }
  if (pvVar2 != (void *)0x0) {
    local_38 = pvVar2;
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


