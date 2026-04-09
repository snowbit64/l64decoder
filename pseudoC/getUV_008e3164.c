// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUV
// Entry Point: 008e3164
// Size: 56 bytes
// Signature: undefined __thiscall getUV(Parallelogram * this, float param_1, float param_2, float * param_3, float * param_4)


/* TyreTrackGeometry::Parallelogram::getUV(float, float, float&, float&) const */

void __thiscall
TyreTrackGeometry::Parallelogram::getUV
          (Parallelogram *this,float param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)this;
  fVar1 = *(float *)(this + 4);
  fVar2 = (float)NEON_fmadd(*(undefined4 *)(this + 8),param_1 - fVar3,
                            (param_2 - fVar1) * *(float *)(this + 0xc));
  *param_3 = fVar2;
  fVar1 = (float)NEON_fmadd(*(undefined4 *)(this + 0x14),param_1 - fVar3,
                            (param_2 - fVar1) * *(float *)(this + 0x18));
  *param_4 = fVar1;
  return;
}


