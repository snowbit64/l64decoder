// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localGetSupportingVertex
// Entry Point: 00f616c8
// Size: 228 bytes
// Signature: undefined __cdecl localGetSupportingVertex(btVector3 * param_1)


/* btConvexInternalShape::localGetSupportingVertex(btVector3 const&) const */

undefined4 btConvexInternalShape::localGetSupportingVertex(btVector3 *param_1)

{
  bool bVar1;
  float *in_x1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 in_s1;
  float fVar6;
  undefined4 in_s2;
  undefined4 uVar7;
  float fVar8;
  
  uVar2 = (**(code **)(*(long *)param_1 + 0x88))();
  fVar3 = (float)(**(code **)(*(long *)param_1 + 0x60))(param_1);
  if (fVar3 != 0.0) {
    fVar4 = *in_x1;
    fVar6 = in_x1[1];
    fVar8 = in_x1[2];
    uVar7 = NEON_fmadd(fVar6,fVar6,fVar4 * fVar4);
    fVar3 = (float)NEON_fmadd(fVar8,fVar8,uVar7);
    bVar1 = 1.421085e-14 <= fVar3;
    fVar3 = -1.0;
    if (bVar1) {
      fVar3 = fVar4;
    }
    fVar4 = -1.0;
    if (bVar1) {
      fVar4 = fVar6;
    }
    fVar6 = -1.0;
    if (bVar1) {
      fVar6 = fVar8;
    }
    uVar7 = NEON_fmadd(fVar4,fVar4,fVar3 * fVar3);
    fVar8 = (float)NEON_fmadd(fVar6,fVar6,uVar7);
    fVar5 = (float)(**(code **)(*(long *)param_1 + 0x60))(param_1);
    fVar5 = fVar5 / SQRT(fVar8);
    uVar2 = NEON_fmadd(fVar5,fVar3,uVar2);
    NEON_fmadd(fVar5,fVar4,in_s1);
    NEON_fmadd(fVar5,fVar6,in_s2);
  }
  return uVar2;
}


