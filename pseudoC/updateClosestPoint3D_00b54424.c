// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateClosestPoint3D
// Entry Point: 00b54424
// Size: 744 bytes
// Signature: undefined __thiscall updateClosestPoint3D(CubicSpline * this, float * param_1, float * param_2, Vector3 * param_3, uint param_4, float param_5, float param_6, float param_7, Vector3 * param_8)


/* CubicSpline::updateClosestPoint3D(float&, float&, Vector3&, unsigned int, float, float, float,
   Vector3 const&) const */

undefined4 __thiscall
CubicSpline::updateClosestPoint3D
          (CubicSpline *this,float *param_1,float *param_2,Vector3 *param_3,uint param_4,
          float param_5,float param_6,float param_7,Vector3 *param_8)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 local_e0;
  undefined4 local_c8;
  float fStack_c4;
  undefined4 local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  long local_a8;
  
  fVar16 = param_6 - param_5;
  lVar5 = tpidr_el0;
  local_a8 = *(long *)(lVar5 + 0x28);
  iVar7 = 1;
  if (0.25 < fVar16) {
    do {
      fVar16 = fVar16 * 0.5;
      iVar7 = iVar7 << 1;
    } while (0.25 < fVar16);
    if (iVar7 == 0) {
      local_e0 = 0;
      goto LAB_00b546bc;
    }
  }
  uVar6 = param_4 * 3;
  iVar10 = 0;
  fVar17 = (float)NEON_fmadd(fVar16,0x3f000000,param_5);
  local_e0 = 0;
  do {
    iVar9 = 5;
    fVar15 = fVar17;
    do {
      (**(code **)(*(long *)this + 0x18))(fVar15,this,param_4,&local_b8,&local_c8);
      uVar12 = NEON_fmadd(local_c8,local_b8 - *(float *)param_8,
                          (fStack_b4 - *(float *)(param_8 + 4)) * fStack_c4);
      fVar13 = (float)NEON_fmadd(local_c0,local_b0 - *(float *)(param_8 + 8),uVar12);
      if (ABS(fVar13) <= 0.1) break;
      lVar8 = *(long *)(this + 0x18);
      fVar14 = 1.0 - fVar15;
      uVar20 = NEON_fmadd(fVar15,0x40400000,0xc0000000);
      iVar9 = iVar9 + -1;
      pfVar1 = (float *)(lVar8 + (ulong)uVar6 * 4);
      puVar2 = (undefined4 *)(lVar8 + (ulong)(uVar6 + 3) * 4);
      puVar3 = (undefined4 *)(lVar8 + (ulong)(uVar6 + 6) * 4);
      puVar4 = (undefined4 *)(lVar8 + (ulong)(uVar6 + 9) * 4);
      uVar12 = NEON_fmadd(local_c8,local_c8,fStack_c4 * fStack_c4);
      fVar11 = (float)NEON_fmadd(local_c0,local_c0,uVar12);
      uVar18 = NEON_fmadd(puVar2[1],uVar20,fVar14 * pfVar1[1]);
      uVar21 = NEON_fmadd(fVar15,0xc0400000,0x3f800000);
      uVar19 = NEON_fmadd(*puVar2,uVar20,fVar14 * *pfVar1);
      uVar12 = NEON_fmadd(puVar2[2],uVar20,fVar14 * pfVar1[2]);
      uVar18 = NEON_fmadd(puVar3[1],uVar21,uVar18);
      uVar19 = NEON_fmadd(*puVar3,uVar21,uVar19);
      uVar12 = NEON_fmadd(puVar3[2],uVar21,uVar12);
      fVar14 = (float)NEON_fmadd(puVar4[1],fVar15,uVar18);
      uVar19 = NEON_fmadd(*puVar4,fVar15,uVar19);
      uVar18 = NEON_fmadd(puVar4[2],fVar15,uVar12);
      uVar12 = NEON_fmadd(uVar19,local_b8 - *(float *)param_8,
                          (fStack_b4 - *(float *)(param_8 + 4)) * fVar14);
      fVar14 = (float)NEON_fmadd(uVar18,local_b0 - *(float *)(param_8 + 8),uVar12);
      fVar15 = fVar15 - fVar13 / (fVar11 + fVar14);
    } while (iVar9 != 0);
    if ((param_5 < fVar15) && (fVar15 < param_6)) {
      (**(code **)(*(long *)this + 0x18))(fVar15,this,param_4,&local_b8,&local_c8);
      uVar12 = NEON_fmadd(fStack_b4 - *(float *)(param_8 + 4),fStack_b4 - *(float *)(param_8 + 4),
                          (local_b8 - *(float *)param_8) * (local_b8 - *(float *)param_8));
      fVar13 = (float)NEON_fmadd(local_b0 - *(float *)(param_8 + 8),
                                 local_b0 - *(float *)(param_8 + 8),uVar12);
      if (fVar13 < *param_2) {
        *param_2 = fVar13;
        *param_1 = fVar15;
        *(ulong *)param_3 = CONCAT44(fStack_b4,local_b8);
        *(float *)(param_3 + 8) = local_b0;
        if (fVar13 < param_7 * param_7) {
          local_e0 = 1;
          break;
        }
        local_e0 = 1;
      }
    }
    fVar17 = fVar16 + fVar17;
    iVar10 = iVar10 + 1;
  } while (iVar10 != iVar7);
LAB_00b546bc:
  if (*(long *)(lVar5 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_e0;
}


