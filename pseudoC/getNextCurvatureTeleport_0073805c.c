// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextCurvatureTeleport
// Entry Point: 0073805c
// Size: 912 bytes
// Signature: undefined __thiscall getNextCurvatureTeleport(VehicleNavigationAgent * this, Vector2 * param_1, float * param_2, float * param_3, bool * param_4, ushort param_5, PlanarPose * param_6, float param_7)


/* VehicleNavigationAgent::getNextCurvatureTeleport(Vector2&, float&, float&, bool&, unsigned short,
   PlanarPose const*, float) const */

void __thiscall
VehicleNavigationAgent::getNextCurvatureTeleport
          (VehicleNavigationAgent *this,Vector2 *param_1,float *param_2,float *param_3,bool *param_4
          ,ushort param_5,PlanarPose *param_6,float param_7)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  RoadSegment *this_00;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 local_a0;
  undefined4 local_98;
  float local_94;
  float local_90;
  uint local_8c;
  PlanarPose aPStack_88 [8];
  undefined4 local_80;
  float fStack_7c;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  fVar12 = INFINITY;
  uVar2 = *(ushort *)(this + 0x30);
  lVar6 = (*(long **)(this + 0x12a0))[0xd];
  lVar9 = lVar6 + (ulong)param_5 * 0xe;
  uVar11 = *(uint *)(lVar9 + 8);
  if ((uint)uVar2 <= (uVar11 & 0xffff)) goto LAB_007383b4;
  uVar3 = *(ushort *)(lVar9 + 0xc);
  if ((uint)uVar2 <= uVar11 >> 0x10) goto LAB_007383b4;
  if (((uVar11 - *(ushort *)(this + 0x32) & 0xffff) < 0xe) &&
     (uVar8 = (int)(CONCAT24(uVar3,uVar11) >> 0x10) - (uint)*(ushort *)(this + 0x34),
     (uVar8 & 0xffff) < 0xe)) {
    uVar7 = (ulong)uVar8 & 0xffff;
    uVar2 = (ushort)(uVar11 - *(ushort *)(this + 0x32));
    uVar11 = (uint)*(ushort *)(this + (ulong)uVar3 * 2 + (ulong)uVar2 * 0x10 + uVar7 * 0xe0 + 0x36);
    uVar8 = (uint)(byte)this[(ulong)uVar3 + (ulong)uVar2 * 8 + uVar7 * 0x70 + 0xc76];
LAB_00738190:
    if ((uVar8 >> 4 & 1) == 0) {
      uVar2 = *(ushort *)(lVar6 + (ulong)param_5 * 0xe);
      this_00 = (RoadSegment *)(*(long *)(**(long **)(this + 0x12a0) + 0x18) + (ulong)uVar2 * 0x50);
      fVar12 = (float)RoadSegment::computeClosestPoint2D
                                (this_00,&local_8c,&local_90,(Vector2 *)param_6);
      if (fVar12 <= *(float *)(this + 5000)) {
        RoadSegment::getPositionDirectionAndCurvature
                  (this_00,local_8c,local_90,aPStack_88,&local_94);
        fVar13 = (float)NEON_fmadd(local_80,*(undefined4 *)(param_6 + 8),
                                   fStack_7c * *(float *)(param_6 + 0xc));
        if (0.5 < fVar13) {
          uVar18 = 0x3556bf92;
          uVar16 = NEON_fmov(0x3f800000,4);
          fVar19 = (float)NEON_fmadd(1.0 - fVar13,0xc0000000,0x3f800000);
          fVar14 = (float)uVar16 - fVar12 / (float)*(undefined8 *)(this + 5000);
          fVar17 = (float)((ulong)uVar16 >> 0x20) -
                   (ABS(local_94 - param_7) * 0.4) /
                   (float)((ulong)*(undefined8 *)(this + 5000) >> 0x20);
          fVar14 = fVar19 * fVar19 * fVar19 * fVar14 * fVar14 * fVar14 * fVar17 * fVar17 * fVar17;
          *param_3 = fVar14;
          if (7.999998e-07 <= fVar14) {
            local_98 = 0;
            local_a0 = CONCAT62(0xffffffffffff,param_5);
            if (uVar2 != 0xffff) {
              local_a0 = CONCAT26(0xffff,(undefined6)local_a0);
            }
            local_a0._0_6_ = CONCAT24(uVar2,(undefined4)local_a0);
            uVar15 = correctHeadingForRoadSegment
                               ((ExtractionState *)this,(uint)&local_a0,
                                (PlanarPose *)(ulong)local_8c,aPStack_88,SUB81(param_6,0));
            *(undefined4 *)param_1 = uVar15;
            *(undefined4 *)(param_1 + 4) = uVar18;
            fVar17 = *(float *)(this + 0x138c);
            fVar14 = fVar17;
            if (local_94 <= fVar17) {
              fVar14 = local_94;
            }
            fVar19 = -fVar17;
            if (-fVar17 <= local_94) {
              fVar19 = fVar14;
            }
            *param_2 = fVar19;
            iVar5 = Spline::getNumOfCV();
            *param_4 = local_8c == iVar5 - 2U && local_90 == 1.0;
            fVar17 = (float)Spline::getLength();
            fVar14 = INFINITY;
            if (uVar11 != 0xffff) {
              fVar14 = (float)(uVar11 | 0x49800000) + -1048576.0;
            }
            fVar12 = (float)NEON_fmadd(SQRT(fVar12),0x40800000,(1.0 - fVar13) * 200.0);
            fVar12 = fVar12 + (1.0 - local_90) * fVar17 + fVar14;
            goto LAB_007383b4;
          }
        }
      }
    }
  }
  else {
    lVar10 = *(long *)(this + 0x28);
    lVar9 = ((ulong)(CONCAT24(uVar3,uVar11) >> 0x10) & 0xffff) * (ulong)uVar2 +
            ((ulong)uVar11 & 0xffff);
    uVar2 = *(ushort *)(lVar10 + lVar9 * 6);
    uVar11 = (uint)uVar2;
    if (uVar2 != 0xffff) {
      bVar1 = *(byte *)(lVar10 + lVar9 * 6 + 4);
      uVar8 = (uint)bVar1;
      if ((uVar3 == bVar1 >> 5) ||
         ((uVar11 = (uint)*(ushort *)(lVar10 + lVar9 * 6 + 2), uVar11 != 0xffff &&
          (bVar1 = *(byte *)(lVar10 + lVar9 * 6 + 5), uVar8 = (uint)bVar1, uVar3 == bVar1 >> 5))))
      goto LAB_00738190;
    }
  }
  fVar12 = INFINITY;
LAB_007383b4:
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar12);
}


