// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Plane
// Entry Point: 00b5b980
// Size: 184 bytes
// Signature: undefined __thiscall Plane(Plane * this, Vector3 * param_1, Vector3 * param_2, Vector3 * param_3)


/* Plane::Plane(Vector3 const&, Vector3 const&, Vector3 const&) */

void __thiscall Plane::Plane(Plane *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = *(float *)param_2 - *(float *)param_1;
  fVar2 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_3 + 4) - *(float *)(param_1 + 4);
  fVar8 = *(float *)param_3 - *(float *)param_1;
  fVar5 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  fVar7 = *(float *)(param_3 + 8) - *(float *)(param_1 + 8);
  fVar1 = (float)NEON_fmadd(fVar5,fVar8,fVar7 * -fVar6);
  fVar5 = (float)NEON_fmadd(fVar2,fVar7,fVar3 * -fVar5);
  fVar2 = (float)NEON_fmadd(fVar6,fVar3,fVar8 * -fVar2);
  uVar4 = NEON_fmadd(fVar5,fVar5,fVar1 * fVar1);
  fVar6 = (float)NEON_fmadd(fVar2,fVar2,uVar4);
  fVar3 = 1.0;
  if (1e-06 < fVar6) {
    fVar3 = 1.0 / SQRT(fVar6);
  }
  *(float *)this = fVar5 * fVar3;
  *(float *)(this + 4) = fVar1 * fVar3;
  *(float *)(this + 8) = fVar2 * fVar3;
  fVar1 = (float)NEON_fmadd(fVar5 * fVar3,*(undefined4 *)param_1,
                            fVar1 * fVar3 * *(float *)(param_1 + 4));
  uVar4 = NEON_fnmadd(fVar2 * fVar3,*(undefined4 *)(param_1 + 8),-fVar1);
  *(undefined4 *)(this + 0xc) = uVar4;
  return;
}


