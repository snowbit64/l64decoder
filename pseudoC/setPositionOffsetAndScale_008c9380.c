// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPositionOffsetAndScale
// Entry Point: 008c9380
// Size: 32 bytes
// Signature: undefined __thiscall setPositionOffsetAndScale(VertexBufferGeometry * this, float * param_1, float param_2)


/* VertexBufferGeometry::setPositionOffsetAndScale(float const*, float) */

void __thiscall
VertexBufferGeometry::setPositionOffsetAndScale
          (VertexBufferGeometry *this,float *param_1,float param_2)

{
  float fVar1;
  
  *(float *)(this + 0xb8) = *param_1;
  *(float *)(this + 0xbc) = param_1[1];
  fVar1 = param_1[2];
  *(float *)(this + 0xc4) = param_2;
  *(float *)(this + 0xc0) = fVar1;
  return;
}


