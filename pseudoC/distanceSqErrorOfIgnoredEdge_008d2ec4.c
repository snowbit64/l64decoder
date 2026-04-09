// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: distanceSqErrorOfIgnoredEdge
// Entry Point: 008d2ec4
// Size: 700 bytes
// Signature: undefined __cdecl distanceSqErrorOfIgnoredEdge(Brep * param_1, uint param_2)


/* FillPlaneGeometry::distanceSqErrorOfIgnoredEdge(Brep const&, unsigned int) */

float FillPlaneGeometry::distanceSqErrorOfIgnoredEdge(Brep *param_1,uint param_2)

{
  ushort *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  long local_78;
  
  lVar10 = tpidr_el0;
  local_78 = *(long *)(lVar10 + 0x28);
  uVar8 = param_2 - 2;
  uVar6 = param_2 + 2;
  if ((param_2 - 1 & 3) != 0) {
    uVar6 = param_2 - 1;
  }
  lVar11 = *(long *)(param_1 + 0x2f68);
  lVar12 = *(long *)(param_1 + 0x2f50);
  lVar13 = *(long *)(param_1 + 0x2ef0);
  fVar22 = 0.0;
  puVar1 = (ushort *)(lVar11 + (ulong)param_2 * 8);
  fVar21 = 0.1;
  iVar7 = *(int *)(puVar1 + 2);
  uVar9 = iVar7 - 2;
  if ((iVar7 + 1U & 3) != 0) {
    uVar9 = iVar7 + 1;
  }
  if ((param_2 + 1 & 3) != 0) {
    uVar8 = param_2 + 1;
  }
  puVar2 = (undefined8 *)
           (lVar13 + (ulong)*(ushort *)
                             (lVar12 + (ulong)*(ushort *)(lVar11 + (ulong)uVar6 * 8) * 0xc) * 0x10);
  puVar3 = (undefined8 *)(lVar13 + (ulong)*(ushort *)(lVar12 + (ulong)*puVar1 * 0xc) * 0x10);
  local_88 = *(float *)puVar3 - *(float *)puVar2;
  pfVar14 = (float *)((long)puVar2 + 4);
  puVar4 = (undefined8 *)
           (lVar13 + (ulong)*(ushort *)
                             (lVar12 + (ulong)*(ushort *)(lVar11 + (ulong)uVar9 * 8) * 0xc) * 0x10);
  puVar5 = (undefined8 *)
           (lVar13 + (ulong)*(ushort *)
                             (lVar12 + (ulong)*(ushort *)(lVar11 + (ulong)uVar8 * 8) * 0xc) * 0x10);
  local_84 = *(float *)((long)puVar3 + 4) - *pfVar14;
  puVar15 = puVar3 + 1;
  puVar16 = puVar2 + 1;
  local_80 = *(float *)puVar15 - *(float *)puVar16;
  do {
    if (fVar21 <= 0.0) {
      local_90 = *(float *)(puVar2 + 1);
      local_98 = *puVar2;
      uVar19 = *puVar5;
      local_a0 = *(float *)(puVar5 + 1);
    }
    else if (1.0 <= fVar21) {
      local_90 = *(float *)(puVar4 + 1);
      local_98 = *puVar4;
      uVar19 = *puVar3;
      local_a0 = *(float *)puVar15;
    }
    else {
      local_98 = CONCAT44(fVar21 * (*(float *)((long)puVar4 + 4) - *pfVar14) + *pfVar14,
                          fVar21 * (*(float *)puVar4 - *(float *)puVar2) + *(float *)puVar2);
      local_90 = fVar21 * (*(float *)(puVar4 + 1) - *(float *)puVar16) + *(float *)puVar16;
      local_a0 = *(float *)(puVar5 + 1);
      fVar18 = (float)*puVar5;
      fVar20 = (float)((ulong)*puVar5 >> 0x20);
      uVar19 = CONCAT44(fVar20 + ((float)((ulong)*puVar3 >> 0x20) - fVar20) * fVar21,
                        fVar18 + ((float)*puVar3 - fVar18) * fVar21);
      local_a0 = local_a0 + fVar21 * (*(float *)puVar15 - local_a0);
    }
    local_a8 = CONCAT44((float)((ulong)uVar19 >> 0x20) - (float)((ulong)local_98 >> 0x20),
                        (float)uVar19 - (float)local_98);
    local_a0 = local_a0 - local_90;
    MathUtil::lineLineIntersect3D
              ((Vector3 *)&local_98,(Vector3 *)&local_a8,(Vector3 *)puVar2,(Vector3 *)&local_88,
               (Vector3 *)&local_b8,(Vector3 *)&local_c8);
    uVar17 = NEON_fmadd(fStack_b4 - fStack_c4,fStack_b4 - fStack_c4,
                        (local_b8 - local_c8) * (local_b8 - local_c8));
    fVar18 = (float)NEON_fmadd(local_b0 - local_c0,local_b0 - local_c0,uVar17);
    fVar21 = fVar21 + 0.1;
    if (fVar18 <= fVar22) {
      fVar18 = fVar22;
    }
    fVar22 = fVar18;
  } while (fVar21 < 0.999);
  if (*(long *)(lVar10 + 0x28) == local_78) {
    return fVar22;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


