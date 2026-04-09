// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getParam
// Entry Point: 00728c3c
// Size: 100 bytes
// Signature: undefined __thiscall getParam(StoppingPath * this, float param_1, PathKnot * param_2)


/* StoppingPath::getParam(float, StoppingPath::PathKnot const&) const */

float __thiscall StoppingPath::getParam(StoppingPath *this,float param_1,PathKnot *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1 - *(float *)param_2;
  fVar3 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x10),
                            *(float *)(param_2 + 0x14) * *(float *)(param_2 + 0x14));
  fVar2 = (float)NEON_fmadd(*(float *)(this + 0x1c) *
                            (*(float *)(*(long *)(this + 8) + -0x18) - *(float *)param_2),fVar1,
                            fVar1 * *(float *)(this + 0x1c) * -0.5 * fVar1);
  fVar2 = fVar2 / SQRT(fVar3);
  fVar1 = 0.0;
  if ((0.0 <= fVar2) && (fVar1 = 1.0, fVar2 <= 1.0)) {
    fVar1 = fVar2;
  }
  return fVar1;
}


