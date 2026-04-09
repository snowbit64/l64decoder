// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bbdb0
// Entry Point: 007bbdb0
// Size: 84 bytes
// Signature: undefined FUN_007bbdb0(void)


void FUN_007bbdb0(GsBitStream *param_1,uint *param_2)

{
  EntityRegistryManager *this;
  long lVar1;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,*param_2);
  if (lVar1 != 0) {
    NetworkStream::getReadStream();
    AnimalCompanionManager::readFromStream
              (param_1,(float)param_2[4],(float)param_2[8],(float)param_2[0xc]);
    return;
  }
  return;
}


