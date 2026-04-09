// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0097b610
// Size: 1828 bytes
// Signature: undefined __cdecl update(float param_1)


/* MeshSplitManager::update(float) */

void MeshSplitManager::update(float param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  long in_x0;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  RawTransformGroup *this;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  undefined8 local_190;
  undefined8 local_188;
  GsQuaternion aGStack_180 [16];
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  float fStack_13c;
  float local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  float local_120;
  float fStack_11c;
  float local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  float local_100;
  float local_fc;
  float fStack_f8;
  undefined4 local_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  ulong local_d8;
  undefined8 local_d0;
  float fStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float local_bc;
  float fStack_b8;
  undefined4 local_b4;
  long local_a8;
  
  lVar3 = tpidr_el0;
  local_a8 = *(long *)(lVar3 + 0x28);
  ScenegraphPhysicsContextManager::getInstance();
  lVar5 = ScenegraphPhysicsContextManager::getContext();
  uVar11 = (int)((ulong)(*(long *)(in_x0 + 0x1d0) - *(long *)(in_x0 + 0x1c8)) >> 2) * -0x45d1745d;
  if (uVar11 != 0) {
    uVar12 = 0;
    fVar34 = *(float *)(lVar5 + 0x74);
    do {
      lVar5 = *(long *)(in_x0 + 0x1c8);
      lVar10 = *(long *)(in_x0 + 200);
      puVar7 = (undefined8 *)(lVar5 + (ulong)uVar12 * 0x2c);
      if (lVar10 == 0) {
LAB_0097b6f0:
        puVar9 = *(undefined8 **)(in_x0 + 0x1d0);
        puVar1 = (undefined8 *)((long)puVar7 + 0x2c);
        while (puVar1 != puVar9) {
          puVar7[1] = *(undefined8 *)((long)puVar7 + 0x34);
          *puVar7 = *(undefined8 *)((long)puVar7 + 0x2c);
          puVar7[3] = *(undefined8 *)((long)puVar7 + 0x44);
          puVar7[2] = *(undefined8 *)((long)puVar7 + 0x3c);
          puVar7[4] = *(undefined8 *)((long)puVar7 + 0x4c);
          *(uint *)(puVar7 + 5) = *(uint *)((long)puVar7 + 0x54);
          puVar1 = puVar7 + 0xb;
          puVar7 = (undefined8 *)((long)puVar7 + 0x2c);
        }
LAB_0097b694:
        uVar11 = uVar11 - 1;
        *(undefined8 **)(in_x0 + 0x1d0) = puVar7;
      }
      else {
        uVar14 = (ulong)uVar12;
        uVar2 = *(uint *)puVar7;
        lVar8 = in_x0 + 200;
        do {
          bVar4 = *(uint *)(lVar10 + 0x20) < uVar2;
          if (!bVar4) {
            lVar8 = lVar10;
          }
          lVar10 = *(long *)(lVar10 + (ulong)bVar4 * 8);
        } while (lVar10 != 0);
        if ((lVar8 == in_x0 + 200) || (uVar2 < *(uint *)(lVar8 + 0x20))) goto LAB_0097b6f0;
        lVar10 = lVar5 + uVar14 * 0x2c;
        this = *(RawTransformGroup **)(lVar8 + 0x28);
        pfVar13 = (float *)(lVar10 + 0x20);
        fVar15 = *pfVar13;
        fVar35 = (float)NEON_fminnm(fVar15 + fVar34 / *(float *)(lVar10 + 0x24),0x3f800000);
        if (1.0 <= fVar35) {
          lVar10 = Geometry::getBoundingVolume();
          uVar31 = *(undefined4 *)(lVar10 + 0xc);
          uVar17 = *(undefined4 *)(lVar10 + 0x14);
          fVar16 = -*(float *)(lVar10 + 0x10);
          lVar5 = lVar5 + uVar14 * 0x2c;
          uStack_e4 = 0;
          uStack_c4 = 0;
          local_b4 = 0x3f800000;
          fVar15 = *(float *)(lVar5 + 0x18);
          fVar21 = *(float *)(lVar5 + 0x1c);
          fVar35 = *(float *)(lVar5 + 0x10);
          fVar18 = *(float *)(lVar5 + 0x14);
          fStack_ec = fVar18 * fVar15 + fVar21 * fVar35;
          fVar29 = fVar18 * fVar15 - fVar21 * fVar35;
          fStack_e8 = fVar18 * fVar21 - fVar15 * fVar35;
          fVar19 = fVar18 * fVar21 + fVar15 * fVar35;
          local_f0 = NEON_fmadd(fVar15 * fVar15 + fVar21 * fVar21,0xc0000000,0x3f800000);
          fVar20 = fVar15 * fVar21 + fVar18 * fVar35;
          fVar29 = fVar29 + fVar29;
          fVar35 = fVar15 * fVar21 - fVar18 * fVar35;
          fStack_ec = fStack_ec + fStack_ec;
          fVar21 = (float)NEON_fmadd(fVar18 * fVar18 + fVar21 * fVar21,0xc0000000,0x3f800000);
          fStack_e8 = fStack_e8 + fStack_e8;
          fVar20 = fVar20 + fVar20;
          fVar19 = fVar19 + fVar19;
          fVar35 = fVar35 + fVar35;
          fStack_c8 = (float)NEON_fmadd(fVar18 * fVar18 + fVar15 * fVar15,0xc0000000,0x3f800000);
          local_e0 = CONCAT44(fVar21,fVar29);
          uVar32 = NEON_fmsub(uVar31,local_f0,fVar29 * fVar16);
          local_d8 = (ulong)(uint)fVar20;
          local_d0 = CONCAT44(fVar35,fVar19);
          uVar36 = NEON_fmsub(uVar31,fStack_ec,fVar21 * fVar16);
          uVar31 = NEON_fmsub(uVar31,fStack_e8,fVar20 * fVar16);
          fStack_c0 = (float)NEON_fmsub(uVar17,fVar19,uVar32);
          local_bc = (float)NEON_fmsub(uVar17,fVar35,uVar36);
          fStack_b8 = (float)NEON_fmsub(uVar17,fStack_c8,uVar31);
          fStack_b8 = fStack_b8 + *(float *)(lVar5 + 0xc);
          fStack_c0 = fStack_c0 + *(float *)(lVar5 + 4);
          local_bc = local_bc + *(float *)(lVar5 + 8);
          lVar5 = *(long *)(this + 0x20);
          if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x10) >> 5 & 1) == 0)) {
            puVar6 = &local_f0;
          }
          else {
            RawTransformGroup::updateWorldTransformation();
            Matrix4x4::invert3x4((Matrix4x4 *)&local_130,(Matrix4x4 *)(lVar5 + 0xb8));
            uVar31 = NEON_fmadd(local_f0,local_130,fStack_ec * local_120);
            uVar36 = NEON_fmadd(local_f0,local_12c,fStack_ec * fStack_11c);
            uVar17 = NEON_fmadd(local_f0,uStack_128,fStack_ec * local_118);
            local_164 = 0;
            local_170 = NEON_fmadd(fStack_e8,local_110,uVar31);
            uStack_16c = NEON_fmadd(fStack_e8,uStack_10c,uVar36);
            local_154 = 0;
            local_168 = NEON_fmadd(fStack_e8,local_108,uVar17);
            uVar17 = NEON_fmadd((undefined4)local_e0,local_130,local_120 * local_e0._4_4_);
            uVar31 = NEON_fmadd((undefined4)local_e0,local_12c,fStack_11c * local_e0._4_4_);
            local_160 = NEON_fmadd((undefined4)local_d8,local_110,uVar17);
            uStack_15c = NEON_fmadd((undefined4)local_d8,uStack_10c,uVar31);
            uVar17 = NEON_fmadd((undefined4)local_e0,uStack_128,local_118 * local_e0._4_4_);
            local_144 = 0;
            puVar6 = &local_170;
            local_158 = NEON_fmadd((undefined4)local_d8,local_108,uVar17);
            uVar37 = NEON_fmadd((undefined4)local_d0,local_130,local_120 * local_d0._4_4_);
            uVar32 = NEON_fmadd((undefined4)local_d0,uStack_128,local_118 * local_d0._4_4_);
            local_134 = 0x3f800000;
            uVar17 = NEON_fmadd(fStack_c0,local_130,local_120 * local_bc);
            uVar33 = NEON_fmadd((undefined4)local_d0,local_12c,fStack_11c * local_d0._4_4_);
            uVar36 = NEON_fmadd(fStack_c0,local_12c,fStack_11c * local_bc);
            uVar31 = NEON_fmadd(fStack_c0,uStack_128,local_118 * local_bc);
            local_150 = NEON_fmadd(fStack_c8,local_110,uVar37);
            local_148 = NEON_fmadd(fStack_c8,local_108,uVar32);
            uStack_14c = NEON_fmadd(fStack_c8,uStack_10c,uVar33);
            local_140 = (float)NEON_fmadd(fStack_b8,local_110,uVar17);
            fStack_13c = (float)NEON_fmadd(fStack_b8,uStack_10c,uVar36);
            local_138 = (float)NEON_fmadd(fStack_b8,local_108,uVar31);
            local_140 = local_100 + local_140;
            fStack_13c = fStack_13c + local_fc;
            local_138 = local_138 + fStack_f8;
          }
          RawTransformGroup::setTransformation(this,(Matrix4x4 *)puVar6,0);
          puVar9 = *(undefined8 **)(in_x0 + 0x1d0);
          puVar7 = (undefined8 *)(*(long *)(in_x0 + 0x1c8) + uVar14 * 0x2c);
          puVar1 = (undefined8 *)((long)puVar7 + 0x2c);
          while (puVar1 != puVar9) {
            puVar7[1] = *(undefined8 *)((long)puVar7 + 0x34);
            *puVar7 = *(undefined8 *)((long)puVar7 + 0x2c);
            puVar7[3] = *(undefined8 *)((long)puVar7 + 0x44);
            puVar7[2] = *(undefined8 *)((long)puVar7 + 0x3c);
            puVar7[4] = *(undefined8 *)((long)puVar7 + 0x4c);
            *(uint *)(puVar7 + 5) = *(uint *)((long)puVar7 + 0x54);
            puVar1 = puVar7 + 0xb;
            puVar7 = (undefined8 *)((long)puVar7 + 0x2c);
          }
          goto LAB_0097b694;
        }
        fVar15 = (fVar35 - fVar15) / (1.0 - fVar15);
        lVar10 = Geometry::getBoundingVolume();
        RawTransformGroup::updateWorldTransformation();
        GsQuaternion::set(aGStack_180,(Matrix4x4 *)(this + 0xb8));
        fVar21 = *(float *)(lVar10 + 0xc);
        fVar16 = *(float *)(lVar10 + 0x10);
        lVar5 = lVar5 + uVar14 * 0x2c;
        fVar29 = *(float *)(lVar10 + 0x14);
        uVar17 = NEON_fmadd(fVar21,*(undefined4 *)(this + 0xb8),fVar16 * *(float *)(this + 200));
        fVar22 = *(float *)(this + 0xe8);
        fVar18 = (float)NEON_fmadd(fVar29,*(undefined4 *)(this + 0xd8),uVar17);
        uVar24 = *(undefined8 *)(lVar5 + 8);
        fVar26 = (float)*(undefined8 *)(this + 0xec) +
                 (float)*(undefined8 *)(this + 0xcc) * fVar16 +
                 (float)*(undefined8 *)(this + 0xbc) * fVar21 +
                 (float)*(undefined8 *)(this + 0xdc) * fVar29;
        fVar28 = (float)((ulong)*(undefined8 *)(this + 0xec) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(this + 0xcc) >> 0x20) * fVar16 +
                 (float)((ulong)*(undefined8 *)(this + 0xbc) >> 0x20) * fVar21 +
                 (float)((ulong)*(undefined8 *)(this + 0xdc) >> 0x20) * fVar29;
        fVar19 = *(float *)(lVar5 + 4);
        local_190 = 0;
        local_188 = 0;
        GsQuaternion::nlerpShortestPath
                  ((GsQuaternion *)&local_190,aGStack_180,(GsQuaternion *)(lVar5 + 0x10),fVar15);
        fVar16 = (float)local_188;
        fVar21 = (float)((ulong)local_188 >> 0x20);
        uStack_c4 = 0;
        uVar25 = NEON_rev64(CONCAT44(fVar21 * (float)local_190,fVar16 * (float)local_190),4);
        local_b4 = 0x3f800000;
        fVar27 = fVar16 * fVar21 + local_190._4_4_ * (float)local_190;
        fVar29 = fVar16 * fVar21 - local_190._4_4_ * (float)local_190;
        uStack_e4 = 0;
        fStack_ec = fVar16 * local_190._4_4_ + (float)uVar25;
        fStack_e8 = (float)((ulong)uVar25 >> 0x20);
        fVar38 = fVar21 * local_190._4_4_ + fStack_e8;
        fVar23 = fVar16 * local_190._4_4_ - (float)uVar25;
        fStack_e8 = fVar21 * local_190._4_4_ - fStack_e8;
        fVar27 = fVar27 + fVar27;
        fVar29 = fVar29 + fVar29;
        fStack_c8 = (float)NEON_fmadd(local_190._4_4_ * local_190._4_4_ + fVar16 * fVar16,0xc0000000
                                      ,0x3f800000);
        fVar23 = fVar23 + fVar23;
        fVar20 = (float)NEON_fmadd(local_190._4_4_ * local_190._4_4_ + fVar21 * fVar21,0xc0000000,
                                   0x3f800000);
        local_f0 = NEON_fmadd(fVar16 * fVar16 + fVar21 * fVar21,0xc0000000,0x3f800000);
        fVar38 = fVar38 + fVar38;
        local_e0 = CONCAT44(fVar20,fVar23);
        local_d8 = (ulong)(uint)fVar27;
        fStack_ec = fStack_ec + fStack_ec;
        fStack_e8 = fStack_e8 + fStack_e8;
        local_d0 = CONCAT44(fVar29,fVar38);
        fVar21 = *(float *)(lVar10 + 0xc);
        fVar30 = *(float *)(lVar10 + 0x14);
        fVar16 = -*(float *)(lVar10 + 0x10);
        uVar17 = NEON_fmsub(fVar21,local_f0,fVar23 * fVar16);
        fStack_c0 = (float)NEON_fmsub(fVar30,fVar38,uVar17);
        fStack_c0 = fVar18 + fVar22 + fVar15 * (fVar19 - (fVar18 + fVar22)) + fStack_c0;
        local_bc = fVar26 + ((float)uVar24 - fVar26) * fVar15 +
                   ((fVar20 * fVar16 - fStack_ec * fVar21) - fVar29 * fVar30);
        fStack_b8 = fVar28 + ((float)((ulong)uVar24 >> 0x20) - fVar28) * fVar15 +
                    ((fVar27 * fVar16 - fStack_e8 * fVar21) - fStack_c8 * fVar30);
        lVar5 = *(long *)(this + 0x20);
        if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x10) >> 5 & 1) == 0)) {
          puVar6 = &local_f0;
        }
        else {
          RawTransformGroup::updateWorldTransformation();
          Matrix4x4::invert3x4((Matrix4x4 *)&local_130,(Matrix4x4 *)(lVar5 + 0xb8));
          uVar31 = NEON_fmadd(local_f0,local_130,fStack_ec * local_120);
          uVar36 = NEON_fmadd(local_f0,local_12c,fStack_ec * fStack_11c);
          uVar17 = NEON_fmadd(local_f0,uStack_128,fStack_ec * local_118);
          local_164 = 0;
          local_170 = NEON_fmadd(fStack_e8,local_110,uVar31);
          uStack_16c = NEON_fmadd(fStack_e8,uStack_10c,uVar36);
          local_154 = 0;
          local_168 = NEON_fmadd(fStack_e8,local_108,uVar17);
          uVar17 = NEON_fmadd((undefined4)local_e0,local_130,local_120 * local_e0._4_4_);
          uVar31 = NEON_fmadd((undefined4)local_e0,local_12c,fStack_11c * local_e0._4_4_);
          local_160 = NEON_fmadd((undefined4)local_d8,local_110,uVar17);
          uStack_15c = NEON_fmadd((undefined4)local_d8,uStack_10c,uVar31);
          uVar17 = NEON_fmadd((undefined4)local_e0,uStack_128,local_118 * local_e0._4_4_);
          local_144 = 0;
          puVar6 = &local_170;
          local_158 = NEON_fmadd((undefined4)local_d8,local_108,uVar17);
          uVar37 = NEON_fmadd((undefined4)local_d0,local_130,local_120 * local_d0._4_4_);
          uVar32 = NEON_fmadd((undefined4)local_d0,uStack_128,local_118 * local_d0._4_4_);
          local_134 = 0x3f800000;
          uVar17 = NEON_fmadd(fStack_c0,local_130,local_120 * local_bc);
          uVar33 = NEON_fmadd((undefined4)local_d0,local_12c,fStack_11c * local_d0._4_4_);
          uVar36 = NEON_fmadd(fStack_c0,local_12c,fStack_11c * local_bc);
          uVar31 = NEON_fmadd(fStack_c0,uStack_128,local_118 * local_bc);
          local_150 = NEON_fmadd(fStack_c8,local_110,uVar37);
          local_148 = NEON_fmadd(fStack_c8,local_108,uVar32);
          uStack_14c = NEON_fmadd(fStack_c8,uStack_10c,uVar33);
          local_140 = (float)NEON_fmadd(fStack_b8,local_110,uVar17);
          fStack_13c = (float)NEON_fmadd(fStack_b8,uStack_10c,uVar36);
          local_138 = (float)NEON_fmadd(fStack_b8,local_108,uVar31);
          local_140 = local_100 + local_140;
          fStack_13c = fStack_13c + local_fc;
          local_138 = local_138 + fStack_f8;
        }
        RawTransformGroup::setTransformation(this,(Matrix4x4 *)puVar6,0);
        uVar12 = uVar12 + 1;
        *pfVar13 = fVar35;
      }
    } while (uVar12 < uVar11);
  }
  if (*(long *)(lVar3 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


