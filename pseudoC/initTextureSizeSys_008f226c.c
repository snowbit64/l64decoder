// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initTextureSizeSys
// Entry Point: 008f226c
// Size: 120 bytes
// Signature: undefined __thiscall initTextureSizeSys(TerrainLodTexture * this, uint param_1)


/* TerrainLodTexture::initTextureSizeSys(unsigned int) */

void __thiscall TerrainLodTexture::initTextureSizeSys(TerrainLodTexture *this,uint param_1)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  
  iVar4 = 0;
  *(uint *)(this + 8) = param_1;
  *(float *)(this + 0xc) = 1.0 / (float)(ulong)param_1;
  uVar2 = param_1;
  if (1 < param_1) {
    do {
      iVar4 = iVar4 + 1;
      bVar1 = 3 < uVar2;
      uVar2 = uVar2 >> 1;
    } while (bVar1);
  }
  *(int *)(this + 0x10) = iVar4;
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x18));
    param_1 = *(uint *)(this + 8);
  }
  pvVar3 = operator_new__((ulong)(param_1 * param_1) << 1);
  *(void **)(this + 0x18) = pvVar3;
  return;
}


