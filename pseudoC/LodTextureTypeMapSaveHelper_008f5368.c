// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LodTextureTypeMapSaveHelper
// Entry Point: 008f5368
// Size: 68 bytes
// Signature: undefined __thiscall ~LodTextureTypeMapSaveHelper(LodTextureTypeMapSaveHelper * this)


/* TerrainLodTexture::LodTextureTypeMapSaveHelper::~LodTextureTypeMapSaveHelper() */

void __thiscall
TerrainLodTexture::LodTextureTypeMapSaveHelper::~LodTextureTypeMapSaveHelper
          (LodTextureTypeMapSaveHelper *this)

{
  *(undefined ***)this = &PTR__LodTextureTypeMapSaveHelper_00fde878;
  if (*(void **)(this + 0x58) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x58));
  }
  SaveHelper::~SaveHelper((SaveHelper *)this);
  operator_delete(this);
  return;
}


