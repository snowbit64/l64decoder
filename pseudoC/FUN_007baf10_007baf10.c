// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007baf10
// Entry Point: 007baf10
// Size: 252 bytes
// Signature: undefined FUN_007baf10(void)


long * FUN_007baf10(char **param_1)

{
  long lVar1;
  EntityRegistryManager *this;
  TerrainTransformGroup *pTVar2;
  long *this_00;
  TransformGroup *pTVar3;
  ulong uVar4;
  char *pcVar5;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = *(undefined4 *)(param_1 + 6);
  uStack_54 = *(undefined4 *)(param_1 + 8);
  local_50 = *(undefined4 *)(param_1 + 10);
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar2 = (TerrainTransformGroup *)
           EntityRegistryManager::getEntityById(this,*(uint *)(param_1 + 0xc));
  if ((pTVar2 != (TerrainTransformGroup *)0x0) && (0 < *(int *)(param_1 + 0x12))) {
    this_00 = (long *)operator_new(0x240);
    pcVar5 = *param_1;
                    /* try { // try from 007baf7c to 007bafb3 has its CatchHandler @ 007bb00c */
    EngineManager::getInstance();
    pTVar3 = (TransformGroup *)Renderer::getRootNode();
    AnimalCompanionManager::AnimalCompanionManager
              ((AnimalCompanionManager *)this_00,pcVar5,pTVar3,(Vector3 *)&local_58,pTVar2,
               *(bool *)(param_1 + 0xe),*(bool *)(param_1 + 0x10),*(uint *)(param_1 + 0x12),
               *(uint *)(param_1 + 0x14));
    uVar4 = AnimalCompanionManager::load((char *)this_00,param_1[2]);
    if ((uVar4 & 1) != 0) goto LAB_007bafdc;
    (**(code **)(*this_00 + 8))(this_00);
  }
  this_00 = (long *)0x0;
LAB_007bafdc:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


