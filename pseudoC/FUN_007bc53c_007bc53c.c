// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bc53c
// Entry Point: 007bc53c
// Size: 72 bytes
// Signature: undefined FUN_007bc53c(void)


void FUN_007bc53c(DensityMapEntity *param_1,uint *param_2)

{
  EntityRegistryManager *this;
  long lVar1;
  GsBitStream *pGVar2;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,*param_2);
  if (lVar1 != 0) {
    pGVar2 = (GsBitStream *)NetworkStream::getReadStream();
    DensityMapEntity::readFromStream(param_1,pGVar2);
    return;
  }
  return;
}


