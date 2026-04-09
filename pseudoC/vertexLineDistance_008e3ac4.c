// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vertexLineDistance
// Entry Point: 008e3ac4
// Size: 60 bytes
// Signature: undefined __cdecl vertexLineDistance(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6)


/* TyreTrackGeometry::vertexLineDistance(float, float, float, float, float, float) */

undefined4
TyreTrackGeometry::vertexLineDistance
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = param_4 - param_2;
  fVar2 = param_3 - param_1;
  fVar4 = (float)NEON_fmadd(fVar2,fVar2,fVar3 * fVar3);
  uVar1 = NEON_fmadd(fVar2 * (1.0 / SQRT(fVar4)),param_6 - param_2,
                     (param_5 - param_1) * (1.0 / SQRT(fVar4)) * -fVar3);
  return uVar1;
}


