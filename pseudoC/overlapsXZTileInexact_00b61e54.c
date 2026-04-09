// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: overlapsXZTileInexact
// Entry Point: 00b61e54
// Size: 84 bytes
// Signature: undefined __thiscall overlapsXZTileInexact(BoundingSphere * this, float param_1, float param_2, float param_3, float param_4)


/* BoundingSphere::overlapsXZTileInexact(float, float, float, float) */

bool __thiscall
BoundingSphere::overlapsXZTileInexact
          (BoundingSphere *this,float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0x18);
  if (*(float *)(this + 0xc) + fVar1 < param_1) {
    return false;
  }
  if (param_1 + param_3 < *(float *)(this + 0xc) - fVar1 ||
      fVar1 + *(float *)(this + 0x14) < param_2) {
    return false;
  }
  return *(float *)(this + 0x14) - fVar1 <= param_2 + param_4;
}


