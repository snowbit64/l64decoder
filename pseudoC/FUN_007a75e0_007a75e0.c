// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a75e0
// Entry Point: 007a75e0
// Size: 1040 bytes
// Signature: undefined FUN_007a75e0(void)


void FUN_007a75e0(long param_1,uint *param_2)

{
  long lVar1;
  byte bVar2;
  EntityRegistryManager *this;
  Camera *this_00;
  uint uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float in_s6;
  float in_s7;
  float fVar11;
  float fVar12;
  float extraout_s16;
  float extraout_s16_00;
  float extraout_s17;
  float extraout_s17_00;
  float fVar13;
  float extraout_s18;
  float extraout_s18_00;
  float fVar14;
  float extraout_s22;
  float extraout_s22_00;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  float local_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  Frustum aFStack_240 [240];
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  *(undefined *)(param_2 + 0x40) = 0;
  param_2[0x42] = 3;
  if ((*(byte *)(param_1 + 0x11) & 0x68) != 0) {
    this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    this_00 = (Camera *)EntityRegistryManager::getEntityById(this,*param_2);
    if ((this_00 != (Camera *)0x0) && ((char)this_00[0x11] < '\0')) {
      fVar11 = (float)param_2[4];
      fVar5 = (float)Camera::getNearClip();
      fVar6 = (float)Camera::getFarClip();
      RawTransformGroup::updateWorldTransformation();
      uStack_c8 = *(undefined8 *)(this_00 + 0xc0);
      local_d0 = *(undefined8 *)(this_00 + 0xb8);
      uStack_b8 = *(undefined8 *)(this_00 + 0xd0);
      local_c0 = *(undefined8 *)(this_00 + 200);
      uStack_a8 = *(undefined8 *)(this_00 + 0xe0);
      local_b0 = *(undefined8 *)(this_00 + 0xd8);
      local_98 = *(undefined8 *)(this_00 + 0xf0);
      local_a0 = *(undefined8 *)(this_00 + 0xe8);
      Matrix4x4::orthonormalize3x3();
      Camera::getProjectionSides(this_00,fVar11,&fStack_244,&local_248,&fStack_24c,&local_250);
      fVar11 = fVar6;
      if (this_00[0x16c] == (Camera)0x0) {
        RenderDeviceUtil::makePerspProjectionMatrix
                  (fStack_244,local_248,fStack_24c,local_250,fVar5,fVar6,false,&local_110);
        fVar10 = extraout_s16_00;
        fVar13 = extraout_s17_00;
        fVar14 = extraout_s18_00;
        fVar15 = extraout_s22_00;
      }
      else {
        RenderDeviceUtil::makeOrthoProjectionMatrix
                  (fStack_244,local_248,fStack_24c,local_250,fVar5,fVar6,&local_110);
        fVar10 = extraout_s16;
        fVar13 = extraout_s17;
        fVar14 = extraout_s18;
        fVar15 = extraout_s22;
      }
      fVar24 = -(float)uStack_c8;
      fVar16 = (float)NEON_fmadd(local_d0._4_4_,(undefined4)uStack_a8,local_b0._4_4_ * fVar24);
      fVar19 = (float)NEON_fmadd(local_c0._4_4_,(undefined4)uStack_a8,
                                 local_b0._4_4_ * -(float)uStack_b8);
      fVar22 = (float)NEON_fmadd(local_d0._4_4_,(float)uStack_b8,local_c0._4_4_ * fVar24);
      uVar9 = 0x3aa2425;
      uVar7 = NEON_fmadd((undefined4)local_d0,fVar19,fVar16 * -(float)local_c0);
      fVar12 = (float)NEON_fmadd((float)local_b0,fVar22,uVar7);
      fVar8 = ABS(fVar12);
      if (1e-36 < fVar8) {
        fVar12 = 1.0 / fVar12;
        in_s7 = (float)NEON_fmadd((float)local_c0,(undefined4)uStack_a8,
                                  (float)local_b0 * -(float)uStack_b8);
        fVar10 = (float)NEON_fmadd((undefined4)local_d0,(undefined4)uStack_a8,
                                   (float)local_b0 * fVar24);
        in_s6 = (float)NEON_fmadd((undefined4)local_d0,(float)uStack_b8,(float)local_c0 * fVar24);
        fVar5 = (float)NEON_fmadd((float)local_c0,local_b0._4_4_,(float)local_b0 * -local_c0._4_4_);
        fVar24 = -fVar12;
        fVar10 = fVar10 * fVar12;
        fVar8 = (float)NEON_fmadd((undefined4)local_d0,local_c0._4_4_,
                                  (float)local_c0 * -local_d0._4_4_);
        fVar14 = fVar19 * fVar12;
        in_s7 = in_s7 * fVar24;
        in_s6 = in_s6 * fVar24;
        fVar11 = (float)NEON_fmadd((undefined4)local_d0,local_b0._4_4_,
                                   (float)local_b0 * -local_d0._4_4_);
        fVar13 = fVar22 * fVar12;
        fVar15 = fVar16 * fVar24;
        fVar5 = fVar5 * fVar12;
        fVar8 = fVar8 * fVar12;
        fVar11 = fVar11 * fVar24;
        fVar16 = (float)NEON_fmadd((undefined4)local_a0,fVar15,fVar10 * local_a0._4_4_);
        fVar12 = (float)NEON_fmadd((undefined4)local_a0,fVar14,in_s7 * local_a0._4_4_);
        fVar19 = (float)NEON_fmadd((undefined4)local_a0,fVar13,in_s6 * local_a0._4_4_);
        local_250 = (float)NEON_fnmadd((undefined4)local_98,fVar11,-fVar16);
        uVar9 = NEON_fnmadd((undefined4)local_98,fVar5,-fVar12);
        fStack_24c = (float)NEON_fnmadd((undefined4)local_98,fVar8,-fVar19);
      }
      uVar17 = NEON_fmadd(fVar14,local_110,fVar15 * local_100);
      uVar20 = NEON_fmadd(fVar14,uStack_10c,fVar15 * fStack_fc);
      uVar23 = NEON_fmadd(fVar14,local_108,fVar15 * local_f8);
      uVar7 = NEON_fmadd(fVar14,uStack_104,fVar15 * fStack_f4);
      uVar18 = NEON_fmadd(fVar13,local_f0,uVar17);
      uVar25 = NEON_fmadd(in_s7,local_110,fVar10 * local_100);
      uVar17 = NEON_fmadd(in_s7,uStack_10c,fVar10 * fStack_fc);
      uVar21 = NEON_fmadd(fVar13,uStack_ec,uVar20);
      local_150 = NEON_fmadd(local_e0,0,uVar18);
      uVar23 = NEON_fmadd(fVar13,local_e8,uVar23);
      uVar18 = NEON_fmadd(fVar13,uStack_e4,uVar7);
      uVar20 = NEON_fmadd(in_s7,local_108,fVar10 * local_f8);
      uVar7 = NEON_fmadd(in_s7,uStack_104,fVar10 * fStack_f4);
      uVar25 = NEON_fmadd(in_s6,local_f0,uVar25);
      uVar17 = NEON_fmadd(in_s6,uStack_ec,uVar17);
      local_14c = NEON_fmadd(fStack_dc,0,uVar21);
      uVar20 = NEON_fmadd(in_s6,local_e8,uVar20);
      uVar7 = NEON_fmadd(in_s6,uStack_e4,uVar7);
      local_144 = NEON_fmadd(fStack_d4,0,uVar18);
      local_148 = NEON_fmadd(local_d8,0,uVar23);
      local_140 = NEON_fmadd(local_e0,0,uVar25);
      local_13c = NEON_fmadd(fStack_dc,0,uVar17);
      local_138 = NEON_fmadd(local_d8,0,uVar20);
      local_134 = NEON_fmadd(fStack_d4,0,uVar7);
      uVar17 = NEON_fmadd(fVar5,local_110,fVar11 * local_100);
      uVar20 = NEON_fmadd(fVar5,uStack_10c,fVar11 * fStack_fc);
      uVar23 = NEON_fmadd(fVar5,local_108,fVar11 * local_f8);
      uVar7 = NEON_fmadd(fVar5,uStack_104,fVar11 * fStack_f4);
      uVar17 = NEON_fmadd(fVar8,local_f0,uVar17);
      uVar18 = NEON_fmadd(uVar9,local_110,local_250 * local_100);
      uVar20 = NEON_fmadd(fVar8,uStack_ec,uVar20);
      uVar21 = NEON_fmadd(uVar9,uStack_10c,local_250 * fStack_fc);
      uVar23 = NEON_fmadd(fVar8,local_e8,uVar23);
      uVar25 = NEON_fmadd(uVar9,local_108,local_250 * local_f8);
      uVar7 = NEON_fmadd(fVar8,uStack_e4,uVar7);
      uVar9 = NEON_fmadd(uVar9,uStack_104,local_250 * fStack_f4);
      local_130 = NEON_fmadd(local_e0,0,uVar17);
      local_120 = (float)NEON_fmadd(fStack_24c,local_f0,uVar18);
      local_12c = NEON_fmadd(fStack_dc,0,uVar20);
      local_11c = (float)NEON_fmadd(fStack_24c,uStack_ec,uVar21);
      local_128 = NEON_fmadd(local_d8,0,uVar23);
      local_124 = NEON_fmadd(fStack_d4,0,uVar7);
      local_118 = (float)NEON_fmadd(fStack_24c,local_e8,uVar25);
      local_114 = (float)NEON_fmadd(fStack_24c,uStack_e4,uVar9);
      local_120 = local_e0 + local_120;
      local_11c = fStack_dc + local_11c;
      local_118 = local_d8 + local_118;
      local_114 = fStack_d4 + local_114;
      Frustum::Frustum(aFStack_240,(Matrix4x4 *)&local_150,fVar6);
      uVar3 = (uint)*(undefined8 *)(param_1 + 0x10);
      if ((uVar3 >> 0xb & 1) == 0) {
        if ((uVar3 >> 0xd & 1) == 0) {
          AudioSource::updateAudioSourceWorldBoundingVolume();
          lVar4 = *(long *)(param_1 + 0x260);
          param_1 = param_1 + 0x260;
        }
        else {
          LightSource::updateLightSourceWorldBoundingVolume();
          lVar4 = *(long *)(param_1 + 0x210);
          param_1 = param_1 + 0x210;
        }
      }
      else {
        GsShape::updateShapeWorldBoundingVolume();
        lVar4 = *(long *)(param_1 + 0x198);
        param_1 = param_1 + 0x198;
      }
      bVar2 = (**(code **)(lVar4 + 0x28))(param_1,aFStack_240);
      *(byte *)(param_2 + 0x40) = bVar2 & 1;
      param_2[0x42] = 3;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


