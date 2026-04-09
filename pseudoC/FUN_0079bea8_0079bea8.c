// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079bea8
// Entry Point: 0079bea8
// Size: 192 bytes
// Signature: undefined FUN_0079bea8(void)


void FUN_0079bea8(uint *param_1)

{
  long lVar1;
  EntityRegistryManager *this;
  MeshSplitShape *pMVar2;
  ulong uVar3;
  float local_50;
  float fStack_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint local_38;
  uint uStack_34;
  uint local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pMVar2 = (MeshSplitShape *)EntityRegistryManager::getEntityById(this,*param_1);
  if ((pMVar2 != (MeshSplitShape *)0x0) && (((byte)pMVar2[0x12] >> 2 & 1) != 0)) {
    local_38 = param_1[4];
    uStack_34 = param_1[8];
    local_30 = param_1[0xc];
    local_48 = param_1[0x10];
    uStack_44 = param_1[0x14];
    local_40 = param_1[0x18];
    uVar3 = MeshSplitManager::getSplitShapePlaneExtents
                      ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,pMVar2,
                       (Vector3 *)&local_38,(Vector3 *)&local_48,&fStack_4c,&local_50);
    if ((uVar3 & 1) != 0) {
      param_1[0x40] = (uint)fStack_4c;
      param_1[0x42] = 4;
      param_1[0x44] = (uint)local_50;
      param_1[0x46] = 4;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


