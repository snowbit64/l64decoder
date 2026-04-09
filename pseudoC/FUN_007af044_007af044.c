// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007af044
// Entry Point: 007af044
// Size: 164 bytes
// Signature: undefined FUN_007af044(void)


void FUN_007af044(long param_1,uint *param_2)

{
  long lVar1;
  EntityRegistryManager *this;
  GsBitStream *pGVar2;
  uint local_3c;
  uchar *local_38;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  DensityMap::saveToMemory(*(DensityMap **)(param_1 + 0x50),true,&local_38,&local_3c);
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  EntityRegistryManager::getEntityById(this,*param_2);
  pGVar2 = (GsBitStream *)NetworkStream::getWriteStream();
  local_2c = local_3c;
  GsBitStream::writeBits(pGVar2,(uchar *)&local_2c,0x20,true);
  pGVar2 = (GsBitStream *)NetworkStream::getWriteStream();
  GsBitStream::writeAlignedBytes(pGVar2,local_38,local_3c);
  if (local_38 != (uchar *)0x0) {
    operator_delete__(local_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


