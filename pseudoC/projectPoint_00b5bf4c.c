// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: projectPoint
// Entry Point: 00b5bf4c
// Size: 68 bytes
// Signature: undefined __thiscall projectPoint(Plane * this, Vector3 * param_1, Vector3 * param_2)


/* Plane::projectPoint(Vector3 const&, Vector3&) const */

void __thiscall Plane::projectPoint(Plane *this,Vector3 *param_1,Vector3 *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(param_1 + 4);
  fVar2 = *(float *)(this + 4);
  fVar5 = *(float *)(this + 8);
  fVar6 = *(float *)(param_1 + 8);
  uVar3 = NEON_fmadd(*(float *)this,*(float *)param_1,fVar2 * fVar1);
  fVar4 = (float)NEON_fmadd(fVar5,fVar6,uVar3);
  *(float *)param_2 = *(float *)param_1 - *(float *)this * fVar4;
  *(float *)(param_2 + 4) = fVar1 - fVar2 * fVar4;
  *(float *)(param_2 + 8) = fVar6 - fVar5 * fVar4;
  return;
}


