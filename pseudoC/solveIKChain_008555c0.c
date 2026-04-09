// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveIKChain
// Entry Point: 008555c0
// Size: 900 bytes
// Signature: undefined __cdecl solveIKChain(Joint * param_1, uint param_2, uint param_3, uint param_4, float param_5, float * param_6)


/* CCDIKSolverUtil::solveIKChain(CCDIKSolverUtil::Joint*, unsigned int, unsigned int, unsigned int,
   float, float const*) */

uint CCDIKSolverUtil::solveIKChain
               (Joint *param_1,uint param_2,uint param_3,uint param_4,float param_5,float *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  Joint *pJVar8;
  Matrix4x4 *this;
  uint uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float local_b8;
  float fStack_b4;
  float local_b0;
  long local_a8;
  
  lVar4 = tpidr_el0;
  local_a8 = *(long *)(lVar4 + 0x28);
  uVar3 = param_2 - 2;
  fVar21 = *param_6;
  fVar22 = param_6[1];
  fVar23 = param_6[2];
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x50);
  if (1 < param_2) {
    pJVar8 = param_1 + 0x184;
    lVar6 = (ulong)param_2 - 1;
    do {
      Matrix4x4::mult3x4((Matrix4x4 *)pJVar8,(Matrix4x4 *)pJVar8 + -0xe4,(Matrix4x4 *)pJVar8 + -0x80
                        );
      pJVar8 = (Joint *)((Matrix4x4 *)pJVar8 + 0xe4);
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  uVar7 = uVar3;
  if (param_4 <= uVar3) {
    uVar7 = param_4;
  }
  if (param_3 != 0) {
    uVar9 = 0;
    uVar1 = param_2 - 1;
    do {
      fVar11 = *(float *)(param_1 + (ulong)uVar1 * 0xe4 + 0xd0) - fVar21;
      fVar16 = *(float *)(param_1 + (ulong)uVar1 * 0xe4 + 0xd4) - fVar22;
      uVar13 = NEON_fmadd(fVar16,fVar16,fVar11 * fVar11);
      fVar11 = *(float *)(param_1 + (ulong)uVar1 * 0xe4 + 0xd8) - fVar23;
      fVar11 = (float)NEON_fmadd(fVar11,fVar11,uVar13);
      if (fVar11 <= param_5 * param_5) break;
      fVar17 = 1.0;
      pJVar8 = param_1 + (ulong)uVar7 * 0xe4;
      fVar12 = *(float *)(param_1 + (ulong)uVar1 * 0xe4 + 0xd4) - *(float *)(pJVar8 + 0xd4);
      fVar11 = *(float *)(param_1 + (ulong)uVar1 * 0xe4 + 0xd0) - *(float *)(pJVar8 + 0xd0);
      fVar16 = *(float *)(param_1 + (ulong)uVar1 * 0xe4 + 0xd8) - *(float *)(pJVar8 + 0xd8);
      uVar13 = NEON_fmadd(fVar11,fVar11,fVar12 * fVar12);
      fVar19 = (float)NEON_fmadd(fVar16,fVar16,uVar13);
      fVar14 = 1.0;
      if (1e-06 < fVar19) {
        fVar17 = 1.0 / SQRT(fVar19);
      }
      fVar20 = fVar22 - *(float *)(pJVar8 + 0xd4);
      fVar18 = fVar21 - *(float *)(pJVar8 + 0xd0);
      fVar19 = fVar23 - *(float *)(pJVar8 + 0xd8);
      uVar13 = NEON_fmadd(fVar18,fVar18,fVar20 * fVar20);
      fVar26 = (float)NEON_fmadd(fVar19,fVar19,uVar13);
      if (1e-06 < fVar26) {
        fVar14 = 1.0 / SQRT(fVar26);
      }
      fVar12 = fVar12 * fVar17;
      fVar20 = fVar20 * fVar14;
      fVar11 = fVar11 * fVar17;
      fVar18 = fVar18 * fVar14;
      fVar16 = fVar16 * fVar17;
      fVar19 = fVar19 * fVar14;
      uVar13 = NEON_fmadd(fVar18,fVar11,fVar12 * fVar20);
      fVar14 = (float)NEON_fmadd(fVar19,fVar16,uVar13);
      if (fVar14 < 0.99999) {
        uVar10 = (ulong)uVar7;
        uVar25 = NEON_fmadd(fVar12,fVar19,fVar20 * -fVar16);
        fVar17 = (float)NEON_fmadd(fVar16,fVar18,fVar19 * -fVar11);
        uVar24 = NEON_fmadd(fVar11,fVar20,fVar18 * -fVar12);
        fVar16 = acosf(fVar14);
        fVar11 = *(float *)(param_1 + uVar10 * 0xe4 + 0xe0);
        uVar13 = NEON_fmadd(uVar25,*(undefined4 *)(param_1 + uVar10 * 0xe4 + 0xb0),
                            fVar17 * *(float *)(param_1 + uVar10 * 0xe4 + 0xb4));
        uVar15 = NEON_fmadd(uVar25,*(undefined4 *)(param_1 + uVar10 * 0xe4 + 0xa0),
                            fVar17 * *(float *)(param_1 + uVar10 * 0xe4 + 0xa4));
        fStack_b4 = (float)NEON_fmadd(uVar24,*(undefined4 *)(param_1 + uVar10 * 0xe4 + 0xb8),uVar13)
        ;
        local_b8 = (float)NEON_fmadd(uVar24,*(undefined4 *)(param_1 + uVar10 * 0xe4 + 0xa8),uVar15);
        uVar13 = NEON_fmadd(uVar25,*(undefined4 *)(param_1 + uVar10 * 0xe4 + 0xc0),
                            fVar17 * *(float *)(param_1 + uVar10 * 0xe4 + 0xc4));
        local_b0 = (float)NEON_fmadd(uVar24,*(undefined4 *)(param_1 + uVar10 * 0xe4 + 200),uVar13);
        uVar13 = NEON_fmadd(local_b8,local_b8,fStack_b4 * fStack_b4);
        fVar12 = (float)NEON_fmadd(local_b0,local_b0,uVar13);
        if (fVar16 <= fVar11 || fVar11 == 0.0) {
          fVar11 = fVar16;
        }
        fVar16 = 1.0;
        if (1e-06 < fVar12) {
          fVar16 = 1.0 / SQRT(fVar12);
        }
        local_b8 = local_b8 * fVar16;
        fStack_b4 = fStack_b4 * fVar16;
        local_b0 = local_b0 * fVar16;
        Joint::internalRotate(pJVar8,(Vector3 *)&local_b8,fVar11);
        if (uVar7 < param_2) {
          this = (Matrix4x4 *)(param_1 + uVar10 * 0xe4 + 0xa0);
          do {
            if (uVar10 == 0) {
              *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x28);
              *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x20);
              *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x38);
              *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x30);
              *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x48);
              *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x40);
              *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x58);
              *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x50);
            }
            else {
              Matrix4x4::mult3x4(this,this + -0xe4,this + -0x80);
            }
            uVar10 = uVar10 + 1;
            this = this + 0xe4;
          } while (param_2 != (uint)uVar10);
        }
      }
      uVar2 = uVar7 - 1;
      bVar5 = uVar7 != 0;
      uVar7 = uVar3;
      if (bVar5) {
        uVar7 = uVar2;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_3);
  }
  if (*(long *)(lVar4 + 0x28) == local_a8) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


