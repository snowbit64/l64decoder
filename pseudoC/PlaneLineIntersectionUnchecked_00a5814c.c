// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PlaneLineIntersectionUnchecked
// Entry Point: 00a5814c
// Size: 116 bytes
// Signature: undefined __thiscall PlaneLineIntersectionUnchecked(MergedShadowGroup * this, Plane * param_1, Vector3 * param_2, Vector3 * param_3, Vector3 * param_4)


/* LightSource::MergedShadowGroup::PlaneLineIntersectionUnchecked(Plane const&, Vector3 const&,
   Vector3 const&, Vector3&) const */

void __thiscall
LightSource::MergedShadowGroup::PlaneLineIntersectionUnchecked
          (MergedShadowGroup *this,Plane *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4
          )

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = *(float *)param_1;
  fVar1 = *(float *)(param_1 + 4);
  fVar5 = *(float *)(param_1 + 8);
  fVar3 = *(float *)(param_1 + 0xc);
  fVar7 = *(float *)(param_2 + 4);
  fVar8 = *(float *)(param_3 + 4);
  fVar9 = *(float *)(param_2 + 8);
  uVar6 = NEON_fmadd(fVar3 * fVar4 - *(float *)param_2,fVar4,fVar1 * (fVar3 * fVar1 - fVar7));
  uVar2 = NEON_fmadd(*(float *)param_3,fVar4,fVar1 * fVar8);
  fVar4 = *(float *)(param_3 + 8);
  fVar3 = (float)NEON_fmadd(fVar3 * fVar5 - fVar9,fVar5,uVar6);
  fVar1 = (float)NEON_fmadd(fVar4,fVar5,uVar2);
  fVar3 = fVar3 / fVar1;
  *(float *)param_4 = *(float *)param_2 + *(float *)param_3 * fVar3;
  *(float *)(param_4 + 4) = fVar7 + fVar8 * fVar3;
  *(float *)(param_4 + 8) = fVar9 + fVar4 * fVar3;
  return;
}


