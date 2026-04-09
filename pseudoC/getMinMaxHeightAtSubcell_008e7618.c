// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMinMaxHeightAtSubcell
// Entry Point: 008e7618
// Size: 208 bytes
// Signature: undefined __thiscall getMinMaxHeightAtSubcell(BaseTerrain * this, float param_1, float param_2, float param_3, float * param_4, float * param_5)


/* BaseTerrain::getMinMaxHeightAtSubcell(float, float, float, float&, float&) */

void __thiscall
BaseTerrain::getMinMaxHeightAtSubcell
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
  fVar5 = fVar4;
  if (fVar3 <= fVar4) {
    fVar5 = fVar3;
  }
  fVar6 = fVar2;
  if (fVar1 <= fVar2) {
    fVar6 = fVar1;
  }
  if (fVar6 <= fVar5) {
    fVar5 = fVar6;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  *param_4 = fVar5;
  if (fVar4 <= fVar3) {
    fVar4 = fVar3;
  }
  if (fVar4 <= fVar2) {
    fVar4 = fVar2;
  }
  *param_5 = fVar4;
  return;
}


