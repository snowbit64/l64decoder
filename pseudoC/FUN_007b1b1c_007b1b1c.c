// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b1b1c
// Entry Point: 007b1b1c
// Size: 84 bytes
// Signature: undefined FUN_007b1b1c(void)


void FUN_007b1b1c(GsBitStream *param_1,uint *param_2)

{
  EntityRegistryManager *this;
  long lVar1;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,*param_2);
  if (lVar1 != 0) {
    NetworkStream::getReadStream();
    DensityMapSyncer::readServerUpdateFromStream
              (param_1,(float)param_2[4],(float)param_2[8],(float)param_2[8]);
    return;
  }
  return;
}


