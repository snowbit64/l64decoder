// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateBoundingSphere
// Entry Point: 008f1760
// Size: 276 bytes
// Signature: undefined __thiscall updateBoundingSphere(GeoMipMappingTerrainPatch * this, float param_1, float param_2)


/* GeoMipMappingTerrainPatch::updateBoundingSphere(float, float) */

void __thiscall
GeoMipMappingTerrainPatch::updateBoundingSphere
          (GeoMipMappingTerrainPatch *this,float param_1,float param_2)

{
  long lVar1;
  BoundingSphere *this_00;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float fStack_64;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)BaseTerrain::getUnitsPerPixel();
  uVar3 = BaseTerrain::getTerrainHalfSize();
  fVar6 = (param_2 - param_1) * 0.5;
  fVar4 = fVar2 * (float)(ulong)(uint)(*(int *)(this + 0x88) - *(int *)(this + 0x80)) * 0.5;
  fVar7 = fVar2 * (float)(ulong)(uint)(*(int *)(this + 0x8c) - *(int *)(this + 0x84)) * 0.5;
  uVar5 = NEON_fmadd(fVar4,fVar4,fVar6 * fVar6);
  fVar4 = (float)NEON_fmadd(fVar7,fVar7,uVar5);
  local_68 = (float)NEON_fnmsub((float)(ulong)(uint)(*(int *)(this + 0x88) + *(int *)(this + 0x80)),
                                0x3f000000,uVar3);
  local_60 = (float)NEON_fnmsub((float)(ulong)(uint)(*(int *)(this + 0x8c) + *(int *)(this + 0x84)),
                                0x3f000000,uVar3);
  fStack_64 = (param_1 + param_2) * 0.5;
  local_68 = fVar2 * local_68;
  local_60 = fVar2 * local_60;
  this_00 = (BoundingSphere *)operator_new(0x20);
                    /* try { // try from 008f182c to 008f1837 has its CatchHandler @ 008f1874 */
  BoundingSphere::BoundingSphere(this_00,(Vector3 *)&local_68,SQRT(fVar4));
  Geometry::setBoundingVolume((Geometry *)this,(BoundingVolume *)this_00);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


