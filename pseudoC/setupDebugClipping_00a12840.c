// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupDebugClipping
// Entry Point: 00a12840
// Size: 872 bytes
// Signature: undefined __cdecl setupDebugClipping(Camera * param_1, IDisplay * param_2, uint param_3, float param_4)


/* Renderer::setupDebugClipping(Camera const*, IDisplay const*, unsigned int, float) */

void Renderer::setupDebugClipping(Camera *param_1,IDisplay *param_2,uint param_3,float param_4)

{
  long lVar1;
  uint in_w3;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 in_s2;
  float in_s3;
  float in_s4;
  float in_s5;
  float in_s6;
  float in_s7;
  float fVar7;
  float extraout_s16;
  float extraout_s17;
  float fVar8;
  float extraout_s18;
  float fVar9;
  undefined4 uVar10;
  float extraout_s22;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fStack_150;
  float local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  undefined4 local_c8;
  float local_c4;
  float fStack_c0;
  float local_b8;
  float local_b4;
  float fStack_b0;
  float local_a8;
  float local_a4;
  undefined4 uStack_a0;
  undefined4 local_98;
  float fStack_94;
  undefined4 local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)Camera::getFarClip();
  local_14c = 0.1;
  if (fVar2 * 0.999 < 0.1) {
    local_14c = (float)Camera::getFarClip();
    local_14c = local_14c * 0.999;
  }
  fVar3 = (float)Camera::getFarClip();
  fVar2 = 150.0;
  if (fVar3 < 150.0) {
    fVar2 = (float)Camera::getFarClip();
  }
  fStack_150 = fVar2;
  generateMatrices((Camera *)param_2,(IDisplay *)(ulong)param_3,in_w3,param_4,&local_14c,&fStack_150
                   ,(Matrix4x4 *)&local_c8,(Matrix4x4 *)&local_108);
  fStack_c0 = -fStack_c0;
  fVar12 = (float)NEON_fmadd(local_c4,uStack_a0,local_a4 * fStack_c0);
  fVar15 = (float)NEON_fmadd(local_b4,uStack_a0,local_a4 * -fStack_b0);
  fVar17 = (float)NEON_fmadd(local_c4,fStack_b0,local_b4 * fStack_c0);
  uVar6 = 0x3aa2425;
  uVar4 = NEON_fmadd(local_c8,fVar15,fVar12 * -local_b8);
  fVar7 = (float)NEON_fmadd(local_a8,fVar17,uVar4);
  fVar5 = ABS(fVar7);
  fVar3 = extraout_s16;
  fVar8 = extraout_s17;
  fVar9 = extraout_s18;
  fVar11 = extraout_s22;
  if (1e-36 < fVar5) {
    fVar7 = 1.0 / fVar7;
    in_s7 = (float)NEON_fmadd(local_b8,uStack_a0,local_a8 * -fStack_b0);
    fVar3 = (float)NEON_fmadd(local_c8,uStack_a0,local_a8 * fStack_c0);
    in_s6 = (float)NEON_fmadd(local_c8,fStack_b0,local_b8 * fStack_c0);
    in_s4 = (float)NEON_fmadd(local_b8,local_a4,local_a8 * -local_b4);
    fVar19 = -fVar7;
    fVar3 = fVar3 * fVar7;
    fVar5 = (float)NEON_fmadd(local_c8,local_b4,local_b8 * -local_c4);
    fVar9 = fVar15 * fVar7;
    in_s7 = in_s7 * fVar19;
    in_s6 = in_s6 * fVar19;
    in_s5 = (float)NEON_fmadd(local_c8,local_a4,local_a8 * -local_c4);
    fVar8 = fVar17 * fVar7;
    fVar11 = fVar12 * fVar19;
    in_s4 = in_s4 * fVar7;
    fVar5 = fVar5 * fVar7;
    in_s5 = in_s5 * fVar19;
    fVar12 = (float)NEON_fmadd(local_98,fVar11,fVar3 * fStack_94);
    fVar7 = (float)NEON_fmadd(local_98,fVar9,in_s7 * fStack_94);
    fVar15 = (float)NEON_fmadd(local_98,fVar8,in_s6 * fStack_94);
    in_s3 = (float)NEON_fnmadd(local_90,in_s5,-fVar12);
    uVar6 = NEON_fnmadd(local_90,in_s4,-fVar7);
    in_s2 = NEON_fnmadd(local_90,fVar5,-fVar15);
  }
  uVar13 = NEON_fmadd(fVar9,local_108,fVar11 * local_f8);
  uVar16 = NEON_fmadd(fVar9,uStack_104,fVar11 * fStack_f4);
  uVar18 = NEON_fmadd(fVar9,local_100,fVar11 * local_f0);
  uVar4 = NEON_fmadd(fVar9,uStack_fc,fVar11 * fStack_ec);
  uVar14 = NEON_fmadd(fVar8,local_e8,uVar13);
  uVar16 = NEON_fmadd(fVar8,uStack_e4,uVar16);
  uVar20 = NEON_fmadd(in_s7,local_108,fVar3 * local_f8);
  uVar13 = NEON_fmadd(in_s7,uStack_104,fVar3 * fStack_f4);
  local_148 = NEON_fmadd(local_d8,0,uVar14);
  uStack_144 = NEON_fmadd(fStack_d4,0,uVar16);
  uVar18 = NEON_fmadd(fVar8,local_e0,uVar18);
  uVar14 = NEON_fmadd(fVar8,uStack_dc,uVar4);
  uVar16 = NEON_fmadd(in_s7,local_100,fVar3 * local_f0);
  uVar4 = NEON_fmadd(in_s7,uStack_fc,fVar3 * fStack_ec);
  uVar20 = NEON_fmadd(in_s6,local_e8,uVar20);
  uVar13 = NEON_fmadd(in_s6,uStack_e4,uVar13);
  uVar16 = NEON_fmadd(in_s6,local_e0,uVar16);
  uVar4 = NEON_fmadd(in_s6,uStack_dc,uVar4);
  local_140 = NEON_fmadd(local_d0,0,uVar18);
  uStack_13c = NEON_fmadd(fStack_cc,0,uVar14);
  local_138 = NEON_fmadd(local_d8,0,uVar20);
  uStack_134 = NEON_fmadd(fStack_d4,0,uVar13);
  local_130 = NEON_fmadd(local_d0,0,uVar16);
  uStack_12c = NEON_fmadd(fStack_cc,0,uVar4);
  uVar13 = NEON_fmadd(in_s4,local_108,in_s5 * local_f8);
  uVar16 = NEON_fmadd(in_s4,uStack_104,in_s5 * fStack_f4);
  uVar20 = NEON_fmadd(in_s4,local_100,in_s5 * local_f0);
  uVar4 = NEON_fmadd(in_s4,uStack_fc,in_s5 * fStack_ec);
  uVar13 = NEON_fmadd(fVar5,local_e8,uVar13);
  uVar14 = NEON_fmadd(uVar6,local_108,in_s3 * local_f8);
  uVar16 = NEON_fmadd(fVar5,uStack_e4,uVar16);
  uVar18 = NEON_fmadd(uVar6,uStack_104,in_s3 * fStack_f4);
  uVar20 = NEON_fmadd(fVar5,local_e0,uVar20);
  uVar10 = NEON_fmadd(uVar6,local_100,in_s3 * local_f0);
  uVar4 = NEON_fmadd(fVar5,uStack_dc,uVar4);
  uVar6 = NEON_fmadd(uVar6,uStack_fc,in_s3 * fStack_ec);
  local_128 = NEON_fmadd(local_d8,0,uVar13);
  local_118 = (float)NEON_fmadd(in_s2,local_e8,uVar14);
  uStack_124 = NEON_fmadd(fStack_d4,0,uVar16);
  fStack_114 = (float)NEON_fmadd(in_s2,uStack_e4,uVar18);
  local_120 = NEON_fmadd(local_d0,0,uVar20);
  local_110 = (float)NEON_fmadd(in_s2,local_e0,uVar10);
  uStack_11c = NEON_fmadd(fStack_cc,0,uVar4);
  fStack_10c = (float)NEON_fmadd(in_s2,uStack_dc,uVar6);
  local_118 = local_d8 + local_118;
  fStack_114 = fStack_d4 + fStack_114;
  local_110 = local_d0 + local_110;
  fStack_10c = fStack_cc + fStack_10c;
  DeferredDebugRenderer::setPhysicsCullingMatrices
            ((DeferredDebugRenderer *)(param_1 + 0x1758),(Matrix4x4 *)&local_c8,
             (Matrix4x4 *)&local_148,fVar2);
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


