// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00748724
// Size: 1776 bytes
// Signature: undefined __thiscall update(CharacterSet * this, float param_1)


/* WARNING: Type propagation algorithm not settling */
/* CharacterSet::update(float) */

void __thiscall CharacterSet::update(CharacterSet *this,float param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  Clip *this_00;
  long lVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  uint local_134;
  undefined8 local_120;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  if (this[0x50] != (CharacterSet)0x0) {
    lVar12 = -0x18;
    do {
      if (((~*(uint *)(this + lVar12 + 0x6c) & 3) == 0) && (*(float *)(this + lVar12 + 0x9c) != 0.0)
         ) {
        fVar20 = *(float *)(this + lVar12 + 0xb4);
        uVar14 = NEON_fmadd(param_1,*(float *)(this + lVar12 + 0x9c),fVar20);
        *(undefined4 *)(this + lVar12 + 0xb4) = uVar14;
        if (1e-07 < *(float *)(this + lVar12 + 0xcc)) {
          fVar15 = (float)Clip::getDuration();
          if (((byte)this[lVar12 + 0x6c] >> 2 & 1) == 0) {
            if (*(float *)(this + lVar12 + 0x9c) <= 0.0) {
              if (((*(float *)(this + lVar12 + 0x9c) < 0.0) && (0.0 < fVar20)) &&
                 (*(float *)(this + lVar12 + 0xb4) < fVar15)) goto LAB_00748784;
            }
            else if ((fVar20 < fVar15) && (0.0 < *(float *)(this + lVar12 + 0xb4)))
            goto LAB_00748784;
          }
          else {
LAB_00748784:
            this[0x51] = (CharacterSet)0x1;
          }
        }
      }
      lVar12 = lVar12 + 4;
    } while (lVar12 != 0);
    if (this[0x51] != (CharacterSet)0x0) {
      if (((~*(uint *)(this + 0x54) & 3) == 0) && (1e-07 < *(float *)(this + 0xb4))) {
        Clip::setTime(*(Clip **)(*(long *)(*(long *)(this + 0x40) + 0x70) +
                                (ulong)*(uint *)(this + 0x6c) * 8),*(float *)(this + 0x9c),
                      (bool)((byte)(*(uint *)(this + 0x54) >> 2) & 1));
      }
      if (((~*(uint *)(this + 0x58) & 3) == 0) && (1e-07 < *(float *)(this + 0xb8))) {
        Clip::setTime(*(Clip **)(*(long *)(*(long *)(this + 0x40) + 0x70) +
                                (ulong)*(uint *)(this + 0x70) * 8),*(float *)(this + 0xa0),
                      (bool)((byte)(*(uint *)(this + 0x58) >> 2) & 1));
      }
      if (((~*(uint *)(this + 0x5c) & 3) == 0) && (1e-07 < *(float *)(this + 0xbc))) {
        Clip::setTime(*(Clip **)(*(long *)(*(long *)(this + 0x40) + 0x70) +
                                (ulong)*(uint *)(this + 0x74) * 8),*(float *)(this + 0xa4),
                      (bool)((byte)(*(uint *)(this + 0x5c) >> 2) & 1));
      }
      if (((~*(uint *)(this + 0x60) & 3) == 0) && (1e-07 < *(float *)(this + 0xc0))) {
        Clip::setTime(*(Clip **)(*(long *)(*(long *)(this + 0x40) + 0x70) +
                                (ulong)*(uint *)(this + 0x78) * 8),*(float *)(this + 0xa8),
                      (bool)((byte)(*(uint *)(this + 0x60) >> 2) & 1));
      }
      if (((~*(uint *)(this + 100) & 3) == 0) && (1e-07 < *(float *)(this + 0xc4))) {
        Clip::setTime(*(Clip **)(*(long *)(*(long *)(this + 0x40) + 0x70) +
                                (ulong)*(uint *)(this + 0x7c) * 8),*(float *)(this + 0xac),
                      (bool)((byte)(*(uint *)(this + 100) >> 2) & 1));
      }
      if (((~*(uint *)(this + 0x68) & 3) == 0) && (1e-07 < *(float *)(this + 200))) {
        Clip::setTime(*(Clip **)(*(long *)(*(long *)(this + 0x40) + 0x70) +
                                (ulong)*(uint *)(this + 0x80) * 8),*(float *)(this + 0xb0),
                      (bool)((byte)(*(uint *)(this + 0x68) >> 2) & 1));
      }
      if (*(long *)(this + 0xd8) != *(long *)(this + 0xd0)) {
        uVar13 = 0;
        do {
          lVar10 = *(long *)(this + 0x40);
          lVar12 = 0;
          bVar8 = false;
          bVar5 = false;
          bVar6 = false;
          bVar7 = false;
          puVar1 = (undefined8 *)(*(long *)(lVar10 + 0x10) + uVar13 * 0xc);
          puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x40) + uVar13 * 0xc);
          uVar23 = *puVar1;
          fVar24 = *(float *)(puVar1 + 1);
          fVar21 = *(float *)(puVar2 + 1);
          uVar22 = *puVar2;
          local_100 = 0;
          local_f8 = 0;
          local_134 = (uint)(*(ulong *)(*(long *)(lVar10 + 0x58) +
                                       (uVar13 >> 3 & 0x1ffffffffffffff8)) >> (uVar13 & 0x3f)) & 1;
          uVar17 = uVar23;
          fVar15 = fVar24;
          local_120 = uVar22;
          fVar20 = fVar21;
          do {
            iVar11 = (int)uVar13;
            if (((~*(uint *)(this + lVar12 + 0x54) & 3) == 0) &&
               (fVar16 = *(float *)(this + lVar12 + 0xb4), 1e-07 < fVar16)) {
              this_00 = *(Clip **)(*(long *)(*(long *)(this + 0x40) + 0x70) +
                                  (ulong)*(uint *)(this + lVar12 + 0x6c) * 8);
              uVar3 = *(ushort *)(*(long *)(*(long *)(this_00 + 0x20) + uVar13 * 8) + 2);
              if ((uVar3 & 1) != 0) {
                Clip::getTranslation(this_00,iVar11,(Vector3 *)&local_f0);
                bVar7 = true;
                uVar17 = CONCAT44((float)((ulong)uVar17 >> 0x20) +
                                  ((float)((ulong)local_f0 >> 0x20) - (float)((ulong)uVar23 >> 0x20)
                                  ) * fVar16,
                                  (float)uVar17 + ((float)local_f0 - (float)uVar23) * fVar16);
                fVar15 = fVar15 + fVar16 * ((float)uStack_e8 - fVar24);
              }
              if ((uVar3 >> 1 & 1) != 0) {
                local_f0 = 0;
                uStack_e8 = 0;
                Clip::getRotation(*(Clip **)(*(long *)(*(long *)(this + 0x40) + 0x70) +
                                            (ulong)*(uint *)(this + lVar12 + 0x6c) * 8),iVar11,
                                  (GsQuaternion *)&local_f0);
                GsQuaternion::addShortestPath
                          ((GsQuaternion *)&local_100,(GsQuaternion *)&local_f0,fVar16);
                bVar6 = true;
              }
              if ((uVar3 >> 2 & 1) != 0) {
                Clip::getScale(*(Clip **)(*(long *)(*(long *)(this + 0x40) + 0x70) +
                                         (ulong)*(uint *)(this + lVar12 + 0x6c) * 8),iVar11,
                               (Vector3 *)&local_f0);
                bVar5 = true;
                local_120 = CONCAT44((float)((ulong)local_120 >> 0x20) +
                                     ((float)((ulong)local_f0 >> 0x20) -
                                     (float)((ulong)uVar22 >> 0x20)) * fVar16,
                                     (float)local_120 + ((float)local_f0 - (float)uVar22) * fVar16);
                fVar20 = fVar20 + fVar16 * ((float)uStack_e8 - fVar21);
              }
              if ((uVar3 >> 3 & 1) != 0) {
                if (0.5 < fVar16) {
                  local_134 = Clip::getVisibility(*(Clip **)(*(long *)(*(long *)(this + 0x40) + 0x70
                                                                      ) +
                                                            (ulong)*(uint *)(this + lVar12 + 0x6c) *
                                                            8),iVar11);
                }
                bVar8 = true;
              }
            }
            lVar12 = lVar12 + 4;
          } while (lVar12 != 0x18);
          if ((bool)(bVar7 | bVar6 | bVar5)) {
            lVar12 = *(long *)(this + 0xd0);
            lVar10 = *(long *)(lVar12 + uVar13 * 8);
            uStack_e8 = *(undefined8 *)(lVar10 + 0x80);
            local_f0 = *(undefined8 *)(lVar10 + 0x78);
            local_d8 = *(undefined8 *)(lVar10 + 0x90);
            local_e0 = *(undefined8 *)(lVar10 + 0x88);
            uStack_c8 = *(undefined8 *)(lVar10 + 0xa0);
            local_d0 = *(undefined8 *)(lVar10 + 0x98);
            local_b8 = *(undefined8 *)(lVar10 + 0xb0);
            local_c0 = *(undefined8 *)(lVar10 + 0xa8);
            if (bVar7) {
              uVar9 = (ulong)local_b8 >> 0x20;
              local_b8 = CONCAT44((int)uVar9,fVar15);
              local_c0 = uVar17;
            }
            if (bVar6) {
              uVar14 = NEON_fmadd(local_100._4_4_,local_100._4_4_,(float)local_f8 * (float)local_f8)
              ;
              uVar14 = NEON_fmadd(local_f8._4_4_,local_f8._4_4_,uVar14);
              fVar15 = (float)NEON_fmadd((float)local_100,(float)local_100,uVar14);
              fVar15 = 1.0 / SQRT(fVar15);
              local_f8._0_4_ = (float)local_f8 * fVar15;
              local_f8._4_4_ = local_f8._4_4_ * fVar15;
              local_100._4_4_ = local_100._4_4_ * fVar15;
              local_100._0_4_ = (float)local_100 * fVar15;
              fVar25 = local_100._4_4_ * (float)local_f8 + local_f8._4_4_ * (float)local_100;
              fVar21 = local_100._4_4_ * local_f8._4_4_ - (float)local_f8 * (float)local_100;
              fVar24 = local_100._4_4_ * (float)local_f8 - local_f8._4_4_ * (float)local_100;
              fVar16 = local_100._4_4_ * local_f8._4_4_ + (float)local_f8 * (float)local_100;
              fVar19 = (float)local_f8 * local_f8._4_4_ + local_100._4_4_ * (float)local_100;
              fVar15 = (float)local_f8 * local_f8._4_4_ - local_100._4_4_ * (float)local_100;
              uVar14 = NEON_fmadd((float)local_f8 * (float)local_f8 +
                                  local_f8._4_4_ * local_f8._4_4_,0xc0000000,0x3f800000);
              uVar18 = NEON_fmadd(local_100._4_4_ * local_100._4_4_ +
                                  local_f8._4_4_ * local_f8._4_4_,0xc0000000,0x3f800000);
              uStack_e8._4_4_ = (undefined4)((ulong)uStack_e8 >> 0x20);
              uStack_e8 = CONCAT44(uStack_e8._4_4_,fVar21 + fVar21);
              local_f0 = CONCAT44(fVar25 + fVar25,uVar14);
              uVar14 = NEON_fmadd(local_100._4_4_ * local_100._4_4_ +
                                  (float)local_f8 * (float)local_f8,0xc0000000,0x3f800000);
              local_e0 = CONCAT44(uVar18,fVar24 + fVar24);
              local_d0 = CONCAT44(fVar15 + fVar15,fVar16 + fVar16);
              local_d8._4_4_ = (undefined4)((ulong)local_d8 >> 0x20);
              local_d8 = CONCAT44(local_d8._4_4_,fVar19 + fVar19);
              uStack_c8._4_4_ = (undefined4)((ulong)uStack_c8 >> 0x20);
              uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar14);
              if (bVar5) {
LAB_00748d30:
                fVar15 = (float)local_120;
                local_f0 = CONCAT44((float)((ulong)local_f0 >> 0x20) * fVar15,
                                    (float)local_f0 * fVar15);
                fVar21 = (float)((ulong)local_120 >> 0x20);
                local_e0 = CONCAT44((float)((ulong)local_e0 >> 0x20) * fVar21,
                                    (float)local_e0 * fVar21);
                lVar12 = *(long *)(this + 0xd0);
                uStack_e8 = CONCAT44(uStack_e8._4_4_,(float)uStack_e8 * fVar15);
                local_d0 = CONCAT44((float)((ulong)local_d0 >> 0x20) * fVar20,
                                    (float)local_d0 * fVar20);
                local_d8 = CONCAT44(local_d8._4_4_,(float)local_d8 * fVar21);
                uStack_c8 = CONCAT44(uStack_c8._4_4_,fVar20 * (float)uStack_c8);
              }
            }
            else if (bVar5) {
              lVar12 = *(long *)(lVar12 + uVar13 * 8);
              if ((*(byte *)(lVar12 + 0x41) >> 3 & 1) != 0) {
                TransformGroup::updateEulerFromMatrix();
              }
              uVar22 = NEON_fmov(0x3f800000,4);
              uVar17 = NEON_fcmeq(*(undefined8 *)(lVar12 + 0x148),0,4);
              uVar17 = NEON_bit(*(undefined8 *)(lVar12 + 0x148),uVar22,uVar17,1);
              local_120 = CONCAT44((float)((ulong)local_120 >> 0x20) /
                                   (float)((ulong)uVar17 >> 0x20),(float)local_120 / (float)uVar17);
              if (*(float *)(lVar12 + 0x150) != 0.0) {
                fVar20 = fVar20 / *(float *)(lVar12 + 0x150);
              }
              goto LAB_00748d30;
            }
            RawTransformGroup::setTransformation
                      (*(RawTransformGroup **)(lVar12 + uVar13 * 8),(Matrix4x4 *)&local_f0,0);
          }
          if (bVar8) {
            ScenegraphNode::setVisibility
                      (*(ScenegraphNode **)(*(long *)(this + 0xd0) + uVar13 * 8),
                       (bool)((byte)local_134 & 1));
          }
          uVar13 = (ulong)(iVar11 + 1);
        } while (uVar13 < (ulong)(*(long *)(this + 0xd8) - *(long *)(this + 0xd0) >> 3));
      }
      this[0x51] = (CharacterSet)0x0;
    }
    if (*(long **)(this + 0x48) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x48) + 0x10))(param_1);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


