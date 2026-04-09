// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextCurvatureAndSpeed
// Entry Point: 0073799c
// Size: 1728 bytes
// Signature: undefined __thiscall getNextCurvatureAndSpeed(VehicleNavigationAgent * this, StoppingPath * param_1, ExtractionState * param_2, float * param_3, float * param_4, float * param_5, PlanarPose * param_6, float param_7, float param_8, float param_9)


/* VehicleNavigationAgent::getNextCurvatureAndSpeed(StoppingPath*, ExtractionState&, float&, float&,
   float&, PlanarPose const*, float, float, float) const */

float __thiscall
VehicleNavigationAgent::getNextCurvatureAndSpeed
          (VehicleNavigationAgent *this,StoppingPath *param_1,ExtractionState *param_2,
          float *param_3,float *param_4,float *param_5,PlanarPose *param_6,float param_7,
          float param_8,float param_9)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  StoppingPath SVar4;
  bool bVar5;
  ulong uVar6;
  StoppingPath *pSVar7;
  Vector2 *pVVar8;
  ulong uVar9;
  int iVar10;
  undefined2 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_164;
  undefined8 local_148;
  undefined4 local_140;
  bool abStack_138 [4];
  bool abStack_134 [4];
  undefined8 local_130;
  bool local_124 [4];
  bool local_120 [4];
  float local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  float local_110;
  float fStack_10c;
  Vector2 aVStack_108 [8];
  undefined8 local_100 [8];
  uint local_c0;
  ulong local_b8;
  long local_b0;
  
  lVar1 = tpidr_el0;
  local_b0 = *(long *)(lVar1 + 0x28);
  fVar16 = (float)NEON_fmadd(param_8,param_9,0x3e800000);
  fVar12 = (float)getNextCurvature(this,param_2,param_3,param_4,abStack_134,abStack_138,param_6,
                                   param_7,param_8);
  fVar23 = 0.0;
  fVar24 = 0.0;
  if (ABS(fVar12) != INFINITY) {
    fVar24 = param_8;
    if (ABS(*param_4) == INFINITY) {
      fVar23 = 10.0;
      if ((ulong)*(ushort *)(param_2 + 4) != 0xffff) {
        fVar13 = *(float *)(*(long *)(**(long **)(this + 0x12a0) + 0x18) +
                            (ulong)*(ushort *)(param_2 + 4) * 0x50 + 0x10);
        *param_5 = fVar13;
        fVar23 = (float)NEON_fmadd(*(float *)(param_6 + 4) - *(float *)(this + 0x1364),
                                   *(float *)(param_6 + 4) - *(float *)(this + 0x1364),
                                   (*(float *)param_6 - *(float *)(this + 0x1360)) *
                                   (*(float *)param_6 - *(float *)(this + 0x1360)));
        if ((400.0 <= fVar23) || (fVar23 = 10.0, fVar13 <= 10.0)) goto LAB_00737a44;
      }
    }
    else {
      fVar13 = *param_4 - fVar16;
      fVar23 = 0.0;
      if (0.0 < fVar13) {
        fVar23 = fVar13;
      }
      fVar23 = SQRT(fVar23 * (*(float *)(this + 0x1394) + *(float *)(this + 0x1394)));
    }
  }
  *param_5 = fVar23;
