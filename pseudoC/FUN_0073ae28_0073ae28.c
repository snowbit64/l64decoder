// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0073ae28
// Entry Point: 0073ae28
// Size: 956 bytes
// Signature: undefined FUN_0073ae28(void)


void FUN_0073ae28(float param_1,float param_2,Vector2 **param_3,Vector2 *param_4)

{
  bool bVar1;
  uint uVar2;
  VehicleNavigationAgent *this;
  int iVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  byte bVar8;
  byte bVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_b0;
  float fStack_ac;
  float local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  this = (VehicleNavigationAgent *)param_3[1];
  fVar11 = (float)closestPointQuadraticBezier(&local_a4,param_4,*param_3);
  fVar15 = *(float *)(this + 5000);
  if (fVar11 < fVar15) {
    fVar12 = (float)tangentQuadraticBezier(local_a4,param_4);
    fVar19 = (float)NEON_fmadd(fVar12,fVar12,fVar15 * fVar15);
    fVar17 = 1.0;
    if (1e-06 < fVar19) {
      fVar17 = 1.0 / SQRT(fVar19);
    }
    fVar15 = fVar15 * fVar17;
    fVar12 = fVar12 * fVar17;
    fVar17 = (float)NEON_fmadd(fVar12,*(undefined4 *)param_3[2],
                               fVar15 * *(float *)((long)param_3[2] + 4));
    if (0.5 < fVar17) {
      fVar19 = (float)NEON_fmadd(param_2 - param_1,local_a4,param_1);
      if (param_2 == 0.0) {
        uVar13 = arcLengthQuadraticBezier(param_4,local_a4,1.0);
        *(undefined4 *)param_3[3] = uVar13;
      }
      else {
        fVar14 = (float)NEON_fmadd(SQRT(fVar11),0x40800000,(1.0 - fVar17) * 200.0);
        fVar19 = fVar14 + fVar19;
      }
      fVar14 = (float)curvatureQuadraticBezier(local_a4,param_4);
      fVar18 = (float)NEON_fmadd(1.0 - fVar17,0xc0000000,0x3f800000);
      uVar16 = NEON_fmov(0x3f800000,4);
      fVar11 = (float)uVar16 - fVar11 / (float)*(undefined8 *)(this + 5000);
      fVar17 = (float)((ulong)uVar16 >> 0x20) -
               (ABS(fVar14 - *(float *)param_3[4]) * 0.4) /
               (float)((ulong)*(undefined8 *)(this + 5000) >> 0x20);
      fVar11 = fVar18 * fVar18 * fVar18 * fVar11 * fVar11 * fVar11;
      fVar17 = fVar11 * fVar17 * fVar17 * fVar17;
      if (7.999998e-07 <= fVar17) {
        if (*param_3[5] != (Vector2)0x0) {
          fVar12 = -fVar12;
          fVar15 = -fVar15;
        }
        if (param_2 == 0.0) {
          local_b0 = fVar12;
          fStack_ac = fVar15;
          uVar13 = pointOnQuadraticBezier(local_a4,param_4);
          fVar15 = fVar11;
          local_a0 = CONCAT44(fVar15,uVar13);
          fVar12 = (float)correctHeading((Vector2 *)&local_a0,*param_3,(Vector2 *)&local_b0,
                                         (bool)*param_3[5]);
        }
        local_b0 = fVar12;
        fStack_ac = fVar15;
        if (*param_3[6] == (Vector2)0x0) {
          bVar5 = true;
          bVar1 = true;
        }
        else {
          fVar12 = (float)NEON_fmadd(*(undefined4 *)param_3[7],fVar15,
                                     fVar12 * -*(float *)((long)param_3[7] + 4));
          fVar11 = (float)NEON_fmadd(*(undefined4 *)param_3[8],fVar15,
                                     fVar12 * -*(float *)((long)param_3[8] + 4));
          bVar5 = 0.0 <= fVar11;
          bVar1 = fVar12 <= 0.0;
          if ((0.0 < fVar12) && (fVar11 < 0.0)) goto LAB_0073b1a8;
        }
        if (*param_3[5] != (Vector2)0x0) {
          fVar14 = -fVar14;
        }
        if ((*(float *)(this + 0x130c) <= fVar14) && (fVar14 <= *(float *)(this + 0x1308))) {
          uVar6 = *(uint *)(this + 0x13a0);
          if (uVar6 != 0) {
            uVar10 = 0;
            do {
              while ((*(ulong *)(this + 0x13a8) >> (uVar10 & 0x3f) & 1) != 0) {
                uVar2 = (int)uVar10 + 1;
                puVar7 = (undefined8 *)(*(long *)param_3[9] + (ulong)uVar2 * 0x10);
                uStack_98 = puVar7[1];
                uVar16 = *puVar7;
                local_a0 = CONCAT44((float)((ulong)uVar16 >> 0x20) +
                                    (float)((ulong)uStack_98 >> 0x20) *
                                    *(float *)(this + uVar10 * 0xc + 0x13b8),
                                    (float)uVar16 +
                                    (float)uStack_98 * *(float *)(this + uVar10 * 0xc + 0x13b8));
                fVar11 = (float)VehicleNavigationAgent::computeMinCostToGoal
                                          (this,(PlanarPose *)&local_a0);
                uVar6 = *(uint *)(this + 0x13a0);
                if (fVar19 < fVar11) {
                  fVar19 = fVar11;
                }
                uVar10 = (ulong)uVar2;
                if (uVar2 == uVar6) goto LAB_0073b114;
              }
              uVar2 = (int)uVar10 + 1;
              uVar10 = (ulong)uVar2;
            } while (uVar2 != uVar6);
          }
LAB_0073b114:
          if (ABS(fVar19) != INFINITY) {
            iVar3 = *(int *)param_3[0xb];
            puVar7 = (undefined8 *)(param_3[10] + (long)iVar3 * 0x1c);
            *(int *)param_3[0xb] = iVar3 + 1;
            *(float *)((long)puVar7 + 0x14) = fVar17;
            *(float *)(puVar7 + 1) = fVar19;
            bVar8 = 2;
            if (!bVar1) {
              bVar8 = 0;
            }
            bVar9 = 4;
            if (!bVar5) {
              bVar9 = 0;
            }
            *(undefined4 *)((long)puVar7 + 0xc) = *(undefined4 *)param_3[3];
            *(float *)(puVar7 + 2) = fVar14;
            *puVar7 = CONCAT44(fStack_ac,local_b0);
            *(byte *)((long)puVar7 + 0x1a) =
                 bVar8 | bVar9 | (byte)*param_3[5] | (byte)*(Vector2 *)((long)puVar7 + 0x1a) & 0xf8;
            *(undefined2 *)(puVar7 + 3) = *(undefined2 *)param_3[0xc];
          }
        }
      }
    }
  }
LAB_0073b1a8:
  if (*(long *)(lVar4 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


