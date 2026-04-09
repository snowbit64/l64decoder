// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solve
// Entry Point: 00b6b9e4
// Size: 404 bytes
// Signature: undefined __cdecl solve(Vector3 * param_1, Matrix4x4 * param_2, bool param_3)


/* QuadricSolverUtil::solve(Vector3&, Matrix4x4 const&, bool) */

undefined8 QuadricSolverUtil::solve(Vector3 *param_1,Matrix4x4 *param_2,bool param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_28 [4];
  long local_18;
  
  lVar2 = tpidr_el0;
  local_18 = *(long *)(lVar2 + 0x28);
  local_28[1] = *(float *)(param_2 + 0x14);
  fVar5 = *(float *)(param_2 + 0x18);
  local_28[0] = *(float *)param_2;
  fVar13 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_2 + 8);
  fVar8 = *(float *)(param_2 + 0x24);
  local_28[2] = *(float *)(param_2 + 0x28);
  fVar6 = *(float *)(param_2 + 0x10);
  fVar10 = *(float *)(param_2 + 0x20);
  uVar11 = NEON_fmadd(local_28[1],local_28[2],fVar8 * -fVar5);
  fVar16 = (float)NEON_fmadd(fVar13,local_28[2],fVar8 * -fVar4);
  uVar1 = 2;
  if (local_28[1] >= local_28[2] || local_28[2] <= local_28[0]) {
    uVar1 = 0;
  }
  uVar14 = NEON_fmadd(fVar13,fVar5,local_28[1] * -fVar4);
  fVar19 = local_28[(ulong)(local_28[0] < local_28[1]) &
                    ((ulong)(local_28[1] < local_28[2]) ^ 0xffffffffffffffff) | uVar1];
  uVar17 = NEON_fmadd(local_28[0],uVar11,fVar16 * -fVar6);
  fVar16 = (float)NEON_fmadd(fVar10,uVar14,uVar17);
  if (fVar19 * fVar19 * fVar19 * 3.0 <= fVar16 * 65536.0) {
    fVar18 = *(float *)(param_2 + 0x30);
    fVar21 = *(float *)(param_2 + 0x34);
    fVar20 = *(float *)(param_2 + 0x38);
    uVar3 = 1;
    fVar19 = (float)NEON_fmadd(fVar5,fVar10,local_28[2] * -fVar6);
    fVar16 = 1.0 / fVar16;
    fVar22 = (float)NEON_fmsub(fVar20,fVar10,local_28[2] * fVar18);
    fVar23 = (float)NEON_fmsub(fVar5,fVar18,fVar6 * fVar20);
    uVar17 = NEON_fmsub(fVar21,local_28[2],fVar8 * fVar20);
    uVar14 = NEON_fmsub(local_28[1],fVar20,fVar5 * fVar21);
    uVar12 = NEON_fmsub(fVar18,uVar11,fVar19 * -fVar21);
    uVar15 = NEON_fmadd(fVar6,fVar8,fVar10 * -local_28[1]);
    uVar9 = NEON_fmsub(fVar18,fVar8,fVar10 * fVar21);
    uVar7 = NEON_fmadd(local_28[0],uVar17,fVar13 * fVar22);
    uVar17 = NEON_fmsub(fVar6,fVar21,local_28[1] * fVar18);
    uVar11 = NEON_fmadd(local_28[0],uVar14,fVar13 * fVar23);
    fVar5 = (float)NEON_fmsub(fVar20,uVar15,uVar12);
    fVar6 = (float)NEON_fmadd(fVar4,uVar9,uVar7);
    fVar4 = (float)NEON_fmadd(fVar4,uVar17,uVar11);
    *(float *)param_1 = fVar16 * fVar5;
    *(float *)(param_1 + 4) = fVar16 * fVar6;
    *(float *)(param_1 + 8) = fVar16 * fVar4;
  }
  else if (param_3) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined8 *)param_1 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


