// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: linearProgram1
// Entry Point: 0087ea7c
// Size: 316 bytes
// Signature: undefined __thiscall linearProgram1(ObstacleAvoidance * this, vector * param_1, ulong param_2, float param_3, Vector2 * param_4, bool param_5, Vector2 * param_6)


/* WARNING: Removing unreachable block (ram,0x0087eb44) */
/* ObstacleAvoidance::linearProgram1(std::__ndk1::vector<ObstacleAvoidance::Line,
   std::__ndk1::allocator<ObstacleAvoidance::Line> > const&, unsigned long, float, Vector2 const&,
   bool, Vector2&) */

undefined8 __thiscall
ObstacleAvoidance::linearProgram1
          (ObstacleAvoidance *this,vector *param_1,ulong param_2,float param_3,Vector2 *param_4,
          bool param_5,Vector2 *param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pfVar1 = (float *)(*(long *)param_1 + param_2 * 0x10);
  fVar3 = *pfVar1;
  fVar2 = pfVar1[1];
  fVar5 = pfVar1[2];
  fVar4 = pfVar1[3];
  fVar8 = (float)NEON_fmadd(fVar3,fVar3,fVar2 * fVar2);
  fVar7 = (float)NEON_fmadd(fVar3,fVar5,fVar2 * fVar4);
  fVar6 = (float)NEON_fmadd(fVar7,fVar7,param_3 * param_3);
  if (fVar6 - fVar8 < 0.0) {
    return 0;
  }
  fVar6 = SQRT(fVar6 - fVar8);
  fVar8 = -fVar7 - fVar6;
  fVar6 = fVar6 - fVar7;
  if (param_2 != 0) {
    pfVar1 = (float *)(*(long *)param_1 + 8);
    do {
      fVar7 = (float)NEON_fmadd(fVar5,pfVar1[1],*pfVar1 * -fVar4);
      fVar9 = (float)NEON_fmadd(*pfVar1,fVar2 - pfVar1[-1],(fVar3 - pfVar1[-2]) * -pfVar1[1]);
      if (ABS(fVar7) <= 1e-05) {
        if (fVar9 < 0.0) {
          return 0;
        }
      }
      else {
        fVar10 = fVar9 / fVar7;
        if (fVar6 <= fVar9 / fVar7) {
          fVar10 = fVar6;
        }
        if (0.0 <= fVar7) {
          fVar6 = fVar10;
        }
        if (fVar6 < fVar8) {
          return 0;
        }
      }
      param_2 = param_2 - 1;
      pfVar1 = pfVar1 + 4;
    } while (param_2 != 0);
  }
  if (param_5) {
    fVar9 = (float)NEON_fmadd(*(float *)param_4,fVar5,fVar4 * *(float *)(param_4 + 4));
    fVar7 = fVar6;
    if (fVar9 <= 0.0) {
      fVar7 = fVar8;
    }
  }
  else {
    fVar9 = (float)NEON_fmadd(fVar5,*(float *)param_4 - fVar3,
                              fVar4 * (*(float *)(param_4 + 4) - fVar2));
    fVar7 = fVar8;
    if ((fVar8 <= fVar9) && (fVar7 = fVar6, fVar9 <= fVar6)) {
      fVar7 = fVar9;
    }
  }
  *(float *)param_6 = fVar3 + fVar5 * fVar7;
  *(float *)(param_6 + 4) = fVar2 + fVar4 * fVar7;
  return 1;
}


