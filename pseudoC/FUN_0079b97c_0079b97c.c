// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079b97c
// Entry Point: 0079b97c
// Size: 212 bytes
// Signature: undefined FUN_0079b97c(void)


void FUN_0079b97c(uint *param_1)

{
  long lVar1;
  EntityRegistryManager *this;
  MeshSplitShape *pMVar2;
  ulong uVar3;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  Matrix4x4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pMVar2 = (MeshSplitShape *)EntityRegistryManager::getEntityById(this,*param_1);
  if ((pMVar2 != (MeshSplitShape *)0x0) && (((byte)pMVar2[0x12] >> 2 & 1) != 0)) {
    FUN_0079b7dc(param_1,1,aMStack_78);
    uVar3 = MeshSplitManager::testSplitMesh
                      ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,pMVar2,
                       aMStack_78,(float)param_1[0x28],(float)param_1[0x2c],&fStack_7c,&local_80,
                       &fStack_84,&local_88);
    if ((uVar3 & 1) != 0) {
      param_1[0x40] = (uint)fStack_7c;
      param_1[0x44] = (uint)local_80;
      param_1[0x42] = 4;
      param_1[0x46] = 4;
      param_1[0x4a] = 4;
      param_1[0x48] = (uint)fStack_84;
      param_1[0x4c] = (uint)local_88;
      param_1[0x4e] = 4;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


