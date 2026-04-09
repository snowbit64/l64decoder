// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeCellCost
// Entry Point: 007414c0
// Size: 1156 bytes
// Signature: undefined __thiscall computeCellCost(VehicleNavigationGridAdapter * this, ushort param_1, ushort param_2, ushort param_3)


/* VehicleNavigationGridAdapter::computeCellCost(unsigned short, unsigned short, unsigned short)
   const */

void __thiscall
VehicleNavigationGridAdapter::computeCellCost
          (VehicleNavigationGridAdapter *this,ushort param_1,ushort param_2,ushort param_3)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint unaff_w19;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  int local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  long local_a8;
  
  lVar4 = tpidr_el0;
  local_a8 = *(long *)(lVar4 + 0x28);
  uVar8 = *(ulong *)(this + 0x60);
  uVar2 = (ulong)*(ushort *)(this + 10) * (ulong)param_2 + (ulong)param_1;
  lVar6 = *(long *)(this + 0x40);
  uVar7 = uVar8 & uVar2;
  uVar12 = *(uint *)(lVar6 + uVar7 * 8 + 4);
  if (uVar12 + 1 < 2) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    do {
      uVar10 = uVar10 + 1;
      uVar7 = uVar7 + 1 & uVar8;
      uVar12 = *(uint *)(lVar6 + uVar7 * 8 + 4);
    } while ((uVar12 != 0xffffffff && uVar10 <= uVar12) &&
             (uVar12 == 0xffffffff || uVar12 != uVar10));
  }
  do {
    if (uVar12 != uVar10) {
      lVar9 = *(long *)(this + 0x48);
      uVar7 = lVar9 - lVar6 >> 3;
LAB_007415a0:
      if (lVar6 + uVar7 * 8 == lVar9) {
        uVar21 = *(undefined4 *)(this + 0xc);
        fVar22 = *(float *)(this + 0x10);
        fVar32 = *(float *)(this + 0x30);
        lVar6 = (ulong)(param_3 - 1 & 7) * 8;
        fVar25 = *(float *)(s_headingBorders + lVar6);
        fVar34 = fVar32 * 0.5;
        fVar26 = *(float *)(s_headingBorders + (ulong)param_3 * 8);
        fVar14 = *(float *)(s_headingBorders + lVar6 + 4);
        fVar16 = *(float *)(s_headingBorders + (ulong)param_3 * 8 + 4);
        fVar27 = ABS(fVar14);
        fVar30 = ABS(fVar16);
        lVar9 = *(long *)this;
        local_b0 = NEON_fnmsub((float)(ulong)param_1 + 0.5,fVar32,*(undefined4 *)(this + 0x34));
        fVar28 = (float)NEON_fmadd(fVar27,uVar21,ABS(fVar25) * fVar22);
        fVar31 = (float)NEON_fmadd(fVar30,uVar21,fVar22 * ABS(fVar26));
        uVar33 = *(undefined4 *)(this + 0x1c);
        uStack_ac = NEON_fnmsub((float)(ulong)param_2 + 0.5,fVar32,*(undefined4 *)(this + 0x34));
        fVar27 = (float)NEON_fmadd(ABS(fVar25),uVar21,fVar27 * fVar22);
        fVar22 = (float)NEON_fmadd(ABS(fVar26),uVar21,fVar22 * fVar30);
        fVar28 = fVar34 + fVar28;
        fVar31 = fVar34 + fVar31;
        fVar32 = (float)NEON_fmadd(fVar25,uVar33,local_b0);
        fVar30 = (float)NEON_fmadd(fVar26,uVar33,local_b0);
        fVar27 = fVar34 + fVar27;
        fVar34 = fVar34 + fVar22;
        fVar22 = (float)NEON_fmadd(fVar14,uVar33,uStack_ac);
        fVar16 = (float)NEON_fmadd(fVar16,uVar33,uStack_ac);
        fVar14 = fVar32 - fVar28;
        if (fVar30 - fVar31 < fVar32 - fVar28) {
          fVar14 = fVar30 - fVar31;
        }
        fVar15 = *(float *)(lVar9 + 0x10);
        fVar24 = fVar22 - fVar27;
        if (fVar16 - fVar34 < fVar22 - fVar27) {
          fVar24 = fVar16 - fVar34;
        }
        fVar19 = fVar28 + fVar32;
        if (fVar28 + fVar32 < fVar31 + fVar30) {
          fVar19 = fVar31 + fVar30;
        }
        fVar23 = *(float *)(lVar9 + 8);
        fVar20 = fVar27 + fVar22;
        if (fVar27 + fVar22 < fVar34 + fVar16) {
          fVar20 = fVar34 + fVar16;
        }
        fVar29 = (float)(*(ushort *)(lVar9 + 0x14) - 1);
        fVar17 = (float)(int)(fVar23 * (fVar15 + fVar14));
        fVar14 = (float)(int)(fVar23 * (fVar15 + fVar19));
        fVar24 = (float)(int)(fVar23 * (fVar15 + fVar24));
        if (fVar17 < 0.0) {
          fVar17 = 0.0;
        }
        fVar19 = (float)(int)(fVar23 * (fVar15 + fVar20));
        if (fVar29 < fVar14) {
          fVar14 = fVar29;
        }
        if (fVar24 < 0.0) {
          fVar24 = 0.0;
        }
        if (fVar29 < fVar19) {
          fVar19 = fVar29;
        }
        uVar12 = (uint)fVar24;
        if (uVar12 <= (uint)(int)fVar19) {
          uVar11 = (uint)fVar17;
          uVar13 = 0;
          uVar10 = 0;
          fVar20 = *(float *)(lVar9 + 0xc);
          fVar24 = (float)NEON_fnmsub((float)(ulong)uVar11 + 0.5,fVar20,fVar15);
          fVar15 = (float)NEON_fmadd((float)(ulong)uVar12 + 0.5,fVar20,-fVar15);
          do {
            if (uVar11 <= (uint)(int)fVar14) {
              fVar23 = fVar24;
              uVar3 = uVar11;
              do {
                bVar1 = fVar28 < ABS(fVar23 - fVar32);
                if ((bVar1 || fVar27 <= ABS(fVar15 - fVar22)) &&
                    (bVar1 || ABS(fVar15 - fVar22) != fVar27)) {
LAB_00741814:
                  fVar17 = fVar23 - fVar30;
                  if (ABS(fVar17) <= fVar31 && ABS(fVar15 - fVar16) < fVar34 ||
                      ABS(fVar17) <= fVar31 && ABS(fVar15 - fVar16) == fVar34) {
                    fVar29 = *(float *)(s_headingBorders + (ulong)param_3 * 8 + 4);
                    fVar18 = (float)NEON_fmadd(fVar17,fVar26,(fVar15 - fVar16) * fVar29);
                    if ((ABS(fVar18) <= *(float *)(this + 0x14)) &&
                       (fVar17 = (float)NEON_fmadd(fVar17,fVar29,fVar26 * -(fVar15 - fVar16)),
                       ABS(fVar17) <= *(float *)(this + 0x18))) goto LAB_00741860;
                  }
                }
                else {
                  fVar17 = *(float *)(s_headingBorders + lVar6 + 4);
                  fVar29 = (float)NEON_fmadd(fVar23 - fVar32,fVar25,(fVar15 - fVar22) * fVar17);
                  if ((*(float *)(this + 0x14) < ABS(fVar29)) ||
                     (fVar17 = (float)NEON_fmadd(fVar23 - fVar32,fVar17,fVar25 * -(fVar15 - fVar22))
                     , *(float *)(this + 0x18) < ABS(fVar17))) goto LAB_00741814;
LAB_00741860:
                  bVar5 = VehicleNavigationMap::getCellCost
                                    (*(VehicleNavigationMap **)this,(ushort)uVar3,(ushort)uVar12);
                  if (bVar5 == 0xff) {
                    unaff_w19 = 0xff;
                    goto LAB_007418a4;
                  }
                  uVar10 = uVar10 + bVar5;
                  uVar13 = uVar13 + 1;
                }
                fVar23 = fVar20 + fVar23;
                uVar3 = uVar3 + 1;
              } while ((uVar3 & 0xffff) <= (uint)(int)fVar14);
            }
            uVar12 = uVar12 + 1;
            fVar15 = fVar20 + fVar15;
          } while ((uVar12 & 0xffff) <= (uint)(int)fVar19);
          unaff_w19 = 0;
          if (uVar13 != 0) {
            unaff_w19 = uVar10 / uVar13;
          }
        }
LAB_007418a4:
        uVar12 = VehicleNavigationMap::getCostRoadSegments
                           (*(VehicleNavigationMap **)this,&local_b4,(Vector2 *)&local_b0,param_3,
                            *(float *)(this + 0xc) + *(float *)(this + 0xc),*(float *)(this + 0x38),
                            *(float *)(this + 0x3c));
        if (((~uVar12 & 0xff) == 0) && (local_b4 != 0)) {
          uVar12 = 0x7f;
          if (local_b4 != 1) {
            uVar12 = 0x44;
          }
          if (uVar12 <= (unaff_w19 & 0xff)) {
            uVar12 = unaff_w19 & 0xff;
          }
        }
        else if ((unaff_w19 & 0xff) <= (uVar12 & 0xff)) {
          uVar12 = unaff_w19;
        }
      }
      else {
        uVar12 = 0xff;
      }
      if (*(long *)(lVar4 + 0x28) == local_a8) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar12);
    }
    if (*(int *)(lVar6 + uVar7 * 8) == (int)uVar2) {
      lVar9 = *(long *)(this + 0x48);
      goto LAB_007415a0;
    }
    uVar12 = uVar12 + 1;
    uVar7 = uVar7 + 1 & uVar8;
    uVar10 = *(uint *)(lVar6 + uVar7 * 8 + 4);
  } while( true );
}


