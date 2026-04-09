// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEdgeAngleFromHeights
// Entry Point: 008a1888
// Size: 84 bytes
// Signature: undefined __thiscall getEdgeAngleFromHeights(TerrainDeformation * this, float param_1, float param_2, float param_3)


/* TerrainDeformation::getEdgeAngleFromHeights(float, float, float) */

void __thiscall
TerrainDeformation::getEdgeAngleFromHeights
          (TerrainDeformation *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  fVar1 = param_2 - param_1;
  fVar3 = param_3 - param_2;
  uVar4 = *(undefined4 *)(this + 0x44);
  fVar2 = (float)NEON_fmadd(uVar4,uVar4,fVar1 * fVar1);
  fVar5 = (float)NEON_fmadd(uVar4,uVar4,fVar3 * fVar3);
  fVar1 = (float)NEON_fmadd(uVar4,uVar4,fVar1 * fVar3);
  acosf((1.0 / SQRT(fVar5)) * fVar1 * (1.0 / SQRT(fVar2)));
  return;
}


