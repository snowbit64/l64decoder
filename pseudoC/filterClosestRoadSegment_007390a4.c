// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: filterClosestRoadSegment
// Entry Point: 007390a4
// Size: 1588 bytes
// Signature: undefined __thiscall filterClosestRoadSegment(VehicleNavigationAgent * this, ExtractionState * param_1, Vector2 * param_2, float * param_3, float param_4, float param_5, PlanarPose * param_6, bool param_7)


/* VehicleNavigationAgent::filterClosestRoadSegment(ExtractionState&, Vector2&, float&, float,
   float, PlanarPose const&, bool) const */

void __thiscall
VehicleNavigationAgent::filterClosestRoadSegment
          (VehicleNavigationAgent *this,ExtractionState *param_1,Vector2 *param_2,float *param_3,
          float param_4,float param_5,PlanarPose *param_6,bool param_7)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  ushort uVar7;
  bool bVar8;
  long **this_00;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  float *pfVar14;
  long lVar15;
  ushort uVar16;
  uint uVar17;
  RoadSegment *pRVar18;
  long **this_01;
  ushort *puVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_138;
  float local_134;
  float local_130;
  ushort auStack_12c [2];
  float fStack_128;
  bool abStack_124 [4];
  bool abStack_120 [4];
  float fStack_11c;
  float local_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  float local_fc;
  float local_b8 [2];
  long local_b0;
  
  lVar6 = tpidr_el0;
  local_b0 = *(long *)(lVar6 + 0x28);
  plVar13 = *(long **)(this + 0x12a0);
  lVar15 = *plVar13;
  lVar9 = *(long *)(lVar15 + 0x48);
  if (lVar9 != 0) {
    uVar17 = *(uint *)(lVar9 + 0x10) >> 1;
    if ((*(uint *)(lVar9 + 0x10) & 1) != 0) {
      uVar17 = 1;
    }
    if (uVar17 != 0) {
      fVar27 = *(float *)(plVar13 + 7);
      fVar28 = *(float *)((long)plVar13 + 0xc) + *(float *)((long)plVar13 + 0xc);
      fVar29 = *(float *)param_6 - param_4;
      fVar30 = *(float *)(param_6 + 4) - param_4;
      fVar31 = *(float *)param_6 + param_4;
      fVar32 = *(float *)(param_6 + 4) + param_4;
      fVar23 = 0.0;
      uVar26 = NEON_fmov(0x3f800000,4);
      uVar10 = 0;
      uVar7 = 0xffff;
      do {
        pfVar14 = (float *)(lVar9 + (ulong)uVar10 * 0x14);
        uVar20 = (ulong)uVar10;
        fVar21 = *pfVar14;
        fVar25 = pfVar14[2];
        fVar22 = fVar29;
        if (fVar29 < fVar21) {
          fVar22 = fVar21;
        }
        fVar21 = fVar31;
        if (fVar25 < fVar31) {
          fVar21 = fVar25;
        }
        if (fVar21 < fVar22) {
LAB_007391c0:
          uVar2 = *(uint *)(lVar9 + uVar20 * 0x14 + 0x10);
          uVar5 = uVar2 >> 1;
          if ((uVar2 & 1) != 0) {
            uVar5 = 1;
          }
          uVar10 = uVar5 + uVar10;
        }
        else {
          lVar11 = lVar9 + uVar20 * 0x14;
          fVar21 = *(float *)(lVar11 + 4);
          fVar25 = *(float *)(lVar11 + 0xc);
          fVar22 = fVar30;
          if (fVar30 < fVar21) {
            fVar22 = fVar21;
          }
          fVar21 = fVar32;
          if (fVar25 < fVar32) {
            fVar21 = fVar25;
          }
          if (fVar21 < fVar22) goto LAB_007391c0;
          uVar5 = *(uint *)(lVar9 + uVar20 * 0x14 + 0x10);
          fVar22 = fVar23;
          uVar16 = uVar7;
          if ((uVar5 & 1) != 0) {
            puVar19 = (ushort *)(*(long *)(lVar15 + 0x30) + ((ulong)uVar5 & 0xfffffffe) * 2);
            uVar3 = *puVar19;
            uVar4 = puVar19[1];
            if (((*(ushort *)(param_1 + 4) == 0xffff) || (*(ushort *)(param_1 + 4) == uVar3)) ||
               (*(ushort *)(param_1 + 2) == uVar3)) {
              pRVar18 = (RoadSegment *)(*(long *)(lVar15 + 0x18) + (ulong)uVar3 * 0x50);
              if (((fVar28 <= *(float *)(pRVar18 + 8)) &&
                  (fVar27 <= *(float *)(*(long *)(lVar15 + 0x18) + (ulong)uVar3 * 0x50 + 0xc))) &&
                 (fVar21 = (float)RoadSegment::computeClosestPoint2D
                                            (pRVar18,&local_118,(uint)uVar4,0.0,1.0,0.1,
                                             (Vector2 *)param_6), fVar21 < param_4 * param_4)) {
                RoadSegment::getPositionAndDirection
                          ((uint)pRVar18,local_118,(PlanarPose *)(ulong)uVar4);
                fVar21 = (float)NEON_fmadd(*(float *)(param_6 + 4) - local_108._4_4_,
                                           *(float *)(param_6 + 4) - local_108._4_4_,
                                           (*(float *)param_6 - (float)local_108) *
                                           (*(float *)param_6 - (float)local_108));
                fVar22 = 0.0;
                if ((fVar21 < 5.0) &&
                   (fVar25 = (float)NEON_fmadd(*(undefined4 *)(param_6 + 8),local_100,
                                               *(float *)(param_6 + 0xc) * local_fc), 0.866 < fVar25
                   )) {
                  fVar22 = (float)uVar26 + fVar21 * -0.2;
                  fVar21 = (float)((ulong)uVar26 >> 0x20) + (1.0 - fVar25) * -7.462687;
                  fVar22 = fVar22 * fVar22 * fVar22 * fVar21 * fVar21 * fVar21;
                }
                uVar16 = uVar3;
                if (fVar22 <= fVar23) {
                  fVar22 = fVar23;
                  uVar16 = uVar7;
                }
              }
            }
          }
          uVar10 = uVar10 + 1;
          fVar23 = fVar22;
          uVar7 = uVar16;
        }
        if (uVar10 == uVar17) goto LAB_00739388;
        lVar9 = *(long *)(lVar15 + 0x48);
      } while( true );
    }
  }
