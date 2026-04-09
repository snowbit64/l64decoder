// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateShapeWorldBoundingVolume
// Entry Point: 00a53304
// Size: 564 bytes
// Signature: undefined updateShapeWorldBoundingVolume(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GsShape::updateShapeWorldBoundingVolume() */

void GsShape::updateShapeWorldBoundingVolume(void)

{
  byte bVar1;
  long lVar2;
  long in_x0;
  BoundingVolume *pBVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(uint *)(in_x0 + 0x40) >> 0xc & 1) == 0) goto LAB_00a53510;
  *(uint *)(in_x0 + 0x40) = *(uint *)(in_x0 + 0x40) & 0xffffefff;
  if (0.0 <= *(float *)(in_x0 + 0x1c4)) {
    BoundingSphere::assign
              ((BoundingSphere *)(in_x0 + 0x198),(Vector3 *)(in_x0 + 0x1b8),
               *(float *)(in_x0 + 0x1c4));
    bVar1 = *(byte *)(in_x0 + 400);
joined_r0x00a5337c:
    if ((bVar1 & 1) == 0) goto LAB_00a53380;
LAB_00a533a8:
    lVar6 = ***(long ***)(in_x0 + 0x1f8);
    RawTransformGroup::updateWorldTransformation();
    fVar11 = *(float *)(lVar6 + 200);
    fVar9 = *(float *)(lVar6 + 0xcc);
    uVar14 = *(undefined4 *)(lVar6 + 0xb8);
    uVar8 = *(undefined4 *)(lVar6 + 0xbc);
    puVar5 = *(undefined4 **)(*(long *)(in_x0 + 0x1f8) + 8);
    puVar4 = &local_78;
    uVar7 = puVar5[2];
    uVar12 = NEON_fmadd(*puVar5,uVar14,(float)puVar5[1] * fVar11);
    uVar16 = *(undefined4 *)(lVar6 + 0xd8);
    uVar10 = *(undefined4 *)(lVar6 + 0xdc);
    local_78 = NEON_fmadd(uVar7,uVar16,uVar12);
    uVar12 = NEON_fmadd(*puVar5,uVar8,(float)puVar5[1] * fVar9);
    uVar13 = NEON_fmadd(puVar5[4],uVar14,fVar11 * (float)puVar5[5]);
    uVar17 = puVar5[6];
    local_74 = NEON_fmadd(uVar7,uVar10,uVar12);
    local_68 = NEON_fmadd(uVar17,uVar16,uVar13);
    local_6c = 0;
    uVar12 = NEON_fmadd(puVar5[4],uVar8,fVar9 * (float)puVar5[5]);
    uVar13 = NEON_fmadd(puVar5[8],uVar14,fVar11 * (float)puVar5[9]);
    uVar18 = puVar5[10];
    local_64 = NEON_fmadd(uVar17,uVar10,uVar12);
    local_58 = NEON_fmadd(uVar18,uVar16,uVar13);
    uVar12 = NEON_fmadd(puVar5[0xc],uVar14,fVar11 * (float)puVar5[0xd]);
    uVar15 = puVar5[0xe];
    local_5c = 0;
    uVar13 = NEON_fmadd(puVar5[8],uVar8,fVar9 * (float)puVar5[9]);
    local_48 = (float)NEON_fmadd(uVar15,uVar16,uVar12);
    local_54 = NEON_fmadd(uVar18,uVar10,uVar13);
    local_48 = *(float *)(lVar6 + 0xe8) + local_48;
    local_4c = 0;
    uVar8 = NEON_fmadd(puVar5[0xc],uVar8,fVar9 * (float)puVar5[0xd]);
    fVar9 = *(float *)(lVar6 + 0xd0);
    local_44 = (float)NEON_fmadd(uVar15,uVar10,uVar8);
    local_44 = *(float *)(lVar6 + 0xec) + local_44;
    uVar10 = *(undefined4 *)(lVar6 + 0xc0);
    uVar13 = NEON_fmadd(*puVar5,uVar10,(float)puVar5[1] * fVar9);
    uVar14 = NEON_fmadd(puVar5[4],uVar10,fVar9 * (float)puVar5[5]);
    local_3c = 0x3f800000;
    uVar8 = NEON_fmadd(puVar5[0xc],uVar10,fVar9 * (float)puVar5[0xd]);
    uVar12 = *(undefined4 *)(lVar6 + 0xe0);
    uVar10 = NEON_fmadd(puVar5[8],uVar10,fVar9 * (float)puVar5[9]);
    local_70 = NEON_fmadd(uVar7,uVar12,uVar13);
    local_40 = (float)NEON_fmadd(uVar15,uVar12,uVar8);
    local_60 = NEON_fmadd(uVar17,uVar12,uVar14);
    local_50 = NEON_fmadd(uVar18,uVar12,uVar10);
    local_40 = *(float *)(lVar6 + 0xf0) + local_40;
  }
  else {
    if (*(long *)(in_x0 + 0x170) == 0) {
      BoundingSphere::reset();
      bVar1 = *(byte *)(in_x0 + 400);
      goto joined_r0x00a5337c;
    }
    pBVar3 = (BoundingVolume *)Geometry::getBoundingVolume();
    BoundingSphere::set((BoundingSphere *)(in_x0 + 0x198),pBVar3);
    if ((*(byte *)(in_x0 + 400) & 1) != 0) goto LAB_00a533a8;
LAB_00a53380:
    RawTransformGroup::updateWorldTransformation();
    puVar4 = (undefined4 *)(in_x0 + 0xb8);
  }
  BoundingSphere::transform((BoundingSphere *)(in_x0 + 0x198),(Matrix4x4 *)puVar4);
LAB_00a53510:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


