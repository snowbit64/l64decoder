// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079c174
// Entry Point: 0079c174
// Size: 180 bytes
// Signature: undefined FUN_0079c174(void)


void FUN_0079c174(uint *param_1)

{
  long lVar1;
  EntityRegistryManager *this;
  MeshSplitShape *pMVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_34;
  uint uStack_30;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0;
  local_34 = 0;
  uStack_30 = 0;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pMVar2 = (MeshSplitShape *)EntityRegistryManager::getEntityById(this,*param_1);
  if ((pMVar2 == (MeshSplitShape *)0x0) || (((byte)pMVar2[0x12] >> 2 & 1) == 0)) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    MeshSplitManager::getSaveableSplitShapeId
              ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,pMVar2,&local_2c,
               &uStack_30,&local_34);
    uVar3 = local_34;
    uVar4 = uStack_30;
    uVar5 = local_2c;
  }
  param_1[0x40] = uVar5;
  param_1[0x44] = uVar4;
  param_1[0x48] = uVar3;
  param_1[0x42] = 1;
  param_1[0x46] = 1;
  param_1[0x4a] = 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


