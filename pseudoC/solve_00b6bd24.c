// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solve
// Entry Point: 00b6bd24
// Size: 764 bytes
// Signature: undefined __cdecl solve(Vector3 * param_1, Matrix4x4 * param_2, Plane * param_3, bool param_4)


/* QuadricSolverUtil::solve(Vector3&, Matrix4x4 const&, Plane const&, bool) */

undefined8 QuadricSolverUtil::solve(Vector3 *param_1,Matrix4x4 *param_2,Plane *param_3,bool param_4)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_20;
  float fStack_1c;
  long local_18;
  
  lVar1 = tpidr_el0;
  fVar7 = 1.0;
  local_18 = *(long *)(lVar1 + 0x28);
  fVar8 = *(float *)param_3;
  fVar9 = *(float *)(param_3 + 4);
  fVar10 = *(float *)(param_3 + 8);
  fVar13 = *(float *)(param_3 + 0xc);
  fVar14 = fVar9 * fVar9;
  fVar4 = fVar10 * fVar10;
  fVar11 = -fVar8;
  fVar16 = -fVar10;
  fVar12 = -fVar9;
  uVar15 = NEON_fmadd(fVar8,fVar8,fVar14);
  bVar3 = 2;
  if (fVar8 * fVar8 <= fVar4 || fVar4 >= fVar14) {
    bVar3 = 0;
  }
  bVar3 = fVar14 < fVar8 * fVar8 & (fVar4 < fVar14 ^ 0xffU) | bVar3;
  fVar14 = (float)NEON_fmadd(fVar10,fVar10,uVar15);
  fVar4 = 1.0;
  if (bVar3 != 0) {
    fVar4 = 0.0;
  }
  fVar18 = 1.0;
  if (bVar3 != 1) {
    fVar18 = 0.0;
  }
  fVar5 = 1.0;
  if (bVar3 != 2) {
    fVar5 = 0.0;
  }
  fVar6 = (float)NEON_fmadd(fVar9,fVar5,fVar16 * fVar18);
  fVar5 = (float)NEON_fmadd(fVar10,fVar4,fVar11 * fVar5);
  fVar4 = (float)NEON_fmadd(fVar8,fVar18,fVar12 * fVar4);
  uVar15 = NEON_fmadd(fVar6,fVar6,fVar5 * fVar5);
  fVar19 = (float)NEON_fmadd(fVar4,fVar4,uVar15);
  fVar18 = 1.0;
  if (1e-06 < fVar19) {
    fVar18 = 1.0 / SQRT(fVar19);
  }
  fVar4 = fVar4 * fVar18;
  fVar5 = fVar5 * fVar18;
  fVar6 = fVar6 * fVar18;
  fVar10 = (float)NEON_fmadd(fVar10,fVar6,fVar4 * fVar11);
  fVar18 = (float)NEON_fmadd(fVar9,fVar4,fVar5 * fVar16);
  fVar14 = 1.0 / fVar14;
  fVar8 = (float)NEON_fmadd(fVar8,fVar5,fVar6 * fVar12);
  uVar15 = NEON_fmadd(fVar18,fVar18,fVar10 * fVar10);
  fVar9 = (float)NEON_fmadd(fVar8,fVar8,uVar15);
  if (1e-06 < fVar9) {
    fVar7 = 1.0 / SQRT(fVar9);
  }
  fVar10 = fVar10 * fVar7;
  fVar18 = fVar18 * fVar7;
  fVar8 = fVar8 * fVar7;
  uVar20 = NEON_fmadd(fVar6,*(undefined4 *)(param_2 + 4),fVar5 * *(float *)(param_2 + 0x14));
  uVar15 = NEON_fmadd(fVar18,*(undefined4 *)(param_2 + 4),fVar10 * *(float *)(param_2 + 0x14));
  uVar24 = NEON_fmadd(fVar6,*(undefined4 *)param_2,fVar5 * *(float *)(param_2 + 0x10));
  uVar21 = NEON_fmadd(fVar18,*(undefined4 *)param_2,fVar10 * *(float *)(param_2 + 0x10));
  fVar17 = (float)NEON_fmadd(fVar4,*(undefined4 *)(param_2 + 0x24),uVar20);
  fVar26 = (float)NEON_fmadd(fVar8,*(undefined4 *)(param_2 + 0x24),uVar15);
  uVar15 = NEON_fmadd(fVar6,*(undefined4 *)(param_2 + 8),fVar5 * *(float *)(param_2 + 0x18));
  uVar20 = NEON_fmadd(fVar4,*(undefined4 *)(param_2 + 0x20),uVar24);
  uVar24 = NEON_fmadd(fVar18,*(undefined4 *)(param_2 + 8),fVar10 * *(float *)(param_2 + 0x18));
  uVar22 = NEON_fmadd(fVar8,*(undefined4 *)(param_2 + 0x20),uVar21);
  uVar21 = NEON_fmadd(fVar4,*(undefined4 *)(param_2 + 0x28),uVar15);
  uVar15 = NEON_fmadd(uVar20,fVar6,fVar5 * fVar17);
  uVar23 = NEON_fmadd(fVar8,*(undefined4 *)(param_2 + 0x28),uVar24);
  uVar24 = NEON_fmadd(uVar20,fVar18,fVar10 * fVar17);
  uVar25 = NEON_fmadd(uVar22,fVar18,fVar10 * fVar26);
  local_20 = (float)NEON_fmadd(uVar21,fVar4,uVar15);
  uVar15 = NEON_fmadd(uVar22,fVar6,fVar5 * fVar26);
  fVar27 = (float)NEON_fmadd(uVar21,fVar8,uVar24);
  fStack_1c = (float)NEON_fmadd(uVar23,fVar8,uVar25);
  local_20 = local_20 + 0.0;
  fVar9 = (float)NEON_fmadd(uVar23,fVar4,uVar15);
  fStack_1c = fStack_1c + 0.0;
  fVar28 = (float)NEON_fmadd(local_20,fStack_1c,(fVar9 + 0.0) * -(fVar27 + 0.0));
  fVar19 = *(float *)((ulong)&local_20 | (ulong)(local_20 < fStack_1c) << 2);
  fVar11 = fVar13 * fVar11 * fVar14;
  fVar7 = fVar13 * fVar12 * fVar14;
  fVar14 = fVar13 * fVar16 * fVar14;
  if (fVar19 * fVar19 <= fVar28 * 65536.0) {
    uVar24 = NEON_fmadd(fVar11,uVar22,fVar7 * fVar26);
    uVar20 = NEON_fmadd(fVar11,uVar20,fVar7 * fVar17);
    uVar22 = NEON_fmadd(*(undefined4 *)(param_2 + 0x30),fVar18,fVar10 * *(float *)(param_2 + 0x34));
    uVar15 = NEON_fmadd(*(undefined4 *)(param_2 + 0x30),fVar6,fVar5 * *(float *)(param_2 + 0x34));
    fVar13 = (float)NEON_fmadd(fVar14,uVar23,uVar24);
    fVar16 = (float)NEON_fmadd(fVar14,uVar21,uVar20);
    fVar19 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x38),fVar8,uVar22);
    fVar12 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x38),fVar4,uVar15);
    fVar9 = (float)NEON_fmsub(fVar16 + fVar12,fStack_1c,(fVar9 + 0.0) * (fVar13 + fVar19));
    fVar12 = (float)NEON_fmsub(local_20,fVar13 + fVar19,(fVar27 + 0.0) * (fVar16 + fVar12));
    fVar9 = (1.0 / fVar28) * fVar9;
    fVar12 = (1.0 / fVar28) * fVar12;
    fVar11 = fVar18 * fVar12 + fVar11 + fVar6 * fVar9;
    fVar7 = fVar10 * fVar12 + fVar7 + fVar5 * fVar9;
    fVar14 = fVar8 * fVar12 + fVar14 + fVar4 * fVar9;
  }
  else if (param_4) {
    uVar2 = 0;
    goto LAB_00b6bffc;
  }
  *(float *)param_1 = fVar11;
  uVar2 = 1;
  *(float *)(param_1 + 4) = fVar7;
  *(float *)(param_1 + 8) = fVar14;
LAB_00b6bffc:
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


