// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getClosestPoints
// Entry Point: 00b561bc
// Size: 1580 bytes
// Signature: undefined __thiscall getClosestPoints(GJKDistance * this, ClosestPointsInput * param_1, float * param_2, Vector3 * param_3, Vector3 * param_4)


/* GJKDistance::getClosestPoints(GJKDistance::ClosestPointsInput const&, float&, Vector3&, Vector3&)
    */

void __thiscall
GJKDistance::getClosestPoints
          (GJKDistance *this,ClosestPointsInput *param_1,float *param_2,Vector3 *param_3,
          Vector3 *param_4)

{
  float *pfVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  undefined4 uVar36;
  float fVar37;
  undefined8 uVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 local_168;
  float local_160;
  undefined8 local_158;
  float local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 uStack_140;
  float local_138;
  float fStack_134;
  float local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  float local_f8;
  float local_f4;
  float fStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  long local_a8;
  
  lVar2 = tpidr_el0;
  local_a8 = *(long *)(lVar2 + 0x28);
  *param_2 = 3.402823e+38;
  uVar7 = *(undefined8 *)param_1;
  uVar21 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 8);
  fVar9 = *(float *)(param_1 + 0x38);
  fVar16 = *(float *)(param_1 + 0x78);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar29 = *(undefined4 *)(param_1 + 0x28);
  uVar35 = *(undefined8 *)(param_1 + 0x60);
  fVar6 = *(float *)(param_1 + 0x18);
  uVar38 = *(undefined8 *)(param_1 + 0x40);
  fVar23 = (fVar9 + fVar16) * 0.5;
  uVar32 = *(undefined4 *)(param_1 + 0x68);
  uVar36 = *(undefined4 *)(param_1 + 0x48);
  fVar43 = (float)*(undefined8 *)(param_1 + 0x30);
  fVar12 = (float)*(undefined8 *)(param_1 + 0x70);
  fVar45 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
  fVar19 = (fVar43 + fVar12) * 0.5;
  fVar22 = (fVar45 + fVar15) * 0.5;
  uVar28 = *(undefined8 *)(param_1 + 0x50);
  fVar25 = *(float *)(param_1 + 0x58);
  Matrix4x4::invert3x4((Matrix4x4 *)&local_108,(Matrix4x4 *)param_1);
  Matrix4x4::invert3x4((Matrix4x4 *)&local_148,(Matrix4x4 *)(param_1 + 0x40));
  fVar13 = *(float *)(param_1 + 0xa4);
  fVar10 = *(float *)(param_1 + 0xa8);
  local_150 = 0.0;
  local_158 = 0x3f80000000000000;
  SimplexSolver::reset();
  iVar4 = 0;
  fVar33 = 1e+18;
  fVar34 = 1.0;
  fVar11 = 0.0;
  fVar14 = 0.0;
  do {
    fVar17 = -fVar34;
    uVar30 = NEON_fmsub(fVar11,local_108,local_f8 * fVar17);
    fVar37 = 0.0;
    uVar20 = NEON_fmsub(fVar11,uStack_104,local_f4 * fVar17);
    fVar18 = (float)NEON_fmsub(fVar14,local_e4,uVar20);
    uVar20 = NEON_fmsub(fVar11,local_100,fStack_f0 * fVar17);
    fVar27 = 0.0;
    fVar17 = (float)NEON_fmsub(fVar14,local_e8,uVar30);
    fVar24 = (float)NEON_fmsub(fVar14,local_e0,uVar20);
    uVar20 = NEON_fmadd(fVar17,fVar17,fVar18 * fVar18);
    fVar26 = (float)NEON_fmadd(fVar24,fVar24,uVar20);
    fVar31 = 1.0;
    if (0.0001 <= fVar26) {
      fVar27 = 1.0 / SQRT(fVar26);
      fVar31 = fVar17 * fVar27;
      fVar37 = fVar18 * fVar27;
      fVar27 = fVar24 * fVar27;
    }
    fVar26 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar24 = 0.0;
    if (*(uint *)(param_1 + 0x80) != 0) {
      fVar24 = 0.0;
      fVar18 = 0.0;
      fVar17 = 0.0;
      uVar3 = 0;
      fVar40 = -3.402823e+38;
      do {
        pfVar1 = (float *)(*(long *)(param_1 + 0x88) + (uVar3 & 0xffffffff) * 4);
        uVar20 = NEON_fmadd(fVar31,*pfVar1,fVar37 * pfVar1[1]);
        fVar41 = (float)NEON_fmadd(fVar27,pfVar1[2],uVar20);
        if (fVar40 < fVar41) {
          fVar40 = fVar41;
          fVar17 = *pfVar1;
          fVar18 = pfVar1[1];
          fVar24 = pfVar1[2];
        }
        uVar3 = uVar3 + 3;
      } while ((ulong)*(uint *)(param_1 + 0x80) * 3 != uVar3);
    }
    uVar20 = NEON_fmadd(fVar11,local_144,fVar34 * fStack_134);
    uVar30 = NEON_fmadd(fVar11,local_148,fVar34 * local_138);
    uVar39 = NEON_fmadd(fVar11,uStack_140,fVar34 * local_130);
    fVar27 = (float)NEON_fmadd(fVar14,uStack_124,uVar20);
    fVar31 = (float)NEON_fmadd(fVar14,local_128,uVar30);
    fVar37 = (float)NEON_fmadd(fVar14,local_120,uVar39);
    fVar41 = 0.0;
    uVar20 = NEON_fmadd(fVar31,fVar31,fVar27 * fVar27);
    fVar42 = (float)NEON_fmadd(fVar37,fVar37,uVar20);
    fVar40 = 1.0;
    if (0.0001 <= fVar42) {
      fVar26 = 1.0 / SQRT(fVar42);
      fVar40 = fVar31 * fVar26;
      fVar41 = fVar27 * fVar26;
      fVar26 = fVar37 * fVar26;
    }
    if (*(uint *)(param_1 + 0x90) == 0) {
      fVar27 = 0.0;
      fVar31 = 0.0;
      fVar37 = 0.0;
    }
    else {
      fVar37 = 0.0;
      fVar31 = 0.0;
      fVar27 = 0.0;
      uVar3 = 0;
      fVar42 = -3.402823e+38;
      do {
        pfVar1 = (float *)(*(long *)(param_1 + 0x98) + (uVar3 & 0xffffffff) * 4);
        uVar20 = NEON_fmadd(fVar40,*pfVar1,fVar41 * pfVar1[1]);
        fVar44 = (float)NEON_fmadd(fVar26,pfVar1[2],uVar20);
        if (fVar42 < fVar44) {
          fVar42 = fVar44;
          fVar27 = *pfVar1;
          fVar31 = pfVar1[1];
          fVar37 = pfVar1[2];
        }
        uVar3 = uVar3 + 3;
      } while ((ulong)*(uint *)(param_1 + 0x90) * 3 != uVar3);
    }
    uVar20 = NEON_fmadd(fVar17,uVar5,fVar6 * fVar18);
    fVar26 = (fVar43 - fVar19) +
             (float)uVar8 * fVar18 + (float)uVar7 * fVar17 + (float)uVar21 * fVar24;
    fVar17 = (fVar45 - fVar22) +
             (float)((ulong)uVar8 >> 0x20) * fVar18 + (float)((ulong)uVar7 >> 0x20) * fVar17 +
             (float)((ulong)uVar21 >> 0x20) * fVar24;
    local_b8 = CONCAT44(fVar17,fVar26);
    fVar18 = (fVar12 - fVar19) +
             (float)uVar28 * fVar31 + (float)uVar38 * fVar27 + (float)uVar35 * fVar37;
    fVar40 = (fVar15 - fVar22) +
             (float)((ulong)uVar28 >> 0x20) * fVar31 + (float)((ulong)uVar38 >> 0x20) * fVar27 +
             (float)((ulong)uVar35 >> 0x20) * fVar37;
    local_c8 = CONCAT44(fVar40,fVar18);
    uVar30 = NEON_fmadd(fVar27,uVar36,fVar25 * fVar31);
    local_b0 = (float)NEON_fmadd(fVar24,uVar29,uVar20);
    local_c0 = (float)NEON_fmadd(fVar37,uVar32,uVar30);
    fVar26 = fVar26 - fVar18;
    fVar17 = fVar17 - fVar40;
    local_168 = CONCAT44(fVar17,fVar26);
    local_b0 = (fVar9 - fVar23) + local_b0;
    local_c0 = (fVar16 - fVar23) + local_c0;
    local_160 = local_b0 - local_c0;
    fVar34 = (float)NEON_fmadd(fVar14,local_160,fVar34 * fVar17 + fVar11 * fVar26);
    if ((((0.0 < fVar34) && (fVar33 * *(float *)(param_1 + 0xa0) < fVar34 * fVar34)) ||
        (uVar3 = SimplexSolver::inSimplex((SimplexSolver *)this,(Vector3 *)&local_168),
        (uVar3 & 1) != 0)) || (fVar33 - fVar34 <= fVar33 * 1e-06)) {
LAB_00b5666c:
      SimplexSolver::compute_points((SimplexSolver *)this,(Vector3 *)&local_b8,(Vector3 *)&local_c8)
      ;
      fVar14 = (float)local_b8 - (float)local_c8;
      fVar11 = local_b8._4_4_ - local_c8._4_4_;
      uVar5 = NEON_fmadd((float)local_158,(float)local_158,local_158._4_4_ * local_158._4_4_);
      fVar6 = (float)NEON_fmadd(local_150,local_150,uVar5);
      fVar34 = local_b0 - local_c0;
      if (fVar6 <= 1.421085e-14) {
        if (0.0001 <= fVar6) goto LAB_00b56794;
        fVar33 = 0.0;
        local_b8 = local_c8;
        local_b0 = local_c0;
      }
      else {
        fVar9 = fVar13 / SQRT(fVar33);
        fVar43 = fVar10 / SQRT(fVar33);
        local_b0 = local_b0 - fVar9 * local_150;
        fVar45 = 1.0 / SQRT(fVar6);
        local_b8 = CONCAT44(local_b8._4_4_ - fVar9 * local_158._4_4_,
                            (float)local_b8 - fVar9 * (float)local_158);
        local_c0 = local_c0 + fVar43 * local_150;
        fVar33 = SQRT(fVar6) - (fVar13 + fVar10);
        local_c8 = CONCAT44(local_c8._4_4_ + fVar43 * local_158._4_4_,
                            (float)local_c8 + fVar43 * (float)local_158);
        fVar14 = fVar14 * fVar45;
        fVar11 = fVar11 * fVar45;
        fVar34 = fVar34 * fVar45;
      }
      *(float *)param_3 = fVar14;
      *(float *)(param_3 + 4) = fVar11;
      *(float *)(param_3 + 8) = fVar34;
      *param_2 = fVar33;
      *(undefined8 *)param_4 = local_c8;
      *(float *)(param_4 + 8) = local_c0;
      *(ulong *)param_4 =
           CONCAT44(fVar22 + (float)((ulong)*(undefined8 *)param_4 >> 0x20),
                    fVar19 + (float)*(undefined8 *)param_4);
      *(float *)(param_4 + 8) = fVar23 + *(float *)(param_4 + 8);
      goto LAB_00b56794;
    }
    SimplexSolver::addVertex
              ((SimplexSolver *)this,(Vector3 *)&local_168,(Vector3 *)&local_b8,(Vector3 *)&local_c8
              );
    uVar3 = SimplexSolver::closest((SimplexSolver *)this,(Vector3 *)&local_158);
    if ((uVar3 & 1) == 0) goto LAB_00b5666c;
    uVar20 = NEON_fmadd((float)local_158,(float)local_158,local_158._4_4_ * local_158._4_4_);
    fVar34 = (float)NEON_fmadd(local_150,local_150,uVar20);
    if (fVar34 < 1e-06) goto LAB_00b5666c;
    if (fVar33 - fVar34 <= fVar33 * 1.192093e-07) {
      SimplexSolver::backup_closest((SimplexSolver *)this,(Vector3 *)&local_158);
      uVar5 = NEON_fmadd((float)local_158,(float)local_158,local_158._4_4_ * local_158._4_4_);
      fVar33 = (float)NEON_fmadd(local_150,local_150,uVar5);
      goto LAB_00b5666c;
    }
    if (iVar4 == 0x3e9) goto LAB_00b56794;
    if (*(int *)this == 4) {
      SimplexSolver::backup_closest((SimplexSolver *)this,(Vector3 *)&local_158);
LAB_00b56794:
      if (*(long *)(lVar2 + 0x28) == local_a8) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar4 = iVar4 + 1;
    fVar33 = fVar34;
    fVar34 = local_158._4_4_;
    fVar11 = (float)local_158;
    fVar14 = local_150;
  } while( true );
}


