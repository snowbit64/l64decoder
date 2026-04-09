// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setEdgeV2V0Angle
// Entry Point: 00baaa1c
// Size: 100 bytes
// Signature: undefined __thiscall setEdgeV2V0Angle(BtTriangleInfo * this, float param_1)


/* BtTriangleInfo::setEdgeV2V0Angle(float) */

void __thiscall BtTriangleInfo::setEdgeV2V0Angle(BtTriangleInfo *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1 / 6.283185;
  fVar2 = (float)(int)fVar1;
  if (fVar1 <= 1.0) {
    fVar2 = 0.0;
  }
  fVar1 = fVar1 - fVar2;
  fVar2 = (float)(int)-fVar1;
  if (-1.0 <= fVar1) {
    fVar2 = -0.0;
  }
  fVar2 = (float)NEON_fmadd(fVar1 + fVar2,0x46fffe00,0x3f000000);
  *(short *)(this + 6) = (short)(int)fVar2;
  return;
}


