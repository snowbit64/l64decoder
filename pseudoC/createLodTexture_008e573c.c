// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createLodTexture
// Entry Point: 008e573c
// Size: 12 bytes
// Signature: undefined __thiscall createLodTexture(BaseTerrain * this, IRenderDevice * param_1)


/* BaseTerrain::createLodTexture(IRenderDevice*) */

void __thiscall BaseTerrain::createLodTexture(BaseTerrain *this,IRenderDevice *param_1)

{
  TerrainLodTexture::createLodTexture(*(IRenderDevice **)(this + 0xd8),(BaseTerrain *)param_1);
  return;
}


