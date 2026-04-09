// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079c648
// Entry Point: 0079c648
// Size: 140 bytes
// Signature: undefined FUN_0079c648(void)


void FUN_0079c648(uint *param_1)

{
  byte bVar1;
  EntityRegistryManager *pEVar2;
  long lVar3;
  MeshSplitShape *pMVar4;
  GsBitStream *pGVar5;
  
  *(undefined *)(param_1 + 0x40) = 0;
  param_1[0x42] = 3;
  pEVar2 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar3 = EntityRegistryManager::getEntityById(pEVar2,*param_1);
  if (lVar3 != 0) {
    pEVar2 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    pMVar4 = (MeshSplitShape *)EntityRegistryManager::getEntityById(pEVar2,param_1[4]);
    if ((pMVar4 != (MeshSplitShape *)0x0) && (((byte)pMVar4[0x12] >> 2 & 1) != 0)) {
      pGVar5 = (GsBitStream *)NetworkStream::getWriteStream();
      bVar1 = MeshSplitManager::writeSplitShapeIdToStream
                        ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,pGVar5,
                         pMVar4);
      param_1[0x42] = 3;
      *(byte *)(param_1 + 0x40) = bVar1 & 1;
    }
  }
  return;
}


