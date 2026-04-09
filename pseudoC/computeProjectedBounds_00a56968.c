// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeProjectedBounds
// Entry Point: 00a56968
// Size: 224 bytes
// Signature: undefined __cdecl computeProjectedBounds(Plane * param_1, Vector3 * param_2, uint param_3, uint param_4, Vector3 * param_5, Vector3 * param_6, Vector2 * param_7, Vector2 * param_8, undefined8 param_9)


/* LightSource::MergedShadowGroup::computeProjectedBounds(Plane const&, Vector3*, unsigned int,
   unsigned int, Vector3 const&, Vector3 const&, Vector2&, Vector2&) const */

Plane * LightSource::MergedShadowGroup::computeProjectedBounds
                  (Plane *param_1,Vector3 *param_2,uint param_3,uint param_4,Vector3 *param_5,
                  Vector3 *param_6,Vector2 *param_7,Vector2 *param_8,float *param_9)

{
  Vector3 *pVVar1;
  int iVar2;
  undefined4 extraout_s0;
  float in_s1;
  undefined4 in_s2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  if (param_4 < (uint)param_5) {
    pVVar1 = (Vector3 *)((ulong)param_3 + (ulong)param_4 * 0xc);
    iVar2 = (uint)param_5 - param_4;
    do {
      param_1 = (Plane *)Plane::projectPoint((Plane *)param_2,pVVar1);
      uVar3 = NEON_fmadd(extraout_s0,*(undefined4 *)param_7,in_s1 * *(float *)(param_7 + 4));
      fVar4 = (float)NEON_fmadd(in_s2,*(undefined4 *)(param_7 + 8),uVar3);
      uVar3 = *(undefined4 *)param_6;
      fVar6 = *(float *)(param_6 + 4);
      uVar5 = *(undefined4 *)(param_6 + 8);
      if (fVar4 < *(float *)param_8) {
        *(float *)param_8 = fVar4;
      }
      uVar3 = NEON_fmadd(extraout_s0,uVar3,in_s1 * fVar6);
      fVar6 = (float)NEON_fmadd(in_s2,uVar5,uVar3);
      if (fVar6 < *(float *)(param_8 + 4)) {
        *(float *)(param_8 + 4) = fVar6;
      }
      if (*param_9 < fVar4) {
        *param_9 = fVar4;
      }
      in_s1 = param_9[1];
      if (in_s1 < fVar6) {
        param_9[1] = fVar6;
      }
      pVVar1 = pVVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_1;
}


