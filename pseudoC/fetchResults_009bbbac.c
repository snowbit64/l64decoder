// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fetchResults
// Entry Point: 009bbbac
// Size: 1520 bytes
// Signature: undefined __thiscall fetchResults(Bt2Rope * this, Bt2ScenegraphPhysicsContext * param_1)


/* Bt2Rope::fetchResults(Bt2ScenegraphPhysicsContext*) */

void __thiscall Bt2Rope::fetchResults(Bt2Rope *this,Bt2ScenegraphPhysicsContext *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  RawTransformGroup *this_00;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined8 local_178;
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
  undefined8 local_f0;
  float local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  float local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  float local_b8;
  undefined4 local_b4;
  long local_b0;
  undefined8 uVar30;
  
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)this;
  if (lVar6 != 0) {
    uVar7 = *(uint *)(lVar6 + 0x374);
    if (*(int *)(this + 0x38) == 0) {
      fVar13 = *(float *)(this + 0x20);
    }
    else {
      iVar8 = uVar7 - 2;
      lVar11 = *(long *)(lVar6 + 0x380) + (long)iVar8 * 0x78;
      lVar10 = *(long *)(lVar6 + 0x380) + (long)(int)(uVar7 - 1) * 0x78;
      fVar13 = *(float *)(lVar11 + 0x14) - *(float *)(lVar10 + 0x14);
      fVar15 = *(float *)(lVar11 + 0x10) - *(float *)(lVar10 + 0x10);
      fVar17 = *(float *)(lVar11 + 0x18) - *(float *)(lVar10 + 0x18);
      lVar10 = *(long *)(lVar6 + 0x3a0) + (long)iVar8 * 0x48;
      uVar14 = NEON_fmadd(fVar15,fVar15,fVar13 * fVar13);
      fVar15 = *(float *)(lVar10 + 0x20);
      fVar13 = (float)NEON_fmadd(fVar17,fVar17,uVar14);
      fVar13 = SQRT(fVar13);
      if ((fVar13 < fVar15) || (fVar15 = SQRT(*(float *)(lVar10 + 0x30)), fVar15 < fVar13)) {
        fVar13 = fVar15;
      }
      fVar13 = fVar13 + *(float *)(this + 0x24) * (float)iVar8;
      *(float *)(this + 0x20) = fVar13;
    }
    if (*(uint *)(this + 8) <= uVar7) {
      uVar7 = *(uint *)(this + 8);
    }
    fVar15 = fVar13 / (float)(ulong)(uVar7 - 1);
    fVar17 = *(float *)(this + 0x18);
    if (0.0001 < fVar17) {
      iVar8 = (int)(fVar13 / fVar17 + 0.5);
      uVar9 = 2;
      if (2 < iVar8 + 1U) {
        uVar9 = iVar8 + 1;
      }
      if (uVar9 <= uVar7) {
        uVar7 = uVar9;
        fVar15 = fVar17;
      }
    }
    *(uint *)(this + 0x30) = uVar7;
    lVar10 = *(long *)(param_1 + 0x30);
    if ((*(char *)(lVar10 + 0x1a4) == '\0') || (*(float *)(lVar10 + 0x174) == 0.0)) {
      fVar13 = *(float *)(lVar10 + 0x170);
    }
    else {
      fVar13 = *(float *)(lVar10 + 0x170) - *(float *)(lVar10 + 0x174);
    }
    if (uVar7 != 0) {
      lVar6 = *(long *)(lVar6 + 0x380);
      fVar22 = 0.0;
      fVar33 = 0.0;
      fVar17 = (float)*(undefined8 *)(lVar6 + 0x30) * fVar13;
      fVar16 = (float)((ulong)*(undefined8 *)(lVar6 + 0x30) >> 0x20) * fVar13;
      fVar23 = 1.0;
      local_178 = 0x3f800000;
      uVar12 = 0;
      uVar20 = CONCAT44(fVar16,fVar17);
      uVar29 = CONCAT44(fVar16 + (float)((ulong)*(undefined8 *)(lVar6 + 0x10) >> 0x20),
                        fVar17 + (float)*(undefined8 *)(lVar6 + 0x10));
      fVar17 = fVar13 * *(float *)(lVar6 + 0x38) + *(float *)(lVar6 + 0x18);
      fVar16 = 1.0;
      do {
        fVar27 = fVar17;
        uVar1 = uVar12 + 1;
        uVar30 = uVar29;
        fVar17 = fVar27;
        if (uVar1 < uVar7) {
          if ((ulong)(uVar7 - 1) - 1 == uVar12) {
            lVar6 = *(long *)this;
            fVar18 = (float)(*(int *)(lVar6 + 0x374) + -1);
          }
          else {
            lVar6 = *(long *)this;
            fVar18 = (fVar15 * (float)(ulong)((int)uVar12 + 1)) / *(float *)(this + 0x24);
          }
          lVar10 = *(long *)(lVar6 + 0x380) + (long)(int)fVar18 * 0x78;
          fVar21 = (float)NEON_ucvtf((int)fVar18);
          fVar21 = fVar18 - fVar21;
          fVar28 = (float)*(undefined8 *)(lVar10 + 0x30) * fVar13 +
                   (float)*(undefined8 *)(lVar10 + 0x10);
          fVar31 = (float)((ulong)*(undefined8 *)(lVar10 + 0x30) >> 0x20) * fVar13 +
                   (float)((ulong)*(undefined8 *)(lVar10 + 0x10) >> 0x20);
          uVar30 = CONCAT44(fVar31,fVar28);
          fVar17 = fVar13 * *(float *)(lVar10 + 0x38) + *(float *)(lVar10 + 0x18);
          if (0.0001 < fVar21) {
            lVar6 = *(long *)(lVar6 + 0x380) + (long)((int)fVar18 + 1) * 0x78;
            uVar30 = CONCAT44(fVar31 + (((float)((ulong)*(undefined8 *)(lVar6 + 0x30) >> 0x20) *
                                         fVar13 + (float)((ulong)*(undefined8 *)(lVar6 + 0x10) >>
                                                         0x20)) - fVar31) * fVar21,
                              fVar28 + (((float)*(undefined8 *)(lVar6 + 0x30) * fVar13 +
                                        (float)*(undefined8 *)(lVar6 + 0x10)) - fVar28) * fVar21);
            fVar17 = (float)NEON_fmadd((fVar13 * *(float *)(lVar6 + 0x38) + *(float *)(lVar6 + 0x18)
                                       ) - fVar17,fVar21,fVar17);
          }
        }
        bVar4 = uVar12 == 0;
        fVar18 = fVar27;
        if (!bVar4) {
          fVar18 = fVar16;
        }
        local_e8 = ABS(fVar17 - fVar18);
        uVar19 = NEON_cmlt(CONCAT44((uint)bVar4 << 0x1f,(uint)bVar4 << 0x1f),0,4);
        uVar20 = NEON_bsl(uVar19,uVar29,uVar20,1);
        fVar31 = (float)((ulong)uVar20 >> 0x20);
        fVar32 = (float)((ulong)uVar30 >> 0x20);
        fVar21 = ABS((float)uVar30 - (float)uVar20);
        fVar28 = ABS(fVar32 - fVar31);
        local_f0 = CONCAT44(fVar28,fVar21);
        fVar16 = fVar28;
        if (fVar21 >= fVar28) {
          fVar16 = fVar21;
        }
        local_c8 = 0.0;
        uVar2 = 2;
        if (ABS(fVar17 - fVar18) <= fVar16) {
          uVar2 = (ulong)(fVar21 < fVar28);
        }
        fVar16 = *(float *)((long)&local_f0 + uVar2 * 4);
        local_d0 = local_178;
        if (0.0 < fVar16) {
          fVar16 = 1.0 / fVar16;
          fVar21 = ((float)uVar30 - (float)uVar20) * fVar16;
          fVar28 = (fVar32 - fVar31) * fVar16;
          fVar16 = (fVar17 - fVar18) * fVar16;
          fVar18 = (float)NEON_fmadd(fVar16,fVar16,fVar28 * fVar28 + fVar21 * fVar21);
          local_c8 = 1.0 / SQRT(fVar18);
          local_d0 = CONCAT44(fVar28 * local_c8,fVar21 * local_c8);
          local_c8 = fVar16 * local_c8;
        }
        fVar18 = (float)((ulong)local_d0 >> 0x20);
        fVar16 = (float)local_d0;
        fVar21 = (float)NEON_fmadd(local_c8,fVar22,fVar23 * fVar18 + fVar33 * fVar16);
        if (0.9999 < ABS(fVar21)) {
          if (ABS(fVar16) <= ABS(local_c8)) {
            fVar23 = 0.0;
            fVar22 = 0.0;
            fVar33 = 1.0;
          }
          else {
            fVar33 = 0.0;
            fVar23 = 0.0;
            fVar22 = 1.0;
          }
        }
        local_e4 = 0;
        local_d4 = 0;
        local_c4 = 0;
        local_b4 = 0x3f800000;
        fVar21 = (float)NEON_fmadd(fVar22,fVar16,local_c8 * -fVar33);
        fVar22 = (float)NEON_fmadd(fVar23,local_c8,fVar18 * -fVar22);
        local_e8 = (float)NEON_fmadd(fVar33,fVar18,fVar16 * -fVar23);
        uVar14 = NEON_fmadd(fVar22,fVar22,fVar21 * fVar21);
        fVar23 = (float)NEON_fmadd(local_e8,local_e8,uVar14);
        fVar23 = 1.0 / SQRT(fVar23);
        fVar21 = fVar21 * fVar23;
        local_e8 = local_e8 * fVar23;
        fVar22 = fVar22 * fVar23;
        local_f0 = CONCAT44(fVar21,fVar22);
        fVar33 = (float)NEON_fmadd(fVar18,local_e8,fVar21 * -local_c8);
        fVar23 = (float)NEON_fmadd(local_c8,fVar22,local_e8 * -fVar16);
        fVar22 = (float)NEON_fmadd(fVar16,fVar21,fVar22 * -fVar18);
        this_00 = *(RawTransformGroup **)(*(long *)(this + 0x10) + uVar12 * 8);
        lVar6 = *(long *)(this_00 + 0x20);
        local_e0 = fVar33;
        local_dc = fVar23;
        local_d8 = fVar22;
        local_c0 = uVar29;
        local_b8 = fVar27;
        if (lVar6 == 0) {
          puVar5 = &local_f0;
        }
        else {
          RawTransformGroup::updateWorldTransformation();
          Matrix4x4::invert3x4((Matrix4x4 *)&local_130,(Matrix4x4 *)(lVar6 + 0xb8));
          local_164 = 0;
          uVar24 = NEON_fmadd((undefined4)local_f0,local_130,local_f0._4_4_ * local_120);
          uVar34 = NEON_fmadd((undefined4)local_f0,local_12c,local_f0._4_4_ * fStack_11c);
          uVar14 = NEON_fmadd((undefined4)local_f0,uStack_128,local_f0._4_4_ * local_118);
          local_154 = 0;
          local_170 = NEON_fmadd(local_e8,local_110,uVar24);
          uStack_16c = NEON_fmadd(local_e8,uStack_10c,uVar34);
          local_144 = 0;
          local_168 = NEON_fmadd(local_e8,local_108,uVar14);
          uVar14 = NEON_fmadd(local_e0,local_130,local_120 * local_dc);
          uVar24 = NEON_fmadd(local_e0,local_12c,fStack_11c * local_dc);
          local_160 = NEON_fmadd(local_d8,local_110,uVar14);
          uStack_15c = NEON_fmadd(local_d8,uStack_10c,uVar24);
          uVar14 = NEON_fmadd(local_e0,uStack_128,local_118 * local_dc);
          puVar5 = (undefined8 *)&local_170;
          local_158 = NEON_fmadd(local_d8,local_108,uVar14);
          uVar35 = NEON_fmadd((undefined4)local_d0,local_130,local_120 * local_d0._4_4_);
          uVar25 = NEON_fmadd((undefined4)local_d0,uStack_128,local_118 * local_d0._4_4_);
          local_134 = 0x3f800000;
          uVar14 = NEON_fmadd((undefined4)local_c0,local_130,local_120 * local_c0._4_4_);
          uVar26 = NEON_fmadd((undefined4)local_d0,local_12c,fStack_11c * local_d0._4_4_);
          uVar34 = NEON_fmadd((undefined4)local_c0,local_12c,fStack_11c * local_c0._4_4_);
          uVar24 = NEON_fmadd((undefined4)local_c0,uStack_128,local_118 * local_c0._4_4_);
          local_150 = NEON_fmadd(local_c8,local_110,uVar35);
          local_148 = NEON_fmadd(local_c8,local_108,uVar25);
          uStack_14c = NEON_fmadd(local_c8,uStack_10c,uVar26);
          local_140 = (float)NEON_fmadd(local_b8,local_110,uVar14);
          fStack_13c = (float)NEON_fmadd(local_b8,uStack_10c,uVar34);
          local_138 = (float)NEON_fmadd(local_b8,local_108,uVar24);
          local_140 = local_100 + local_140;
          fStack_13c = fStack_13c + local_fc;
          local_138 = local_138 + fStack_f8;
          this_00 = *(RawTransformGroup **)(*(long *)(this + 0x10) + uVar12 * 8);
        }
        RawTransformGroup::setTransformation(this_00,(Matrix4x4 *)puVar5,0);
        uVar12 = uVar1;
        uVar20 = uVar29;
        uVar29 = uVar30;
        fVar16 = fVar27;
      } while (uVar7 != uVar1);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


