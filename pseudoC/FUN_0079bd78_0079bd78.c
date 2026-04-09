// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079bd78
// Entry Point: 0079bd78
// Size: 180 bytes
// Signature: undefined FUN_0079bd78(void)


void FUN_0079bd78(uint *param_1)

{
  long lVar1;
  byte bVar2;
  EntityRegistryManager *this;
  MeshSplitShape *pMVar3;
  Matrix4x4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined *)(param_1 + 0x40) = 0;
  param_1[0x42] = 3;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pMVar3 = (MeshSplitShape *)EntityRegistryManager::getEntityById(this,*param_1);
  if ((pMVar3 != (MeshSplitShape *)0x0) && (((byte)pMVar3[0x12] >> 2 & 1) != 0)) {
    FUN_0079b7dc(param_1,1,aMStack_78);
    bVar2 = MeshSplitManager::removeSplitShapeAttachments
                      ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,pMVar3,
                       aMStack_78,(float)param_1[0x28],(float)param_1[0x2c],(float)param_1[0x30]);
    param_1[0x42] = 3;
    *(byte *)(param_1 + 0x40) = bVar2 & 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


