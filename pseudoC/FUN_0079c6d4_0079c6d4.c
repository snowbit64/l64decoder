// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079c6d4
// Entry Point: 0079c6d4
// Size: 176 bytes
// Signature: undefined FUN_0079c6d4(void)


void FUN_0079c6d4(uint *param_1)

{
  long lVar1;
  EntityRegistryManager *this;
  long lVar2;
  GsBitStream *pGVar3;
  ulong uVar4;
  uint local_38;
  uint uStack_34;
  MeshSplitShape *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  param_1[0x40] = 0;
  param_1[0x42] = 1;
  param_1[0x44] = 0;
  param_1[0x46] = 1;
  param_1[0x48] = 0;
  param_1[0x4a] = 1;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar2 = EntityRegistryManager::getEntityById(this,*param_1);
  if (lVar2 != 0) {
    pGVar3 = (GsBitStream *)NetworkStream::getReadStream();
    uVar4 = MeshSplitManager::readSplitShapeIdFromStream
                      ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,pGVar3,
                       &local_30,&uStack_34,&local_38);
    if ((uVar4 & 1) != 0) {
      if (local_30 != (MeshSplitShape *)0x0) {
        param_1[0x40] = *(uint *)(local_30 + 0x18);
      }
      param_1[0x44] = uStack_34;
      param_1[0x48] = local_38;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


