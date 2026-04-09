// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: filterClosestRoadSegment
// Entry Point: 0073e884
// Size: 1232 bytes
// Signature: undefined __cdecl filterClosestRoadSegment(ExtractionState * param_1, Vector2 * param_2, float * param_3, float param_4, PlanarPose * param_5, PlanarPose * param_6, bool param_7)


/* VehicleNavigationAgent::filterClosestRoadSegment(ExtractionState&, Vector2&, float&, float,
   PlanarPose const&, PlanarPose const&, bool) const */

void VehicleNavigationAgent::filterClosestRoadSegment
               (ExtractionState *param_1,Vector2 *param_2,float *param_3,float param_4,
               PlanarPose *param_5,PlanarPose *param_6,bool param_7)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  float *pfVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  float *pfVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ushort uVar18;
  ulong uVar19;
  RoadSegment *this;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float fStack_bc;
  undefined4 local_b8;
  float local_b4;
  long local_b0;
  
  pfVar9 = (float *)(ulong)param_7;
  lVar5 = tpidr_el0;
  local_b0 = *(long *)(lVar5 + 0x28);
  plVar13 = *(long **)(param_1 + 0x12a0);
  lVar16 = *plVar13;
  lVar10 = *(long *)(lVar16 + 0x48);
  if (lVar10 != 0) {
    uVar4 = *(uint *)(lVar10 + 0x10) >> 1;
    if ((*(uint *)(lVar10 + 0x10) & 1) != 0) {
      uVar4 = 1;
    }
    if (uVar4 != 0) {
      fVar25 = *(float *)((long)plVar13 + 0xc);
      fVar29 = *(float *)(plVar13 + 7);
      fVar23 = 0.0;
      fVar30 = *(float *)param_6 - param_4;
      fVar31 = *(float *)(param_6 + 4) - param_4;
      fVar32 = *(float *)param_6 + param_4;
      fVar28 = *(float *)(param_6 + 4) + param_4;
      uVar24 = NEON_fmov(0x3f800000,4);
      uVar11 = 0;
      uVar19 = 0xffff;
      do {
        pfVar14 = (float *)(lVar10 + (ulong)uVar11 * 0x14);
        uVar17 = (ulong)uVar11;
        fVar20 = *pfVar14;
        fVar26 = pfVar14[2];
        fVar21 = fVar30;
        if (fVar30 < fVar20) {
          fVar21 = fVar20;
        }
        fVar20 = fVar32;
        if (fVar26 < fVar32) {
          fVar20 = fVar26;
        }
        fVar26 = (float)((ulong)uVar24 >> 0x20);
        if (fVar20 < fVar21) {
LAB_0073e9a0:
          uVar2 = *(uint *)(lVar10 + uVar17 * 0x14 + 0x10);
          uVar15 = uVar2 >> 1;
          if ((uVar2 & 1) != 0) {
            uVar15 = 1;
          }
          uVar11 = uVar15 + uVar11;
        }
        else {
          lVar12 = lVar10 + uVar17 * 0x14;
          fVar20 = *(float *)(lVar12 + 4);
          fVar27 = *(float *)(lVar12 + 0xc);
          fVar21 = fVar31;
          if (fVar31 < fVar20) {
            fVar21 = fVar20;
          }
          fVar20 = fVar28;
          if (fVar27 < fVar28) {
            fVar20 = fVar27;
          }
          if (fVar20 < fVar21) goto LAB_0073e9a0;
          uVar15 = *(uint *)(lVar10 + uVar17 * 0x14 + 0x10);
          if ((uVar15 & 1) != 0) {
            puVar1 = (ushort *)(*(long *)(lVar16 + 0x30) + ((ulong)uVar15 & 0xfffffffe) * 2);
            uVar18 = *puVar1;
            this = (RoadSegment *)(*(long *)(lVar16 + 0x18) + (ulong)uVar18 * 0x50);
            if ((fVar25 + fVar25 <= *(float *)(this + 8)) &&
               (fVar29 <= *(float *)(*(long *)(lVar16 + 0x18) + (ulong)uVar18 * 0x50 + 0xc))) {
              uVar3 = puVar1[1];
              fVar21 = (float)RoadSegment::computeClosestPoint2D
                                        (this,&local_c4,(uint)uVar3,0.0,1.0,0.1,(Vector2 *)param_6);
              if (fVar21 < param_4 * param_4) {
                RoadSegment::getPositionAndDirection((uint)this,local_c4,(PlanarPose *)(ulong)uVar3)
                ;
                fVar20 = (float)NEON_fmadd(*(float *)(param_6 + 4) - fStack_bc,
                                           *(float *)(param_6 + 4) - fStack_bc,
                                           (*(float *)param_6 - local_c0) *
                                           (*(float *)param_6 - local_c0));
                fVar21 = 0.0;
                if ((fVar20 < 5.0) &&
                   (fVar27 = (float)NEON_fmadd(*(undefined4 *)(param_6 + 8),local_b8,
                                               *(float *)(param_6 + 0xc) * local_b4), 0.866 < fVar27
                   )) {
                  fVar21 = (float)uVar24 + fVar20 * -0.2;
                  fVar20 = fVar26 + (1.0 - fVar27) * -7.462687;
                  fVar21 = fVar21 * fVar21 * fVar21 * fVar20 * fVar20 * fVar20;
                }
                fVar20 = fVar21;
                if (fVar21 <= fVar23) {
                  fVar20 = fVar23;
                }
                uVar15 = (uint)uVar18;
                if (fVar21 <= fVar23) {
                  uVar15 = (uint)uVar19;
                }
                uVar19 = (ulong)uVar15;
                fVar23 = fVar20;
              }
            }
          }
          uVar11 = uVar11 + 1;
        }
        if (uVar11 == uVar4) goto LAB_0073eb24;
        lVar10 = *(long *)(lVar16 + 0x48);
      } while( true );
    }
  }
