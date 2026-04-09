// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aa7ac
// Entry Point: 007aa7ac
// Size: 112 bytes
// Signature: undefined FUN_007aa7ac(void)


void FUN_007aa7ac(long param_1,uint *param_2)

{
  byte bVar1;
  EntityRegistryManager *this;
  GsBitStream *pGVar2;
  long lVar3;
  FillPlaneGeometry *this_00;
  
  *(undefined *)(param_2 + 0x40) = 0;
  lVar3 = *(long *)(param_1 + 0x170);
  param_2[0x42] = 3;
  if ((*(byte *)(lVar3 + 0x31) & 1) != 0) {
    this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    lVar3 = EntityRegistryManager::getEntityById(this,*param_2);
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x10) & 1) != 0)) {
      this_00 = *(FillPlaneGeometry **)(param_1 + 0x170);
      pGVar2 = (GsBitStream *)NetworkStream::getWriteStream();
      bVar1 = FillPlaneGeometry::readVertexVolumesFromStream(this_00,pGVar2,(float)param_2[4]);
      *(byte *)(param_2 + 0x40) = bVar1 & 1;
    }
  }
  return;
}


