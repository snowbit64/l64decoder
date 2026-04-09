// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMaxDeltasAtSubcell
// Entry Point: 008e74d0
// Size: 216 bytes
// Signature: undefined __thiscall getMaxDeltasAtSubcell(BaseTerrain * this, float param_1, float param_2, float param_3, float * param_4, float * param_5)


/* BaseTerrain::getMaxDeltasAtSubcell(float, float, float, float&, float&) */

void __thiscall
BaseTerrain::getMaxDeltasAtSubcell
          (BaseTerrain *this,float param_1,float param_2,float param_3,float *param_4,float *param_5
          )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (float)getInterpolatedHeightAtPoint(this,param_1,param_2);
  fVar2 = (float)getInterpolatedHeightAtPoint(this,param_1 + param_3,param_2);
  fVar3 = (float)getInterpolatedHeightAtPoint(this,param_1,param_2 + param_3);
  fVar4 = (float)getInterpolatedHeightAtPoint(this,param_1 + param_3,param_2 + param_3);
  fVar5 = ABS(fVar3 - fVar4);
  if (ABS(fVar3 - fVar4) <= ABS(fVar1 - fVar2)) {
    fVar5 = ABS(fVar1 - fVar2);
  }
  fVar6 = ABS(fVar2 - fVar4);
  if (ABS(fVar2 - fVar4) <= ABS(fVar1 - fVar3)) {
    fVar6 = ABS(fVar1 - fVar3);
  }
  if (fVar6 <= fVar5) {
    fVar6 = fVar5;
  }
  fVar5 = ABS(fVar2 - fVar3);
  if (ABS(fVar2 - fVar3) <= ABS(fVar1 - fVar4)) {
    fVar5 = ABS(fVar1 - fVar4);
  }
  *param_4 = fVar6;
  *param_5 = fVar5;
  return;
}


