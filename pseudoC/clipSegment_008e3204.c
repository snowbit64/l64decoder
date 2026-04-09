// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clipSegment
// Entry Point: 008e3204
// Size: 1560 bytes
// Signature: undefined __thiscall clipSegment(TyreTrackGeometry * this, Vertex * param_1, Parallelogram * param_2)


/* TyreTrackGeometry::clipSegment(TyreTrackGeometry::Vertex*, TyreTrackGeometry::Parallelogram
   const&) */

void __thiscall
TyreTrackGeometry::clipSegment(TyreTrackGeometry *this,Vertex *param_1,Parallelogram *param_2)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  ushort uVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  undefined8 uVar13;
  Vertex *pVVar14;
  uint uVar15;
  undefined8 *puVar16;
  ushort uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar51;
  float fVar52;
  undefined auVar50 [16];
  float fVar53;
  float fVar54;
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  float fVar59;
  uint local_3d8;
  uint local_3d4;
  Vertex aVStack_3d0 [576];
  undefined8 local_190 [4];
  undefined4 local_170;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined8 uStack_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  fVar35 = *(float *)param_1;
  if (((*(float *)(param_1 + 0x24) != fVar35) ||
      (*(float *)(param_1 + 0x28) != *(float *)(param_1 + 4))) ||
     (*(float *)(param_1 + 0x2c) != *(float *)(param_1 + 8))) {
    if (((*(float *)(param_1 + 0x48) == *(float *)(param_1 + 0x6c)) &&
        (*(float *)(param_1 + 0x4c) == *(float *)(param_1 + 0x70))) &&
       (*(float *)(param_1 + 0x50) == *(float *)(param_1 + 0x74))) {
      uVar15 = 3;
      bVar10 = true;
    }
    else {
      bVar10 = false;
      uVar15 = 4;
    }
    fVar23 = *(float *)param_2;
    fVar27 = *(float *)(param_2 + 4);
    uVar31 = *(undefined4 *)(param_2 + 8);
    uVar22 = *(undefined4 *)(param_2 + 0xc);
    uVar20 = *(undefined4 *)(param_2 + 0x10);
    uVar26 = *(undefined4 *)(param_2 + 0x14);
    uVar30 = *(undefined4 *)(param_2 + 0x18);
    uVar28 = *(undefined4 *)(param_2 + 0x1c);
    fVar38 = (float)NEON_fmadd(uVar22,uVar20,fVar27);
    fVar43 = (float)NEON_fmadd(uVar31,uVar20,fVar23);
    fVar33 = (float)NEON_fmadd(uVar30,uVar28,fVar27);
    fVar37 = (float)NEON_fmadd(uVar26,uVar28,fVar23);
    fVar54 = (float)NEON_fmadd(uVar30,uVar28,fVar38);
    fVar59 = (float)NEON_fmadd(uVar26,uVar28,fVar43);
    fVar32 = *(float *)(param_1 + 0x2c);
    auVar55 = NEON_fmov(0x3f800000,4);
    fVar44 = fVar27 - fVar33;
    fVar46 = fVar33 - fVar54;
    fVar47 = fVar54 - fVar38;
    fVar48 = fVar38 - fVar27;
    fVar39 = fVar23 - fVar37;
    fVar40 = fVar37 - fVar59;
    fVar41 = fVar59 - fVar43;
    fVar42 = fVar43 - fVar23;
    fVar34 = *(float *)(param_1 + 0x24);
    auVar58._0_4_ = fVar44 * fVar44 + fVar39 * fVar39;
    auVar58._4_4_ = fVar46 * fVar46 + fVar40 * fVar40;
    auVar58._8_4_ = fVar47 * fVar47 + fVar41 * fVar41;
    auVar58._12_4_ = fVar48 * fVar48 + fVar42 * fVar42;
    auVar50 = NEON_fsqrt(auVar58,4);
    fVar49 = auVar55._0_4_ / auVar50._0_4_;
    fVar51 = auVar55._4_4_ / auVar50._4_4_;
    fVar52 = auVar55._8_4_ / auVar50._8_4_;
    fVar53 = auVar55._12_4_ / auVar50._12_4_;
    fVar29 = *(float *)(param_1 + 8);
    fVar36 = *(float *)(param_1 + 0x48);
    fVar45 = fVar49 * -fVar44;
    fVar46 = fVar51 * -fVar46;
    fVar47 = fVar52 * -fVar47;
    fVar48 = fVar53 * -fVar48;
    fVar39 = fVar39 * fVar49;
    fVar40 = fVar40 * fVar51;
    fVar41 = fVar41 * fVar52;
    fVar42 = fVar42 * fVar53;
    fVar44 = *(float *)(param_1 + 0x50);
    auVar57._0_4_ = (fVar35 - fVar37) * fVar45 + (fVar29 - fVar33) * fVar39;
    auVar57._4_4_ = (fVar35 - fVar59) * fVar46 + (fVar29 - fVar54) * fVar40;
    auVar57._8_4_ = (fVar35 - fVar43) * fVar47 + (fVar29 - fVar38) * fVar41;
    auVar57._12_4_ = (fVar35 - fVar23) * fVar48 + (fVar29 - fVar27) * fVar42;
    auVar56._0_4_ = (fVar34 - fVar37) * fVar45 + (fVar32 - fVar33) * fVar39;
    auVar56._4_4_ = (fVar34 - fVar59) * fVar46 + (fVar32 - fVar54) * fVar40;
    auVar56._8_4_ = (fVar34 - fVar43) * fVar47 + (fVar32 - fVar38) * fVar41;
    auVar56._12_4_ = (fVar34 - fVar23) * fVar48 + (fVar32 - fVar27) * fVar42;
    auVar50._8_4_ = 0x38d1b717;
    auVar50._0_8_ = 0x38d1b71738d1b717;
    auVar50._12_4_ = 0x38d1b717;
    auVar58 = NEON_fcmgt(auVar50,auVar57,4);
    auVar55._8_4_ = 0x38d1b717;
    auVar55._0_8_ = 0x38d1b71738d1b717;
    auVar55._12_4_ = 0x38d1b717;
    auVar50 = NEON_fcmgt(auVar55,auVar56,4);
    auVar6._8_4_ = 0x38d1b717;
    auVar6._0_8_ = 0x38d1b71738d1b717;
    auVar6._12_4_ = 0x38d1b717;
    auVar8._4_4_ = (fVar36 - fVar59) * fVar46 + (fVar44 - fVar54) * fVar40;
    auVar8._0_4_ = (fVar36 - fVar37) * fVar45 + (fVar44 - fVar33) * fVar39;
    auVar8._8_4_ = (fVar36 - fVar43) * fVar47 + (fVar44 - fVar38) * fVar41;
    auVar8._12_4_ = (fVar36 - fVar23) * fVar48 + (fVar44 - fVar27) * fVar42;
    auVar55 = NEON_fcmgt(auVar6,auVar8,4);
    uVar1 = auVar58._12_2_ & 1;
    uVar18 = 0xe;
    if ((auVar58 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
      uVar18 = 0xf;
    }
    uVar17 = uVar1 | 2;
    if ((auVar58 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      uVar18 = uVar18 & 0xfffffffd;
      uVar17 = uVar1;
    }
    uVar1 = uVar17 | 4;
    if ((auVar58 & (undefined  [16])0x100000000) == (undefined  [16])0x0) {
      uVar18 = uVar18 & 0xfffffffb;
      uVar1 = uVar17;
    }
    uVar17 = uVar1 | 8;
    if ((auVar58 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      uVar18 = uVar18 & 7;
      uVar17 = uVar1;
    }
    uVar17 = uVar17 | auVar50._12_2_ & 1;
    if ((auVar50 & (undefined  [16])0x100000000) == (undefined  [16])0x0) {
      uVar18 = uVar18 & 0xe;
    }
    bVar11 = (auVar50 & (undefined  [16])0x1) == (undefined  [16])0x0;
    uVar1 = uVar17 | 2;
    if (bVar11) {
      uVar1 = uVar17;
    }
    if (bVar11) {
      uVar18 = uVar18 & 0xfffffffd;
    }
    bVar11 = (auVar50 & (undefined  [16])0x100000000) == (undefined  [16])0x0;
    uVar17 = uVar1 | 4;
    if (bVar11) {
      uVar17 = uVar1;
    }
    if (bVar11) {
      uVar18 = uVar18 & 0xfffffffb;
    }
    bVar11 = (auVar50 & (undefined  [16])0x1) == (undefined  [16])0x0;
    uVar1 = uVar17 | 8;
    if (bVar11) {
      uVar1 = uVar17;
    }
    if (bVar11) {
      uVar18 = uVar18 & 0xfffffff7;
    }
    uVar1 = uVar1 | auVar55._12_2_ & 1;
    if ((auVar55 & (undefined  [16])0x100000000) == (undefined  [16])0x0) {
      uVar18 = uVar18 & 0xfffffffe;
    }
    uVar17 = uVar1 | 2;
    if ((auVar55 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      uVar18 = uVar18 & 0xfffffffd;
      uVar17 = uVar1;
    }
    uVar1 = uVar17 | 4;
    if ((auVar55 & (undefined  [16])0x100000000) == (undefined  [16])0x0) {
      uVar18 = uVar18 & 0xfffffffb;
      uVar1 = uVar17;
    }
    uVar17 = uVar1 | 8;
    if ((auVar55 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      uVar18 = uVar18 & 0xfffffff7;
      uVar17 = uVar1;
    }
    if (!bVar10) {
      fVar35 = *(float *)(param_1 + 0x6c);
      fVar32 = *(float *)(param_1 + 0x74);
      auVar5._4_4_ = (fVar35 - fVar59) * fVar46 + (fVar32 - fVar54) * fVar40;
      auVar5._0_4_ = (fVar35 - fVar37) * fVar45 + (fVar32 - fVar33) * fVar39;
      auVar5._8_4_ = (fVar35 - fVar43) * fVar47 + (fVar32 - fVar38) * fVar41;
      auVar5._12_4_ = (fVar35 - fVar23) * fVar48 + (fVar32 - fVar27) * fVar42;
      auVar7._8_4_ = 0x38d1b717;
      auVar7._0_8_ = 0x38d1b71738d1b717;
      auVar7._12_4_ = 0x38d1b717;
      auVar50 = NEON_fcmgt(auVar7,auVar5,4);
      if ((auVar50 & (undefined  [16])0x100000000) == (undefined  [16])0x0) {
        uVar18 = uVar18 & 0xfffffffe;
      }
      uVar17 = uVar17 | auVar50._12_2_ & 1;
      uVar1 = uVar17 | 2;
      if ((auVar50 & (undefined  [16])0x1) == (undefined  [16])0x0) {
        uVar18 = uVar18 & 0xfffffffd;
        uVar1 = uVar17;
      }
      uVar9 = uVar1 | 4;
      if ((auVar50 & (undefined  [16])0x100000000) == (undefined  [16])0x0) {
        uVar18 = uVar18 & 0xfffffffb;
        uVar9 = uVar1;
      }
      uVar17 = uVar9 | 8;
      if ((auVar50 & (undefined  [16])0x1) == (undefined  [16])0x0) {
        uVar18 = uVar18 & 0xfffffff7;
        uVar17 = uVar9;
      }
    }
    if (uVar18 == 0) {
      if (uVar17 == 0) {
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        uVar13 = 1;
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(undefined4 *)(param_1 + 0x74) = 0;
        *(undefined8 *)param_1 = 0;
        *(undefined8 *)(param_1 + 0x24) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x6c) = 0;
      }
      else {
        uVar19 = 0;
        bVar10 = false;
        uVar18 = 0xffffffff;
        pVVar14 = param_1;
        while( true ) {
          fVar32 = (float)NEON_fmadd(uVar31,uVar20,fVar23);
          fVar34 = (float)NEON_fmadd(uVar22,uVar20,fVar27);
          fVar29 = fVar34;
          fVar35 = fVar32;
          if (1 < uVar18) {
            fVar29 = fVar27;
            fVar35 = fVar23;
          }
          fVar36 = (float)NEON_fmadd(uVar26,uVar28,fVar35);
          fVar44 = (float)NEON_fmadd(uVar30,uVar28,fVar29);
          if ((uVar18 + 1 & 0x7ffffffe) != 2) {
            fVar44 = fVar29;
            fVar36 = fVar35;
          }
          if (1 < (uVar18 + 2 & 3) - 1) {
            fVar34 = fVar27;
            fVar32 = fVar23;
          }
          uVar3 = (ulong)uVar19;
          fVar35 = (float)NEON_fmadd(uVar26,uVar28,fVar32);
          fVar29 = (float)NEON_fmadd(uVar30,uVar28,fVar34);
          if ((uVar18 + 2 & 2) != 0) {
            fVar34 = fVar29;
            fVar32 = fVar35;
          }
          clipPolygon(fVar36,fVar44,fVar32,fVar34,pVVar14,uVar15,(Vertex *)local_190,&local_3d4,
                      aVStack_3d0 + uVar3 * 0x120,&local_3d8);
          uVar15 = local_3d4;
          if (2 < local_3d4) {
            puVar16 = (undefined8 *)param_1;
            if (bVar10) {
              iVar12 = Ring::allocateNewSegment
                                 ((Ring *)(this + 0x70),(Track *)0x0,
                                  *(MultiresTexture **)(this + 0xa8));
              puVar16 = (undefined8 *)(*(long *)(this + 0x98) + (ulong)(uint)(iVar12 << 2) * 0x24);
            }
            *(undefined4 *)((long)puVar16 + 0x44) = local_14c;
            *(undefined8 *)((long)puVar16 + 0x2c) = uStack_164;
            *(undefined8 *)((long)puVar16 + 0x24) = local_16c;
            *(undefined8 *)((long)puVar16 + 0x3c) = uStack_154;
            *(undefined8 *)((long)puVar16 + 0x34) = uStack_15c;
            lVar2 = 0x6c;
            if (uVar15 < 4) {
              lVar2 = 0x48;
            }
            puVar16[1] = local_190[1];
            *puVar16 = local_190[0];
            puVar16[3] = local_190[3];
            puVar16[2] = local_190[2];
            *(undefined4 *)(puVar16 + 4) = local_170;
            puVar16[10] = uStack_140;
            puVar16[9] = local_148;
            puVar16[0xc] = uStack_130;
            puVar16[0xb] = uStack_138;
            uVar21 = *(undefined8 *)((long)local_190 + lVar2 + 8);
            uVar13 = *(undefined8 *)((long)local_190 + lVar2);
            uVar25 = *(undefined8 *)((long)local_190 + lVar2 + 0x18);
            uVar24 = *(undefined8 *)((long)local_190 + lVar2 + 0x10);
            *(undefined4 *)(puVar16 + 0xd) = local_128;
            *(undefined8 *)((long)puVar16 + 0x74) = uVar21;
            *(undefined8 *)((long)puVar16 + 0x6c) = uVar13;
            uVar20 = *(undefined4 *)((long)&local_170 + lVar2);
            *(undefined8 *)((long)puVar16 + 0x84) = uVar25;
            *(undefined8 *)((long)puVar16 + 0x7c) = uVar24;
            *(undefined4 *)((long)puVar16 + 0x8c) = uVar20;
            if (uVar15 < 5) {
              bVar10 = true;
            }
            else {
              iVar12 = Ring::allocateNewSegment
                                 ((Ring *)(this + 0x70),(Track *)0x0,
                                  *(MultiresTexture **)(this + 0xa8));
              puVar16 = (undefined8 *)(*(long *)(this + 0x98) + (ulong)(uint)(iVar12 << 2) * 0x24);
              lVar2 = 0x90;
              if (uVar15 != 5) {
                lVar2 = 0xb4;
              }
              bVar10 = true;
              puVar16[1] = local_190[1];
              *puVar16 = local_190[0];
              puVar16[3] = local_190[3];
              puVar16[2] = local_190[2];
              *(undefined4 *)(puVar16 + 4) = local_170;
              *(undefined8 *)((long)puVar16 + 0x2c) = uStack_11c;
              *(undefined8 *)((long)puVar16 + 0x24) = local_124;
              *(undefined8 *)((long)puVar16 + 0x3c) = uStack_10c;
              *(undefined8 *)((long)puVar16 + 0x34) = uStack_114;
              puVar16[10] = uStack_f8;
              puVar16[9] = local_100;
              uVar21 = *(undefined8 *)((long)local_190 + lVar2 + 8);
              uVar13 = *(undefined8 *)((long)local_190 + lVar2);
              uVar25 = *(undefined8 *)((long)local_190 + lVar2 + 0x18);
              uVar24 = *(undefined8 *)((long)local_190 + lVar2 + 0x10);
              puVar16[0xc] = uStack_e8;
              puVar16[0xb] = uStack_f0;
              *(undefined8 *)((long)puVar16 + 0x74) = uVar21;
              *(undefined8 *)((long)puVar16 + 0x6c) = uVar13;
              *(undefined8 *)((long)puVar16 + 0x84) = uVar25;
              *(undefined8 *)((long)puVar16 + 0x7c) = uVar24;
              uVar20 = *(undefined4 *)((long)&local_170 + lVar2);
              *(undefined4 *)((long)puVar16 + 0x44) = local_104;
              *(undefined4 *)(puVar16 + 0xd) = local_e0;
              *(undefined4 *)((long)puVar16 + 0x8c) = uVar20;
            }
          }
          if ((local_3d8 == 0) || (uVar18 == 2)) break;
          uVar20 = *(undefined4 *)(param_2 + 0x10);
          uVar26 = *(undefined4 *)(param_2 + 0x14);
          fVar23 = *(float *)param_2;
          fVar27 = *(float *)(param_2 + 4);
          uVar31 = *(undefined4 *)(param_2 + 8);
          uVar22 = *(undefined4 *)(param_2 + 0xc);
          uVar30 = *(undefined4 *)(param_2 + 0x18);
          uVar28 = *(undefined4 *)(param_2 + 0x1c);
          uVar19 = uVar19 ^ 1;
          uVar18 = uVar18 + 1;
          pVVar14 = aVStack_3d0 + uVar3 * 0x120;
          uVar15 = local_3d8;
        }
        if (!bVar10) {
          *(undefined4 *)(param_1 + 8) = 0;
          *(undefined4 *)(param_1 + 0x2c) = 0;
          *(undefined4 *)(param_1 + 0x50) = 0;
          *(undefined4 *)(param_1 + 0x74) = 0;
          *(undefined8 *)param_1 = 0;
          *(undefined8 *)(param_1 + 0x24) = 0;
          *(undefined8 *)(param_1 + 0x48) = 0;
          *(undefined8 *)(param_1 + 0x6c) = 0;
        }
        uVar13 = 1;
      }
      goto LAB_008e355c;
    }
  }
  uVar13 = 0;
LAB_008e355c:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}


