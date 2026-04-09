// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: correctCurvature
// Entry Point: 007383ec
// Size: 84 bytes
// Signature: undefined __thiscall correctCurvature(VehicleNavigationAgent * this, Vector2 * param_1, Vector2 * param_2, float param_3, float param_4)


/* VehicleNavigationAgent::correctCurvature(Vector2 const&, Vector2 const&, float, float) const */

float __thiscall
VehicleNavigationAgent::correctCurvature
          (VehicleNavigationAgent *this,Vector2 *param_1,Vector2 *param_2,float param_3,
          float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)NEON_fmin(param_4,0xbf800000);
  if (0.0 <= param_4) {
    fVar3 = param_4;
  }
  fVar4 = (float)NEON_fmadd(*(undefined4 *)param_1,*(undefined4 *)(param_2 + 4),
                            *(float *)param_2 * -*(float *)(param_1 + 4));
  fVar4 = fVar4 / fVar3 + param_3;
  fVar2 = *(float *)(this + 0x138c);
  fVar3 = fVar2;
  if (fVar4 <= fVar2) {
    fVar3 = fVar4;
  }
  fVar1 = -fVar2;
  if (-fVar2 <= fVar4) {
    fVar1 = fVar3;
  }
  return fVar1;
}


