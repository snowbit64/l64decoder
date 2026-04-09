// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateCompoundMassProps
// Entry Point: 00998464
// Size: 2548 bytes
// Signature: undefined __cdecl updateCompoundMassProps(TransformGroup * param_1, TransformGroup * * param_2, btCompoundShape * param_3, btTransform * param_4, float * param_5, btVector3 * param_6)


/* Bt2PhysicsUtil::updateCompoundMassProps(TransformGroup*, TransformGroup**, btCompoundShape*,
   btTransform&, float&, btVector3&) */

void Bt2PhysicsUtil::updateCompoundMassProps
               (TransformGroup *param_1,TransformGroup **param_2,btCompoundShape *param_3,
               btTransform *param_4,float *param_5,btVector3 *param_6)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  ulong uVar4;
  TransformGroup **ppTVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float *pfVar8;
  ulong uVar9;
  TransformGroup *pTVar10;
  btCollisionShape *pbVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  uint uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  float fVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  float fVar51;
  undefined4 uVar52;
  undefined8 local_1a0;
  ulong uStack_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 local_174;
  float local_170;
  float fStack_16c;
  float local_168;
  undefined4 local_164;
  float local_160;
  float fStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  ulong uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  float local_120;
  float fStack_11c;
  float local_118;
  undefined4 local_114;
  undefined8 local_110;
  ulong uStack_108;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  ulong local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  float local_b0;
  float local_ac;
  float fStack_a8;
  undefined8 local_a0;
  float fStack_98;
  undefined4 uStack_94;
  long local_90;
  
  lVar1 = tpidr_el0;
  local_90 = *(long *)(lVar1 + 0x28);
  uVar35 = *(uint *)(param_3 + 0x24);
  uVar4 = (ulong)uVar35;
  *param_5 = 0.0;
  uStack_94 = 0;
  RawTransformGroup::updateWorldTransformation();
  Matrix4x4::invert3x4((Matrix4x4 *)&local_e0,(Matrix4x4 *)(param_1 + 0xb8));
  if ((int)uVar35 < 1) {
    fVar27 = 0.0;
    fVar28 = 0.0;
    fVar26 = 0.0;
  }
  else {
    fVar26 = 0.0;
    fVar28 = 0.0;
    fVar27 = 0.0;
    lVar12 = 0;
    lVar13 = 0x40;
    ppTVar5 = param_2;
    do {
      if ((param_2 == (TransformGroup **)0x0) || (*ppTVar5 != (TransformGroup *)0x0)) {
        pbVar11 = *(btCollisionShape **)(*(long *)(param_3 + 0x30) + lVar13);
        lVar2 = RawTransformGroup::getPhysicsObject();
        Bt2PhysicsColShapeCache::getVolumeInfo(pbVar11,(VolumeInfo *)&local_160);
        uVar17 = 0x3f800000;
        fVar14 = 1.0;
        if ((*(byte *)(lVar2 + 8) >> 3 & 1) != 0) {
          fVar14 = *(float *)(lVar2 + 0x74);
        }
        fVar14 = fVar14 * local_160;
        *(ulong *)((long)&DAT_0211042c + lVar12) = CONCAT44(fStack_158,fStack_15c);
        *(undefined4 *)((long)&DAT_02110434 + lVar12) = uStack_154;
        *(ulong *)((long)&DAT_0211043c + lVar12) =
             CONCAT44((float)((ulong)local_150 >> 0x20) * fVar14,(float)local_150 * fVar14);
        *(float *)((long)&DAT_02110444 + lVar12) = fVar14 * fStack_148;
        uVar15 = 0;
        *(undefined4 *)((long)&DAT_02110438 + lVar12) = 0;
        *(undefined4 *)((long)&DAT_02110448 + lVar12) = 0;
        *(float *)((long)&DAT_02110428 + lVar12) = fVar14;
        *(ulong *)((long)&DAT_0211044c + lVar12) = CONCAT44(fStack_140 * fVar14,fStack_144 * fVar14)
        ;
        *(float *)((long)&DAT_02110454 + lVar12) = fVar14 * fStack_13c;
        *(undefined4 *)((long)&DAT_02110458 + lVar12) = 0;
        *(ulong *)((long)&DAT_0211045c + lVar12) =
             CONCAT44((float)(uStack_138 >> 0x20) * fVar14,(float)uStack_138 * fVar14);
        *(float *)((long)&DAT_02110464 + lVar12) = fVar14 * (float)local_130;
        *(undefined4 *)((long)&DAT_02110468 + lVar12) = 0;
        if (param_2 == (TransformGroup **)0x0) {
          uVar16 = 0;
          uVar20 = 0;
          uVar18 = 0;
          uVar24 = 0;
          uVar36 = 0;
          fVar39 = 0.0;
          fVar47 = 0.0;
          fVar38 = 0.0;
          uVar32 = 0x3f800000;
          uVar33 = 0x3f800000;
        }
        else {
          pTVar10 = *ppTVar5;
          uVar16 = 0;
          uVar20 = 0;
          uVar18 = 0;
          uVar24 = 0;
          uVar36 = 0;
          fVar39 = 0.0;
          fVar47 = 0.0;
          fVar38 = 0.0;
          uVar32 = 0x3f800000;
          uVar33 = 0x3f800000;
          uVar17 = 0x3f800000;
          if (pTVar10 != param_1) {
            RawTransformGroup::updateWorldTransformation();
            uVar15 = *(undefined4 *)(pTVar10 + 0xb8);
            fVar14 = *(float *)(pTVar10 + 0xbc);
            uVar20 = *(undefined4 *)(pTVar10 + 0xc0);
            uVar36 = *(undefined4 *)(pTVar10 + 200);
            fVar39 = *(float *)(pTVar10 + 0xcc);
            uVar17 = NEON_fmadd(uVar15,local_e0,fVar14 * local_d0);
            uVar33 = *(undefined4 *)(pTVar10 + 0xe8);
            fVar47 = *(float *)(pTVar10 + 0xec);
            uVar17 = NEON_fmadd(uVar20,local_c0,uVar17);
            uVar18 = NEON_fmadd(uVar15,local_dc,fVar14 * fStack_cc);
            uVar16 = NEON_fmadd(uVar15,uStack_d8,fVar14 * local_c8);
            uVar32 = *(undefined4 *)(pTVar10 + 0xd8);
            fVar14 = *(float *)(pTVar10 + 0xdc);
            uVar45 = NEON_fmadd(uVar36,local_dc,fStack_cc * fVar39);
            uVar15 = NEON_fmadd(uVar20,uStack_bc,uVar18);
            uVar16 = NEON_fmadd(uVar20,local_b8,uVar16);
            uVar20 = NEON_fmadd(uVar36,local_e0,local_d0 * fVar39);
            uVar18 = NEON_fmadd(uVar36,uStack_d8,local_c8 * fVar39);
            uVar48 = *(undefined4 *)(pTVar10 + 0xd0);
            uVar36 = NEON_fmadd(uVar33,local_e0,local_d0 * fVar47);
            uVar50 = NEON_fmadd(uVar32,local_dc,fStack_cc * fVar14);
            uVar24 = NEON_fmadd(uVar33,local_dc,fStack_cc * fVar47);
            uVar40 = NEON_fmadd(uVar32,local_e0,local_d0 * fVar14);
            uVar29 = NEON_fmadd(uVar33,uStack_d8,local_c8 * fVar47);
            uVar37 = *(undefined4 *)(pTVar10 + 0xf0);
            uVar20 = NEON_fmadd(uVar48,local_c0,uVar20);
            uVar33 = NEON_fmadd(uVar32,uStack_d8,local_c8 * fVar14);
            uVar30 = *(undefined4 *)(pTVar10 + 0xe0);
            uVar32 = NEON_fmadd(uVar48,uStack_bc,uVar45);
            fVar39 = (float)NEON_fmadd(uVar37,local_c0,uVar36);
            fVar47 = (float)NEON_fmadd(uVar37,uStack_bc,uVar24);
            fVar38 = (float)NEON_fmadd(uVar37,local_b8,uVar29);
            uVar18 = NEON_fmadd(uVar48,local_b8,uVar18);
            uVar24 = NEON_fmadd(uVar30,local_c0,uVar40);
            uVar36 = NEON_fmadd(uVar30,uStack_bc,uVar50);
            uVar33 = NEON_fmadd(uVar30,local_b8,uVar33);
            fVar39 = local_b0 + fVar39;
            fVar47 = fVar47 + local_ac;
            fVar38 = fVar38 + fStack_a8;
            fVar14 = *(float *)((long)&DAT_02110428 + lVar12);
          }
        }
        *(undefined4 *)((long)&s_compoundUpdateTemp + lVar12) = uVar17;
        *(undefined4 *)((long)&DAT_021103ec + lVar12) = uVar20;
        *(undefined4 *)((long)&DAT_021103f0 + lVar12) = uVar24;
        *(undefined4 *)((long)&DAT_021103f4 + lVar12) = 0;
        *(undefined4 *)((long)&DAT_021103f8 + lVar12) = uVar15;
        *(undefined4 *)((long)&DAT_021103fc + lVar12) = uVar32;
        *(undefined4 *)((long)&DAT_02110400 + lVar12) = uVar36;
        *(undefined4 *)((long)&DAT_02110404 + lVar12) = 0;
        *(undefined4 *)((long)&DAT_02110408 + lVar12) = uVar16;
        *(undefined4 *)((long)&DAT_0211040c + lVar12) = uVar18;
        *(undefined4 *)((long)&DAT_02110410 + lVar12) = uVar33;
        *(undefined4 *)((long)&DAT_02110414 + lVar12) = 0;
        *(float *)((long)&DAT_02110418 + lVar12) = fVar39;
        *(float *)((long)&DAT_0211041c + lVar12) = fVar47;
        *(float *)((long)&DAT_02110420 + lVar12) = fVar38;
        *(undefined4 *)((long)&DAT_02110424 + lVar12) = 0;
        *param_5 = fVar14 + *param_5;
        fVar14 = *(float *)((long)&DAT_0211042c + lVar12 + 4);
        uVar18 = *(undefined4 *)((long)&DAT_02110434 + lVar12);
        fVar38 = *(float *)((long)&DAT_02110428 + lVar12);
        uVar17 = *(undefined4 *)((long)&DAT_0211042c + lVar12);
        uVar15 = NEON_fmadd(uVar17,*(undefined4 *)((long)&s_compoundUpdateTemp + lVar12),
                            fVar14 * *(float *)((long)&DAT_021103ec + lVar12));
        uVar16 = NEON_fmadd(uVar17,*(undefined4 *)((long)&DAT_021103f8 + lVar12),
                            fVar14 * *(float *)((long)&DAT_021103fc + lVar12));
        uVar17 = NEON_fmadd(uVar17,*(undefined4 *)((long)&DAT_02110408 + lVar12),
                            fVar14 * *(float *)((long)&DAT_0211040c + lVar12));
        fVar39 = (float)NEON_fmadd(uVar18,*(undefined4 *)((long)&DAT_021103f0 + lVar12),uVar15);
        fVar47 = (float)NEON_fmadd(uVar18,*(undefined4 *)((long)&DAT_02110400 + lVar12),uVar16);
        fVar14 = (float)NEON_fmadd(uVar18,*(undefined4 *)((long)&DAT_02110410 + lVar12),uVar17);
        fVar26 = (fVar39 + *(float *)((long)&DAT_02110418 + lVar12)) * fVar38 + fVar26;
        fVar28 = (fVar47 + *(float *)((long)&DAT_0211041c + lVar12)) * fVar38 + fVar28;
        fVar27 = fVar38 * (fVar14 + *(float *)((long)&DAT_02110420 + lVar12)) + fVar27;
      }
      lVar13 = lVar13 + 0x58;
      ppTVar5 = ppTVar5 + 1;
      lVar12 = lVar12 + 0x84;
    } while (uVar4 * 0x84 - lVar12 != 0);
  }
  fVar14 = 1.0 / *param_5;
  uStack_f8 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_f0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  fVar27 = fVar14 * fVar27;
  local_a0 = CONCAT44(fVar14 * fVar28,fVar14 * fVar26);
  fStack_98 = fVar27;
  if (0 < (int)uVar35) {
    pfVar6 = (float *)&DAT_02110428;
    ppTVar5 = param_2;
    uVar9 = uVar4;
    do {
      if ((param_2 == (TransformGroup **)0x0) || (*ppTVar5 != (TransformGroup *)0x0)) {
        fStack_148 = (float)*(undefined8 *)(pfVar6 + 0xb);
        fVar39 = pfVar6[-0x10];
        fVar38 = pfVar6[-0xf];
        local_150._0_4_ = (float)*(undefined8 *)(pfVar6 + 9);
        local_150._4_4_ = (float)((ulong)*(undefined8 *)(pfVar6 + 9) >> 0x20);
        fStack_158 = (float)*(undefined8 *)(pfVar6 + 7);
        local_160 = (float)*(undefined8 *)(pfVar6 + 5);
        fStack_15c = (float)((ulong)*(undefined8 *)(pfVar6 + 5) >> 0x20);
        fStack_140 = (float)*(undefined8 *)(pfVar6 + 0xd);
        fStack_13c = (float)((ulong)*(undefined8 *)(pfVar6 + 0xd) >> 0x20);
        fVar21 = pfVar6[-0xc];
        fVar22 = pfVar6[-0xb];
        fVar42 = pfVar6[-8];
        fVar43 = pfVar6[-7];
        uVar17 = NEON_fmadd(local_160,fVar39,(float)local_150 * fVar38);
        uVar16 = NEON_fmadd(fStack_15c,fVar39,fVar38 * local_150._4_4_);
        uVar18 = NEON_fmadd(local_160,fVar21,(float)local_150 * fVar22);
        uVar20 = NEON_fmadd(fStack_15c,fVar21,local_150._4_4_ * fVar22);
        fVar47 = pfVar6[-0xe];
        fVar51 = pfVar6[-10];
        uVar36 = NEON_fmadd(fStack_158,fVar21,fStack_148 * fVar22);
        uVar15 = NEON_fmadd(local_160,fVar42,(float)local_150 * fVar43);
        fVar31 = (float)NEON_fmadd(fStack_13c,fVar47,uVar16);
        uVar16 = NEON_fmadd(fStack_15c,fVar42,local_150._4_4_ * fVar43);
        uVar24 = NEON_fmadd(fStack_140,fVar51,uVar18);
        fVar41 = (float)NEON_fmadd(fStack_13c,fVar51,uVar20);
        uStack_138._0_4_ = (float)*(undefined8 *)(pfVar6 + 0xf);
        uVar17 = NEON_fmadd(fStack_140,fVar47,uVar17);
        fVar34 = pfVar6[-6];
        uVar20 = NEON_fmadd(fStack_158,fVar39,fVar38 * fStack_148);
        uVar18 = NEON_fmadd(fStack_158,fVar42,fStack_148 * fVar43);
        uVar29 = NEON_fmadd((float)uStack_138,fVar51,uVar36);
        uVar15 = NEON_fmadd(fStack_140,fVar34,uVar15);
        fVar25 = (float)NEON_fmadd(fStack_13c,fVar34,uVar16);
        uVar32 = NEON_fmadd((float)uStack_138,fVar47,uVar20);
        uVar36 = NEON_fmadd(fVar39,uVar17,fVar38 * fVar31);
        uVar20 = NEON_fmadd((float)uStack_138,fVar34,uVar18);
        uVar18 = NEON_fmadd(fVar21,uVar17,fVar31 * fVar22);
        uVar17 = NEON_fmadd(fVar42,uVar17,fVar31 * fVar43);
        uVar16 = NEON_fmadd(fVar39,uVar24,fVar38 * fVar41);
        uVar33 = NEON_fmadd(fVar21,uVar24,fVar22 * fVar41);
        uVar24 = NEON_fmadd(fVar42,uVar24,fVar43 * fVar41);
        local_160 = (float)NEON_fmadd(fVar47,uVar32,uVar36);
        uVar36 = NEON_fmadd(fVar39,uVar15,fVar38 * fVar25);
        fStack_15c = (float)NEON_fmadd(fVar51,uVar32,uVar18);
        fStack_158 = (float)NEON_fmadd(fVar34,uVar32,uVar17);
        uVar17 = NEON_fmadd(fVar47,uVar29,uVar16);
        uVar16 = NEON_fmadd(fVar51,uVar29,uVar33);
        uVar18 = NEON_fmadd(fVar21,uVar15,fVar22 * fVar25);
        fStack_148 = (float)NEON_fmadd(fVar34,uVar29,uVar24);
        local_1a0._0_4_ = (undefined4)*(undefined8 *)(pfVar6 + 1);
        local_1a0._4_4_ = (float)((ulong)*(undefined8 *)(pfVar6 + 1) >> 0x20);
        fStack_140 = (float)NEON_fmadd(fVar47,uVar20,uVar36);
        fStack_13c = (float)NEON_fmadd(fVar51,uVar20,uVar18);
        uStack_154 = 0;
        uVar18 = NEON_fmadd(fVar42,uVar15,fVar43 * fVar25);
        local_150 = CONCAT44(uVar16,uVar17);
        uVar17 = NEON_fmadd(fVar39,(undefined4)local_1a0,fVar38 * local_1a0._4_4_);
        uVar15 = NEON_fmadd(fVar21,(undefined4)local_1a0,fVar22 * local_1a0._4_4_);
        uVar16 = NEON_fmadd(fVar42,(undefined4)local_1a0,fVar43 * local_1a0._4_4_);
        uStack_198._0_4_ = (undefined4)*(undefined8 *)(pfVar6 + 3);
        uVar23 = NEON_fmadd(fVar34,uVar20,uVar18);
        fStack_144 = 0.0;
        uVar17 = NEON_fmadd(fVar47,(undefined4)uStack_198,uVar17);
        uVar15 = NEON_fmadd(fVar51,(undefined4)uStack_198,uVar15);
        uVar19 = NEON_fmadd(fVar34,(undefined4)uStack_198,uVar16);
        local_1a0 = CONCAT44(uVar15,uVar17);
        local_118 = pfVar6[-2] - fVar27;
        uStack_138 = (ulong)uVar23;
        local_120 = pfVar6[-4] - fVar14 * fVar26;
        fStack_11c = pfVar6[-3] - fVar14 * fVar28;
        uStack_198 = (ulong)uVar19;
        local_114 = 0;
        translateInertiaTensor
                  ((btVector3 *)&local_120,*pfVar6,(btVector3 *)&local_1a0,(btMatrix3x3 *)&local_160
                  );
        local_110 = CONCAT44((float)((ulong)local_110 >> 0x20) + fStack_15c,
                             (float)local_110 + local_160);
        local_100 = CONCAT44((float)((ulong)local_100 >> 0x20) + (float)((ulong)local_150 >> 0x20),
                             (float)local_100 + (float)local_150);
        uStack_108 = (ulong)(uint)((float)uStack_108 + fStack_158);
        local_f0 = CONCAT44((float)((ulong)local_f0 >> 0x20) + fStack_13c,
                            (float)local_f0 + fStack_140);
        uStack_f8 = (ulong)(uint)((float)uStack_f8 + fStack_148);
        local_e8 = (ulong)(uint)((float)local_e8 + (float)uStack_138);
      }
      uVar9 = uVar9 - 1;
      ppTVar5 = ppTVar5 + 1;
      pfVar6 = pfVar6 + 0x21;
    } while (uVar9 != 0);
  }
  lVar13 = RawTransformGroup::getPhysicsObject();
  if ((*(byte *)(lVar13 + 10) & 1) != 0) {
    lVar13 = RawTransformGroup::getPhysicsObject();
    local_a0 = *(undefined8 *)(lVar13 + 0x7c);
    uStack_94 = 0;
    fStack_98 = *(float *)(lVar13 + 0x84);
  }
  uStack_128 = CONCAT44(uStack_94,fStack_98);
  local_130 = local_a0;
  btMatrix3x3::diagonalize((btMatrix3x3 *)&local_110,(btMatrix3x3 *)&local_160,1e-05,0x14);
  *(undefined4 *)param_6 = (undefined4)local_110;
  pfVar8 = (float *)(param_6 + 4);
  *pfVar8 = local_100._4_4_;
  pfVar6 = (float *)(param_6 + 8);
  *pfVar6 = (float)local_e8;
  fVar26 = -local_130._4_4_;
  *(undefined4 *)(param_6 + 0xc) = 0;
  *(float *)(param_4 + 4) = (float)local_150;
  *(float *)param_4 = local_160;
  *(float *)(param_4 + 0x10) = fStack_15c;
  *(float *)(param_4 + 0x14) = local_150._4_4_;
  uVar15 = NEON_fmsub(local_160,(float)local_130,(float)local_150 * fVar26);
  uVar16 = NEON_fmsub(fStack_15c,(float)local_130,local_150._4_4_ * fVar26);
  uVar17 = NEON_fmsub(fStack_158,(float)local_130,fStack_148 * fVar26);
  *(float *)(param_4 + 8) = fStack_140;
  *(undefined4 *)(param_4 + 0xc) = 0;
  *(float *)(param_4 + 0x18) = fStack_13c;
  uVar15 = NEON_fmsub(fStack_140,(undefined4)uStack_128,uVar15);
  uVar16 = NEON_fmsub(fStack_13c,(undefined4)uStack_128,uVar16);
  uVar17 = NEON_fmsub((float)uStack_138,(undefined4)uStack_128,uVar17);
  *(undefined4 *)(param_4 + 0x1c) = 0;
  *(float *)(param_4 + 0x20) = fStack_158;
  *(float *)(param_4 + 0x24) = fStack_148;
  *(float *)(param_4 + 0x28) = (float)uStack_138;
  *(undefined4 *)(param_4 + 0x2c) = 0;
  *(undefined4 *)(param_4 + 0x30) = uVar15;
  *(undefined4 *)(param_4 + 0x34) = uVar16;
  *(undefined4 *)(param_4 + 0x38) = uVar17;
  *(undefined4 *)(param_4 + 0x3c) = 0;
  lVar13 = RawTransformGroup::getPhysicsObject();
  if ((*(byte *)(lVar13 + 10) >> 1 & 1) == 0) {
    fVar27 = *(float *)param_6;
    uVar9 = (ulong)*(uint *)(param_6 + 4);
  }
  else {
    lVar13 = RawTransformGroup::getPhysicsObject();
    fVar26 = *(float *)(lVar13 + 0x78) / *param_5;
    lVar13 = RawTransformGroup::getPhysicsObject();
    *param_5 = *(float *)(lVar13 + 0x78);
    fVar27 = fVar26 * *(float *)param_6;
    uVar9 = CONCAT44((float)((ulong)*(undefined8 *)(param_6 + 4) >> 0x20) * fVar26,
                     (float)*(undefined8 *)(param_6 + 4) * fVar26);
    *(float *)param_6 = fVar27;
    *(ulong *)(param_6 + 4) = uVar9;
  }
  fVar26 = *pfVar6;
  pfVar3 = pfVar6;
  if ((float)uVar9 <= fVar27) {
    if (fVar26 <= fVar27) {
      pfVar3 = (float *)param_6;
    }
  }
  else if (fVar26 <= (float)uVar9) {
    pfVar3 = pfVar8;
  }
  fVar28 = *pfVar3 / 80.0;
  if (*pfVar3 / 80.0 <= 0.0005) {
    fVar28 = 0.0005;
  }
  if (fVar27 < fVar28) {
    *(float *)param_6 = fVar28;
  }
  if (*pfVar8 < fVar28) {
    *pfVar8 = fVar28;
  }
  if (fVar26 < fVar28) {
    *pfVar6 = fVar28;
  }
  if (*(float *)(param_6 + 0xc) < 0.0) {
    *(undefined4 *)(param_6 + 0xc) = 0;
  }
  if (0 < (int)uVar35) {
    uVar9 = 0;
    puVar7 = &DAT_02110408;
    do {
      if ((param_2 == (TransformGroup **)0x0) || (param_2[uVar9] != (TransformGroup *)0x0)) {
        uVar17 = *(undefined4 *)param_4;
        fVar26 = *(float *)(param_4 + 4);
        fVar27 = (float)puVar7[-4];
        fVar28 = (float)puVar7[-3];
        uVar32 = *(undefined4 *)(param_4 + 0x10);
        fVar39 = *(float *)(param_4 + 0x14);
        uVar45 = *(undefined4 *)(param_4 + 0x20);
        fVar47 = *(float *)(param_4 + 0x24);
        uVar15 = puVar7[-8];
        uVar36 = puVar7[-7];
        fVar14 = (float)puVar7[-2];
        uVar37 = *puVar7;
        uVar40 = puVar7[1];
        uVar20 = NEON_fmadd(uVar15,uVar17,fVar27 * fVar26);
        uVar48 = NEON_fmadd(uVar15,uVar32,fVar27 * fVar39);
        uVar18 = NEON_fmadd(uVar15,uVar45,fVar27 * fVar47);
        uVar15 = NEON_fmadd(uVar36,uVar17,fVar26 * fVar28);
        uVar50 = puVar7[4];
        fVar27 = (float)puVar7[5];
        uVar46 = puVar7[-6];
        uVar16 = *(undefined4 *)(param_4 + 8);
        uVar44 = NEON_fmadd(uVar36,uVar32,fVar28 * fVar39);
        uVar52 = puVar7[2];
        uVar29 = NEON_fmadd(uVar46,uVar17,fVar26 * fVar14);
        uVar49 = NEON_fmadd(uVar46,uVar32,fVar14 * fVar39);
        uVar24 = NEON_fmadd(uVar37,uVar16,uVar20);
        uVar33 = NEON_fmadd(uVar40,uVar16,uVar15);
        uVar20 = NEON_fmadd(uVar36,uVar45,fVar28 * fVar47);
        uVar17 = NEON_fmadd(uVar50,uVar17,fVar26 * fVar27);
        uVar30 = NEON_fmadd(uVar50,uVar32,fVar39 * fVar27);
        uVar36 = NEON_fmadd(uVar50,uVar45,fVar47 * fVar27);
        uVar32 = *(undefined4 *)(param_4 + 0x18);
        uVar50 = *(undefined4 *)(param_4 + 0x28);
        uVar35 = NEON_fmadd(uVar52,uVar16,uVar29);
        uVar15 = puVar7[6];
        uVar29 = NEON_fmadd(uVar46,uVar45,fVar14 * fVar47);
        local_190 = NEON_fmadd(uVar37,uVar32,uVar48);
        uStack_18c = NEON_fmadd(uVar40,uVar32,uVar44);
        local_188 = NEON_fmadd(uVar52,uVar32,uVar49);
        local_1a0 = CONCAT44(uVar33,uVar24);
        local_170 = (float)NEON_fmadd(uVar15,uVar16,uVar17);
        fStack_16c = (float)NEON_fmadd(uVar15,uVar32,uVar30);
        local_168 = (float)NEON_fmadd(uVar15,uVar50,uVar36);
        local_180 = NEON_fmadd(uVar37,uVar50,uVar18);
        uStack_17c = NEON_fmadd(uVar40,uVar50,uVar20);
        local_178 = NEON_fmadd(uVar52,uVar50,uVar29);
        local_168 = local_168 + *(float *)(param_4 + 0x38);
        local_170 = *(float *)(param_4 + 0x30) + local_170;
        fStack_16c = fStack_16c + *(float *)(param_4 + 0x34);
        uStack_198 = (ulong)uVar35;
        local_184 = 0;
        local_174 = 0;
        local_164 = 0;
        btCompoundShape::updateChildTransform(param_3,(int)uVar9,(btTransform *)&local_1a0,false);
      }
      uVar9 = uVar9 + 1;
      puVar7 = puVar7 + 0x21;
    } while (uVar4 != uVar9);
  }
  (**(code **)(*(long *)param_3 + 0x88))();
  lVar13 = RawTransformGroup::getPhysicsObject();
  *(undefined8 *)(lVar13 + 0x7c) = local_a0;
  *(float *)(lVar13 + 0x84) = fStack_98;
  lVar13 = RawTransformGroup::getPhysicsObject();
  *(float *)(lVar13 + 0x78) = *param_5;
  if (*(long *)(lVar1 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


