// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseEntities
// Entry Point: 006dc554
// Size: 332 bytes
// Signature: undefined releaseEntities(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineApplication::releaseEntities() */

void EngineApplication::releaseEntities(void)

{
  int iVar1;
  long lVar2;
  I3DManager *this;
  void *pvVar3;
  EntityRegistryManager *pEVar4;
  long lVar5;
  ulong uVar6;
  ulonglong uVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  void *local_70;
  void *local_68;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this = (I3DManager *)I3DManager::getInstance();
  I3DManager::clearCache(this,true);
  local_70 = (void *)0x0;
  local_68 = (void *)0x0;
  local_60 = 0;
                    /* try { // try from 006dc590 to 006dc59b has its CatchHandler @ 006dc6a0 */
  pvVar3 = operator_new(80000);
  uVar9 = 0;
  local_60 = (long)pvVar3 + 80000;
  local_70 = pvVar3;
  do {
    local_68 = pvVar3;
                    /* try { // try from 006dc5c8 to 006dc5db has its CatchHandler @ 006dc6a4 */
    pEVar4 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    uVar7 = 1L << (uVar9 & 0x3f);
    EntityRegistryManager::getEntitiesByTypes(pEVar4,uVar7,(vector *)&local_70);
    pvVar3 = local_68;
    if (local_68 != local_70) {
      uVar6 = 0;
      uVar10 = 0;
      do {
        plVar8 = *(long **)((long)local_70 + uVar6 * 8);
                    /* try { // try from 006dc614 to 006dc617 has its CatchHandler @ 006dc6a8 */
        lVar5 = EntityRegistryManager::getInstance();
        iVar1 = *(int *)(lVar5 + 0x18);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
                    /* try { // try from 006dc630 to 006dc65b has its CatchHandler @ 006dc6ac */
        lVar5 = EntityRegistryManager::getInstance();
        if ((uint)(iVar1 - *(int *)(lVar5 + 0x18)) < 2) {
          uVar10 = uVar10 + 1;
        }
        else {
          local_68 = local_70;
          pEVar4 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
          EntityRegistryManager::getEntitiesByTypes(pEVar4,uVar7,(vector *)&local_70);
          uVar10 = 0;
        }
        uVar6 = (ulong)uVar10;
        pvVar3 = local_70;
      } while (uVar6 < (ulong)((long)local_68 - (long)local_70 >> 3));
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 != 0x3d);
  if (pvVar3 != (void *)0x0) {
    local_68 = pvVar3;
    operator_delete(pvVar3);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


