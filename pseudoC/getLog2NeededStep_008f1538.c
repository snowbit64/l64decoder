// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLog2NeededStep
// Entry Point: 008f1538
// Size: 120 bytes
// Signature: undefined __thiscall getLog2NeededStep(GeoQuadTree * this, float param_1, float param_2, float param_3, Vector3 * param_4, float param_5)


/* GeoQuadTree::getLog2NeededStep(float, float, float, Vector3 const&, float) */

float __thiscall
GeoQuadTree::getLog2NeededStep
          (GeoQuadTree *this,float param_1,float param_2,float param_3,Vector3 *param_4,
          float param_5)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = NEON_fmadd(param_1 - *(float *)param_4,param_1 - *(float *)param_4,
                     (param_2 - *(float *)(param_4 + 4)) * (param_2 - *(float *)(param_4 + 4)));
  fVar3 = param_5 + param_5;
  fVar2 = (float)NEON_fmadd(param_3 - *(float *)(param_4 + 8),param_3 - *(float *)(param_4 + 8),
                            uVar1);
  fVar2 = log2f((1.0 / (fVar3 * fVar3 * fVar3)) * SQRT(fVar2));
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(this + 8) + 0x28));
  return (fVar2 - *(float *)(this + 0x10)) + fVar3;
}


