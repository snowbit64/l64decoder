// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addCircle
// Entry Point: 009f16b8
// Size: 780 bytes
// Signature: undefined __thiscall addCircle(DeferredDebugRenderer * this, float * param_1, float param_2, float * param_3, float param_4, float * param_5, uint param_6, CATEGORY param_7)


/* DeferredDebugRenderer::addCircle(float const*, float, float const*, float, float const*, unsigned
   int, DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addCircle
          (DeferredDebugRenderer *this,float *param_1,float param_2,float *param_3,float param_4,
          float *param_5,uint param_6,CATEGORY param_7)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  if ((param_7 == 0x7ff) || ((*(uint *)(this + 0x2a0) & param_7) != 0)) {
    fVar21 = *param_3;
    fVar22 = param_3[1];
    fVar19 = 1.0;
    fVar23 = param_3[2];
    fVar7 = 0.0;
    fVar4 = 1.0;
    if (fVar21 == 0.0) {
      fVar7 = 1.0;
      fVar4 = 0.0;
    }
    fVar15 = (float)NEON_fmadd(fVar22,fVar4,fVar23 * -0.0);
    fVar10 = (float)NEON_fmadd(fVar23,fVar7,fVar4 * -fVar21);
    fVar7 = (float)NEON_fmadd(fVar21,0,fVar7 * -fVar22);
    uVar3 = NEON_fmadd(fVar15,fVar15,fVar10 * fVar10);
    fVar4 = (float)NEON_fmadd(fVar7,fVar7,uVar3);
    if (1e-06 < fVar4) {
      fVar19 = 1.0 / SQRT(fVar4);
    }
    fVar20 = param_1[2];
    fVar4 = *param_1;
    fVar24 = param_1[1];
    sincosf(param_4,&fStack_ac,&local_b0);
    if (param_6 == 0) {
      param_6 = (uint)(param_2 * 8.0);
      if (0x7f < (int)param_6) {
        param_6 = 0x80;
      }
      if ((int)param_6 < 9) {
        param_6 = 8;
      }
    }
    else if ((int)param_6 < 1) goto LAB_009f1988;
    uVar2 = 0;
    fVar5 = fVar10 * fVar19;
    fVar11 = fVar15 * fVar19;
    fVar8 = fVar7 * fVar19;
    uVar3 = NEON_fmadd(fVar22,fVar8,fVar5 * -fVar23);
    uVar18 = NEON_fmadd(fVar21,fVar5,fVar11 * -fVar22);
    uVar16 = NEON_fmadd(fVar23,fVar11,fVar8 * -fVar21);
    uVar12 = NEON_fmadd(uVar3,fStack_ac,local_b0 * fVar11);
    fVar15 = (float)NEON_fmadd(uVar3,local_b0,fStack_ac * -(fVar15 * fVar19));
    uVar13 = NEON_fmadd(uVar16,fStack_ac,local_b0 * fVar5);
    fVar10 = (float)NEON_fmadd(uVar16,local_b0,fStack_ac * -(fVar10 * fVar19));
    uVar3 = NEON_fmadd(uVar18,fStack_ac,local_b0 * fVar8);
    fVar7 = (float)NEON_fmadd(uVar18,local_b0,fStack_ac * -(fVar7 * fVar19));
    do {
      fVar8 = (6.283185 / (float)param_6) * (float)uVar2;
      sincosf(fVar8,&fStack_b4,&local_b8);
      fVar5 = fStack_b4;
      fVar19 = local_b8;
      sincosf(6.283185 / (float)param_6 + fVar8,&fStack_bc,&local_c0);
      fVar5 = fVar5 * param_2;
      fVar8 = fStack_bc * param_2;
      fVar19 = fVar19 * param_2;
      fVar11 = local_c0 * param_2;
      uVar9 = NEON_fmadd(fVar19,uVar12,fVar15 * fVar5);
      uVar14 = NEON_fmadd(fVar19,uVar13,fVar10 * fVar5);
      uVar18 = NEON_fmadd(fVar19,uVar3,fVar7 * fVar5);
      uVar6 = NEON_fmadd(fVar11,uVar12,fVar15 * fVar8);
      uVar17 = NEON_fmadd(fVar11,uVar13,fVar10 * fVar8);
      uVar16 = NEON_fmadd(fVar11,uVar3,fVar7 * fVar8);
      local_98 = (float)NEON_fmadd(fVar21,0,uVar9);
      fStack_94 = (float)NEON_fmadd(fVar22,0,uVar14);
      local_90 = (float)NEON_fmadd(fVar23,0,uVar18);
      local_a8 = (float)NEON_fmadd(fVar21,0,uVar6);
      fStack_a4 = (float)NEON_fmadd(fVar22,0,uVar17);
      local_a0 = (float)NEON_fmadd(fVar23,0,uVar16);
      local_98 = fVar4 + local_98;
      fStack_94 = fVar24 + fStack_94;
      local_90 = fVar20 + local_90;
      local_a8 = fVar4 + local_a8;
      fStack_a4 = fVar24 + fStack_a4;
      local_a0 = fVar20 + local_a0;
      addLine(this,&local_98,param_5,&local_a8,param_5,param_7);
      uVar2 = uVar2 + 1;
    } while (param_6 != uVar2);
  }
LAB_009f1988:
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


