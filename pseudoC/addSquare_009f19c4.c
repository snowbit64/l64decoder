// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSquare
// Entry Point: 009f19c4
// Size: 612 bytes
// Signature: undefined __thiscall addSquare(DeferredDebugRenderer * this, float * param_1, float param_2, float * param_3, float * param_4, CATEGORY param_5)


/* DeferredDebugRenderer::addSquare(float const*, float, float const*, float const*,
   DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addSquare
          (DeferredDebugRenderer *this,float *param_1,float param_2,float *param_3,float *param_4,
          CATEGORY param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float local_78;
  float fStack_74;
  float local_70;
  float local_68;
  float fStack_64;
  float local_60;
  float local_58;
  float fStack_54;
  float local_50;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_5 == 0x7ff) || ((*(uint *)(this + 0x2a0) & param_5) != 0)) {
    fVar3 = *param_3;
    fVar2 = param_3[1];
    fVar7 = 1.0;
    fVar4 = param_3[2];
    fVar6 = 0.0;
    fVar14 = 1.0;
    if (fVar3 == 0.0) {
      fVar6 = 1.0;
      fVar14 = 0.0;
    }
    fVar11 = (float)NEON_fmadd(fVar2,fVar14,fVar4 * -0.0);
    fVar14 = (float)NEON_fmadd(fVar4,fVar6,fVar14 * -fVar3);
    fVar6 = (float)NEON_fmadd(fVar3,0,fVar6 * -fVar2);
    uVar5 = NEON_fmadd(fVar11,fVar11,fVar14 * fVar14);
    local_78 = *param_1;
    fStack_74 = param_1[1];
    fVar16 = (float)NEON_fmadd(fVar6,fVar6,uVar5);
    local_70 = param_1[2];
    if (1e-06 < fVar16) {
      fVar7 = 1.0 / SQRT(fVar16);
    }
    fVar14 = fVar14 * fVar7;
    fVar6 = fVar6 * fVar7;
    fVar11 = fVar11 * fVar7;
    fVar21 = -param_2;
    fVar12 = (float)NEON_fmadd(fVar2,fVar6,fVar14 * -fVar4);
    fVar7 = (float)NEON_fmadd(fVar4,fVar11,fVar6 * -fVar3);
    fVar16 = (float)NEON_fmadd(fVar3,fVar14,fVar11 * -fVar2);
    fVar17 = fVar12 - fVar11 * 0.0;
    uVar5 = NEON_fmadd(fVar12,0,fVar11);
    fVar11 = fVar7 - fVar14 * 0.0;
    fVar12 = fVar16 - fVar6 * 0.0;
    uVar9 = NEON_fmadd(fVar7,0,fVar14);
    uVar10 = NEON_fmadd(fVar16,0,fVar6);
    fVar14 = fVar17 * fVar21;
    fVar17 = fVar17 * param_2;
    fVar6 = fVar11 * fVar21;
    fVar21 = fVar12 * fVar21;
    fVar11 = fVar11 * param_2;
    fVar12 = fVar12 * param_2;
    uVar22 = NEON_fmsub(param_2,uVar5,fVar14);
    uVar25 = NEON_fmsub(param_2,uVar5,fVar17);
    uVar23 = NEON_fmsub(param_2,uVar9,fVar6);
    uVar24 = NEON_fmsub(param_2,uVar10,fVar21);
    uVar18 = NEON_fmadd(param_2,uVar5,fVar17);
    uVar8 = NEON_fmadd(param_2,uVar5,fVar14);
    uVar13 = NEON_fmsub(param_2,uVar9,fVar11);
    uVar19 = NEON_fmadd(param_2,uVar9,fVar11);
    uVar9 = NEON_fmadd(param_2,uVar9,fVar6);
    uVar15 = NEON_fmsub(param_2,uVar10,fVar12);
    uVar20 = NEON_fmadd(param_2,uVar10,fVar12);
    uVar5 = NEON_fmadd(param_2,uVar10,fVar21);
    local_48 = (float)NEON_fmadd(fVar3,0,uVar22);
    fStack_44 = (float)NEON_fmadd(fVar2,0,uVar23);
    local_58 = (float)NEON_fmadd(fVar3,0,uVar25);
    local_68 = (float)NEON_fmadd(fVar3,0,uVar18);
    fVar3 = (float)NEON_fmadd(fVar3,0,uVar8);
    local_40 = (float)NEON_fmadd(fVar4,0,uVar24);
    fStack_54 = (float)NEON_fmadd(fVar2,0,uVar13);
    local_50 = (float)NEON_fmadd(fVar4,0,uVar15);
    fStack_64 = (float)NEON_fmadd(fVar2,0,uVar19);
    local_48 = local_78 + local_48;
    local_60 = (float)NEON_fmadd(fVar4,0,uVar20);
    fStack_44 = fStack_74 + fStack_44;
    fVar6 = (float)NEON_fmadd(fVar2,0,uVar9);
    local_40 = local_70 + local_40;
    fVar14 = (float)NEON_fmadd(fVar4,0,uVar5);
    local_58 = local_78 + local_58;
    fStack_54 = fStack_74 + fStack_54;
    local_50 = local_70 + local_50;
    local_68 = local_78 + local_68;
    fStack_64 = fStack_74 + fStack_64;
    local_78 = local_78 + fVar3;
    fStack_74 = fStack_74 + fVar6;
    local_60 = local_70 + local_60;
    local_70 = local_70 + fVar14;
    addLine(this,&local_48,param_4,&local_58,param_4,param_5);
    addLine(this,&local_58,param_4,&local_68,param_4,param_5);
    addLine(this,&local_68,param_4,&local_78,param_4,param_5);
    addLine(this,&local_78,param_4,&local_48,param_4,param_5);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


