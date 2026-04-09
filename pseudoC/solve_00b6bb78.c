// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solve
// Entry Point: 00b6bb78
// Size: 428 bytes
// Signature: undefined __cdecl solve(Vector3 * param_1, Matrix4x4 * param_2, DualVector3 * param_3, bool param_4)


/* QuadricSolverUtil::solve(Vector3&, Matrix4x4 const&, DualVector3 const&, bool) */

undefined8
QuadricSolverUtil::solve(Vector3 *param_1,Matrix4x4 *param_2,DualVector3 *param_3,bool param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float local_28 [4];
  long local_18;
  
  lVar2 = tpidr_el0;
  local_18 = *(long *)(lVar2 + 0x28);
  fVar4 = *(float *)(param_3 + 8);
  fVar5 = *(float *)param_3;
  uVar7 = NEON_fmadd(fVar5,fVar5,fVar4 * fVar4);
  fVar6 = *(float *)(param_3 + 0x10);
  fVar8 = (float)NEON_fmadd(fVar6,fVar6,uVar7);
  if (fVar8 == 0.0) {
LAB_00b6bbb0:
    uVar3 = 0;
  }
  else {
    local_28[0] = *(float *)param_2;
    local_28[1] = *(float *)(param_2 + 0x14);
    local_28[2] = *(float *)(param_2 + 0x28);
    uVar10 = NEON_fmadd(fVar5,*(undefined4 *)(param_2 + 4),fVar4 * local_28[1]);
    uVar16 = NEON_fmadd(fVar5,local_28[0],fVar4 * *(float *)(param_2 + 0x10));
    uVar7 = NEON_fmadd(fVar5,*(undefined4 *)(param_2 + 8),fVar4 * *(float *)(param_2 + 0x18));
    fVar9 = (float)NEON_fmadd(fVar6,*(undefined4 *)(param_2 + 0x24),uVar10);
    fVar8 = 1.0 / fVar8;
    uVar10 = NEON_fmadd(fVar6,*(undefined4 *)(param_2 + 0x20),uVar16);
    uVar1 = 2;
    if (local_28[2] <= local_28[0] || local_28[1] >= local_28[2]) {
      uVar1 = 0;
    }
    fVar14 = local_28[(ulong)~(uint)(local_28[1] < local_28[2]) & (ulong)(local_28[0] < local_28[1])
                      | uVar1];
    uVar16 = NEON_fmadd(fVar6,local_28[2],uVar7);
    uVar7 = NEON_fmadd(fVar5,uVar10,fVar4 * fVar9);
    fVar11 = (float)NEON_fmadd(fVar6,uVar16,uVar7);
    fVar15 = (float)NEON_fmadd(fVar4,*(float *)(param_3 + 0x14),*(float *)(param_3 + 0xc) * -fVar6);
    fVar13 = (float)NEON_fmadd(fVar5,*(float *)(param_3 + 0xc),*(float *)(param_3 + 4) * -fVar4);
    fVar12 = (float)NEON_fmadd(fVar6,*(float *)(param_3 + 4),*(float *)(param_3 + 0x14) * -fVar5);
    fVar15 = fVar8 * fVar15;
    fVar13 = fVar8 * fVar13;
    fVar8 = fVar8 * fVar12;
    if (fVar14 * fVar14 * fVar14 * 3.0 <= fVar11 * 65536.0) {
      uVar7 = NEON_fmadd(fVar15,uVar10,fVar8 * fVar9);
      uVar10 = NEON_fmadd(*(undefined4 *)(param_2 + 0x30),fVar5,fVar4 * *(float *)(param_2 + 0x34));
      fVar9 = (float)NEON_fmadd(fVar13,uVar16,uVar7);
      fVar12 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x38),fVar6,uVar10);
      fVar11 = -(fVar9 + fVar12) / fVar11;
      fVar15 = fVar15 + fVar5 * fVar11;
      fVar8 = fVar8 + fVar4 * fVar11;
      fVar13 = fVar13 + fVar6 * fVar11;
    }
    else if (param_4) goto LAB_00b6bbb0;
    uVar3 = 1;
    *(float *)param_1 = fVar15;
    *(float *)(param_1 + 4) = fVar8;
    *(float *)(param_1 + 8) = fVar13;
  }
  if (*(long *)(lVar2 + 0x28) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