LAB_007395f8:
  if (*(short *)(param_1 + 4) != -1) {
    *(short *)(param_1 + 6) = *(short *)(param_1 + 4);
  }
  uVar26 = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
LAB_00739618:
  if (*(long *)(lVar6 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar26);
  }
  return;
LAB_00739388:
  if (uVar7 != 0xffff) {
    if ((*(short *)(param_1 + 4) == -1) ||
       (uVar20 = (ulong)*(ushort *)(param_1 + 2), *(ushort *)(param_1 + 2) == uVar7)) {
      lVar9 = *(long *)(lVar15 + 0x18);
      lVar11 = lVar9 + (ulong)uVar7 * 0x50;
      puVar19 = *(ushort **)(lVar11 + 0x20);
      puVar1 = *(ushort **)(lVar11 + 0x28);
      if (puVar19 == puVar1) {
        uVar20 = 0xffff;
      }
      else {
        uVar20 = 0xffff;
        fVar23 = INFINITY;
        while( true ) {
          uVar16 = *puVar19;
          pRVar18 = (RoadSegment *)(lVar9 + (ulong)uVar16 * 0x50);
          if ((fVar28 <= *(float *)(pRVar18 + 8)) &&
             (fVar27 <= *(float *)(lVar9 + (ulong)uVar16 * 0x50 + 0xc))) {
            fVar29 = (float)Spline::getLength();
            fVar29 = (float)NEON_fminnm(10.0 / fVar29,0x3f800000);
            RoadSegment::getPositionDirectionAndCurvature
                      (pRVar18,fVar29,(PlanarPose *)&local_118,&local_130);
            if (*(uint *)(this + 0x13a0) != 0xffffffff) {
              lVar9 = (ulong)*(uint *)(this + 0x13a0) + 1;
              puVar12 = &local_108;
              do {
                lVar9 = lVar9 + -1;
                puVar12[1] = uStack_110;
                *puVar12 = CONCAT44(uStack_114,local_118);
                puVar12 = puVar12 + 2;
              } while (lVar9 != 0);
            }
            fVar29 = (float)getNextHeadingAndCurvature
                                      (this,(Vector2 *)local_b8,&fStack_11c,&fStack_128,
                                       (bool *)&local_138,(bool *)auStack_12c,(ushort *)&local_134,
                                       (PlanarPose *)&local_108,local_130,param_7);
            bVar8 = fVar23 <= fVar29;
            if (bVar8) {
              fVar29 = fVar23;
            }
            fVar23 = fVar29;
            uVar17 = (uint)uVar16;
            if (bVar8) {
              uVar17 = (uint)uVar20;
            }
            uVar20 = (ulong)uVar17;
          }
          puVar19 = puVar19 + 1;
          if (puVar19 == puVar1) break;
          lVar9 = *(long *)(lVar15 + 0x18);
        }
      }
    }
    this_01 = (long **)(*(long *)(lVar15 + 0x18) + (ulong)uVar7 * 0x50);
    RoadSegment::computeClosestPoint2D
              ((RoadSegment *)this_01,(uint *)&local_130,&local_134,(Vector2 *)param_6);
    fVar27 = (float)(**(code **)(**this_01 + 0x38))(local_134,*this_01,local_130);
    *(float *)(param_1 + 8) = fVar27;
    fVar23 = (float)Spline::getLength();
    uVar16 = (ushort)uVar20;
    fVar27 = fVar27 + 10.0 / fVar23;
    this_00 = this_01;
    if (1.0 < fVar27 && (~(uint)uVar20 & 0xffff) != 0) {
      lVar9 = *(long *)(lVar15 + 0x18);
      fVar23 = (float)Spline::getLength();
      fVar28 = (float)Spline::getLength();
      fVar27 = ((fVar27 + -1.0) * fVar23) / fVar28;
      this_00 = (long **)(lVar9 + uVar20 * 0x50);
    }
    RoadSegment::getPositionDirectionAndCurvature
              ((RoadSegment *)this_00,fVar27,(PlanarPose *)&local_118,&local_138);
    if (*(uint *)(this + 0x13a0) != 0xffffffff) {
      lVar9 = (ulong)*(uint *)(this + 0x13a0) + 1;
      puVar12 = &local_108;
      do {
        lVar9 = lVar9 + -1;
        puVar12[1] = uStack_110;
        *puVar12 = CONCAT44(uStack_114,local_118);
        puVar12 = puVar12 + 2;
      } while (lVar9 != 0);
    }
    fVar23 = (float)getNextHeadingAndCurvature
                              (this,(Vector2 *)local_b8,&fStack_11c,&fStack_128,abStack_120,
                               abStack_124,auStack_12c,(PlanarPose *)&local_108,local_138,param_7);
    fVar27 = param_5 + 80.0;
    if (fVar23 <= fVar27) {
      if (*(ushort *)(param_1 + 4) != uVar7) {
        *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 4);
      }
      *(ushort *)(param_1 + 4) = uVar7;
      if (uVar7 == uVar16) {
        uVar16 = 0xffff;
      }
      *(ushort *)(param_1 + 2) = uVar16;
      RoadSegment::getPositionDirectionAndCurvature
                ((RoadSegment *)this_01,(uint)local_130,local_134,(PlanarPose *)&local_108,local_b8)
      ;
      uVar24 = correctHeadingForRoadSegment
                         ((ExtractionState *)this,(uint)param_1,(PlanarPose *)(ulong)(uint)local_130
                          ,(PlanarPose *)&local_108,SUB81(param_6,0));
      uVar26 = 1;
      *(undefined4 *)param_2 = uVar24;
      *(float *)(param_2 + 4) = fVar27;
      *param_3 = local_b8[0];
      goto LAB_00739618;
    }
  }
  goto LAB_007395f8;
}


