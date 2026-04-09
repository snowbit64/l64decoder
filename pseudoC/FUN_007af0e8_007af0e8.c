// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007af0e8
// Entry Point: 007af0e8
// Size: 180 bytes
// Signature: undefined FUN_007af0e8(void)


void FUN_007af0e8(long param_1,uint *param_2)

{
  long lVar1;
  EntityRegistryManager *this;
  GsBitStream *pGVar2;
  uchar *puVar3;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  EntityRegistryManager::getEntityById(this,*param_2);
  local_3c = 0;
  pGVar2 = (GsBitStream *)NetworkStream::getReadStream();
  GsBitStream::readBits(pGVar2,(uchar *)&local_3c,0x20,true);
  puVar3 = (uchar *)operator_new__((ulong)local_3c);
  pGVar2 = (GsBitStream *)NetworkStream::getReadStream();
  GsBitStream::readAlignedBytes(pGVar2,puVar3,local_3c);
  DensityMap::loadFromMemory(*(DensityMap **)(param_1 + 0x50),true,puVar3,local_3c);
  operator_delete__(puVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


