// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00924b1c
// Size: 1788 bytes
// Signature: undefined __thiscall update(DestructionShape * this, float param_1)


/* DestructionShape::update(float) */

void __thiscall DestructionShape::update(DestructionShape *this,float param_1)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  DestructionGeometryShared *pDVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  Matrix4x4 *pMVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float unaff_s9;
  float unaff_s11;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  float local_1d8;
  float fStack_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_198;
  float local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  float local_180;
  float fStack_17c;
  float local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  float local_158;
  float local_150 [4];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 local_114;
  float local_110;
  float fStack_10c;
  float local_108;
  undefined4 local_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float local_c4;
  undefined8 local_c0;
  float local_b8;
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  uVar13 = *(uint *)(this + 0x3b4);
  if (uVar13 != 0) {
    plVar5 = *(long **)(this + 0x3b8);
    if (plVar5 != (long *)0x0) {
      fVar18 = 1.0 / (float)(ulong)uVar13;
      *(ulong *)(this + 0x3a8) =
           CONCAT44((float)((ulong)*(undefined8 *)(this + 0x3a8) >> 0x20) * fVar18,
                    (float)*(undefined8 *)(this + 0x3a8) * fVar18);
      *(float *)(this + 0x3b0) = fVar18 * *(float *)(this + 0x3b0);
      (**(code **)(*plVar5 + 0x10))(plVar5,uVar13,this + 0x3a8);
    }
    *(undefined8 *)(this + 0x3b0) = 0;
    *(undefined8 *)(this + 0x3a8) = 0;
  }
  if (*(int *)(this + 0x350) != 0) {
    uVar17 = 0;
    uVar13 = 0;
    uVar14 = *(undefined8 *)(this + 0x170);
    local_c0 = 0;
    local_b8 = 0.0;
    do {
      fVar18 = *(float *)(this + 0x2d0);
      fVar24 = *(float *)(this + 0x2d4);
      pfVar1 = (float *)(*(long *)(this + 0x340) + (uVar17 & 0xfffffff) * 0x40);
      fVar29 = *(float *)(this + 0x2d8);
      uVar20 = *(undefined4 *)(this + 0x2c0);
      uVar22 = *(undefined4 *)(this + 0x2c4);
      local_100 = *pfVar1;
      uVar31 = *(undefined4 *)(this + 0x2c8);
      uVar27 = *(undefined4 *)(this + 0x2e4);
      uVar38 = *(undefined4 *)(this + 0x2e8);
      fStack_fc = pfVar1[1];
      local_f8 = pfVar1[2];
      uVar33 = NEON_fmadd(local_100,uVar20,fStack_fc * fVar18);
      local_f4 = pfVar1[3];
      uVar36 = NEON_fmadd(local_100,uVar22,fStack_fc * fVar24);
      uVar19 = NEON_fmadd(local_100,uVar31,fStack_fc * fVar29);
      local_f0 = pfVar1[4];
      uStack_13c = NEON_fmadd(local_f8,uVar27,uVar36);
      local_138 = NEON_fmadd(local_f8,uVar38,uVar19);
      fStack_ec = pfVar1[5];
      local_e8 = pfVar1[6];
      uVar40 = NEON_fmadd(local_f0,uVar20,fStack_ec * fVar18);
      local_e4 = pfVar1[7];
      uVar36 = NEON_fmadd(local_f0,uVar22,fStack_ec * fVar24);
      uVar19 = *(undefined4 *)(this + 0x2e0);
      local_e0 = pfVar1[8];
      uStack_12c = NEON_fmadd(local_e8,uVar27,uVar36);
      local_140 = NEON_fmadd(local_f8,uVar19,uVar33);
      uVar36 = NEON_fmadd(local_f0,uVar31,fStack_ec * fVar29);
      local_130 = NEON_fmadd(local_e8,uVar19,uVar40);
      fStack_dc = pfVar1[9];
      local_128 = NEON_fmadd(local_e8,uVar38,uVar36);
      local_d8 = pfVar1[10];
      uVar36 = NEON_fmadd(local_e0,uVar20,fStack_dc * fVar18);
      local_d4 = pfVar1[0xb];
      uVar40 = NEON_fmadd(local_e0,uVar22,fStack_dc * fVar24);
      uVar33 = NEON_fmadd(local_e0,uVar31,fStack_dc * fVar29);
      local_120 = NEON_fmadd(local_d8,uVar19,uVar36);
      local_d0 = pfVar1[0xc];
      fStack_cc = pfVar1[0xd];
      local_c8 = pfVar1[0xe];
      uVar36 = NEON_fmadd(local_d0,uVar20,fStack_cc * fVar18);
      uVar20 = NEON_fmadd(local_d0,uVar22,fStack_cc * fVar24);
      uVar22 = NEON_fmadd(local_d0,uVar31,fStack_cc * fVar29);
      local_c4 = pfVar1[0xf];
      local_118 = NEON_fmadd(local_d8,uVar38,uVar33);
      local_110 = (float)NEON_fmadd(local_c8,uVar19,uVar36);
      fStack_10c = (float)NEON_fmadd(local_c8,uVar27,uVar20);
      local_108 = (float)NEON_fmadd(local_c8,uVar38,uVar22);
      uStack_11c = NEON_fmadd(local_d8,uVar27,uVar40);
      local_110 = local_110 + *(float *)(this + 0x2f0);
      fStack_10c = fStack_10c + *(float *)(this + 0x2f4);
      local_134 = 0;
      local_108 = local_108 + *(float *)(this + 0x2f8);
      local_124 = 0;
      local_114 = 0;
      local_104 = 0x3f800000;
      uVar3 = *(uint *)(*(long *)(this + 0x348) + uVar17 * 0x10);
      pMVar15 = (Matrix4x4 *)(ulong)uVar3;
      DestructionGeometry::setChunkTransformation
                ((uint)uVar14,pMVar15,(Matrix4x4 *)&local_100,SUB81(&local_140,0),(GsShape *)0x0,
                 *(float *)(this + 0x2ac),*(float *)(this + 0x2b0),*(float *)(this + 0x2b4));
      if ((0.0 < *(float *)(this + 0x3c0)) &&
         ((*(long *)(this + 0x3c8) != 0 || (*(long *)(this + 0x380) != *(long *)(this + 0x378))))) {
        lVar9 = *(long *)(this + 0x348) + uVar17 * 0x10;
        uVar36 = *(undefined4 *)(lVar9 + 4);
        fVar24 = *(float *)(lVar9 + 8);
        uVar20 = *(undefined4 *)(lVar9 + 0xc);
        uVar19 = NEON_fmadd(uVar36,uVar36,fVar24 * fVar24);
        fVar18 = (float)NEON_fmadd(uVar20,uVar20,uVar19);
        if ((0.001 < param_1) &&
           ((*(int *)(*(long *)(this + 0x228) + (long)pMVar15 * 0x30 + 0x28) == 0 &&
            (*(float *)(this + 0x3c0) <
             ABS((SQRT(fVar18) - *(float *)(*(long *)(this + 0x228) + (long)pMVar15 * 0x30 + 0x24))
                 / (param_1 * 0.001)))))) {
          pDVar6 = (DestructionGeometryShared *)DestructionGeometry::getShared();
          DestructionGeometryShared::getChunk(pDVar6,uVar3);
          puVar7 = (undefined8 *)DestructionChunk::getHullMin();
          pDVar6 = (DestructionGeometryShared *)DestructionGeometry::getShared();
          DestructionGeometryShared::getChunk(pDVar6,uVar3);
          puVar8 = (undefined8 *)DestructionChunk::getHullMax();
          lVar9 = *(long *)(this + 0x378);
          fVar41 = ((float)*puVar7 + (float)*puVar8) * 0.5;
          fVar42 = ((float)((ulong)*puVar7 >> 0x20) + (float)((ulong)*puVar8 >> 0x20)) * 0.5;
          fVar29 = (*(float *)(puVar7 + 1) + *(float *)(puVar8 + 1)) * 0.5;
          if (*(long *)(this + 0x380) != lVar9) {
            fVar23 = -local_f8;
            fVar21 = (float)NEON_fmadd(fStack_fc,local_d8,fStack_dc * fVar23);
            fVar25 = (float)NEON_fmadd(fStack_ec,local_d8,fStack_dc * -local_e8);
            fVar26 = (float)NEON_fmadd(fStack_fc,local_e8,fStack_ec * fVar23);
            uVar19 = NEON_fmadd(local_100,fVar25,fVar21 * -local_f0);
            fVar30 = (float)NEON_fmadd(local_e0,fVar26,uVar19);
            if (1e-36 < ABS(fVar30)) {
              fVar30 = 1.0 / fVar30;
              fVar28 = (float)NEON_fmadd(local_f0,local_d8,local_e0 * -local_e8);
              fVar35 = (float)NEON_fmadd(local_100,local_d8,local_e0 * fVar23);
              fVar23 = (float)NEON_fmadd(local_100,local_e8,local_f0 * fVar23);
              fVar37 = (float)NEON_fmadd(local_100,fStack_dc,local_e0 * -fStack_fc);
              fVar34 = (float)NEON_fmadd(local_100,fStack_ec,local_f0 * -fStack_fc);
              fVar32 = (float)NEON_fmadd(local_f0,fStack_dc,local_e0 * -fStack_ec);
              fVar39 = -fVar30;
              local_1c4 = fVar25 * fVar30;
              local_1c8 = fVar26 * fVar30;
              unaff_s9 = fVar32 * fVar30;
              unaff_s11 = fVar34 * fVar30;
              local_1cc = fVar21 * fVar39;
              local_1d8 = fVar28 * fVar39;
              fStack_1d4 = fVar35 * fVar30;
              local_198 = fVar37 * fVar39;
              local_1d0 = fVar23 * fVar39;
            }
            uVar19 = NEON_fmadd(uVar36,local_1c4,fVar24 * local_1d8);
            uVar33 = NEON_fmadd(uVar36,local_1cc,fVar24 * fStack_1d4);
            uVar36 = NEON_fmadd(uVar36,local_1c8,fVar24 * local_1d0);
            local_150[0] = (float)NEON_fmadd(uVar20,unaff_s9,uVar19);
            local_150[1] = (float)NEON_fmadd(uVar20,local_198,uVar33);
            local_150[2] = (float)NEON_fmadd(uVar20,unaff_s11,uVar36);
            if ((ABS(local_150[1]) <= ABS(local_150[0])) || (ABS(local_150[1]) <= ABS(local_150[2]))
               ) {
              if (ABS(local_150[2]) <= ABS(local_150[0])) {
                lVar11 = 0;
              }
              else {
                lVar11 = 2;
              }
            }
            else {
              lVar11 = 1;
            }
            lVar12 = lVar11 * 4;
            local_170 = 0;
            local_168 = 0;
            uVar16 = 0;
            if (local_150[lVar11] <= 0.0) {
              puVar7 = puVar8;
            }
            uVar19 = 0xbf800000;
            if (local_150[lVar11] <= 0.0) {
              uVar19 = 0x3f800000;
            }
            uVar36 = *(undefined4 *)((long)puVar7 + lVar12);
            *(undefined4 *)((long)&local_170 + lVar12) = uVar19;
            local_160 = CONCAT44(fVar42,fVar41);
            local_158 = fVar29;
            *(undefined4 *)((long)&local_160 + lVar12) = uVar36;
            uVar19 = NEON_fmadd((undefined4)local_170,local_100,local_f0 * local_170._4_4_);
            uVar20 = NEON_fmadd((undefined4)local_160,local_100,local_f0 * local_160._4_4_);
            uVar22 = NEON_fmadd((undefined4)local_160,fStack_fc,fStack_ec * local_160._4_4_);
            uVar33 = NEON_fmadd((undefined4)local_160,local_f8,local_e8 * local_160._4_4_);
            uVar36 = NEON_fmadd((undefined4)local_170,fStack_fc,fStack_ec * local_170._4_4_);
            local_190 = (float)NEON_fmadd(local_168,local_e0,uVar19);
            uVar19 = NEON_fmadd((undefined4)local_170,local_f8,local_e8 * local_170._4_4_);
            local_180 = (float)NEON_fmadd(local_158,local_e0,uVar20);
            fStack_17c = (float)NEON_fmadd(local_158,fStack_dc,uVar22);
            local_178 = (float)NEON_fmadd(local_158,local_d8,uVar33);
            uStack_18c = NEON_fmadd(local_168,fStack_dc,uVar36);
            local_188 = NEON_fmadd(local_168,local_d8,uVar19);
            local_180 = local_d0 + local_180;
            fStack_17c = fStack_17c + fStack_cc;
            local_178 = local_178 + local_c8;
            do {
              DestructionEmitterShape::addEmitPoint
                        (*(DestructionEmitterShape **)(lVar9 + uVar16 * 8),&local_180,&local_190);
              uVar16 = (ulong)((int)uVar16 + 1);
              lVar9 = *(long *)(this + 0x378);
            } while (uVar16 < (ulong)(*(long *)(this + 0x380) - lVar9 >> 3));
          }
          if (*(long *)(this + 0x3c8) != 0) {
            uVar13 = uVar13 + 1;
            fVar24 = (float)NEON_fmadd(fVar29,local_d8,local_e8 * fVar42 + local_f8 * fVar41);
            local_c0 = CONCAT44(fStack_cc +
                                fStack_ec * fVar42 + fStack_fc * fVar41 + fStack_dc * fVar29 +
                                (float)((ulong)local_c0 >> 0x20),
                                local_d0 +
                                local_f0 * fVar42 + local_100 * fVar41 + local_e0 * fVar29 +
                                (float)local_c0);
            local_b8 = local_c8 + fVar24 + local_b8;
          }
        }
        lVar9 = *(long *)(this + 0x228) + (long)pMVar15 * 0x30;
        piVar10 = (int *)(lVar9 + 0x28);
        iVar2 = *piVar10;
        *(float *)(lVar9 + 0x24) = SQRT(fVar18);
        if (0 < iVar2) {
          *piVar10 = iVar2 + -1;
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(uint *)(this + 0x350));
    if (uVar13 != 0) {
      fVar18 = 1.0 / (float)(ulong)uVar13;
      local_c0 = CONCAT44((float)((ulong)local_c0 >> 0x20) * fVar18,(float)local_c0 * fVar18);
      local_b8 = fVar18 * local_b8;
      (**(code **)(**(long **)(this + 0x3c8) + 0x10))(*(long **)(this + 0x3c8),uVar13,&local_c0);
    }
    DestructionGeometry::updateBoundingVolume();
    *(undefined4 *)(this + 0x350) = 0;
  }
  if (*(long *)(lVar4 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


