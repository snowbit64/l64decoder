// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepareLODTextureArray
// Entry Point: 008f30f8
// Size: 108 bytes
// Signature: undefined __cdecl prepareLODTextureArray(IRenderDevice * param_1, BaseTerrain * param_2)


/* TerrainLodTexture::prepareLODTextureArray(IRenderDevice*, BaseTerrain*) */

undefined8 TerrainLodTexture::prepareLODTextureArray(IRenderDevice *param_1,BaseTerrain *param_2)

{
  Texture *this;
  ResourceManager *this_00;
  
  this = (Texture *)operator_new(0x78);
                    /* try { // try from 008f3114 to 008f312f has its CatchHandler @ 008f3164 */
  Texture::Texture(this,"TerrainDistanceTextureArray",2,8,false,3);
  *(Texture **)(param_1 + 0x20) = this;
  FUN_00f276d0(1,this + 8);
  this_00 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::add(this_00,*(Resource **)(param_1 + 0x20),(ResourceDesc *)0x0,false);
  return 1;
}


