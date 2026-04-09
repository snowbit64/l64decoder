// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveLodTextureTypeMapSysPrepare
// Entry Point: 008f2ce0
// Size: 168 bytes
// Signature: undefined __thiscall saveLodTextureTypeMapSysPrepare(TerrainLodTexture * this, char * param_1)


/* TerrainLodTexture::saveLodTextureTypeMapSysPrepare(char const*) */

void __thiscall
TerrainLodTexture::saveLodTextureTypeMapSysPrepare(TerrainLodTexture *this,char *param_1)

{
  int iVar1;
  undefined8 *this_00;
  void *__dest;
  void *__src;
  ulong __n;
  
  if (*(long *)(this + 0x40) != 0) {
    return;
  }
  this_00 = (undefined8 *)operator_new(0x68);
                    /* try { // try from 008f2d24 to 008f2d33 has its CatchHandler @ 008f2d88 */
  SaveHelper::SaveHelper((SaveHelper *)this_00,param_1,"LodTextureTypeMapSaveHelper");
  this_00[0xb] = 0;
  iVar1 = *(int *)(this + 8);
  *(undefined8 **)(this + 0x40) = this_00;
  __src = *(void **)(this + 0x18);
  __n = (ulong)(uint)(iVar1 * iVar1) << 1;
  *this_00 = &PTR__LodTextureTypeMapSaveHelper_00fde878;
  __dest = operator_new__(__n);
  this_00[0xb] = __dest;
  *(int *)(this_00 + 0xc) = iVar1;
  memcpy(__dest,__src,__n);
  return;
}


