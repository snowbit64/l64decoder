// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079c5ec
// Entry Point: 0079c5ec
// Size: 72 bytes
// Signature: undefined FUN_0079c5ec(void)


void FUN_0079c5ec(uint *param_1)

{
  EntityRegistryManager *this;
  long lVar1;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,*param_1);
  if (lVar1 != 0) {
    NetworkStream::getWriteStream();
    MeshSplitManager::writeClientUpdateToStream
              ((GsBitStream *)&MeshSplitManager::s_singletonMeshSplitManager);
    return;
  }
  return;
}


