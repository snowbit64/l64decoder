// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addArc
// Entry Point: 009f4604
// Size: 608 bytes
// Signature: undefined __thiscall addArc(DeferredDebugRenderer * this, float * param_1, float * param_2, float * param_3, float param_4, float param_5, float param_6, float param_7, float param_8, bool param_9, float * param_10, CATEGORY param_11)


/* DeferredDebugRenderer::addArc(float const*, float const*, float const*, float, float, float,
   float, float, bool, float const*, DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addArc
          (DeferredDebugRenderer *this,float *param_1,float *param_2,float *param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8,bool param_9,float *param_10,
          CATEGORY param_11)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fStack_c8;
  float local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  fVar15 = param_3[1];
  fVar17 = param_3[2];
  fVar12 = *param_3;
  uVar11 = NEON_fmadd(param_2[1],fVar17,fVar15 * -param_2[2]);
  uVar16 = NEON_fmadd(*param_2,fVar15,fVar12 * -param_2[1]);
  uVar3 = (uint)ABS((param_7 - param_6) / param_8);
  uVar5 = NEON_fmadd(param_2[2],fVar12,fVar17 * -*param_2);
  fVar8 = *param_1;
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  fVar6 = param_1[1];
  fVar13 = param_1[2];
  sincosf(param_6,&fStack_bc,&local_c0);
  local_c0 = local_c0 * param_4;
  fStack_bc = fStack_bc * param_5;
  uVar9 = NEON_fmadd(fVar12,local_c0,fVar8);
  uVar10 = NEON_fmadd(fVar15,local_c0,fVar6);
  uVar7 = NEON_fmadd(fVar17,local_c0,fVar13);
  local_a0 = NEON_fmadd(uVar16,fStack_bc,uVar7);
  uVar7 = NEON_fmadd(uVar11,fStack_bc,uVar9);
  uVar9 = NEON_fmadd(uVar5,fStack_bc,uVar10);
  local_a8 = CONCAT44(uVar9,uVar7);
  if (param_9) {
    addLine(this,param_1,param_10,(float *)&local_a8,param_10,param_11);
  }
  uVar4 = 1;
  do {
    fVar14 = *param_1;
    fVar18 = param_1[1];
    fVar13 = param_1[2];
    sincosf(((param_7 - param_6) * (float)uVar4) / (float)(ulong)uVar3 + param_6,&local_c4,
            &fStack_c8);
    fVar8 = fStack_c8 * param_4;
    fVar6 = local_c4 * param_5;
    uVar7 = NEON_fmadd(fVar12,fVar8,fVar14);
    uVar9 = NEON_fmadd(fVar15,fVar8,fVar18);
    local_b8 = (float)NEON_fmadd(uVar11,fVar6,uVar7);
    uVar7 = NEON_fmadd(fVar17,fVar8,fVar13);
    uStack_b4 = NEON_fmadd(uVar5,fVar6,uVar9);
    local_b0 = NEON_fmadd(uVar16,fVar6,uVar7);
    addLine(this,(float *)&local_a8,param_10,&local_b8,param_10,param_11);
    local_a8 = CONCAT44(uStack_b4,local_b8);
    uVar1 = (int)uVar4 + 1;
    uVar4 = (ulong)uVar1;
    local_a0 = local_b0;
  } while (uVar1 <= uVar3);
  if (param_9) {
    addLine(this,param_1,param_10,(float *)&local_a8,param_10,param_11);
  }
  if (*(long *)(lVar2 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


