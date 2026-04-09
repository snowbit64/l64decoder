// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079c278
// Entry Point: 0079c278
// Size: 64 bytes
// Signature: undefined FUN_0079c278(void)


void FUN_0079c278(uint *param_1)

{
  EntityRegistryManager *this;
  long lVar1;
  GsBitStream *pGVar2;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,*param_1);
  if (lVar1 != 0) {
    pGVar2 = (GsBitStream *)NetworkStream::getWriteStream();
    MeshSplitManager::writeSplitShapesToStream
              ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,pGVar2);
  }
  return;
}


