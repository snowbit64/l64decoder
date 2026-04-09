// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b470c
// Entry Point: 007b470c
// Size: 76 bytes
// Signature: undefined FUN_007b470c(void)


void FUN_007b470c(long param_1,uint *param_2)

{
  EntityRegistryManager *this;
  long lVar1;
  GsBitStream *pGVar2;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,*param_2);
  if (lVar1 != 0) {
    pGVar2 = (GsBitStream *)NetworkStream::getReadStream();
    BaseTerrain::readUpdateStream((BaseTerrain *)(param_1 + 0x170),pGVar2);
    return;
  }
  return;
}


