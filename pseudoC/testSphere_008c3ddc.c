// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: testSphere
// Entry Point: 008c3ddc
// Size: 676 bytes
// Signature: undefined __thiscall testSphere(GsMaskedOcclusionCulling * this, float param_1, float param_2, float param_3, float param_4, float * param_5, float * param_6)


/* GsMaskedOcclusionCulling::testSphere(float, float, float, float, float const*, float const*)
   const */

void __thiscall
GsMaskedOcclusionCulling::testSphere
          (GsMaskedOcclusionCulling *this,float param_1,float param_2,float param_3,float param_4,
          float *param_5,float *param_6)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar8 = NEON_fmadd(param_1,param_5[2],param_5[6] * param_2);
  fVar9 = (float)NEON_fmadd(param_3,param_5[10],uVar8);
  fVar9 = fVar9 + param_5[0xe];
  if (-fVar9 <= param_4) {
    bVar2 = true;
  }
  else {
    bVar2 = true;
    uVar8 = NEON_fmadd(param_1,*param_5,param_5[4] * param_2);
    fVar10 = (float)NEON_fmadd(param_3,param_5[8],uVar8);
    fVar10 = fVar10 + param_5[0xc];
    fVar11 = param_4 * param_4;
    fVar14 = (float)NEON_fmadd(fVar10,fVar10,fVar9 * fVar9);
    if (fVar11 < fVar14) {
      uVar8 = NEON_fmadd(param_1,param_5[1],param_5[5] * param_2);
      fVar4 = (float)NEON_fmadd(param_3,param_5[9],uVar8);
      fVar4 = fVar4 + param_5[0xd];
      fVar5 = (float)NEON_fmadd(fVar4,fVar4,fVar9 * fVar9);
      if (fVar11 < fVar5) {
        fVar19 = param_6[7];
        fVar16 = param_4 / SQRT(fVar14);
        fVar7 = param_4 / SQRT(fVar5);
        fVar12 = SQRT(fVar14 - fVar11) / SQRT(fVar14);
        fVar5 = SQRT(fVar5 - fVar11) / SQRT(fVar5);
        fVar11 = (fVar16 * fVar9 + fVar10 * fVar12) * fVar12;
        fVar14 = (-fVar16 * fVar9 + fVar10 * fVar12) * fVar12;
        fVar20 = param_6[3];
        fVar13 = (fVar9 * fVar12 + -fVar16 * fVar10) * fVar12;
        fVar12 = (fVar9 * fVar12 + fVar16 * fVar10) * fVar12;
        fVar17 = param_6[0xf];
        fVar16 = (fVar7 * fVar9 + fVar4 * fVar5) * fVar5;
        fVar15 = (-fVar7 * fVar9 + fVar4 * fVar5) * fVar5;
        fVar21 = param_6[0xb];
        uVar18 = NEON_fmov(0x3f800000,4);
        fVar10 = (fVar9 * fVar5 + -fVar7 * fVar4) * fVar5;
        fVar5 = (fVar9 * fVar5 + fVar7 * fVar4) * fVar5;
        fVar7 = (float)((ulong)uVar18 >> 0x20);
        fVar11 = (param_6[4] * 0.0 + fVar11 * *param_6 + fVar13 * param_6[8] + param_6[0xc]) *
                 ((float)uVar18 / (fVar19 * 0.0 + fVar11 * fVar20 + fVar13 * fVar21 + fVar17));
        fVar4 = (param_6[4] * 0.0 + fVar14 * *param_6 + fVar12 * param_6[8] + param_6[0xc]) *
                (fVar7 / (fVar19 * 0.0 + fVar14 * fVar20 + fVar12 * fVar21 + fVar17));
        fVar14 = (fVar16 * param_6[5] + param_6[1] * 0.0 + fVar10 * param_6[9] + param_6[0xd]) *
                 ((float)uVar18 / (fVar16 * fVar19 + fVar20 * 0.0 + fVar10 * fVar21 + fVar17));
        fVar10 = (fVar15 * param_6[5] + param_6[1] * 0.0 + fVar5 * param_6[9] + param_6[0xd]) *
                 (fVar7 / (fVar15 * fVar19 + fVar20 * 0.0 + fVar5 * fVar21 + fVar17));
        Vector4::set((Vector4 *)&local_38,0.0,0.0,fVar9 + param_4,1.0);
        uVar6 = NEON_fcmgt(CONCAT44(fVar11,fVar14),CONCAT44(fVar4,fVar10),4);
        uVar8 = NEON_fmadd(local_38,fVar20,fVar19 * local_34);
        uVar8 = NEON_fmadd(local_30,fVar21,uVar8);
        fVar9 = fVar4;
        if ((uVar6 & 0x100000000) == 0) {
          fVar9 = fVar11;
          fVar11 = fVar4;
        }
        bVar2 = (uVar6 & 1) == 0;
        fVar4 = fVar14;
        if (bVar2) {
          fVar4 = fVar10;
        }
        uVar8 = NEON_fmadd(uStack_2c,fVar17,uVar8);
        if (bVar2) {
          fVar10 = fVar14;
        }
        iVar3 = (**(code **)(**(long **)(this + 0x10) + 0x40))(fVar9,fVar10,fVar11,fVar4,uVar8);
        bVar2 = iVar3 == 0;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


