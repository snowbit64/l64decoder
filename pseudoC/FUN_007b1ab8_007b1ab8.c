// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b1ab8
// Entry Point: 007b1ab8
// Size: 100 bytes
// Signature: undefined FUN_007b1ab8(void)


void FUN_007b1ab8(GsBitStream *param_1,uint *param_2)

{
  uint uVar1;
  EntityRegistryManager *this;
  long lVar2;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar2 = EntityRegistryManager::getEntityById(this,*param_2);
  if (lVar2 != 0) {
    uVar1 = NetworkStream::getWriteStream();
    DensityMapSyncer::writeServerUpdateToStream
              (param_1,uVar1,(float)param_2[8],(float)param_2[0xc],(float)param_2[0x10],
               (float)param_2[0x14],param_2[4],param_2[0x18]);
    return;
  }
  return;
}


