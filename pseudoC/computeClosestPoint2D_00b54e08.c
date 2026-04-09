// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeClosestPoint2D
// Entry Point: 00b54e08
// Size: 788 bytes
// Signature: undefined __thiscall computeClosestPoint2D(CubicSpline * this, float * param_1, uint param_2, float param_3, float param_4, float param_5, Vector2 * param_6)


/* CubicSpline::computeClosestPoint2D(float&, unsigned int, float, float, float, Vector2 const&)
   const */

float __thiscall
CubicSpline::computeClosestPoint2D
          (CubicSpline *this,float *param_1,uint param_2,float param_3,float param_4,float param_5,
          Vector2 *param_6)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float local_d0;
  undefined4 local_c8 [2];
  float local_c0;
  float local_b8 [2];
  float local_b0;
  long local_a8;
  
  lVar5 = tpidr_el0;
  local_a8 = *(long *)(lVar5 + 0x28);
  *param_1 = param_3;
  (**(code **)(*(long *)this + 0x18))(this,param_2,local_b8,local_c8);
  fVar17 = param_4 - param_3;
  local_d0 = (float)NEON_fmadd(local_b8[0] - *(float *)param_6,local_b8[0] - *(float *)param_6,
                               (local_b0 - *(float *)(param_6 + 4)) *
                               (local_b0 - *(float *)(param_6 + 4)));
  if (0.0001 < fVar17) {
    (**(code **)(*(long *)this + 0x18))(param_4,this,param_2,local_b8,local_c8);
    fVar11 = (float)NEON_fmadd(local_b8[0] - *(float *)param_6,local_b8[0] - *(float *)param_6,
                               (local_b0 - *(float *)(param_6 + 4)) *
                               (local_b0 - *(float *)(param_6 + 4)));
    if (fVar11 < local_d0) {
      *param_1 = param_4;
      local_d0 = fVar11;
    }
    iVar9 = 1;
    if (0.25 < fVar17) {
      do {
        fVar17 = fVar17 * 0.5;
        iVar9 = iVar9 << 1;
      } while (0.25 < fVar17);
      if (iVar9 == 0) goto LAB_00b550d0;
    }
    uVar6 = param_2 * 3;
    iVar10 = 0;
    fVar11 = (float)NEON_fmadd(fVar17,0x3f000000,param_3);
    do {
      iVar8 = 5;
      fVar16 = fVar11;
      do {
        (**(code **)(*(long *)this + 0x18))(fVar16,this,param_2,local_b8,local_c8);
        fVar12 = (float)NEON_fmadd(local_c8[0],local_b8[0] - *(float *)param_6,
                                   (local_b0 - *(float *)(param_6 + 4)) * local_c0);
        if (ABS(fVar12) <= param_5) break;
        lVar7 = *(long *)(this + 0x18);
        uVar18 = NEON_fmadd(fVar16,0x40400000,0xc0000000);
        iVar8 = iVar8 + -1;
        pfVar1 = (float *)(lVar7 + (ulong)uVar6 * 4);
        puVar2 = (undefined4 *)(lVar7 + (ulong)(uVar6 + 3) * 4);
        puVar3 = (undefined4 *)(lVar7 + (ulong)(uVar6 + 6) * 4);
        puVar4 = (undefined4 *)(lVar7 + (ulong)(uVar6 + 9) * 4);
        uVar15 = NEON_fmadd(fVar16,0xc0400000,0x3f800000);
        uVar13 = NEON_fmadd(puVar2[2],uVar18,(1.0 - fVar16) * pfVar1[2]);
        uVar18 = NEON_fmadd(*puVar2,uVar18,(1.0 - fVar16) * *pfVar1);
        uVar13 = NEON_fmadd(puVar3[2],uVar15,uVar13);
        uVar18 = NEON_fmadd(*puVar3,uVar15,uVar18);
        fVar14 = (float)NEON_fmadd(puVar4[2],fVar16,uVar13);
        uVar18 = NEON_fmadd(*puVar4,fVar16,uVar18);
        uVar18 = NEON_fmadd(uVar18,local_b8[0] - *(float *)param_6,
                            (local_b0 - *(float *)(param_6 + 4)) * fVar14);
        uVar18 = NEON_fmadd(local_c8[0],local_c8[0],uVar18);
        fVar14 = (float)NEON_fmadd(local_c0,local_c0,uVar18);
        fVar16 = fVar16 - fVar12 / fVar14;
      } while (iVar8 != 0);
      if ((param_3 < fVar16) && (fVar16 < param_4)) {
        (**(code **)(*(long *)this + 0x18))(fVar16,this,param_2,local_b8,local_c8);
        fVar12 = (float)NEON_fmadd(local_b8[0] - *(float *)param_6,local_b8[0] - *(float *)param_6,
                                   (local_b0 - *(float *)(param_6 + 4)) *
                                   (local_b0 - *(float *)(param_6 + 4)));
        if (fVar12 < local_d0) {
          *param_1 = fVar16;
          local_d0 = fVar12;
        }
      }
      fVar11 = fVar17 + fVar11;
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar9);
  }
LAB_00b550d0:
  if (*(long *)(lVar5 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_d0;
}


