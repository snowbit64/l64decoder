// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079c540
// Entry Point: 0079c540
// Size: 96 bytes
// Signature: undefined FUN_0079c540(void)


void FUN_0079c540(uint *param_1)

{
  uint uVar1;
  EntityRegistryManager *this;
  long lVar2;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar2 = EntityRegistryManager::getEntityById(this,*param_1);
  if (lVar2 != 0) {
    uVar1 = NetworkStream::getWriteStream();
    MeshSplitManager::writeServerUpdateToStream
              ((GsBitStream *)&MeshSplitManager::s_singletonMeshSplitManager,uVar1,(float)param_1[8]
               ,(float)param_1[0xc],(float)param_1[0x10],(float)param_1[0x14],param_1[4]);
    return;
  }
  return;
}


