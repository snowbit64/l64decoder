// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setup
// Entry Point: 0095b43c
// Size: 84 bytes
// Signature: undefined __thiscall setup(SharedTileInfo * this, float param_1, float param_2, uint param_3, uint param_4, uint param_5, uint param_6)


/* MultiresTexture::SharedTileInfo::setup(float, float, unsigned int, unsigned int, unsigned int,
   unsigned int) */

void __thiscall
MultiresTexture::SharedTileInfo::setup
          (SharedTileInfo *this,float param_1,float param_2,uint param_3,uint param_4,uint param_5,
          uint param_6)

{
  float fVar1;
  float fVar2;
  
  *(float *)this = param_1;
  *(float *)(this + 0xc) = param_2;
  *(uint *)(this + 0x20) = param_4;
  *(uint *)(this + 0x24) = param_5;
  fVar1 = (float)(ulong)param_4 / (float)(ulong)param_3;
  *(uint *)(this + 0x18) = param_3;
  *(uint *)(this + 0x1c) = param_3 + param_4 * 2;
  *(uint *)(this + 0x28) = param_6;
  fVar2 = (float)NEON_fmadd(fVar1,0x40000000,0x3f800000);
  *(float *)(this + 8) = fVar1 * param_1;
  *(float *)(this + 0x14) = fVar1 * param_2;
  *(float *)(this + 4) = fVar2 * param_1;
  *(float *)(this + 0x10) = fVar2 * param_2;
  return;
}


