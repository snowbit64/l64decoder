// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079c5a0
// Entry Point: 0079c5a0
// Size: 76 bytes
// Signature: undefined FUN_0079c5a0(void)


void FUN_0079c5a0(uint *param_1)

{
  uint uVar1;
  EntityRegistryManager *this;
  long lVar2;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar2 = EntityRegistryManager::getEntityById(this,*param_1);
  if (lVar2 != 0) {
    uVar1 = NetworkStream::getReadStream();
    MeshSplitManager::readClientUpdateFromStream
              ((GsBitStream *)&MeshSplitManager::s_singletonMeshSplitManager,uVar1);
    return;
  }
  return;
}


