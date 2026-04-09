// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localGetSupportingVertex
// Entry Point: 00f69b08
// Size: 192 bytes
// Signature: undefined __cdecl localGetSupportingVertex(btVector3 * param_1)


/* btSphereShape::localGetSupportingVertex(btVector3 const&) const */

undefined4 btSphereShape::localGetSupportingVertex(btVector3 *param_1)

{
  bool bVar1;
  float *in_x1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 in_s1;
  float fVar5;
  undefined4 in_s2;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  uVar2 = (**(code **)(*(long *)param_1 + 0x88))();
  fVar3 = *in_x1;
  fVar5 = in_x1[1];
  fVar8 = in_x1[2];
  uVar6 = NEON_fmadd(fVar5,fVar5,fVar3 * fVar3);
  fVar7 = (float)NEON_fmadd(fVar8,fVar8,uVar6);
  bVar1 = 1.421085e-14 <= fVar7;
  fVar7 = -1.0;
  if (bVar1) {
    fVar7 = fVar3;
  }
  fVar3 = -1.0;
  if (bVar1) {
    fVar3 = fVar5;
  }
  fVar5 = -1.0;
  if (bVar1) {
    fVar5 = fVar8;
  }
  uVar6 = NEON_fmadd(fVar3,fVar3,fVar7 * fVar7);
  fVar8 = (float)NEON_fmadd(fVar5,fVar5,uVar6);
  fVar4 = (float)(**(code **)(*(long *)param_1 + 0x60))(param_1);
  fVar4 = fVar4 / SQRT(fVar8);
  uVar2 = NEON_fmadd(fVar4,fVar7,uVar2);
  NEON_fmadd(fVar4,fVar3,in_s1);
  NEON_fmadd(fVar4,fVar5,in_s2);
  return uVar2;
}


