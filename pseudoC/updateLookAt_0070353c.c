// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateLookAt
// Entry Point: 0070353c
// Size: 956 bytes
// Signature: undefined __thiscall updateLookAt(Animal * this, float param_1)


/* Animal::updateLookAt(float) */

void __thiscall Animal::updateLookAt(Animal *this,float param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 local_130;
  float fStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  float fStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined4 local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0x40);
  if (lVar2 != 0) {
    if ((*(long *)(*(long *)(this + 0x688) + 0x60) != 0) && (this[0x1a4] != (Animal)0x0)) {
      RawTransformGroup::updateWorldTransformation();
      fVar10 = *(float *)(lVar2 + 0xe8);
      fVar13 = *(float *)(lVar2 + 0xec);
      fVar9 = *(float *)(lVar2 + 0xf0);
      lVar3 = *(long *)(*(long *)(this + 0x688) + 0x60);
      RawTransformGroup::updateWorldTransformation();
      fVar11 = *(float *)(lVar3 + 0xe8);
      fVar14 = *(float *)(lVar3 + 0xec);
      fVar12 = *(float *)(lVar3 + 0xf0);
      uVar4 = NEON_fmadd(fVar13 - fVar14,fVar13 - fVar14,(fVar10 - fVar11) * (fVar10 - fVar11));
      fVar5 = (float)NEON_fmadd(fVar9 - fVar12,fVar9 - fVar12,uVar4);
      if (fVar5 < *(float *)(*(long *)(this + 0x688) + 0x594)) {
        uStack_b8 = 0;
        local_c0 = 0x3f800000;
        uStack_a8 = 0;
        local_b0 = 0x3f80000000000000;
        uStack_98 = 0x3f800000;
        local_a0 = 0;
        uStack_88 = 0x3f80000000000000;
        local_90 = 0;
        Matrix4x4::invert((Matrix4x4 *)&local_c0,(Matrix4x4 *)(lVar2 + 0xb8));
        uVar4 = NEON_fmadd(fVar10,local_c0._4_4_,fVar13 * local_b0._4_4_);
        uVar6 = NEON_fmadd(fVar11,local_c0._4_4_,fVar14 * local_b0._4_4_);
        uVar8 = NEON_fmadd(fVar10,(undefined4)local_c0,fVar13 * (float)local_b0);
        uVar16 = NEON_fmadd(fVar11,(undefined4)local_c0,fVar14 * (float)local_b0);
        fVar5 = (float)NEON_fmadd(fVar9,local_a0._4_4_,uVar4);
        fVar7 = (float)NEON_fmadd(fVar12,local_a0._4_4_,uVar6);
        uVar4 = NEON_fmadd(fVar10,(undefined4)uStack_b8,fVar13 * (float)uStack_a8);
        uVar6 = NEON_fmadd(fVar11,(undefined4)uStack_b8,fVar14 * (float)uStack_a8);
        fVar10 = (float)NEON_fmadd(fVar9,(undefined4)local_a0,uVar8);
        fVar13 = (float)NEON_fmadd(fVar12,(undefined4)local_a0,uVar16);
        fVar9 = (float)NEON_fmadd(fVar9,(undefined4)uStack_98,uVar4);
        fVar14 = (float)NEON_fmadd(fVar12,(undefined4)uStack_98,uVar6);
        fVar11 = (local_90._4_4_ + fVar5) - (local_90._4_4_ + fVar7);
        fVar12 = ((float)local_90 + fVar10) - ((float)local_90 + fVar13);
        fVar9 = ((float)uStack_88 + fVar9) - ((float)uStack_88 + fVar14);
        uVar8 = NEON_fmadd((undefined4)local_c0,0,(float)local_b0);
        uVar4 = NEON_fmadd(local_c0._4_4_,0,local_b0._4_4_);
        uVar6 = NEON_fmadd((undefined4)uStack_b8,0,(float)uStack_a8);
        uVar16 = NEON_fmadd(fVar12,fVar12,fVar11 * fVar11);
        fVar7 = (float)NEON_fmadd((undefined4)local_a0,0,uVar8);
        fVar14 = (float)NEON_fmadd(local_a0._4_4_,0,uVar4);
        fVar13 = (float)NEON_fmadd((undefined4)uStack_98,0,uVar6);
        fVar5 = 1.0;
        fVar15 = 1.0;
        fVar10 = (float)NEON_fmadd(fVar9,fVar9,uVar16);
        if (1e-06 < fVar10) {
          fVar15 = 1.0 / SQRT(fVar10);
        }
        local_f8 = fVar9 * fVar15;
        fStack_fc = fVar11 * fVar15;
        local_100 = fVar12 * fVar15;
        fVar10 = (float)NEON_fmadd(local_f8,fVar7,fVar13 * -(fVar12 * fVar15));
        fVar12 = (float)NEON_fmadd(fStack_fc,fVar13,fVar14 * -(fVar9 * fVar15));
        fVar9 = (float)NEON_fmadd(local_100,fVar14,fVar7 * -(fVar11 * fVar15));
        uVar4 = NEON_fmadd(fVar12,fVar12,fVar10 * fVar10);
        fVar11 = (float)NEON_fmadd(fVar9,fVar9,uVar4);
        if (1e-06 < fVar11) {
          fVar5 = 1.0 / SQRT(fVar11);
        }
        local_e0 = fVar12 * fVar5;
        fStack_dc = fVar10 * fVar5;
        local_d8 = fVar9 * fVar5;
        local_f4 = 0;
        local_f0 = NEON_fmadd(fStack_dc,local_f8,fStack_fc * -(fVar9 * fVar5));
        local_e4 = 0;
        uStack_ec = NEON_fmadd(local_d8,local_100,local_f8 * -(fVar12 * fVar5));
        local_d4 = 0;
        local_e8 = NEON_fmadd(local_e0,fStack_fc,local_100 * -(fVar10 * fVar5));
        local_c4 = 0x3f800000;
        local_d0 = *(undefined8 *)(this + 0x1a8);
        local_c8 = *(undefined4 *)(this + 0x1b0);
        GsQuaternion::set((GsQuaternion *)&local_120,(Matrix4x4 *)&local_100);
        uVar4 = NEON_fmadd(*(undefined4 *)(this + 0x1c4),local_120,
                           *(float *)(this + 0x1c8) * fStack_11c);
        uVar4 = NEON_fmadd(*(undefined4 *)(this + 0x1cc),local_118,uVar4);
        fVar5 = (float)NEON_fmadd(*(undefined4 *)(this + 0x1d0),uStack_114,uVar4);
        fVar5 = acosf(fVar5);
        fVar9 = (float)MathUtil::degreeToRadian(25.0);
        fVar9 = param_1 * 0.001 * fVar9;
        fVar10 = (float)MathUtil::degreeToRadian(45.0);
        local_128 = local_118;
        uStack_124 = uStack_114;
        local_130 = local_120;
        fStack_12c = fStack_11c;
        if (fVar9 < fVar5) {
          GsQuaternion::slerpShortestPath
                    ((GsQuaternion *)&local_130,(GsQuaternion *)(this + 0x1c4),
                     (GsQuaternion *)&local_120,fVar9 / fVar5);
        }
        uVar4 = NEON_fmadd(*(undefined4 *)(this + 0x1b4),local_130,
                           fStack_12c * *(float *)(this + 0x1b8));
        uVar4 = NEON_fmadd(*(undefined4 *)(this + 0x1bc),local_128,uVar4);
        fVar5 = (float)NEON_fmadd(*(undefined4 *)(this + 0x1c0),uStack_124,uVar4);
        local_120 = local_130;
        fStack_11c = fStack_12c;
        local_118 = local_128;
        uStack_114 = uStack_124;
        fVar5 = acosf(fVar5);
        if (fVar5 < fVar10) {
          local_110 = 0;
          local_108 = 0;
          GsQuaternion::getEulerAngles((GsQuaternion *)&local_120,(Vector3 *)&local_110);
          TransformGroup::setRotation(*(TransformGroup **)(this + 0x40),(Vector3 *)&local_110);
        }
      }
    }
    GsQuaternion::set((GsQuaternion *)(this + 0x1c4),(Matrix4x4 *)(*(long *)(this + 0x40) + 0x78));
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


