// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unProject
// Entry Point: 00aa80ec
// Size: 700 bytes
// Signature: undefined __cdecl unProject(float param_1, float param_2, float param_3, float * param_4, float * param_5, float * param_6, float * param_7, float * param_8, float * param_9)


/* RenderDeviceUtil::unProject(float, float, float, float const*, float const*, float const*,
   float*, float*, float*) */

void RenderDeviceUtil::unProject
               (float param_1,float param_2,float param_3,float *param_4,float *param_5,
               float *param_6,float *param_7,float *param_8,float *param_9)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  float fVar39;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  float fStack_f8;
  float local_f4;
  float local_f0;
  float fStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  fVar3 = param_4[3];
  fVar5 = param_4[4];
  fVar23 = *param_5;
  fVar21 = param_5[1];
  fVar6 = param_4[5];
  fVar16 = param_4[6];
  fVar14 = param_4[7];
  fVar15 = param_4[8];
  fVar30 = param_5[4];
  fVar32 = param_5[5];
  fVar2 = *param_4;
  fVar20 = param_4[1];
  fVar4 = param_4[2];
  fVar39 = param_5[6];
  fVar22 = param_5[7];
  uVar17 = NEON_fmadd(fVar23,fVar2,fVar5 * fVar21);
  uVar34 = NEON_fmadd(fVar23,fVar20,fVar6 * fVar21);
  fVar26 = param_5[2];
  fVar8 = param_5[3];
  uVar28 = NEON_fmadd(fVar23,fVar4,fVar16 * fVar21);
  fVar7 = param_4[9];
  fVar19 = param_4[10];
  uVar24 = NEON_fmadd(fVar23,fVar3,fVar14 * fVar21);
  fVar23 = param_5[8];
  fVar12 = param_5[9];
  fVar21 = param_5[0xc];
  fVar36 = param_5[0xd];
  uVar37 = NEON_fmadd(fVar30,fVar2,fVar5 * fVar32);
  uVar9 = NEON_fmadd(fVar26,fVar15,uVar17);
  fVar18 = param_4[0xb];
  uVar35 = NEON_fmadd(fVar26,fVar7,uVar34);
  uVar17 = NEON_fmadd(fVar30,fVar20,fVar6 * fVar32);
  uVar34 = NEON_fmadd(fVar30,fVar4,fVar16 * fVar32);
  uVar29 = NEON_fmadd(fVar26,fVar19,uVar28);
  uVar25 = NEON_fmadd(fVar26,fVar18,uVar24);
  uVar27 = NEON_fmadd(fVar39,fVar15,uVar37);
  uVar24 = NEON_fmadd(fVar30,fVar3,fVar14 * fVar32);
  uVar37 = NEON_fmadd(fVar39,fVar7,uVar17);
  uVar10 = NEON_fmadd(fVar39,fVar19,uVar34);
  uVar28 = NEON_fmadd(fVar23,fVar2,fVar5 * fVar12);
  uVar17 = NEON_fmadd(fVar23,fVar20,fVar6 * fVar12);
  uVar31 = NEON_fmadd(fVar39,fVar18,uVar24);
  uVar34 = NEON_fmadd(fVar21,fVar2,fVar5 * fVar36);
  fVar26 = param_5[10];
  fVar2 = param_5[0xb];
  uVar33 = NEON_fmadd(fVar23,fVar4,fVar16 * fVar12);
  uVar11 = NEON_fmadd(fVar23,fVar3,fVar14 * fVar12);
  uVar13 = NEON_fmadd(fVar26,fVar7,uVar17);
  uVar38 = NEON_fmadd(fVar26,fVar15,uVar28);
  fVar5 = param_5[0xe];
  fVar23 = param_5[0xf];
  uVar28 = NEON_fmadd(fVar21,fVar20,fVar6 * fVar36);
  uVar24 = NEON_fmadd(fVar21,fVar4,fVar16 * fVar36);
  uVar17 = NEON_fmadd(fVar21,fVar3,fVar14 * fVar36);
  uVar33 = NEON_fmadd(fVar26,fVar19,uVar33);
  fVar21 = param_4[0xe];
  fVar3 = param_4[0xf];
  uVar34 = NEON_fmadd(fVar5,fVar15,uVar34);
  uVar11 = NEON_fmadd(fVar26,fVar18,uVar11);
  fVar4 = param_4[0xc];
  fVar6 = param_4[0xd];
  uVar28 = NEON_fmadd(fVar5,fVar7,uVar28);
  uVar24 = NEON_fmadd(fVar5,fVar19,uVar24);
  local_c0 = NEON_fmadd(fVar8,fVar21,uVar29);
  uVar17 = NEON_fmadd(fVar5,fVar18,uVar17);
  local_c8 = NEON_fmadd(fVar8,fVar4,uVar9);
  uStack_c4 = NEON_fmadd(fVar8,fVar6,uVar35);
  uStack_bc = NEON_fmadd(fVar8,fVar3,uVar25);
  local_b8 = NEON_fmadd(fVar22,fVar4,uVar27);
  local_98 = NEON_fmadd(fVar23,fVar4,uVar34);
  uStack_94 = NEON_fmadd(fVar23,fVar6,uVar28);
  uStack_8c = NEON_fmadd(fVar23,fVar3,uVar17);
  uStack_b4 = NEON_fmadd(fVar22,fVar6,uVar37);
  local_b0 = NEON_fmadd(fVar22,fVar21,uVar10);
  uStack_ac = NEON_fmadd(fVar22,fVar3,uVar31);
  local_a8 = NEON_fmadd(fVar2,fVar4,uVar38);
  uStack_a4 = NEON_fmadd(fVar2,fVar6,uVar13);
  local_a0 = NEON_fmadd(fVar2,fVar21,uVar33);
  uStack_9c = NEON_fmadd(fVar2,fVar3,uVar11);
  local_90 = NEON_fmadd(fVar23,fVar21,uVar24);
  Matrix4x4::invert((Matrix4x4 *)&local_108,(Matrix4x4 *)&local_c8);
  fVar21 = ((param_2 - param_6[1]) + (param_2 - param_6[1])) / param_6[3] + -1.0;
  fVar3 = ((param_1 - *param_6) + (param_1 - *param_6)) / param_6[2] + -1.0;
  uVar17 = NEON_fmadd(fVar3,local_fc,fVar21 * fStack_ec);
  fVar4 = (float)NEON_fmadd(param_3,local_dc,uVar17);
  uVar17 = NEON_fmadd(fVar3,local_100,fVar21 * local_f0);
  fVar2 = (float)NEON_fmadd(param_3,local_e0,uVar17);
  fVar4 = 1.0 / (local_cc + fVar4);
  uVar17 = NEON_fmadd(fVar3,local_108,fStack_f8 * fVar21);
  uVar34 = NEON_fmadd(fVar3,uStack_104,fVar21 * local_f4);
  fVar3 = (float)NEON_fmadd(param_3,local_e8,uVar17);
  fVar21 = (float)NEON_fmadd(param_3,uStack_e4,uVar34);
  *param_7 = (local_d8 + fVar3) * fVar4;
  *param_8 = (fStack_d4 + fVar21) * fVar4;
  *param_9 = (local_d0 + fVar2) * fVar4;
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


