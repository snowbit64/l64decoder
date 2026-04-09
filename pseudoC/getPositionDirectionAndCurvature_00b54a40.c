// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPositionDirectionAndCurvature
// Entry Point: 00b54a40
// Size: 404 bytes
// Signature: undefined __thiscall getPositionDirectionAndCurvature(CubicSpline * this, float param_1, Vector3 * param_2, Vector3 * param_3, Vector3 * param_4)


/* CubicSpline::getPositionDirectionAndCurvature(float, Vector3&, Vector3&, Vector3&) const */

void __thiscall
CubicSpline::getPositionDirectionAndCurvature
          (CubicSpline *this,float param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float local_60;
  uint local_5c;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  getKnotAndParam(this,&local_5c,&local_60,param_1);
  evaluate(this,local_5c,local_60,param_2,param_3);
  lVar6 = *(long *)(this + 0x18);
  local_5c = local_5c * 3;
  fVar10 = *(float *)(param_3 + 4);
  pfVar1 = (float *)(lVar6 + (ulong)local_5c * 4);
  fVar14 = 1.0 - local_60;
  puVar2 = (undefined4 *)(lVar6 + (ulong)(local_5c + 3) * 4);
  uVar7 = NEON_fmadd(local_60,0x40400000,0xc0000000);
  puVar3 = (undefined4 *)(lVar6 + (ulong)(local_5c + 6) * 4);
  uVar8 = NEON_fmadd(*(undefined4 *)param_3,*(undefined4 *)param_3,fVar10 * fVar10);
  uVar15 = NEON_fmadd(local_60,0xc0400000,0x3f800000);
  puVar4 = (undefined4 *)(lVar6 + (ulong)(local_5c + 9) * 4);
  fVar13 = *(float *)(param_3 + 8);
  uVar11 = NEON_fmadd(puVar2[1],uVar7,fVar14 * pfVar1[1]);
  uVar16 = NEON_fmadd(puVar2[2],uVar7,fVar14 * pfVar1[2]);
  fVar9 = (float)NEON_fmadd(fVar13,fVar13,uVar8);
  uVar8 = NEON_fmadd(puVar3[1],uVar15,uVar11);
  uVar18 = *puVar4;
  uVar11 = NEON_fmadd(puVar3[2],uVar15,uVar16);
  fVar12 = (float)NEON_fmadd(puVar4[1],local_60,uVar8);
  fVar17 = (float)NEON_fmadd(puVar4[2],local_60,uVar11);
  uVar8 = *puVar3;
  fVar13 = (float)NEON_fmadd(fVar10,fVar17,fVar12 * -fVar13);
  uVar7 = NEON_fmadd(*puVar2,uVar7,fVar14 * *pfVar1);
  *(float *)param_4 = fVar13;
  uVar7 = NEON_fmadd(uVar8,uVar15,uVar7);
  fVar10 = (float)NEON_fmadd(uVar18,local_60,uVar7);
  fVar14 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 8),fVar10,fVar17 * -*(float *)param_3);
  *(float *)(param_4 + 4) = fVar14;
  fVar9 = 1.0 / (fVar9 * SQRT(fVar9));
  fVar10 = (float)NEON_fmadd(*(undefined4 *)param_3,fVar12,fVar10 * -*(float *)(param_3 + 4));
  *(float *)param_4 = fVar13 * fVar9;
  *(float *)(param_4 + 4) = fVar14 * fVar9;
  *(float *)(param_4 + 8) = fVar9 * fVar10;
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


