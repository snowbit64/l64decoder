// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateBoundingVolume
// Entry Point: 00927728
// Size: 384 bytes
// Signature: undefined updateBoundingVolume(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DestructionGeometry::updateBoundingVolume() */

void DestructionGeometry::updateBoundingVolume(void)

{
  float *pfVar1;
  long lVar2;
  int iVar3;
  Geometry *in_x0;
  BoundingSphere *this;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 local_68;
  float local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this = (BoundingSphere *)operator_new(0x20);
  local_68 = 0;
  local_60 = 0.0;
                    /* try { // try from 00927768 to 0092777b has its CatchHandler @ 009278a8 */
  BoundingSphere::BoundingSphere(this,(Vector3 *)&local_68,0.01);
  iVar3 = DestructionGeometryShared::getNumChunks();
  if (iVar3 != 0) {
    uVar6 = 0;
    lVar7 = 0x24;
    do {
      if (*(int *)(*(long *)(in_x0 + 0xd8) + lVar7 + -0x18) != 0) {
        DestructionGeometryShared::getChunk
                  (*(DestructionGeometryShared **)(in_x0 + 0x70),(uint)uVar6);
        lVar8 = *(long *)(in_x0 + 0xd8);
        puVar5 = (undefined4 *)DestructionChunk::getBoundingSphereCenter();
        pfVar1 = (float *)(lVar8 + lVar7);
        uVar14 = puVar5[2];
        uVar13 = *puVar5;
        fVar9 = (float)puVar5[1];
        uVar10 = NEON_fmadd(uVar13,pfVar1[-5],fVar9 * pfVar1[-1]);
        fVar11 = (float)NEON_fmadd(uVar14,pfVar1[3],uVar10);
        uVar10 = NEON_fmadd(uVar13,pfVar1[-4],fVar9 * *pfVar1);
        fVar12 = (float)NEON_fmadd(uVar14,pfVar1[4],uVar10);
        local_68 = CONCAT44(pfVar1[8] + fVar12,pfVar1[7] + fVar11);
        uVar10 = NEON_fmadd(uVar13,pfVar1[-3],fVar9 * pfVar1[1]);
        local_60 = (float)NEON_fmadd(uVar14,pfVar1[5],uVar10);
        local_60 = pfVar1[9] + local_60;
        fVar9 = (float)DestructionChunk::getBoundingSphereRadius();
        BoundingSphere::merge(this,(Vector3 *)&local_68,fVar9);
      }
      uVar6 = uVar6 + 1;
      uVar4 = DestructionGeometryShared::getNumChunks();
      lVar7 = lVar7 + 0x94;
    } while (uVar6 < (uVar4 & 0xffffffff));
  }
  Geometry::setBoundingVolume(in_x0,(BoundingVolume *)this);
  DynamicGeometry::notifyBoundingVolumeDirtyListeners();
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


