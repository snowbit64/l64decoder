// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079c2b8
// Entry Point: 0079c2b8
// Size: 64 bytes
// Signature: undefined FUN_0079c2b8(void)


void FUN_0079c2b8(uint *param_1)

{
  EntityRegistryManager *this;
  long lVar1;
  GsBitStream *pGVar2;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,*param_1);
  if (lVar1 != 0) {
    pGVar2 = (GsBitStream *)NetworkStream::getReadStream();
    MeshSplitManager::readSplitShapesFromStream
              ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,pGVar2);
  }
  return;
}


