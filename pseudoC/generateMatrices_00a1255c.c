// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateMatrices
// Entry Point: 00a1255c
// Size: 740 bytes
// Signature: undefined __cdecl generateMatrices(Camera * param_1, IDisplay * param_2, uint param_3, float param_4, float * param_5, float * param_6, Matrix4x4 * param_7, Matrix4x4 * param_8)


/* Renderer::generateMatrices(Camera const*, IDisplay const*, unsigned int, float, float&, float&,
   Matrix4x4&, Matrix4x4&) */

void Renderer::generateMatrices
               (Camera *param_1,IDisplay *param_2,uint param_3,float param_4,float *param_5,
               float *param_6,Matrix4x4 *param_7,Matrix4x4 *param_8)

{
  Camera CVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float local_19c;
  float fStack_198;
  Camera local_194 [4];
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_170;
  float fStack_16c;
  undefined4 local_168;
  undefined4 local_160;
  float local_15c;
  undefined4 uStack_158;
  undefined4 local_150;
  float fStack_14c;
  undefined4 local_148;
  undefined4 local_140;
  float fStack_13c;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  Matrix4x4 aMStack_120 [64];
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  uStack_c8 = *(undefined8 *)(param_1 + 0xc0);
  local_d0 = *(undefined8 *)(param_1 + 0xb8);
  local_b8 = *(undefined8 *)(param_1 + 0xd0);
  local_c0 = *(undefined8 *)(param_1 + 200);
  uStack_a8 = *(undefined8 *)(param_1 + 0xe0);
  local_b0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_98 = *(undefined8 *)(param_1 + 0xf0);
  local_a0 = *(undefined8 *)(param_1 + 0xe8);
  Matrix4x4::orthonormalize3x3();
  CVar1 = param_1[0x16c];
  local_194[0] = CVar1;
  if (param_2 == (IDisplay *)0x0) {
    Camera::getProjectionSides
              (param_1,param_4,(float *)&local_180,(float *)&local_190,&fStack_198,&local_19c);
    *(undefined8 *)(param_7 + 8) = uStack_c8;
    *(undefined8 *)param_7 = local_d0;
    *(undefined8 *)(param_7 + 0x18) = local_b8;
    *(undefined8 *)(param_7 + 0x10) = local_c0;
    *(undefined8 *)(param_7 + 0x28) = uStack_a8;
    *(undefined8 *)(param_7 + 0x20) = local_b0;
    *(undefined8 *)(param_7 + 0x38) = uStack_98;
    *(undefined8 *)(param_7 + 0x30) = local_a0;
  }
  else {
    (**(code **)(*(long *)param_2 + 0x70))(param_2,&local_e0);
    (**(code **)(*(long *)param_2 + 0x78))(param_2,aMStack_120);
    (**(code **)(*(long *)param_2 + 0x80))(param_2,param_3,&local_130);
    local_180 = local_e0;
    local_178 = local_d8;
    local_190 = local_130;
    local_188 = local_128;
    MathUtil::getHmdMatrix
              ((Vector3 *)&local_180,aMStack_120,(Vector3 *)&local_190,(Matrix4x4 *)&local_170);
    uVar7 = NEON_fmadd(local_170,(undefined4)local_d0,fStack_16c * (float)local_c0);
    uVar9 = NEON_fmadd(local_170,local_d0._4_4_,fStack_16c * local_c0._4_4_);
    uVar6 = NEON_fmadd(local_170,(undefined4)uStack_c8,fStack_16c * (float)local_b8);
    uVar7 = NEON_fmadd(local_168,(undefined4)local_b0,uVar7);
    uVar9 = NEON_fmadd(local_168,local_b0._4_4_,uVar9);
    uVar6 = NEON_fmadd(local_168,(undefined4)uStack_a8,uVar6);
    uVar11 = NEON_fmadd(local_160,(undefined4)local_d0,(float)local_c0 * local_15c);
    uVar12 = NEON_fmadd(local_160,local_d0._4_4_,local_c0._4_4_ * local_15c);
    *(undefined4 *)param_7 = uVar7;
    *(undefined4 *)(param_7 + 4) = uVar9;
    *(undefined4 *)(param_7 + 8) = uVar6;
    uVar6 = NEON_fmadd(uStack_158,(undefined4)local_b0,uVar11);
    uVar7 = NEON_fmadd(uStack_158,local_b0._4_4_,uVar12);
    uVar9 = NEON_fmadd(local_160,(undefined4)uStack_c8,(float)local_b8 * local_15c);
    *(undefined4 *)(param_7 + 0x10) = uVar6;
    *(undefined4 *)(param_7 + 0x14) = uVar7;
    uVar9 = NEON_fmadd(uStack_158,(undefined4)uStack_a8,uVar9);
    uVar10 = NEON_fmadd(local_150,(undefined4)local_d0,(float)local_c0 * fStack_14c);
    uVar12 = NEON_fmadd(local_150,(undefined4)uStack_c8,(float)local_b8 * fStack_14c);
    *(undefined4 *)(param_7 + 0xc) = 0;
    uVar6 = NEON_fmadd(local_140,(undefined4)local_d0,(float)local_c0 * fStack_13c);
    uVar8 = NEON_fmadd(local_150,local_d0._4_4_,local_c0._4_4_ * fStack_14c);
    uVar11 = NEON_fmadd(local_140,local_d0._4_4_,local_c0._4_4_ * fStack_13c);
    uVar7 = NEON_fmadd(local_140,(undefined4)uStack_c8,(float)local_b8 * fStack_13c);
    *(undefined4 *)(param_7 + 0x18) = uVar9;
    uVar9 = NEON_fmadd(local_148,(undefined4)local_b0,uVar10);
    uVar10 = NEON_fmadd(local_148,(undefined4)uStack_a8,uVar12);
    *(undefined4 *)(param_7 + 0x1c) = 0;
    uVar12 = NEON_fmadd(local_148,local_b0._4_4_,uVar8);
    fVar3 = (float)NEON_fmadd(local_138,(undefined4)local_b0,uVar6);
    fVar5 = (float)NEON_fmadd(local_138,local_b0._4_4_,uVar11);
    fVar4 = (float)NEON_fmadd(local_138,(undefined4)uStack_a8,uVar7);
    *(undefined4 *)(param_7 + 0x28) = uVar10;
    *(undefined4 *)(param_7 + 0x20) = uVar9;
    *(undefined4 *)(param_7 + 0x24) = uVar12;
    *(undefined4 *)(param_7 + 0x2c) = 0;
    *(undefined4 *)(param_7 + 0x3c) = 0x3f800000;
    *(float *)(param_7 + 0x30) = (float)local_a0 + fVar3;
    *(float *)(param_7 + 0x34) = fVar5 + local_a0._4_4_;
    *(float *)(param_7 + 0x38) = fVar4 + (float)uStack_98;
    Camera::getProjectionSides
              (param_1,param_4,(float *)&local_180,(float *)&local_190,&fStack_198,&local_19c);
    (**(code **)(*(long *)param_2 + 0x58))
              (param_2,param_3,local_194,&local_180,&local_190,&fStack_198,&local_19c);
    CVar1 = local_194[0];
  }
  if (CVar1 == (Camera)0x0) {
    RenderDeviceUtil::makePerspProjectionMatrix
              ((float)local_180,(float)local_190,fStack_198,local_19c,*param_5,*param_6,
               (bool)param_1[0x16d],(float *)param_8);
  }
  else {
    RenderDeviceUtil::makeOrthoProjectionMatrix
              ((float)local_180,(float)local_190,fStack_198,local_19c,*param_5,*param_6,
               (float *)param_8);
  }
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