LAB_00737a44:
  local_148 = *(undefined8 *)param_2;
  local_140 = *(undefined4 *)(param_2 + 8);
  TractorTrailer::TractorTrailer
            ((TractorTrailer *)&local_118,*(uint *)(this + 0x13a0),
             (VehicleNavigationTrailerData *)(this + 0x13b0),(bitset)*(undefined8 *)(this + 0x13a8))
  ;
  __memcpy_chk(&local_118,param_6,(ulong)(local_c0 + 1) << 4,0x68);
  SVar4 = (StoppingPath)(fVar24 < 0.0);
  fVar23 = *param_3;
  uVar6 = local_b8 & 0xf;
  StoppingPath::clear();
  param_1[0x20] = SVar4;
  if (uVar6 != 0) {
    uVar15 = NEON_cnt(uVar6,1);
    uVar11 = NEON_uaddlv(uVar15,1);
    uVar6 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar11) & 0xffffffff;
    StoppingPath::clear();
    param_1[0x48] = SVar4;
    if (uVar6 != 1) {
      StoppingPath::clear();
      param_1[0x70] = SVar4;
      if (uVar6 != 2) {
        StoppingPath::clear();
        param_1[0x98] = SVar4;
        if (uVar6 != 3) {
          StoppingPath::clear();
          param_1[0xc0] = SVar4;
          if (uVar6 != 4) {
            StoppingPath::clear();
            param_1[0xe8] = SVar4;
            if (uVar6 != 5) {
              StoppingPath::clear();
              param_1[0x110] = SVar4;
              if (uVar6 != 6) {
                StoppingPath::clear();
                param_1[0x138] = SVar4;
              }
            }
          }
        }
      }
    }
  }
  uVar3 = local_c0;
  fVar25 = *(float *)(param_1 + 0x1c);
  fVar22 = ABS(fVar24) / fVar25;
  fVar13 = fVar24 * 0.5 * fVar22;
  fVar17 = ABS(fVar13);
  if (fVar17 <= 0.01) {
    local_164 = 0;
    fVar13 = -1.0;
    if (0.0 <= fVar24) {
      fVar13 = 1.0;
    }
  }
  else {
    local_164 = (int)fVar17;
    fVar13 = fVar13 / (float)(int)fVar17;
  }
  uVar6 = (ulong)local_c0;
  if (local_c0 != 0xffffffff) {
    local_130 = CONCAT44(fStack_10c * fVar13,local_110 * fVar13);
    StoppingPath::addKnot(param_1,0.0,0.0,(Vector2 *)&local_118,(Vector2 *)&local_130);
    if (uVar3 != 0) {
      uVar9 = 0;
      pSVar7 = param_1 + 0x28;
      pVVar8 = aVStack_108;
      do {
        if ((local_b8 >> (uVar9 & 0x3f) & 1) != 0) {
          local_130 = CONCAT44((float)((ulong)*(undefined8 *)(pVVar8 + 8) >> 0x20) * fVar13,
                               (float)*(undefined8 *)(pVVar8 + 8) * fVar13);
          StoppingPath::addKnot(pSVar7,0.0,0.0,pVVar8,(Vector2 *)&local_130);
          pSVar7 = pSVar7 + 0x28;
        }
        uVar9 = uVar9 + 1;
        pVVar8 = pVVar8 + 0x10;
      } while (uVar6 != uVar9);
    }
  }
  if (local_164 != 0) {
    fVar17 = 0.0;
    bVar2 = false;
    iVar10 = 0;
    do {
      fVar14 = fVar13 * fVar23;
      fVar18 = (float)NEON_fmadd(local_110,fVar14 * 0.5,fStack_10c);
      fVar19 = (float)NEON_fmsub(fStack_10c,fVar14 * 0.5,local_110);
      fVar21 = (float)NEON_fmadd(fVar19,fVar19,fVar18 * fVar18);
      fVar20 = 1.0;
      if (1e-06 < fVar21) {
        fVar20 = 1.0 / SQRT(fVar21);
      }
      fVar21 = (float)NEON_fmadd(local_110,fVar14,fStack_10c);
      local_110 = (float)NEON_fmadd(-fStack_10c,fVar14,local_110);
      fVar14 = (float)NEON_fmadd(local_110,local_110,fVar21 * fVar21);
      local_118 = NEON_fmadd(fVar19 * fVar20,fVar13,local_118);
      uStack_114 = NEON_fmadd(fVar18 * fVar20,fVar13,uStack_114);
      fStack_10c = 1.0;
      if (1e-06 < fVar14) {
        fStack_10c = 1.0 / SQRT(fVar14);
      }
      local_110 = local_110 * fStack_10c;
      fStack_10c = fVar21 * fStack_10c;
      fVar17 = fVar13 + fVar17;
      TractorTrailer::solveTrailers();
      uVar3 = local_c0;
      uVar6 = (ulong)local_c0;
      fVar14 = (float)NEON_fmadd(fVar22,fVar22,(ABS(fVar17) * -2.0) / fVar25);
      if (fVar14 < 0.0) {
        fVar14 = 0.0;
      }
      fVar14 = fVar22 - SQRT(fVar14);
      if (local_c0 != 0xffffffff) {
        local_130 = CONCAT44(fVar13 * fStack_10c,fVar13 * local_110);
        StoppingPath::addKnot(param_1,fVar14,0.0,(Vector2 *)&local_118,(Vector2 *)&local_130);
        if (uVar3 != 0) {
          uVar9 = 0;
          pVVar8 = aVStack_108;
          pSVar7 = param_1 + 0x28;
          do {
            if ((local_b8 >> (uVar9 & 0x3f) & 1) != 0) {
              local_130 = CONCAT44((float)((ulong)*(undefined8 *)(pVVar8 + 8) >> 0x20) * fVar13,
                                   (float)*(undefined8 *)(pVVar8 + 8) * fVar13);
              StoppingPath::addKnot(pSVar7,fVar14,0.0,pVVar8,(Vector2 *)&local_130);
              pSVar7 = pSVar7 + 0x28;
            }
            uVar9 = uVar9 + 1;
            pVVar8 = pVVar8 + 0x10;
          } while (uVar6 != uVar9);
        }
      }
      fVar19 = (float)NEON_fmadd(-fVar25,fVar14,fVar24);
      fVar18 = (float)getNextCurvature(this,(ExtractionState *)&local_148,(float *)&local_130,
                                       &local_11c,local_120,local_124,(PlanarPose *)&local_118,
                                       fVar23,fVar19);
      fVar18 = ABS(fVar18);
      if (fVar18 == INFINITY && local_120[0] != false) {
        bVar2 = true;
      }
      if (ABS(local_11c) != INFINITY) {
        fVar20 = *(float *)(this + 0x1394);
        fVar23 = 0.0;
        if (0.0 < local_11c - fVar16) {
          fVar23 = local_11c - fVar16;
        }
        fVar23 = (float)NEON_fmadd(fVar20,fVar14,SQRT(fVar23 * (fVar20 + fVar20)));
        if (fVar23 < *param_5) {
          *param_5 = fVar23;
        }
      }
      bVar5 = local_124[0] == fVar19 < 0.0;
      if ((fVar18 == INFINITY || !bVar5) && (fVar14 * *(float *)(this + 0x1394) < *param_5)) {
        *param_5 = fVar14 * *(float *)(this + 0x1394);
      }
      if ((0.0001 < ABS((float)local_130)) &&
         (fVar23 = (float)NEON_fmadd(*(undefined4 *)(this + 0x1394),fVar14,
                                     SQRT(*(float *)(this + 0x1398) / ABS((float)local_130))),
         fVar23 < *param_5)) {
        *param_5 = fVar23;
      }
      iVar10 = iVar10 + 1;
      fVar23 = (float)local_130;
    } while ((fVar18 != INFINITY && bVar5) && iVar10 != local_164);
    if (bVar2) {
      fVar12 = INFINITY;
    }
  }
  if (param_8 < 0.0) {
    *param_5 = -*param_5;
  }
  if (*(long *)(lVar1 + 0x28) == local_b0) {
    return fVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


