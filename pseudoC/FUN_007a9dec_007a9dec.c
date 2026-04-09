// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a9dec
// Entry Point: 007a9dec
// Size: 108 bytes
// Signature: undefined FUN_007a9dec(void)


void FUN_007a9dec(GsShape *param_1,uint *param_2)

{
  EntityRegistryManager *this;
  GsMaterial *this_00;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  this_00 = (GsMaterial *)EntityRegistryManager::getEntityById(this,*param_2);
  if ((this_00 != (GsMaterial *)0x0) && (((byte)this_00[0x13] >> 1 & 1) != 0)) {
    GsMaterial::validateTextures(this_00,1);
    GsShape::setMaterialAt(param_1,this_00,param_2[4]);
    return;
  }
  return;
}


