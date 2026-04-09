// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupClipping
// Entry Point: 00a12c7c
// Size: 1584 bytes
// Signature: undefined __cdecl setupClipping(TransformArgs * param_1, Camera * param_2, IDisplay * param_3, float param_4)


/* Renderer::setupClipping(TransformArgs&, Camera const*, IDisplay const*, float) */

void Renderer::setupClipping(TransformArgs *param_1,Camera *param_2,IDisplay *param_3,float param_4)

{
  Camera CVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float fStack_1c8;
  Camera local_1c4 [4];
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  float local_180;
  float fStack_17c;
  undefined4 local_178;
  undefined4 local_170;
  float local_16c;
  undefined4 uStack_168;
  undefined4 local_160;
  float fStack_15c;
  undefined4 local_158;
  undefined4 local_150;
  float local_14c;
  undefined4 uStack_148;
  float local_140 [16];
  float local_100 [2];
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulong local_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_a8;
  
  lVar2 = tpidr_el0;
  local_a8 = *(long *)(lVar2 + 0x28);
  CVar1 = param_2[0x16c];
  local_1c4[0] = CVar1;
  if (param_3 == (IDisplay *)0x0) {
    uStack_e8 = *(ulong *)(param_2 + 0xc0);
    local_f0 = *(undefined8 *)(param_2 + 0xb8);
    local_d8 = *(ulong *)(param_2 + 0xd0);
    local_e0 = *(undefined8 *)(param_2 + 200);
    uStack_c8 = *(ulong *)(param_2 + 0xe0);
    local_d0 = *(undefined8 *)(param_2 + 0xd8);
    local_b8 = *(undefined8 *)(param_2 + 0xf0);
    local_c0 = *(undefined8 *)(param_2 + 0xe8);
    Matrix4x4::orthonormalize3x3();
    Camera::getProjectionSides(param_2,param_4,&fStack_1c8,&local_1cc,&local_1d0,&local_1d4);
    fVar9 = (float)Camera::getNearClip();
    fVar10 = (float)Camera::getFarClip();
    goto LAB_00a13218;
  }
  iVar3 = (**(code **)(*(long *)param_3 + 0x38))(param_3);
  if (iVar3 == 0) {
    fVar9 = 1e+38;
    fVar10 = -1e+38;
joined_r0x00a12fb0:
    local_1d8 = 1e+38;
    local_1dc = -1e+38;
    fVar6 = -1e+38;
    fVar7 = 1e+38;
    fStack_1c8 = fVar7;
    fVar15 = fVar7;
    local_1cc = fVar6;
    fVar17 = fVar6;
    local_1d0 = fVar7;
    fVar18 = fVar7;
    local_1d4 = fVar6;
    fVar21 = fVar6;
    if (CVar1 != (Camera)0x0) goto LAB_00a12fb4;
LAB_00a12ffc:
    fVar13 = fVar10 - fVar9;
    fVar8 = (fVar7 - fVar15) / fVar13;
    fVar14 = (fVar6 - fVar17) / fVar13;
    fVar16 = (local_1d8 - fVar18) / fVar13;
    fVar17 = (float)NEON_fmsub(fVar14,fVar9,fVar17);
    fVar13 = (local_1dc - fVar21) / fVar13;
    fVar20 = (float)NEON_fmsub(fVar8,fVar9,fVar15);
    fVar15 = (fVar20 - fVar17) / (fVar14 - fVar8);
    fVar18 = (float)NEON_fmsub(fVar16,fVar9,fVar18);
    fVar17 = (float)NEON_fmsub(fVar13,fVar9,fVar21);
    fVar17 = (fVar18 - fVar17) / (fVar13 - fVar16);
    fVar21 = (float)NEON_fmadd(fVar8,fVar15,fVar20);
    fVar18 = (float)NEON_fmadd(fVar16,fVar17,fVar18);
    if (fVar17 <= fVar15) {
      fVar15 = fVar17;
    }
    local_1d4 = fVar10 - fVar15;
    fStack_1c8 = (fVar7 - fVar21) / local_1d4;
    local_1cc = (fVar6 - fVar21) / local_1d4;
    local_1d0 = (local_1d8 - fVar18) / local_1d4;
    local_1d4 = (local_1dc - fVar18) / local_1d4;
  }
  else {
    fVar10 = -1e+38;
    fVar9 = 1e+38;
    iVar5 = 0;
    do {
      uVar4 = (**(code **)(*(long *)param_3 + 0x40))(param_3,iVar5);
      if ((uVar4 & 1) != 0) {
        fVar6 = (float)Camera::getNearClip();
        fVar7 = (float)Camera::getFarClip();
        (**(code **)(*(long *)param_3 + 0x80))(param_3,iVar5,&local_f0);
        if (fVar6 + (float)uStack_e8 < fVar9) {
          fVar9 = fVar6 + (float)uStack_e8;
        }
        if (fVar10 < fVar7 + (float)uStack_e8) {
          fVar10 = fVar7 + (float)uStack_e8;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar3 != iVar5);
    if (iVar3 == 0) goto joined_r0x00a12fb0;
    fVar6 = -1e+38;
    fVar7 = 1e+38;
    iVar5 = 0;
    local_1dc = -1e+38;
    local_1d8 = 1e+38;
    fVar15 = fVar7;
    fVar17 = fVar6;
    fVar18 = fVar7;
    fVar21 = fVar6;
    do {
      uVar4 = (**(code **)(*(long *)param_3 + 0x40))(param_3,iVar5);
      if ((uVar4 & 1) != 0) {
        fVar8 = (float)(**(code **)(*(long *)param_3 + 0x68))(param_3,iVar5,0);
        Camera::getProjectionSides(param_2,fVar8,local_140,&local_180,(float *)&local_1c0,local_100)
        ;
        (**(code **)(*(long *)param_3 + 0x58))
                  (param_3,iVar5,local_1c4,local_140,&local_180,&local_1c0,local_100);
        (**(code **)(*(long *)param_3 + 0x80))(param_3,iVar5,&local_f0);
        if (local_1c4[0] == (Camera)0x0) {
          fVar13 = fVar9 - (float)uStack_e8;
          fVar8 = fVar10 - (float)uStack_e8;
          fVar20 = (float)NEON_fmadd(local_140[0],fVar13,(undefined4)local_f0);
          fVar22 = (float)NEON_fmadd(local_180,fVar13,(undefined4)local_f0);
          fVar23 = (float)NEON_fmadd((float)local_1c0,fVar13,local_f0._4_4_);
          fVar14 = (float)NEON_fmadd(local_100[0],fVar13,local_f0._4_4_);
          fVar13 = (float)NEON_fmadd(local_140[0],fVar8,(undefined4)local_f0);
          fVar16 = (float)NEON_fmadd(local_180,fVar8,(undefined4)local_f0);
          if (fVar20 < fVar15) {
            fVar15 = fVar20;
          }
          if (fVar17 < fVar22) {
            fVar17 = fVar22;
          }
          if (fVar23 < fVar18) {
            fVar18 = fVar23;
          }
          if (fVar21 < fVar14) {
            fVar21 = fVar14;
          }
          fVar14 = (float)NEON_fmadd((float)local_1c0,fVar8,local_f0._4_4_);
          fVar8 = (float)NEON_fmadd(local_100[0],fVar8,local_f0._4_4_);
          if (fVar13 < fVar7) {
            fVar7 = fVar13;
          }
          if (fVar6 < fVar16) {
            fVar6 = fVar16;
          }
          if (fVar14 < local_1d8) {
            local_1d8 = fVar14;
          }
          if (local_1dc < fVar8) {
            local_1dc = fVar8;
          }
        }
        else {
          if (local_140[0] < fVar15) {
            fVar15 = local_140[0];
          }
          if (fVar17 < local_180) {
            fVar17 = local_180;
          }
          if ((float)local_1c0 < fVar18) {
            fVar18 = (float)local_1c0;
          }
          if (fVar21 < local_100[0]) {
            fVar21 = local_100[0];
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar3 != iVar5);
    fStack_1c8 = fVar15;
    local_1cc = fVar17;
    local_1d0 = fVar18;
    local_1d4 = fVar21;
    if (local_1c4[0] == (Camera)0x0) goto LAB_00a12ffc;
LAB_00a12fb4:
    fVar18 = 0.0;
    fVar21 = 0.0;
    fVar15 = 0.0;
  }
  (**(code **)(*(long *)param_3 + 0x70))(param_3,local_100);
  (**(code **)(*(long *)param_3 + 0x78))(param_3,local_140);
  local_1c0 = CONCAT44(fVar18,fVar21);
  uStack_e8 = CONCAT44(uStack_e8._4_4_,local_f8);
  uStack_1b8 = CONCAT44(uStack_1b8._4_4_,fVar15);
  MathUtil::getHmdMatrix
            ((Vector3 *)&local_f0,(Matrix4x4 *)local_140,(Vector3 *)&local_1c0,
             (Matrix4x4 *)&local_180);
  uStack_1b8 = *(undefined8 *)(param_2 + 0xc0);
  local_1c0 = *(undefined8 *)(param_2 + 0xb8);
  local_1a8 = *(undefined8 *)(param_2 + 0xd0);
  local_1b0 = *(undefined8 *)(param_2 + 200);
  uStack_198 = *(undefined8 *)(param_2 + 0xe0);
  local_1a0 = *(undefined8 *)(param_2 + 0xd8);
  uStack_188 = *(undefined8 *)(param_2 + 0xf0);
  local_190 = *(undefined8 *)(param_2 + 0xe8);
  Matrix4x4::orthonormalize3x3();
  uVar19 = NEON_fmadd(local_180,(float)local_1c0,fStack_17c * (float)local_1b0);
  uVar24 = NEON_fmadd(local_180,local_1c0._4_4_,fStack_17c * local_1b0._4_4_);
  uVar11 = NEON_fmadd(local_180,(undefined4)uStack_1b8,fStack_17c * (float)local_1a8);
  uVar25 = NEON_fmadd(local_170,(float)local_1c0,(float)local_1b0 * local_16c);
  uVar27 = NEON_fmadd(local_170,local_1c0._4_4_,local_1b0._4_4_ * local_16c);
  uVar19 = NEON_fmadd(local_178,(undefined4)local_1a0,uVar19);
  uVar24 = NEON_fmadd(local_178,local_1a0._4_4_,uVar24);
  uVar12 = NEON_fmadd(local_178,(undefined4)uStack_198,uVar11);
  uVar11 = NEON_fmadd(uStack_168,(undefined4)local_1a0,uVar25);
  uVar25 = NEON_fmadd(uStack_168,local_1a0._4_4_,uVar27);
  local_f0 = CONCAT44(uVar24,uVar19);
  uStack_e8 = (ulong)uVar12;
  local_e0 = CONCAT44(uVar25,uVar11);
  uVar11 = NEON_fmadd(local_170,(undefined4)uStack_1b8,(float)local_1a8 * local_16c);
  uVar12 = NEON_fmadd(uStack_168,(undefined4)uStack_198,uVar11);
  uVar27 = NEON_fmadd(local_160,(float)local_1c0,(float)local_1b0 * fStack_15c);
  uVar26 = NEON_fmadd(local_160,local_1c0._4_4_,local_1b0._4_4_ * fStack_15c);
  uVar19 = NEON_fmadd(local_160,(undefined4)uStack_1b8,(float)local_1a8 * fStack_15c);
  local_d8 = (ulong)uVar12;
  uVar11 = NEON_fmadd(local_150,(float)local_1c0,(float)local_1b0 * local_14c);
  uVar25 = NEON_fmadd(local_150,local_1c0._4_4_,local_1b0._4_4_ * local_14c);
  uVar24 = NEON_fmadd(local_150,(undefined4)uStack_1b8,(float)local_1a8 * local_14c);
  uVar27 = NEON_fmadd(local_158,(undefined4)local_1a0,uVar27);
  uVar26 = NEON_fmadd(local_158,local_1a0._4_4_,uVar26);
  uVar12 = NEON_fmadd(local_158,(undefined4)uStack_198,uVar19);
  fVar6 = (float)NEON_fmadd(uStack_148,(undefined4)local_1a0,uVar11);
  fVar7 = (float)NEON_fmadd(uStack_148,local_1a0._4_4_,uVar25);
  fVar15 = (float)NEON_fmadd(uStack_148,(undefined4)uStack_198,uVar24);
  local_d0 = CONCAT44(uVar26,uVar27);
  uStack_c8 = (ulong)uVar12;
  local_c0 = CONCAT44(fVar7 + local_190._4_4_,(float)local_190 + fVar6);
  local_b8 = CONCAT44(0x3f800000,fVar15 + (float)uStack_188);
  CVar1 = local_1c4[0];
LAB_00a13218:
  if (CVar1 == (Camera)0x0) {
    RenderDeviceUtil::makePerspProjectionMatrix
              (fStack_1c8,local_1cc,local_1d0,local_1d4,fVar9,fVar10,(bool)param_2[0x16d],local_140)
    ;
  }
  else {
    RenderDeviceUtil::makeOrthoProjectionMatrix
              (fStack_1c8,local_1cc,local_1d0,local_1d4,fVar9,fVar10,local_140);
  }
  TransformArgs::setupInv
            (param_1,(Matrix4x4 *)&local_f0,(Matrix4x4 *)local_140,fVar9,fVar10,(Vector3 *)0x0);
  if (*(long *)(lVar2 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


