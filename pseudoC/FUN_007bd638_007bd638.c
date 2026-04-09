// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bd638
// Entry Point: 007bd638
// Size: 84 bytes
// Signature: undefined FUN_007bd638(void)


void FUN_007bd638(TrafficSystem *param_1,uint *param_2)

{
  EntityRegistryManager *this;
  long lVar1;
  GsBitStream *pGVar2;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,*param_2);
  if (lVar1 != 0) {
    pGVar2 = (GsBitStream *)NetworkStream::getReadStream();
    TrafficSystem::readFromStream
              (param_1,pGVar2,(float)param_2[4],(float)param_2[8],(float)param_2[0xc]);
    return;
  }
  return;
}


