// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bd5f0
// Entry Point: 007bd5f0
// Size: 72 bytes
// Signature: undefined FUN_007bd5f0(void)


void FUN_007bd5f0(TrafficSystem *param_1,uint *param_2)

{
  EntityRegistryManager *this;
  long lVar1;
  GsBitStream *pGVar2;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,*param_2);
  if (lVar1 != 0) {
    pGVar2 = (GsBitStream *)NetworkStream::getWriteStream();
    TrafficSystem::writeToStream(param_1,pGVar2);
    return;
  }
  return;
}


