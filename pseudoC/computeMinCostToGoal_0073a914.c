// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeMinCostToGoal
// Entry Point: 0073a914
// Size: 1300 bytes
// Signature: undefined __thiscall computeMinCostToGoal(VehicleNavigationAgent * this, PlanarPose * param_1)


/* VehicleNavigationAgent::computeMinCostToGoal(PlanarPose const&) const */

float __thiscall
VehicleNavigationAgent::computeMinCostToGoal(VehicleNavigationAgent *this,PlanarPose *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  float fVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined auStack_ec [4];
  ushort local_e8 [4];
  FixedPoint16 local_e0 [4];
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float fStack_cc;
  Vector2 aVStack_c8 [24];
  long local_b0;
  
  lVar9 = tpidr_el0;
  local_b0 = *(long *)(lVar9 + 0x28);
  uVar11 = VehicleNavigationGridAdapter::getCornerNode
                     (*(VehicleNavigationGridAdapter **)(this + 0x12a0),param_1);
  uVar3 = (uint)uVar11 & 0xffff;
  uVar16 = 2;
  uVar7 = uVar3 - *(ushort *)(this + 0x1376);
  uVar1 = -uVar7;
  if (-1 < (int)uVar7) {
    uVar1 = uVar7;
  }
  uVar7 = (uint)((ulong)uVar11 >> 0x10);
  uVar17 = uVar7 & 0xffff;
  if (uVar1 < 4) {
    uVar16 = uVar17 - *(ushort *)(this + 0x1378);
    uVar1 = -uVar16;
    if (-1 < (int)uVar16) {
      uVar1 = uVar16;
    }
    uVar16 = 4;
    if (3 < uVar1) {
      uVar16 = 2;
    }
  }
  uVar1 = (uVar16 | 1) + uVar3;
  uVar4 = 0;
  if (uVar16 <= uVar3) {
    uVar4 = uVar3 - uVar16;
  }
  uVar7 = uVar7 - uVar16;
  uVar3 = *(ushort *)(this + 0x30) - 1;
  if ((int)uVar3 <= (int)uVar1) {
    uVar1 = uVar3;
  }
  uVar2 = (uVar16 | 1) + uVar17;
  if (uVar17 <= uVar16) {
    uVar7 = 0;
  }
  if ((int)uVar3 <= (int)uVar2) {
    uVar2 = uVar3;
  }
  if ((uVar2 & 0xffff) < (uVar7 & 0xffff)) {
    fVar12 = INFINITY;
  }
  else {
    fVar12 = INFINITY;
    do {
      if (uVar4 <= (uVar1 & 0xffff)) {
        uVar3 = uVar4;
        do {
          iVar18 = 0xffff;
          do {
            uVar16 = iVar18 + ((uint)((ulong)uVar11 >> 0x20) & 0xffff) & 7;
            iVar10 = getCurve((Vector2 *)this,(bool *)&local_d8,local_e0,local_e8,(NodeId)auStack_ec
                             );
            uVar17 = (uint)((ulong)uVar3 & 0xffff);
            if (iVar10 != 0) {
              uVar5 = *(ushort *)(this + 0x30);
              if ((uVar17 < uVar5) && ((uVar7 & 0xffff) < (uint)uVar5)) {
                if (((uVar17 - *(ushort *)(this + 0x32) & 0xffff) < 0xe) &&
                   (uVar6 = (int)((ulong)uVar7 & 0xffff) - (uint)*(ushort *)(this + 0x34),
                   (uVar6 & 0xffff) < 0xe)) {
                  uVar13 = (uint)*(ushort *)
                                  (this + (ulong)uVar16 * 2 +
                                          (ulong)(ushort)(uVar17 - *(ushort *)(this + 0x32)) * 0x10
                                          + ((ulong)uVar6 & 0xffff) * 0xe0 + 0x36);
                  if (*(ushort *)
                       (this + (ulong)uVar16 * 2 +
                               (ulong)(ushort)(uVar17 - *(ushort *)(this + 0x32)) * 0x10 +
                               ((ulong)uVar6 & 0xffff) * 0xe0 + 0x36) == 0xffff) goto LAB_0073ab9c;
                }
                else {
                  lVar15 = *(long *)(this + 0x28);
                  lVar14 = ((ulong)uVar3 & 0xffff) + ((ulong)uVar7 & 0xffff) * (ulong)uVar5;
                  uVar5 = *(ushort *)(lVar15 + lVar14 * 6);
                  uVar13 = (uint)uVar5;
                  if ((uVar5 == 0xffff) ||
                     ((uVar16 != *(byte *)(lVar15 + lVar14 * 6 + 4) >> 5 &&
                      ((uVar13 = (uint)*(ushort *)(lVar15 + lVar14 * 6 + 2), uVar13 == 0xffff ||
                       (uVar16 != *(byte *)(lVar15 + lVar14 * 6 + 5) >> 5)))))) goto LAB_0073ab9c;
                }
                fVar21 = (float)(uVar13 | 0x49800000) + -1048576.0;
              }
              else {
LAB_0073ab9c:
                fVar21 = INFINITY;
              }
              fVar25 = INFINITY;
              if (local_e8[0] != 0xffff) {
                fVar25 = (float)(local_e8[0] | 0x49800000) + -1048576.0;
              }
              fVar26 = *(float *)(param_1 + 8);
              fVar20 = *(float *)(param_1 + 0xc);
              if (local_e0[0] != (FixedPoint16)0x0) {
                fVar26 = -*(float *)(param_1 + 8);
                fVar20 = -*(float *)(param_1 + 0xc);
              }
              if (iVar10 == 5) {
                fVar19 = (float)closestPointQuadraticBezier
                                          (&local_dc,(Vector2 *)&local_d8,(Vector2 *)param_1);
                fVar22 = *(float *)(this + 5000);
                if (fVar19 < fVar22) {
                  fVar19 = (float)tangentQuadraticBezier(local_dc,(Vector2 *)&local_d8);
                  fVar24 = (float)NEON_fmadd(fVar19,fVar19,fVar22 * fVar22);
                  fVar23 = 1.0;
                  if (1e-06 < fVar24) {
                    fVar23 = 1.0 / SQRT(fVar24);
                  }
                  fVar19 = (float)NEON_fmadd(fVar19 * fVar23,fVar26,fVar20 * fVar22 * fVar23);
                  if ((0.5 < fVar19) &&
                     (fVar21 = (float)NEON_fmadd(fVar25 - fVar21,local_dc,fVar21), fVar21 < fVar12))
                  {
                    fVar12 = fVar21;
                  }
                }
                fVar21 = (float)closestPointQuadraticBezier(&local_dc,aVStack_c8,(Vector2 *)param_1)
                ;
                fVar19 = *(float *)(this + 5000);
                if (fVar21 < fVar19) {
                  fVar21 = (float)tangentQuadraticBezier(local_dc,aVStack_c8);
                  fVar23 = (float)NEON_fmadd(fVar21,fVar21,fVar19 * fVar19);
                  fVar22 = 1.0;
                  if (1e-06 < fVar23) {
                    fVar22 = 1.0 / SQRT(fVar23);
                  }
                  fVar21 = (float)NEON_fmadd(fVar21 * fVar22,fVar26,fVar20 * fVar19 * fVar22);
                  if ((0.5 < fVar21) &&
                     (fVar21 = (float)NEON_fmadd(0.0 - fVar25,local_dc,fVar25), fVar21 < fVar12)) {
LAB_0073adf0:
                    fVar12 = fVar21;
                  }
                }
              }
              else if (iVar10 == 3) {
                fVar19 = (float)closestPointQuadraticBezier
                                          (&local_dc,(Vector2 *)&local_d8,(Vector2 *)param_1);
                fVar22 = *(float *)(this + 5000);
                if (fVar19 < fVar22) {
                  fVar19 = (float)tangentQuadraticBezier(local_dc,(Vector2 *)&local_d8);
                  goto LAB_0073ac90;
                }
              }
              else if ((iVar10 == 2) &&
                      (fVar19 = (float)closestPointLineSegment
                                                 (&local_dc,(Vector2 *)&local_d8,(Vector2 *)param_1)
                      , fVar19 < *(float *)(this + 5000))) {
                fVar22 = fStack_cc - local_d4;
                fVar19 = local_d0 - local_d8;
LAB_0073ac90:
                fVar24 = (float)NEON_fmadd(fVar19,fVar19,fVar22 * fVar22);
                fVar23 = 1.0;
                if (1e-06 < fVar24) {
                  fVar23 = 1.0 / SQRT(fVar24);
                }
                fVar20 = (float)NEON_fmadd(fVar19 * fVar23,fVar26,fVar20 * fVar22 * fVar23);
                if ((0.5 < fVar20) &&
                   (fVar21 = (float)NEON_fmadd(fVar25 - fVar21,local_dc,fVar21), fVar21 < fVar12))
                goto LAB_0073adf0;
              }
            }
            sVar8 = (short)iVar18;
            iVar18 = iVar18 + 1;
          } while (sVar8 < 2);
          uVar3 = uVar17 + 1;
        } while ((uVar3 & 0xffff) <= (uVar1 & 0xffff));
      }
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xffff) <= (uVar2 & 0xffff));
  }
  if (*(long *)(lVar9 + 0x28) == local_b0) {
    return fVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


