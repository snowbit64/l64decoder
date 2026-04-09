// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addContactPoint
// Entry Point: 00f55b2c
// Size: 1304 bytes
// Signature: undefined __thiscall addContactPoint(btManifoldResult * this, btVector3 * param_1, btVector3 * param_2, float param_3)


/* btManifoldResult::addContactPoint(btVector3 const&, btVector3 const&, float) */

void __thiscall
btManifoldResult::addContactPoint
          (btManifoldResult *this,btVector3 *param_1,btVector3 *param_2,float param_3)

{
  float *pfVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined4 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined4 *puVar20;
  btPersistentManifold *this_00;
  undefined8 uVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint local_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar9 = *(long *)(this + 8);
  if (param_3 <= *(float *)(lVar9 + 0x31c)) {
    lVar11 = *(long *)(this + 0x10);
    lVar12 = *(long *)(lVar9 + 0x308);
    local_c8 = (float)NEON_fmadd(*(undefined4 *)param_1,param_3,*(float *)param_2);
    lVar15 = *(long *)(lVar11 + 0x10);
    fStack_c4 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 4),param_3,*(float *)(param_2 + 4));
    fStack_c0 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),param_3,*(float *)(param_2 + 8));
    if (lVar12 == lVar15) {
      fVar27 = local_c8 - *(float *)(lVar12 + 0x38);
      fVar24 = fStack_c4 - *(float *)(lVar12 + 0x3c);
      fVar28 = fStack_c0 - *(float *)(lVar12 + 0x40);
      lVar17 = *(long *)(this + 0x18);
      lVar6 = *(long *)(lVar17 + 0x10);
      uVar25 = NEON_fmadd(*(undefined4 *)(lVar12 + 0x20),fVar24,*(float *)(lVar12 + 0x10) * fVar27);
      local_f8 = (float)*(undefined8 *)(lVar12 + 8) * fVar27 +
                 (float)*(undefined8 *)(lVar12 + 0x18) * fVar24 +
                 (float)*(undefined8 *)(lVar12 + 0x28) * fVar28;
      fStack_f4 = (float)((ulong)*(undefined8 *)(lVar12 + 8) >> 0x20) * fVar27 +
                  (float)((ulong)*(undefined8 *)(lVar12 + 0x18) >> 0x20) * fVar24 +
                  (float)((ulong)*(undefined8 *)(lVar12 + 0x28) >> 0x20) * fVar28;
      fStack_f0 = (float)NEON_fmadd(*(undefined4 *)(lVar12 + 0x30),fVar28,uVar25);
      lVar5 = lVar11;
      lVar18 = lVar17;
    }
    else {
      lVar5 = *(long *)(this + 0x18);
      lVar17 = *(long *)(lVar5 + 0x10);
      fVar27 = local_c8 - *(float *)(lVar17 + 0x38);
      fVar24 = fStack_c4 - *(float *)(lVar17 + 0x3c);
      fVar28 = fStack_c0 - *(float *)(lVar17 + 0x40);
      uVar25 = NEON_fmadd(*(undefined4 *)(lVar17 + 0x20),fVar24,*(float *)(lVar17 + 0x10) * fVar27);
      local_f8 = (float)*(undefined8 *)(lVar17 + 8) * fVar27 +
                 (float)*(undefined8 *)(lVar17 + 0x18) * fVar24 +
                 (float)*(undefined8 *)(lVar17 + 0x28) * fVar28;
      fStack_f4 = (float)((ulong)*(undefined8 *)(lVar17 + 8) >> 0x20) * fVar27 +
                  (float)((ulong)*(undefined8 *)(lVar17 + 0x18) >> 0x20) * fVar24 +
                  (float)((ulong)*(undefined8 *)(lVar17 + 0x28) >> 0x20) * fVar28;
      fStack_f0 = (float)NEON_fmadd(*(undefined4 *)(lVar17 + 0x30),fVar28,uVar25);
      lVar17 = lVar11;
      lVar18 = lVar5;
      lVar6 = lVar15;
    }
    uStack_ec = 0;
    fVar28 = *(float *)param_2 - *(float *)(lVar6 + 0x38);
    fVar27 = *(float *)(param_2 + 8) - *(float *)(lVar6 + 0x40);
    uStack_dc = 0;
    fVar24 = *(float *)(param_2 + 4) - *(float *)(lVar6 + 0x3c);
    uStack_b0 = *(undefined8 *)(param_1 + 8);
    uVar21 = *(undefined8 *)param_1;
    uStack_d0 = *(undefined8 *)(param_2 + 8);
    local_d8 = *(undefined8 *)param_2;
    local_88 = 0;
    uStack_80 = uStack_80 & 0xffffff00;
    uVar25 = NEON_fmadd(*(undefined4 *)(lVar6 + 0x20),fVar24,*(float *)(lVar6 + 0x10) * fVar28);
    local_5c = local_5c & 0xffffff00;
    uStack_bc = 0;
    local_e8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 8) >> 0x20) * fVar28 +
                        (float)((ulong)*(undefined8 *)(lVar6 + 0x18) >> 0x20) * fVar24 +
                        (float)((ulong)*(undefined8 *)(lVar6 + 0x28) >> 0x20) * fVar27,
                        (float)*(undefined8 *)(lVar6 + 8) * fVar28 +
                        (float)*(undefined8 *)(lVar6 + 0x18) * fVar24 +
                        (float)*(undefined8 *)(lVar6 + 0x28) * fVar27);
    uStack_e0 = NEON_fmadd(*(undefined4 *)(lVar6 + 0x30),fVar27,uVar25);
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    lVar6 = *(long *)(lVar11 + 0x10);
    lVar19 = *(long *)(lVar18 + 0x10);
    fVar24 = *(float *)(lVar6 + 0xfc);
    fVar27 = *(float *)(lVar19 + 0xfc);
    fVar28 = *(float *)(lVar19 + 0xf4) * *(float *)(lVar6 + 0xf4);
    fStack_50 = 0.0;
    fStack_9c = *(float *)(lVar19 + 0xf8) * *(float *)(lVar6 + 0xf8);
    if (fVar28 <= -10.0) {
      fVar28 = -10.0;
    }
    uStack_a0 = NEON_fminnm(ABS(fVar27 * fVar24),0x41200000);
    uStack_a4 = NEON_fminnm(fVar28,0x41200000);
    if (fVar27 <= 0.0 && fVar24 == 0.0 || fVar27 <= 0.0 && fVar24 < 0.0) {
      uStack_a0 = 0;
    }
    local_b8._0_4_ = (float)uVar21;
    local_b8._4_4_ = (float)((ulong)uVar21 >> 0x20);
    if (ABS((float)uStack_b0) <= 0.7071068) {
      fStack_40 = (float)NEON_fmadd(local_b8._4_4_,local_b8._4_4_,(float)local_b8 * (float)local_b8)
      ;
      fStack_40 = SQRT(fStack_40);
      local_58 = (1.0 / fStack_40) * -local_b8._4_4_;
      fStack_54 = (1.0 / fStack_40) * (float)local_b8;
      fStack_44 = local_58 * (float)uStack_b0;
      local_48 = fStack_54 * -(float)uStack_b0;
    }
    else {
      local_48 = (float)NEON_fmadd(local_b8._4_4_,local_b8._4_4_,(float)uStack_b0 * (float)uStack_b0
                                  );
      local_48 = SQRT(local_48);
      fStack_50 = (1.0 / local_48) * local_b8._4_4_;
      fStack_54 = (1.0 / local_48) * -(float)uStack_b0;
      fStack_44 = fStack_50 * -(float)local_b8;
      fStack_40 = fStack_54 * (float)local_b8;
      local_58 = 0.0;
    }
    if (lVar12 == lVar15) {
      puVar13 = (undefined4 *)(this + 0x20);
      puVar7 = (undefined4 *)(this + 0x24);
      puVar16 = (undefined4 *)(this + 0x28);
      puVar20 = (undefined4 *)(this + 0x2c);
    }
    else {
      puVar13 = (undefined4 *)(this + 0x24);
      puVar7 = (undefined4 *)(this + 0x20);
      puVar16 = (undefined4 *)(this + 0x2c);
      puVar20 = (undefined4 *)(this + 0x28);
    }
    local_98 = *puVar13;
    uStack_8c = *puVar20;
    uStack_94 = *puVar7;
    uStack_90 = *puVar16;
    local_b8 = uVar21;
    local_a8 = param_3;
    if ((gContactAddedCallback != (code *)0x0) &&
       (((*(byte *)(*(long *)(lVar11 + 0x10) + 0xe0) >> 3 & 1) != 0 ||
        ((*(byte *)(*(long *)(lVar18 + 0x10) + 0xe0) >> 3 & 1) != 0)))) {
      (*gContactAddedCallback)(&local_f8,lVar5,local_98,uStack_90,lVar17);
      lVar9 = *(long *)(this + 8);
    }
    if ((int)*(uint *)(lVar9 + 0x318) < 1) {
      this_00 = *(btPersistentManifold **)(this + 8);
    }
    else {
      uVar14 = 0;
      puVar10 = (undefined8 *)(lVar9 + 0xc);
      uVar8 = 0xffffffff;
      fVar24 = *(float *)(lVar9 + 0x31c) * *(float *)(lVar9 + 0x31c);
      do {
        uVar21 = *puVar10;
        pfVar1 = (float *)((long)puVar10 + -4);
        puVar10 = puVar10 + 0x18;
        fVar27 = (float)uVar21 - fStack_f4;
        fVar28 = (float)((ulong)uVar21 >> 0x20) - fStack_f0;
        fVar22 = *pfVar1 - local_f8;
        fVar27 = (float)NEON_fmadd(fVar22,fVar22,fVar27 * fVar27);
        fVar27 = fVar27 + fVar28 * fVar28;
        bVar3 = fVar24 <= fVar27;
        fVar24 = (float)NEON_fminnm(fVar27,fVar24);
        uVar4 = (uint)uVar14;
        if (bVar3) {
          uVar4 = (uint)uVar8;
        }
        uVar8 = (ulong)uVar4;
        uVar14 = uVar14 + 1;
      } while (*(uint *)(lVar9 + 0x318) != uVar14);
      this_00 = *(btPersistentManifold **)(this + 8);
      if (-1 < (int)uVar4) {
        if ((this_00[(ulong)uVar4 * 0xc0 + 0xa4] == (btPersistentManifold)0x0) ||
           (local_a8 <= *(float *)(this_00 + uVar8 * 0xc0 + 0x58))) {
          uVar23 = *(undefined8 *)(this_00 + uVar8 * 0xc0 + 0x84);
          uVar21 = *(undefined8 *)(this_00 + uVar8 * 0xc0 + 0x78);
          *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x80) = CONCAT44(uStack_7c,uStack_80);
          *(undefined8 *)(this_00 + (ulong)uVar4 * 0xc0 + 0x78) = local_88;
          uVar25 = *(undefined4 *)(this_00 + uVar8 * 0xc0 + 0xa0);
          uVar26 = *(undefined4 *)(this_00 + uVar8 * 0xc0 + 0x8c);
          *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0xb0) = CONCAT44(uStack_4c,fStack_50);
          *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0xa8) = CONCAT44(fStack_54,local_58);
          *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0xc0) = CONCAT44(uStack_3c,fStack_40);
          *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0xb8) = CONCAT44(fStack_44,local_48);
          *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x90) = CONCAT44(uStack_6c,uStack_70);
          *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x88) = CONCAT44(uStack_74,uStack_78);
          *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0xa0) = CONCAT44(local_5c,uStack_60);
          *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x98) = CONCAT44(uStack_64,uStack_68);
          *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x60) = CONCAT44(fStack_9c,uStack_a0);
          *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x58) = CONCAT44(uStack_a4,local_a8);
          *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x70) = CONCAT44(uStack_8c,uStack_90);
          *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x68) = CONCAT44(uStack_94,local_98);
          *(undefined8 *)(this_00 + (ulong)uVar4 * 0xc0 + 0x30) = uStack_d0;
          *(undefined8 *)(this_00 + (ulong)uVar4 * 0xc0 + 0x28) = local_d8;
          *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x40) = CONCAT44(uStack_bc,fStack_c0);
          *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x38) = CONCAT44(fStack_c4,local_c8);
          *(undefined8 *)(this_00 + (ulong)uVar4 * 0xc0 + 0x50) = uStack_b0;
          *(undefined8 *)(this_00 + (ulong)uVar4 * 0xc0 + 0x48) = local_b8;
          *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x10) = CONCAT44(uStack_ec,fStack_f0);
          *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 8) = CONCAT44(fStack_f4,local_f8);
          *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x20) = CONCAT44(uStack_dc,uStack_e0);
          *(undefined8 *)(this_00 + (ulong)uVar4 * 0xc0 + 0x18) = local_e8;
          *(undefined8 *)(this_00 + uVar8 * 0xc0 + 0x78) = uVar21;
          *(undefined8 *)(this_00 + uVar8 * 0xc0 + 0x84) = uVar23;
          *(undefined4 *)(this_00 + uVar8 * 0xc0 + 0x8c) = uVar26;
          *(undefined4 *)(this_00 + uVar8 * 0xc0 + 0xa0) = uVar25;
          this_00[(ulong)uVar4 * 0xc0 + 0xa4] = (btPersistentManifold)0x1;
        }
        goto LAB_00f5601c;
      }
    }
    uVar4 = *(uint *)(this_00 + 0x318);
    if (uVar4 == 4) {
      uVar4 = btPersistentManifold::sortCachedPoints(this_00,(btManifoldPoint *)&local_f8);
      if ((*(long *)(this_00 + (long)(int)uVar4 * 0xc0 + 0x78) != 0) &&
         (gContactDestroyedCallback != (code *)0x0)) {
        (*gContactDestroyedCallback)();
        *(long *)(this_00 + (long)(int)uVar4 * 0xc0 + 0x78) = 0;
      }
    }
    else {
      *(uint *)(this_00 + 0x318) = uVar4 + 1;
    }
    uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
    *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x40) = CONCAT44(uStack_bc,fStack_c0);
    *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x38) = CONCAT44(fStack_c4,local_c8);
    *(undefined8 *)(this_00 + (ulong)uVar4 * 0xc0 + 0x30) = uStack_d0;
    *(undefined8 *)(this_00 + (ulong)uVar4 * 0xc0 + 0x28) = local_d8;
    *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x20) = CONCAT44(uStack_dc,uStack_e0);
    *(undefined8 *)(this_00 + (ulong)uVar4 * 0xc0 + 0x18) = local_e8;
    *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x10) = CONCAT44(uStack_ec,fStack_f0);
    *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 8) = CONCAT44(fStack_f4,local_f8);
    *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x80) = CONCAT44(uStack_7c,uStack_80);
    *(undefined8 *)(this_00 + (ulong)uVar4 * 0xc0 + 0x78) = local_88;
    *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x70) = CONCAT44(uStack_8c,uStack_90);
    *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x68) = CONCAT44(uStack_94,local_98);
    *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x60) = CONCAT44(fStack_9c,uStack_a0);
    *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x58) = CONCAT44(uStack_a4,local_a8);
    *(undefined8 *)(this_00 + (ulong)uVar4 * 0xc0 + 0x50) = uStack_b0;
    *(undefined8 *)(this_00 + (ulong)uVar4 * 0xc0 + 0x48) = local_b8;
    *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0xc0) = CONCAT44(uStack_3c,fStack_40);
    *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0xb8) = CONCAT44(fStack_44,local_48);
    *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0xb0) = CONCAT44(uStack_4c,fStack_50);
    *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0xa8) = CONCAT44(fStack_54,local_58);
    *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0xa0) = CONCAT44(local_5c,uStack_60);
    *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x98) = CONCAT44(uStack_64,uStack_68);
    *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x90) = CONCAT44(uStack_6c,uStack_70);
    *(ulong *)(this_00 + (ulong)uVar4 * 0xc0 + 0x88) = CONCAT44(uStack_74,uStack_78);
  }
LAB_00f5601c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


