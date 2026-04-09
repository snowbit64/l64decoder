// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007be1b0
// Entry Point: 007be1b0
// Size: 1856 bytes
// Signature: undefined FUN_007be1b0(void)


void FUN_007be1b0(uint *param_1)

{
  BaseTerrain *this;
  uint uVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  Bt2ScenegraphPhysicsContext *pBVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float local_178;
  float fStack_174;
  undefined **local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_138;
  float local_134;
  float local_130;
  undefined4 local_128 [2];
  undefined4 local_120;
  float local_118;
  float local_110;
  undefined4 local_108;
  undefined4 local_100;
  float local_f8;
  float local_f0;
  float local_e8;
  float fStack_e4;
  undefined4 local_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  undefined4 local_c0;
  float fStack_bc;
  undefined8 local_b8;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  uint uStack_a4;
  float local_a0;
  long local_98;
  
  lVar4 = tpidr_el0;
  local_98 = *(long *)(lVar4 + 0x28);
  lVar7 = ReflectionUtil::getEntity(*param_1,0x80,"getAIHelperCollisionBoxInfo","terrain");
  lVar8 = ReflectionUtil::getEntity(param_1[4],0x20,"getAIHelperCollisionBoxInfo","directionNode");
  fVar10 = 0.0;
  bVar5 = false;
  if ((lVar7 == 0) || (lVar8 == 0)) goto LAB_007be890;
  RawTransformGroup::updateWorldTransformation();
  fVar10 = (float)param_1[0xc];
  fVar14 = (float)param_1[8];
  fVar34 = *(float *)(lVar8 + 0xd8);
  fVar11 = (float)param_1[0x10];
  fVar35 = *(float *)(lVar8 + 0xe0);
  RawTransformGroup::updateWorldTransformation();
  uVar13 = *(undefined8 *)(lVar8 + 200);
  uVar20 = *(undefined8 *)(lVar8 + 0xb8);
  uVar15 = NEON_fmadd(fVar14,*(undefined4 *)(lVar8 + 0xc0),fVar10 * *(float *)(lVar8 + 0xd0));
  uVar21 = *(undefined8 *)(lVar8 + 0xd8);
  fVar16 = (float)NEON_fmadd(fVar11,*(undefined4 *)(lVar8 + 0xe0),uVar15);
  uVar22 = *(undefined8 *)(lVar8 + 0xe8);
  fVar24 = *(float *)(lVar8 + 0xf0);
  local_a8 = (float)param_1[0x14];
  uStack_a4 = param_1[0x18];
  local_a0 = (float)param_1[0x1c];
  fVar34 = atan2f(fVar34,fVar35);
  local_ac = 0x3f800000;
  uStack_d0 = 0;
  local_d8 = 0x3f80000000000000;
  local_b8 = CONCAT44((float)((ulong)uVar22 >> 0x20) +
                      (float)((ulong)uVar13 >> 0x20) * fVar10 +
                      (float)((ulong)uVar20 >> 0x20) * fVar14 +
                      (float)((ulong)uVar21 >> 0x20) * fVar11,
                      (float)uVar22 +
                      (float)uVar13 * fVar10 + (float)uVar20 * fVar14 + (float)uVar21 * fVar11);
  local_b0 = fVar24 + fVar16;
  sincosf(fVar34,&fStack_174,&local_178);
  fVar10 = 0.0;
  uVar1 = param_1[0x20];
  uVar2 = param_1[0x24];
  cVar3 = *(char *)(param_1 + 0x28);
  local_c0 = NEON_fmadd(fStack_174,0,local_178);
  local_170 = &PTR__IPhysicsEntityReport_00fdbac8;
  local_c8 = fStack_174 + local_178 * 0.0;
  fStack_c4 = (float)NEON_fmadd(fStack_174,0,local_178 * 0.0);
  local_e8 = local_178 + fStack_174 * -0.0;
  fStack_e4 = (float)NEON_fmadd(local_178,0,fStack_174 * -0.0);
  local_e0 = NEON_fnmsub(local_178,0,fStack_174);
  fStack_dc = fStack_e4;
  fStack_bc = fStack_c4;
  ScenegraphPhysicsContextManager::getInstance();
  pBVar9 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  bVar5 = true;
  iVar6 = Bt2ScenegraphPhysicsContext::overlapBoxShapes
                    (pBVar9,(Matrix4x4 *)&local_e8,(Vector3 *)&local_a8,
                     (IPhysicsEntityReport *)&local_170,uVar1,true,true,true,0,
                     (TransformGroup **)0x0,0);
  if (iVar6 != 0) goto LAB_007be890;
  this = (BaseTerrain *)(lVar7 + 0x170);
  RawTransformGroup::updateWorldTransformation();
  Matrix4x4::invert3x4((Matrix4x4 *)local_128,(Matrix4x4 *)(lVar7 + 0xb8));
  fVar10 = 0.0;
  uVar15 = NEON_fmadd(local_e8,local_128[0],fStack_e4 * local_118);
  uVar39 = NEON_fmadd((undefined4)local_d8,local_128[0],local_118 * local_d8._4_4_);
  fVar47 = (float)NEON_fmadd(local_e0,local_108,uVar15);
  fVar32 = (float)NEON_fmadd((undefined4)uStack_d0,local_108,uVar39);
  uVar28 = NEON_fmadd((undefined4)local_d8,local_120,local_110 * local_d8._4_4_);
  uVar39 = NEON_fmadd(local_e8,local_120,fStack_e4 * local_110);
  fVar32 = fVar32 * 0.0;
  uVar40 = NEON_fmadd(local_c8,local_128[0],local_118 * fStack_c4);
  uVar15 = NEON_fmadd((undefined4)local_b8,local_128[0],local_118 * local_b8._4_4_);
  fVar35 = (float)NEON_fmadd((undefined4)uStack_d0,local_100,uVar28);
  uVar28 = NEON_fmadd(local_c8,local_120,local_110 * fStack_c4);
  fVar11 = (float)NEON_fmadd(local_b0,local_108,uVar15);
  fVar48 = (float)NEON_fmadd(local_c0,local_108,uVar40);
  uVar40 = NEON_fmadd(local_a8 + -3.0,fVar47,fVar32);
  uVar15 = NEON_fmadd((undefined4)local_b8,local_120,local_110 * local_b8._4_4_);
  fVar44 = (float)NEON_fmadd(local_c0,local_100,uVar28);
  fVar11 = local_f8 + fVar11;
  local_138 = (float)NEON_fmadd(local_a0,fVar48,uVar40);
  fVar41 = (float)NEON_fmadd(local_e0,local_100,uVar39);
  fVar35 = fVar35 * 0.0;
  fVar19 = (float)NEON_fmadd(local_b0,local_100,uVar15);
  fVar34 = *(float *)(lVar7 + 0x218);
  local_138 = fVar11 + local_138;
  uVar15 = NEON_fmadd(local_a8 + -3.0,fVar41,fVar35);
  fVar19 = fVar19 + local_f0;
  local_130 = (float)NEON_fmadd(local_a0,fVar44,uVar15);
  uVar39 = NEON_fmadd(3.0 - local_a8,fVar47,fVar32);
  uVar15 = NEON_fmadd(3.0 - local_a8,fVar41,fVar35);
  local_130 = fVar19 + local_130;
  local_148 = (float)NEON_fmadd(local_a0,fVar48,uVar39);
  local_140 = (float)NEON_fmadd(local_a0,fVar44,uVar15);
  fVar29 = *(float *)(lVar7 + 0x204);
  local_148 = fVar11 + local_148;
  local_140 = fVar19 + local_140;
  fVar37 = local_138 / fVar34 + fVar29;
  fVar24 = local_130 / fVar34 + fVar29;
  fVar36 = local_148 / fVar34 + fVar29;
  fVar29 = local_140 / fVar34 + fVar29;
  fVar34 = (float)BaseTerrain::getInterpolatedHeightAtPoint(this,fVar37,fVar24);
  fVar16 = (float)BaseTerrain::getInterpolatedHeightAtPoint(this,fVar36,fVar29);
  local_134 = fVar34 + 50.0;
  local_144 = fVar16 + 50.0;
  if (uVar2 == 0) {
    if (cVar3 != '\0') goto LAB_007be5c4;
  }
  else {
    ScenegraphPhysicsContextManager::getInstance();
    pBVar9 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    local_150 = 0;
    local_158 = 0xbf80000000000000;
    fVar10 = (float)Bt2ScenegraphPhysicsContext::raycastClip
                              (pBVar9,(Vector3 *)&local_138,(Vector3 *)&local_158,50.0,uVar2);
    if (fVar10 < 49.25) {
      fVar10 = 0.0;
      bVar5 = true;
      goto LAB_007be890;
    }
    ScenegraphPhysicsContextManager::getInstance();
    pBVar9 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    local_168 = 0xbf80000000000000;
    local_160 = 0;
    fVar12 = (float)Bt2ScenegraphPhysicsContext::raycastClip
                              (pBVar9,(Vector3 *)&local_148,(Vector3 *)&local_168,50.0,uVar2);
    fVar10 = 0.0;
    bVar5 = fVar12 < 49.25;
    if ((bVar5) || (cVar3 == '\0')) goto LAB_007be890;
LAB_007be5c4:
    uVar15 = NEON_fmadd(fVar47,0,fVar32);
    fVar31 = *(float *)(lVar7 + 0x218);
    fVar30 = (float)NEON_fmadd(local_a0,fVar48,uVar15);
    fVar12 = (float)NEON_fmsub(local_a0,fVar48,uVar15);
    fVar46 = local_a0 + -3.0;
    fVar42 = fVar35 + local_a8 * fVar41;
    fVar43 = fVar35 + -local_a8 * fVar41;
    uVar15 = NEON_fmadd(fVar41,0,fVar35);
    fVar17 = fVar32 + local_a8 * fVar47;
    fVar18 = fVar32 + -local_a8 * fVar47;
    fVar33 = (float)NEON_fmadd(local_a0,fVar44,uVar15);
    fVar25 = (float)NEON_fmsub(local_a0,fVar44,uVar15);
    uVar15 = NEON_fmsub(fVar14,fVar47,fVar32);
    uVar39 = NEON_fmsub(fVar14,fVar41,fVar35);
    fVar32 = (float)NEON_fmadd(local_a0,fVar48,uVar15);
    fVar10 = (float)NEON_fmadd(local_a0,fVar44,uVar39);
    fVar14 = (float)NEON_fmadd(fVar46,fVar48,uVar15);
    fVar35 = (float)NEON_fmadd(fVar46,fVar44,uVar39);
    fVar45 = *(float *)(lVar7 + 0x204);
    fVar38 = (fVar19 + fVar10) / fVar31 + fVar45;
    fVar26 = fVar45 + (fVar11 + fVar17 + fVar48 * local_a0) / fVar31;
    fVar27 = fVar45 + (fVar11 + fVar18 + fVar48 * local_a0) / fVar31;
    fVar41 = fVar45 + (fVar19 + fVar42 + fVar44 * local_a0) / fVar31;
    fVar23 = fVar45 + (fVar19 + fVar43 + fVar44 * local_a0) / fVar31;
    fVar17 = fVar45 + (fVar11 + fVar17 + fVar48 * fVar46) / fVar31;
    fVar48 = fVar45 + (fVar11 + fVar18 + fVar48 * fVar46) / fVar31;
    fVar47 = fVar45 + (fVar19 + fVar42 + fVar44 * fVar46) / fVar31;
    fVar44 = fVar45 + (fVar19 + fVar43 + fVar44 * fVar46) / fVar31;
    fVar42 = fVar45 + (fVar11 + fVar14) / fVar31;
    fVar18 = (fVar11 + fVar32) / fVar31 + fVar45;
    fVar43 = fVar45 + (fVar19 + fVar35) / fVar31;
    BaseTerrain::getInterpolatedHeightAtPoint
              (this,(fVar11 + fVar30) / fVar31 + fVar45,(fVar19 + fVar33) / fVar31 + fVar45);
    BaseTerrain::getInterpolatedHeightAtPoint
              (this,(fVar11 + fVar12) / fVar31 + fVar45,(fVar19 + fVar25) / fVar31 + fVar45);
    fVar10 = (float)BaseTerrain::getInterpolatedHeightAtPoint(this,fVar26,fVar41);
    fVar11 = (float)BaseTerrain::getInterpolatedHeightAtPoint(this,fVar17,fVar47);
    fVar14 = (float)BaseTerrain::getInterpolatedHeightAtPoint(this,fVar27,fVar23);
    fVar35 = (float)BaseTerrain::getInterpolatedHeightAtPoint(this,fVar48,fVar44);
    fVar19 = (float)BaseTerrain::getInterpolatedHeightAtPoint(this,fVar18,fVar38);
    fVar32 = (float)BaseTerrain::getInterpolatedHeightAtPoint(this,fVar42,fVar43);
    fVar18 = fVar18 - fVar42;
    fVar37 = fVar26 - fVar37;
    fVar24 = fVar41 - fVar24;
    fVar36 = fVar27 - fVar36;
    fVar24 = (float)NEON_fmadd(fVar37,fVar37,fVar24 * fVar24);
    fVar29 = fVar23 - fVar29;
    fVar37 = (float)NEON_fmadd(fVar36,fVar36,fVar29 * fVar29);
    fVar38 = fVar38 - fVar43;
    fVar29 = (float)NEON_fmadd(fVar18,fVar18,fVar38 * fVar38);
    fVar41 = fVar41 - fVar47;
    fVar23 = fVar23 - fVar44;
    fVar26 = fVar26 - fVar17;
    fVar27 = fVar27 - fVar48;
    uVar13 = NEON_fsqrt(CONCAT44(fVar23 * fVar23 + fVar27 * fVar27,fVar41 * fVar41 + fVar26 * fVar26
                                ),4);
    fVar36 = ABS(fVar10 - fVar11) / (float)uVar13;
    fVar11 = ABS(fVar14 - fVar35) / (float)((ulong)uVar13 >> 0x20);
    fVar24 = ABS(fVar10 - fVar34) / SQRT(fVar24);
    fVar34 = ABS(fVar14 - fVar16) / SQRT(fVar37);
    if (fVar11 <= fVar36) {
      fVar11 = fVar36;
    }
    fVar10 = ABS(fVar19 - fVar32) / SQRT(fVar29);
    if (fVar34 <= fVar24) {
      fVar34 = fVar24;
    }
    if (fVar34 <= fVar11) {
      fVar34 = fVar11;
    }
    if (fVar10 <= fVar34) {
      fVar10 = fVar34;
    }
    fVar11 = (float)BaseTerrain::getUnitsPerPixel();
    fVar10 = fVar10 / fVar11;
  }
  bVar5 = false;
LAB_007be890:
  *(bool *)(param_1 + 0x40) = bVar5;
  param_1[0x44] = (uint)fVar10;
  param_1[0x48] = 0;
  param_1[0x42] = 3;
  param_1[0x46] = 4;
  param_1[0x4a] = 4;
  if (*(long *)(lVar4 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


