// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bbd68
// Entry Point: 007bbd68
// Size: 72 bytes
// Signature: undefined FUN_007bbd68(void)


void FUN_007bbd68(AnimalCompanionManager *param_1,uint *param_2)

{
  EntityRegistryManager *this;
  long lVar1;
  GsBitStream *pGVar2;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,*param_2);
  if (lVar1 != 0) {
    pGVar2 = (GsBitStream *)NetworkStream::getWriteStream();
    AnimalCompanionManager::writeToStream(param_1,pGVar2);
    return;
  }
  return;
}


