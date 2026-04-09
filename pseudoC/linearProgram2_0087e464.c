// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: linearProgram2
// Entry Point: 0087e464
// Size: 380 bytes
// Signature: undefined __thiscall linearProgram2(ObstacleAvoidance * this, vector * param_1, float param_2, Vector2 * param_3, bool param_4, Vector2 * param_5)


/* ObstacleAvoidance::linearProgram2(std::__ndk1::vector<ObstacleAvoidance::Line,
   std::__ndk1::allocator<ObstacleAvoidance::Line> > const&, float, Vector2 const&, bool, Vector2&)
    */

ulong __thiscall
ObstacleAvoidance::linearProgram2
          (ObstacleAvoidance *this,vector *param_1,float param_2,Vector2 *param_3,bool param_4,
          Vector2 *param_5)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar8 = *(float *)param_3;
  if (param_4) {
    fVar10 = *(float *)(param_3 + 4);
  }
  else {
    fVar8 = (float)NEON_fmadd(fVar8,fVar8,*(float *)(param_3 + 4) * *(float *)(param_3 + 4));
    if (fVar8 <= param_2 * param_2) {
      uVar7 = *(undefined8 *)param_3;
      fVar8 = (float)uVar7;
      *(undefined8 *)param_5 = uVar7;
      fVar10 = (float)((ulong)uVar7 >> 0x20);
      goto LAB_0087e520;
    }
    fVar8 = *(float *)param_3;
    fVar9 = *(float *)(param_3 + 4);
    fVar11 = (float)NEON_fmadd(fVar8,fVar8,fVar9 * fVar9);
    fVar10 = 1.0;
    if (1e-06 < fVar11) {
      fVar10 = 1.0 / SQRT(fVar11);
    }
    fVar8 = fVar10 * fVar8;
    fVar10 = fVar10 * fVar9;
  }
  fVar10 = fVar10 * param_2;
  fVar8 = fVar8 * param_2;
  *(float *)param_5 = fVar8;
  *(float *)(param_5 + 4) = fVar10;
LAB_0087e520:
  lVar3 = *(long *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == lVar3) {
    return 0;
  }
  lVar6 = 0;
  uVar5 = 0;
  while( true ) {
    pfVar1 = (float *)(lVar3 + lVar6);
    fVar8 = (float)NEON_fmadd(pfVar1[2],pfVar1[1] - fVar10,(*pfVar1 - fVar8) * -pfVar1[3]);
    if (0.0 < fVar8) {
      uVar7 = *(undefined8 *)param_5;
      this = (ObstacleAvoidance *)linearProgram1(this,param_1,uVar5,param_2,param_3,param_4,param_5)
      ;
      if (((ulong)this & 1) == 0) {
        *(undefined8 *)param_5 = uVar7;
        return uVar5;
      }
      lVar3 = *(long *)param_1;
      lVar2 = *(long *)(param_1 + 8);
    }
    uVar5 = uVar5 + 1;
    uVar4 = lVar2 - lVar3 >> 4;
    if (uVar4 <= uVar5) break;
    fVar8 = *(float *)param_5;
    fVar10 = *(float *)(param_5 + 4);
    lVar6 = lVar6 + 0x10;
  }
  return uVar4;
}


