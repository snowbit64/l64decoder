// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pointInside
// Entry Point: 008e319c
// Size: 104 bytes
// Signature: undefined __thiscall pointInside(Parallelogram * this, float param_1, float param_2)


/* TyreTrackGeometry::Parallelogram::pointInside(float, float) const */

bool __thiscall
TyreTrackGeometry::Parallelogram::pointInside(Parallelogram *this,float param_1,float param_2)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fmadd(*(undefined4 *)(this + 8),param_1 - *(float *)this,
                            (param_2 - *(float *)(this + 4)) * *(float *)(this + 0xc));
  if (fVar2 < 0.0) {
    return false;
  }
  bVar1 = false;
  if ((fVar2 <= *(float *)(this + 0x10)) &&
     (fVar2 = (float)NEON_fmadd(*(undefined4 *)(this + 0x14),param_1 - *(float *)this,
                                (param_2 - *(float *)(this + 4)) * *(float *)(this + 0x18)),
     0.0 <= fVar2)) {
    bVar1 = fVar2 <= *(float *)(this + 0x1c);
  }
  return bVar1;
}


