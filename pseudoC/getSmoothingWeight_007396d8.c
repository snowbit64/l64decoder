// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSmoothingWeight
// Entry Point: 007396d8
// Size: 80 bytes
// Signature: undefined __thiscall getSmoothingWeight(VehicleNavigationAgent * this, float param_1, float param_2, float param_3)


/* VehicleNavigationAgent::getSmoothingWeight(float, float, float) const */

float __thiscall
VehicleNavigationAgent::getSmoothingWeight
          (VehicleNavigationAgent *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  
  uVar4 = NEON_fmov(0x3f800000,4);
  fVar3 = (float)NEON_fmadd(1.0 - param_2,0xc0000000,0x3f800000);
  fVar1 = (float)uVar4 - param_1 / (float)*(undefined8 *)(this + 5000);
  fVar2 = (float)((ulong)uVar4 >> 0x20) -
          (param_3 * 0.4) / (float)((ulong)*(undefined8 *)(this + 5000) >> 0x20);
  return fVar3 * fVar3 * fVar3 * fVar1 * fVar1 * fVar1 * fVar2 * fVar2 * fVar2;
}


