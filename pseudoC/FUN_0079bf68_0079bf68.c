// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079bf68
// Entry Point: 0079bf68
// Size: 188 bytes
// Signature: undefined FUN_0079bf68(void)


void FUN_0079bf68(uint *param_1)

{
  long lVar1;
  EntityRegistryManager *this;
  MeshSplitShape *pMVar2;
  ulong uVar3;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pMVar2 = (MeshSplitShape *)EntityRegistryManager::getEntityById(this,*param_1);
  if (((pMVar2 != (MeshSplitShape *)0x0) && (((byte)pMVar2[0x12] >> 2 & 1) != 0)) &&
     (uVar3 = MeshSplitManager::getSplitShapeStats
                        ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,pMVar2,
                         (Vector3 *)&local_38,&local_3c,&local_40), (uVar3 & 1) != 0)) {
    param_1[0x40] = local_38;
    param_1[0x42] = 4;
    param_1[0x46] = 4;
    param_1[0x4a] = 4;
    param_1[0x4c] = local_3c;
    param_1[0x44] = uStack_34;
    param_1[0x48] = local_30;
    param_1[0x4e] = 1;
    param_1[0x50] = local_40;
    param_1[0x52] = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


