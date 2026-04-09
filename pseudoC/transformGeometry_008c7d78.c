// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: transformGeometry
// Entry Point: 008c7d78
// Size: 672 bytes
// Signature: undefined __cdecl transformGeometry(IndexedTriangleSet * param_1, Matrix4x4 * param_2)


/* IndexedTriangleSetGeometryUtil::transformGeometry(IndexedTriangleSet*, Matrix4x4 const&) */

void IndexedTriangleSetGeometryUtil::transformGeometry
               (IndexedTriangleSet *param_1,Matrix4x4 *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float local_88;
  float fStack_84;
  float local_80;
  undefined4 local_7c;
  undefined8 local_78;
  float local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulong)uVar1;
  uVar3 = *(uint *)(param_1 + 0xc);
  if (uVar1 != 0) {
    uVar6 = 0;
    uVar9 = 2;
    do {
      lVar5 = *(long *)(param_1 + 0x10);
      fVar10 = *(float *)(lVar5 + (ulong)(uVar9 - 1) * 4);
      fVar14 = *(float *)(lVar5 + (ulong)(uVar9 - 2) * 4);
      fVar16 = *(float *)(lVar5 + (ulong)uVar9 * 4);
      uVar11 = NEON_fmadd(fVar14,*(undefined4 *)(param_2 + 8),fVar10 * *(float *)(param_2 + 0x18));
      local_70 = (float)NEON_fmadd(fVar16,*(undefined4 *)(param_2 + 0x28),uVar11);
      local_78 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * fVar10 +
                          (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar14 +
                          (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) * fVar16,
                          (float)*(undefined8 *)(param_2 + 0x30) +
                          (float)*(undefined8 *)(param_2 + 0x10) * fVar10 +
                          (float)*(undefined8 *)param_2 * fVar14 +
                          (float)*(undefined8 *)(param_2 + 0x20) * fVar16);
      local_70 = *(float *)(param_2 + 0x38) + local_70;
      TriangleSet::setPosition((TriangleSet *)param_1,(float *)&local_78,(uint)uVar6);
      uVar6 = uVar6 + 1;
      uVar9 = uVar9 + 3;
    } while (uVar2 != uVar6);
    if (((uVar3 & 1) != 0) && (uVar1 != 0)) {
      uVar6 = 0;
      uVar9 = 2;
      do {
        lVar5 = *(long *)(param_1 + 0x38);
        fVar16 = *(float *)(lVar5 + (ulong)(uVar9 - 1) * 4);
        fVar17 = *(float *)(lVar5 + (ulong)uVar9 * 4);
        fVar12 = *(float *)(lVar5 + (ulong)(uVar9 - 2) * 4);
        fVar10 = (float)*(undefined8 *)(param_2 + 0x10) * fVar16 +
                 (float)*(undefined8 *)param_2 * fVar12 +
                 (float)*(undefined8 *)(param_2 + 0x20) * fVar17;
        fVar14 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * fVar16 +
                 (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar12 +
                 (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) * fVar17;
        uVar11 = NEON_fmadd(fVar12,*(undefined4 *)(param_2 + 8),fVar16 * *(float *)(param_2 + 0x18))
        ;
        local_70 = (float)NEON_fmadd(fVar17,*(undefined4 *)(param_2 + 0x28),uVar11);
        fVar12 = (float)NEON_fmadd(local_70,local_70,fVar14 * fVar14 + fVar10 * fVar10);
        fVar16 = 1.0;
        if (1e-06 < fVar12) {
          fVar16 = 1.0 / SQRT(fVar12);
        }
        local_78 = CONCAT44(fVar14 * fVar16,fVar10 * fVar16);
        local_70 = local_70 * fVar16;
        TriangleSet::setNormal((TriangleSet *)param_1,(float *)&local_78,(uint)uVar6);
        uVar6 = uVar6 + 1;
        uVar9 = uVar9 + 3;
      } while (uVar2 != uVar6);
    }
  }
  if (((uVar3 >> 7 & 1) != 0) && (uVar1 != 0)) {
    uVar6 = 0;
    uVar8 = 3;
    do {
      iVar7 = (int)uVar8;
      lVar5 = *(long *)(param_1 + 0x40);
      fVar10 = *(float *)(lVar5 + (ulong)(iVar7 - 2) * 4);
      uVar15 = *(undefined4 *)(lVar5 + (ulong)(iVar7 - 3) * 4);
      uVar18 = *(undefined4 *)(lVar5 + (ulong)(iVar7 - 1) * 4);
      uVar11 = NEON_fmadd(uVar15,*(undefined4 *)(param_2 + 4),fVar10 * *(float *)(param_2 + 0x14));
      uVar13 = NEON_fmadd(uVar15,*(undefined4 *)param_2,fVar10 * *(float *)(param_2 + 0x10));
      fStack_84 = (float)NEON_fmadd(uVar18,*(undefined4 *)(param_2 + 0x24),uVar11);
      local_88 = (float)NEON_fmadd(uVar18,*(undefined4 *)(param_2 + 0x20),uVar13);
      uVar11 = NEON_fmadd(uVar15,*(undefined4 *)(param_2 + 8),fVar10 * *(float *)(param_2 + 0x18));
      local_80 = (float)NEON_fmadd(uVar18,*(undefined4 *)(param_2 + 0x28),uVar11);
      uVar11 = NEON_fmadd(local_88,local_88,fStack_84 * fStack_84);
      fVar14 = (float)NEON_fmadd(local_80,local_80,uVar11);
      fVar10 = 1.0;
      if (1e-06 < fVar14) {
        fVar10 = 1.0 / SQRT(fVar14);
      }
      local_88 = local_88 * fVar10;
      fStack_84 = fStack_84 * fVar10;
      local_80 = local_80 * fVar10;
      local_78 = CONCAT44(fStack_84,local_88);
      local_7c = *(undefined4 *)(lVar5 + uVar8 * 4);
      local_70 = local_80;
      TriangleSet::setTangent((TriangleSet *)param_1,&local_88,(uint)uVar6);
      uVar6 = uVar6 + 1;
      uVar8 = (ulong)(iVar7 + 4);
    } while (uVar2 != uVar6);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


