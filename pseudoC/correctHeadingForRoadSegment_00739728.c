// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: correctHeadingForRoadSegment
// Entry Point: 00739728
// Size: 1028 bytes
// Signature: undefined __cdecl correctHeadingForRoadSegment(ExtractionState * param_1, uint param_2, PlanarPose * param_3, PlanarPose * param_4, bool param_5)


/* VehicleNavigationAgent::correctHeadingForRoadSegment(ExtractionState const&, unsigned int,
   PlanarPose const&, PlanarPose const&, bool) const */

float VehicleNavigationAgent::correctHeadingForRoadSegment
                (ExtractionState *param_1,uint param_2,PlanarPose *param_3,PlanarPose *param_4,
                bool param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  bool in_w5;
  ushort *puVar9;
  long lVar10;
  PlanarPose *pPVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  undefined4 in_s1;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_a4;
  undefined8 local_a0;
  float local_98;
  float local_94;
  long local_88;
  
  puVar8 = (undefined8 *)(ulong)param_5;
  uVar7 = (ulong)param_2;
  lVar5 = tpidr_el0;
  pPVar11 = (PlanarPose *)((ulong)param_3 & 0xffffffff);
  local_88 = *(long *)(lVar5 + 0x28);
  fVar14 = (float)correctHeading((Vector2 *)param_4,(Vector2 *)puVar8,(Vector2 *)(param_4 + 8),in_w5
                                );
  fVar15 = *(float *)(param_1 + 0x139c);
  uVar13 = (ulong)*(ushort *)(uVar7 + 4);
  local_a0 = CONCAT44((float)((ulong)*puVar8 >> 0x20) + (float)((ulong)puVar8[1] >> 0x20) * fVar15,
                      (float)*puVar8 + (float)puVar8[1] * fVar15);
  lVar12 = **(long **)(param_1 + 0x12a0);
  if (0.0 <= fVar15) {
    lVar10 = *(long *)(lVar12 + 0x18);
    RoadSegment::computeClosestPoint2D
              ((RoadSegment *)(lVar10 + uVar13 * 0x50),&local_a4,(uint)param_3,0.0,1.0,0.1,
               (Vector2 *)&local_a0);
    while (local_a4 == 1.0) {
      iVar6 = Spline::getNumOfCV();
      if ((int)pPVar11 == iVar6 + -2) {
        lVar10 = lVar10 + uVar13 * 0x50;
        puVar1 = *(ushort **)(lVar10 + 0x20);
        puVar2 = *(ushort **)(lVar10 + 0x28);
        if (puVar1 == puVar2) break;
        if (2 < (ulong)((long)puVar2 - (long)puVar1)) {
          uVar13 = (ulong)*(ushort *)(uVar7 + 2);
          uVar3 = *(ushort *)(uVar7 + 6);
          if ((in_w5 & 1U) == 0) {
            uVar3 = *(ushort *)(uVar7 + 2);
          }
          puVar9 = puVar1;
          if (uVar3 != 0xffff) {
            do {
              if (*puVar9 == uVar3) {
                if (puVar9 != puVar2) {
                  pPVar11 = (PlanarPose *)0x0;
                  goto LAB_00739a54;
                }
                break;
              }
              puVar9 = puVar9 + 1;
            } while (puVar9 != puVar2);
          }
        }
        uVar13 = (ulong)*puVar1;
        pPVar11 = (PlanarPose *)0x0;
      }
      else {
        pPVar11 = (PlanarPose *)(ulong)((int)pPVar11 + 1);
      }
LAB_00739a54:
      lVar10 = *(long *)(lVar12 + 0x18);
      RoadSegment::computeClosestPoint2D
                ((RoadSegment *)(lVar10 + uVar13 * 0x50),&local_a4,(uint)pPVar11,0.0,1.0,0.1,
                 (Vector2 *)&local_a0);
    }
  }
  else {
    lVar10 = *(long *)(lVar12 + 0x18);
    RoadSegment::computeClosestPoint2D
              ((RoadSegment *)(lVar10 + uVar13 * 0x50),&local_a4,(uint)param_3,0.0,1.0,0.1,
               (Vector2 *)&local_a0);
    while (local_a4 == 0.0) {
      if ((int)pPVar11 == 0) {
        lVar10 = lVar10 + uVar13 * 0x50;
        puVar1 = *(ushort **)(lVar10 + 0x38);
        puVar2 = *(ushort **)(lVar10 + 0x40);
        if (puVar1 == puVar2) {
          pPVar11 = (PlanarPose *)0x0;
          break;
        }
        if (2 < (ulong)((long)puVar2 - (long)puVar1)) {
          lVar10 = 2;
          if ((in_w5 & 1U) == 0) {
            lVar10 = 6;
          }
          uVar3 = *(ushort *)(uVar7 + lVar10);
          puVar9 = puVar1;
          if (uVar3 != 0xffff) {
            do {
              if (*puVar9 == uVar3) {
                if (puVar9 != puVar2) goto LAB_007398b4;
                break;
              }
              puVar9 = puVar9 + 1;
            } while (puVar9 != puVar2);
          }
        }
        uVar3 = *puVar1;
LAB_007398b4:
        uVar13 = (ulong)uVar3;
        iVar6 = Spline::getNumOfCV();
        uVar4 = iVar6 - 2;
      }
      else {
        uVar4 = (int)pPVar11 - 1;
      }
      pPVar11 = (PlanarPose *)(ulong)uVar4;
      lVar10 = *(long *)(lVar12 + 0x18);
      RoadSegment::computeClosestPoint2D
                ((RoadSegment *)(lVar10 + uVar13 * 0x50),&local_a4,uVar4,0.0,1.0,0.1,
                 (Vector2 *)&local_a0);
    }
  }
  RoadSegment::getPositionAndDirection
            ((int)*(undefined8 *)(lVar12 + 0x18) + (int)uVar13 * 0x50,local_a4,pPVar11);
  fVar16 = *(float *)(param_4 + 8) * -(local_94 - local_a0._4_4_);
  fVar15 = (float)NEON_fmadd(local_98 - (float)local_a0,*(undefined4 *)(param_4 + 0xc),fVar16);
  fVar16 = (float)NEON_fnmadd(local_98 - (float)local_a0,*(undefined4 *)(param_4 + 0xc),-fVar16);
  if (*(char *)(lVar12 + 0x50) != '\0') {
    fVar15 = fVar16;
  }
  if (fVar15 < 0.0) {
    fVar15 = *(float *)((long)puVar8 + 4);
    if (0.0 <= *(float *)(param_1 + 0x139c)) {
      fVar15 = local_94;
      local_94 = *(float *)((long)puVar8 + 4);
    }
    fVar15 = fVar15 - local_94;
    fVar16 = *(float *)puVar8 - local_98;
    if (0.0 <= *(float *)(param_1 + 0x139c)) {
      fVar16 = local_98 - *(float *)puVar8;
    }
    fVar18 = (float)NEON_fmadd(fVar16,in_s1,fVar14 * -fVar15);
    fVar17 = (float)NEON_fnmadd(fVar16,in_s1,-(fVar14 * -fVar15));
    if (*(char *)(lVar12 + 0x50) != '\0') {
      fVar18 = fVar17;
    }
    if (fVar18 < 0.0) {
      fVar15 = (float)NEON_fmadd(fVar16,fVar16,fVar15 * fVar15);
      fVar14 = 1.0;
      if (1e-06 < fVar15) {
        fVar14 = 1.0 / SQRT(fVar15);
      }
      fVar14 = fVar16 * fVar14;
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return fVar14;
}