LAB_0073eccc:
  uVar8 = 0;
LAB_0073ecd0:
  if (*(long *)(lVar5 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
LAB_0073eb24:
  uVar18 = (ushort)uVar19;
  if ((~(uint)uVar19 & 0xffff) != 0) {
    uVar3 = *(ushort *)(param_2 + 4);
    if ((ulong)uVar3 == 0xffff) {
LAB_0073eb68:
      uVar17 = uVar19;
    }
    else {
      uVar17 = uVar19;
      if ((uint)uVar3 != (uint)uVar18) {
        uVar7 = RoadSegment::hasSuccessor
                          ((RoadSegment *)(*(long *)(lVar16 + 0x18) + (ulong)uVar3 * 0x50),uVar18);
        uVar17 = (ulong)(uint)uVar3;
        if ((uVar7 & 1) == 0) goto LAB_0073eb68;
      }
    }
    RoadSegment::computeClosestPoint2D
              ((RoadSegment *)(*(long *)(lVar16 + 0x18) + uVar17 * 0x50),(uint *)&local_c4,&local_c8
               ,(Vector2 *)pfVar9);
    fVar23 = local_c4;
    iVar6 = Spline::getNumOfCV();
    if ((fVar23 == (float)(iVar6 + -2)) && (local_c8 == 1.0)) {
      RoadSegment::computeClosestPoint2D
                ((RoadSegment *)(*(long *)(lVar16 + 0x18) + uVar19 * 0x50),(uint *)&local_c4,
                 &local_c8,(Vector2 *)pfVar9);
      uVar17 = uVar19;
    }
    if (*(short *)(param_2 + 4) != (short)uVar17) {
      *(short *)(param_2 + 6) = *(short *)(param_2 + 4);
    }
    if ((uint)uVar17 == (uint)uVar18) {
      uVar18 = 0xffff;
    }
    *(short *)(param_2 + 4) = (short)uVar17;
    *(ushort *)(param_2 + 2) = uVar18;
    plVar13 = *(long **)(*(long *)(lVar16 + 0x18) + uVar17 * 0x50);
    uVar22 = (**(code **)(*plVar13 + 0x38))(local_c8,plVar13,local_c4);
    *(undefined4 *)(param_2 + 8) = uVar22;
    RoadSegment::getPositionDirectionAndCurvature
              ((RoadSegment *)(*(long *)(lVar16 + 0x18) + uVar17 * 0x50),(uint)local_c4,local_c8,
               (PlanarPose *)&local_c0,&local_cc);
    uVar8 = 0;
    fVar23 = (float)NEON_fmadd(pfVar9[1] - fStack_bc,pfVar9[1] - fStack_bc,
                               (*pfVar9 - local_c0) * (*pfVar9 - local_c0));
    if ((5.0 <= fVar23) ||
       (fVar25 = (float)NEON_fmadd(pfVar9[2],local_b8,pfVar9[3] * local_b4), fVar25 <= 0.866))
    goto LAB_0073ecd0;
    fVar23 = (float)uVar24 + fVar23 * -0.2;
    fVar26 = fVar26 + (1.0 - fVar25) * -7.462687;
    if (fVar23 * fVar23 * fVar23 * fVar26 * fVar26 * fVar26 != 0.0) {
      fVar25 = (float)correctHeadingForRoadSegment
                                (param_1,(uint)param_2,(PlanarPose *)(ulong)(uint)local_c4,
                                 (PlanarPose *)&local_c0,param_7);
      uVar8 = 1;
      *param_3 = fVar25;
      param_3[1] = fVar23;
      *(float *)param_5 = local_cc;
      goto LAB_0073ecd0;
    }
  }
  goto LAB_0073eccc;
}


