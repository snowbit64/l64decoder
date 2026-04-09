// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: predictMotion
// Entry Point: 00f86ae0
// Size: 1840 bytes
// Signature: undefined __thiscall predictMotion(btSoftBody * this, float param_1)


/* btSoftBody::predictMotion(float) */

void __thiscall btSoftBody::predictMotion(btSoftBody *this,float param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (this[0x4b4] != (btSoftBody)0x0) {
    this[0x4b4] = (btSoftBody)0x0;
    updateConstants();
    if (*(long *)(this + 0x518) != 0) {
      FUN_00f41318(this + 0x518);
    }
    if (*(long *)(this + 0x520) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(undefined8 *)(this + 0x520) = 0;
    *(undefined4 *)(this + 0x528) = 0xffffffff;
    if ((*(long *)(this + 0x548) != 0) && (this[0x550] != (btSoftBody)0x0)) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(undefined8 *)(this + 0x548) = 0;
    *(undefined8 *)(this + 0x53c) = 0;
    this[0x550] = (btSoftBody)0x1;
    *(undefined4 *)(this + 0x530) = 0;
    if (((byte)this[0x1dc] >> 4 & 1) != 0) {
      initializeFaceTree();
    }
  }
  fVar13 = *(float *)(this + 0x1c8) * param_1;
  *(float *)(this + 0x240) = fVar13;
  *(float *)(this + 0x248) = fVar13 * 3.0;
  *(float *)(this + 0x244) = 1.0 / fVar13;
  fVar13 = (float)(**(code **)(**(long **)(this + 200) + 0x60))();
  uVar8 = (ulong)*(uint *)(this + 0x374);
  *(float *)(this + 0x24c) = fVar13;
  *(float *)(this + 0x250) = fVar13 * 0.25;
  if (0 < (int)*(uint *)(this + 0x374)) {
    fVar13 = *(float *)(this + 0x240);
    uVar15 = *(undefined8 *)(*(long *)(this + 0x348) + 0x30);
    fVar18 = *(float *)(*(long *)(this + 0x348) + 0x38);
    puVar11 = (undefined8 *)(*(long *)(this + 0x380) + 0x30);
    do {
      if (0.0 < *(float *)(puVar11 + 6)) {
        *puVar11 = CONCAT44((float)((ulong)*puVar11 >> 0x20) +
                            (float)((ulong)uVar15 >> 0x20) * fVar13,
                            (float)*puVar11 + (float)uVar15 * fVar13);
        *(float *)(puVar11 + 1) = *(float *)(puVar11 + 1) + fVar18 * fVar13;
      }
      uVar8 = uVar8 - 1;
      puVar11 = puVar11 + 0xf;
    } while (uVar8 != 0);
  }
  applyForces();
  uVar5 = *(uint *)(this + 0x374);
  if (0 < (int)uVar5) {
    lVar9 = 0;
    do {
      lVar12 = *(long *)(this + 0x380) + lVar9;
      lVar9 = lVar9 + 0x78;
      *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)(lVar12 + 0x18);
      *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(lVar12 + 0x10);
      fVar16 = *(float *)(*(long *)(this + 0x348) + 0xc) / *(float *)(this + 0x240);
      fVar18 = *(float *)(this + 0x240) * *(float *)(lVar12 + 0x60);
      fVar19 = -fVar16;
      fVar13 = (float)NEON_fminnm(fVar18 * *(float *)(lVar12 + 0x48),fVar16);
      uVar15 = NEON_fminnm(CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x40) >> 0x20) * fVar18,
                                    (float)*(undefined8 *)(lVar12 + 0x40) * fVar18),
                           CONCAT44(fVar16,fVar16),4);
      if (fVar13 <= fVar19) {
        fVar13 = fVar19;
      }
      uVar15 = NEON_fmaxnm(uVar15,CONCAT44(fVar19,fVar19),4);
      fVar13 = *(float *)(lVar12 + 0x38) + fVar13;
      fVar18 = (float)*(undefined8 *)(lVar12 + 0x30) + (float)uVar15;
      fVar16 = (float)((ulong)*(undefined8 *)(lVar12 + 0x30) >> 0x20) +
               (float)((ulong)uVar15 >> 0x20);
      *(float *)(lVar12 + 0x38) = fVar13;
      *(ulong *)(lVar12 + 0x30) = CONCAT44(fVar16,fVar18);
      fVar19 = *(float *)(this + 0x240);
      *(undefined8 *)(lVar12 + 0x40) = 0;
      *(undefined8 *)(lVar12 + 0x48) = 0;
      uVar14 = NEON_fmadd(fVar19,fVar13,*(undefined4 *)(lVar12 + 0x18));
      *(ulong *)(lVar12 + 0x10) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x10) >> 0x20) + fVar16 * fVar19,
                    (float)*(undefined8 *)(lVar12 + 0x10) + fVar18 * fVar19);
      *(undefined4 *)(lVar12 + 0x18) = uVar14;
    } while ((ulong)uVar5 * 0x78 - lVar9 != 0);
  }
  updateClusters();
  puVar11 = *(undefined8 **)(this + 0x4b8);
  if (puVar11 == (undefined8 *)0x0) {
    *(undefined8 *)(this + 0x49c) = 0;
    *(undefined8 *)(this + 0x494) = 0;
    *(undefined8 *)(this + 0x4ac) = 0;
    *(undefined8 *)(this + 0x4a4) = 0;
  }
  else {
    fVar13 = (float)(**(code **)(**(long **)(this + 200) + 0x60))();
    fVar18 = *(float *)(puVar11 + 1);
    uVar15 = *puVar11;
    *(undefined4 *)(this + 0x4a0) = 0;
    *(float *)(this + 0x49c) = fVar18 - fVar13;
    *(ulong *)(this + 0x494) =
         CONCAT44((float)((ulong)uVar15 >> 0x20) - fVar13,(float)uVar15 - fVar13);
    uVar15 = puVar11[2];
    fVar18 = *(float *)(puVar11 + 3);
    *(undefined4 *)(this + 0x4b0) = 0;
    *(ulong *)(this + 0x4a4) =
         CONCAT44((float)((ulong)uVar15 >> 0x20) + fVar13,(float)uVar15 + fVar13);
    *(float *)(this + 0x4ac) = fVar18 + fVar13;
    if (*(long *)(this + 0xc0) != 0) {
      plVar2 = *(long **)(*(long *)(this + 0x348) + 0x20);
      (**(code **)(*plVar2 + 0x20))
                (plVar2,*(long *)(this + 0xc0),this + 0x494,this + 0x4a4,
                 *(undefined8 *)(*(long *)(this + 0x348) + 0x28));
    }
  }
  uVar5 = *(uint *)(this + 0x374);
  if (0 < (int)uVar5) {
    lVar9 = 0;
    do {
      local_60 = *(float *)(this + 0x24c);
      fVar13 = *(float *)(this + 0x248);
      lVar12 = *(long *)(this + 0x380) + lVar9;
      local_6c = 0;
      local_5c = 0.0;
      local_78 = *(float *)(lVar12 + 0x10) - local_60;
      fStack_74 = *(float *)(lVar12 + 0x14) - local_60;
      local_70 = *(float *)(lVar12 + 0x18) - local_60;
      local_68 = *(float *)(lVar12 + 0x10) + local_60;
      fStack_64 = *(float *)(lVar12 + 0x14) + local_60;
      local_60 = *(float *)(lVar12 + 0x18) + local_60;
      local_f0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x30) >> 0x20) * fVar13,
                          (float)*(undefined8 *)(lVar12 + 0x30) * fVar13);
      uStack_e8 = (ulong)(uint)(*(float *)(lVar12 + 0x38) * fVar13);
      btDbvt::update((btDbvt *)(this + 0x4b8),*(btDbvtNode **)(lVar12 + 0x68),
                     (btDbvtAabbMm *)&local_78,(btVector3 *)&local_f0,*(float *)(this + 0x250));
      lVar9 = lVar9 + 0x78;
    } while ((ulong)uVar5 * 0x78 - lVar9 != 0);
  }
  if ((*(long *)(this + 0x518) != 0) && (0 < *(int *)(this + 0x3b4))) {
    lVar12 = 0;
    lVar9 = 0;
    do {
      lVar1 = *(long *)(this + 0x3c0) + lVar12;
      lVar3 = *(long *)(lVar1 + 0x10);
      lVar4 = *(long *)(lVar1 + 0x18);
      lVar10 = *(long *)(lVar1 + 0x20);
      local_68 = *(float *)(lVar3 + 0x10);
      fStack_64 = *(float *)(lVar3 + 0x14);
      fVar18 = *(float *)(lVar4 + 0x14);
      local_60 = *(float *)(lVar3 + 0x18);
      local_5c = *(float *)(lVar3 + 0x1c);
      fVar13 = *(float *)(lVar4 + 0x18);
      uVar14 = NEON_fminnm(*(undefined4 *)(lVar4 + 0x10),local_68);
      uVar31 = NEON_fminnm(fVar18,fStack_64);
      if (fStack_64 <= fVar18) {
        fStack_64 = fVar18;
      }
      fVar16 = *(float *)(lVar10 + 0x10);
      fVar18 = *(float *)(lVar10 + 0x14);
      uVar33 = NEON_fminnm(fVar13,local_60);
      uVar34 = NEON_fminnm(*(undefined4 *)(lVar4 + 0x1c),local_5c);
      if (local_60 <= fVar13) {
        local_60 = fVar13;
      }
      fVar13 = *(float *)(this + 0x24c);
      local_78 = (float)NEON_fminnm(fVar16,uVar14);
      fStack_74 = (float)NEON_fminnm(fVar18,uVar31);
      fVar19 = *(float *)(lVar10 + 0x18);
      fVar32 = *(float *)(lVar10 + 0x1c);
      if (local_68 <= fVar16) {
        local_68 = fVar16;
      }
      if (fStack_64 <= fVar18) {
        fStack_64 = fVar18;
      }
      fStack_74 = fStack_74 - fVar13;
      local_78 = local_78 - fVar13;
      local_70 = (float)NEON_fminnm(fVar19,uVar33);
      if (local_60 <= fVar19) {
        local_60 = fVar19;
      }
      local_6c = NEON_fminnm(fVar32,uVar34);
      local_68 = local_68 + fVar13;
      fStack_64 = fStack_64 + fVar13;
      local_70 = local_70 - fVar13;
      fVar18 = *(float *)(this + 0x248) * 0.3333333;
      local_60 = local_60 + fVar13;
      if (local_5c <= fVar32) {
        local_5c = fVar32;
      }
      local_f0 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar4 + 0x30) >> 0x20) +
                           (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar10 + 0x30) >> 0x20)) * fVar18,
                          ((float)*(undefined8 *)(lVar4 + 0x30) +
                           (float)*(undefined8 *)(lVar3 + 0x30) +
                          (float)*(undefined8 *)(lVar10 + 0x30)) * fVar18);
      uStack_e8 = (ulong)(uint)(fVar18 * (*(float *)(lVar4 + 0x38) + *(float *)(lVar3 + 0x38) +
                                         *(float *)(lVar10 + 0x38)));
      btDbvt::update((btDbvt *)(this + 0x518),*(btDbvtNode **)(lVar1 + 0x40),
                     (btDbvtAabbMm *)&local_78,(btVector3 *)&local_f0,*(float *)(this + 0x250));
      lVar9 = lVar9 + 1;
      lVar12 = lVar12 + 0x48;
    } while (lVar9 < *(int *)(this + 0x3b4));
  }
  updatePose();
  if (((this[0x259] != (btSoftBody)0x0) && (0.0 < *(float *)(this + 0x198))) &&
     (uVar5 = *(uint *)(this + 0x374), 0 < (int)uVar5)) {
    uVar15 = *(undefined8 *)(this + 0x2b0);
    uVar17 = *(undefined8 *)(this + 0x2c0);
    uVar20 = *(undefined8 *)(this + 0x2b8);
    lVar12 = 0;
    fVar13 = *(float *)(this + 0x2c4);
    fVar18 = *(float *)(this + 0x2b4);
    lVar9 = 0;
    fVar19 = *(float *)(this + 0x2d0);
    fVar16 = *(float *)(this + 0x2c8);
    fVar32 = *(float *)(this + 0x2d4);
    uVar14 = *(undefined4 *)(this + 0x2d8);
    do {
      lVar1 = *(long *)(this + 0x380) + lVar12;
      if (0.0 < *(float *)(lVar1 + 0x60)) {
        fVar30 = *(float *)(this + 0x198);
        uVar23 = *(undefined8 *)(*(long *)(this + 0x270) + lVar9);
        fVar26 = *(float *)((undefined8 *)(*(long *)(this + 0x270) + lVar9) + 1);
        fVar21 = (float)uVar23;
        fVar24 = (float)((ulong)uVar23 >> 0x20);
        uVar23 = NEON_rev64(CONCAT44(fVar24 * fVar18,fVar21 * (float)uVar17),4);
        fVar22 = (float)NEON_fmadd(fVar26,uVar14,fVar19 * fVar21 + fVar32 * fVar24);
        fVar25 = *(float *)(this + 0x2a8);
        uVar28 = *(undefined8 *)(this + 0x2a0);
        *(undefined4 *)(lVar1 + 0x1c) = 0;
        fVar27 = (float)*(undefined8 *)(lVar1 + 0x10);
        fVar29 = (float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20);
        uVar31 = NEON_fmadd((fVar22 + fVar25) - *(float *)(lVar1 + 0x18),fVar30,
                            *(float *)(lVar1 + 0x18));
        *(undefined4 *)(lVar1 + 0x18) = uVar31;
        *(ulong *)(lVar1 + 0x10) =
             CONCAT44(fVar29 + (((float)((ulong)uVar23 >> 0x20) + fVar13 * fVar24 + fVar16 * fVar26
                                + (float)((ulong)uVar28 >> 0x20)) - fVar29) * fVar30,
                      fVar27 + (((float)uVar23 + (float)uVar15 * fVar21 + (float)uVar20 * fVar26 +
                                (float)uVar28) - fVar27) * fVar30);
      }
      lVar9 = lVar9 + 0x10;
      lVar12 = lVar12 + 0x78;
    } while ((ulong)uVar5 * 0x10 - lVar9 != 0);
  }
  lVar9 = (long)*(int *)(this + 0x414);
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  local_8c = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  if (*(int *)(this + 0x414) < 0) {
    if (*(int *)(this + 0x418) < 0) {
      if ((*(long *)(this + 0x420) != 0) && (this[0x428] != (btSoftBody)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(undefined8 *)(this + 0x420) = 0;
      *(undefined4 *)(this + 0x418) = 0;
      this[0x428] = (btSoftBody)0x1;
    }
    lVar12 = lVar9 * 0x78;
    do {
      bVar7 = lVar9 != -1;
      lVar9 = lVar9 + 1;
      puVar11 = (undefined8 *)(*(long *)(this + 0x420) + lVar12);
      lVar12 = lVar12 + 0x78;
      puVar11[6] = local_c0;
      puVar11[5] = uStack_c8;
      puVar11[8] = uStack_b0;
      puVar11[7] = uStack_b8;
      puVar11[10] = local_a0;
      puVar11[9] = uStack_a8;
      puVar11[0xc] = CONCAT44(local_8c,uStack_90);
      puVar11[0xb] = uStack_98;
      puVar11[4] = 0;
      puVar11[1] = 0;
      *puVar11 = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      *(ulong *)((long)puVar11 + 0x6c) = CONCAT44(uStack_80,uStack_84);
      *(ulong *)((long)puVar11 + 100) = CONCAT44(uStack_88,local_8c);
    } while (bVar7);
  }
  lVar9 = (long)*(int *)(this + 0x434);
  *(undefined4 *)(this + 0x414) = 0;
  if (*(int *)(this + 0x434) < 0) {
    if (*(int *)(this + 0x438) < 0) {
      if ((*(long *)(this + 0x440) != 0) && (this[0x448] != (btSoftBody)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(undefined8 *)(this + 0x440) = 0;
      *(undefined4 *)(this + 0x438) = 0;
      this[0x448] = (btSoftBody)0x1;
    }
    lVar12 = lVar9 << 6;
    do {
      bVar7 = lVar9 != -1;
      lVar9 = lVar9 + 1;
      puVar11 = (undefined8 *)(*(long *)(this + 0x440) + lVar12);
      lVar12 = lVar12 + 0x40;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[7] = 0;
      puVar11[6] = 0;
      puVar11[1] = 0;
      *puVar11 = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
    } while (bVar7);
  }
  *(undefined4 *)(this + 0x434) = 0;
  btDbvt::optimizeIncremental((btDbvt *)(this + 0x4b8),1);
  btDbvt::optimizeIncremental((btDbvt *)(this + 0x518),1);
  btDbvt::optimizeIncremental((btDbvt *)(this + 0x578),1);
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


