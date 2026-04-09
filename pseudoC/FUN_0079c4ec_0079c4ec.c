// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079c4ec
// Entry Point: 0079c4ec
// Size: 84 bytes
// Signature: undefined FUN_0079c4ec(void)


void FUN_0079c4ec(uint *param_1)

{
  EntityRegistryManager *this;
  long lVar1;
  GsBitStream *pGVar2;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,*param_1);
  if (lVar1 != 0) {
    pGVar2 = (GsBitStream *)NetworkStream::getReadStream();
    MeshSplitManager::readServerUpdateFromStream
              ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,pGVar2,
               (float)param_1[4],(float)param_1[8],(float)param_1[0xc]);
    return;
  }
  return;
}


