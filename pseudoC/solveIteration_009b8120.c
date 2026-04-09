// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveIteration
// Entry Point: 009b8120
// Size: 1492 bytes
// Signature: undefined __cdecl solveIteration(Bt2World * param_1, btAlignedObjectArray * param_2, float param_3)


/* Bt2RaycastVehicle::solveIteration(Bt2World*, btAlignedObjectArray<btSolverBody>&, float) */

void Bt2RaycastVehicle::solveIteration
               (Bt2World *param_1,btAlignedObjectArray *param_2,float param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float local_f4;
  float local_f0 [20];
  long local_a0;
  
  lVar6 = tpidr_el0;
  local_a0 = *(long *)(lVar6 + 0x28);
  if (*(int *)(*(long *)(param_1 + 8) + 0xec) != 2) {
    uVar5 = *(uint *)(param_1 + 0x3c);
    if (0 < (int)uVar5) {
      lVar7 = 0;
      lVar8 = 0;
      pfVar9 = local_f0;
      do {
        lVar10 = *(long *)(param_1 + 0x48);
        *pfVar9 = 0.0;
        lVar11 = *(long *)(param_1 + 0x88);
        if (*(long *)((Bt2WheelInfo *)(lVar10 + lVar8) + 0x20) == 0) {
LAB_009b8664:
          lVar11 = lVar11 + lVar7;
          fVar13 = *(float *)(lVar11 + 0x1c);
          if (fVar13 != 0.0) {
            fVar17 = *(float *)(lVar10 + lVar8 + 0x140);
            fVar25 = *(float *)(lVar11 + 0x20) - fVar17;
            fVar14 = fVar13;
            if ((fVar13 < fVar25) || (fVar14 = -fVar13, fVar25 < -fVar13)) {
              fVar25 = fVar14;
              fVar13 = fVar25 - *(float *)(lVar11 + 0x20);
            }
            else {
              fVar13 = -fVar17;
            }
            *(float *)(lVar11 + 0x20) = fVar25;
            *(float *)(lVar10 + lVar8 + 0x140) = fVar17 + fVar13;
          }
        }
        else {
          plVar1 = (long *)(lVar11 + lVar7);
          lVar3 = *plVar1;
          lVar4 = plVar1[1];
          fVar15 = *(float *)((long)plVar1 + 0x4c);
          fVar25 = (float)((ulong)*(undefined8 *)((long)plVar1 + 0x44) >> 0x20);
          uVar12 = NEON_fmadd(*(undefined4 *)((long)plVar1 + 0x24),*(undefined4 *)(lVar3 + 0x50),
                              *(float *)(plVar1 + 5) * *(float *)(lVar3 + 0x54));
          fVar14 = (float)*(undefined8 *)((long)plVar1 + 0x44);
          uVar23 = NEON_fmadd(*(undefined4 *)((long)plVar1 + 0x34),*(undefined4 *)(lVar4 + 0x50),
                              *(float *)(plVar1 + 7) * *(float *)(lVar4 + 0x54));
          fVar13 = (float)NEON_fmadd(*(undefined4 *)((long)plVar1 + 0x2c),
                                     *(undefined4 *)(lVar3 + 0x58),uVar12);
          fVar17 = (float)NEON_fmadd(fVar15,*(undefined4 *)(lVar3 + 0x48),
                                     *(float *)(lVar3 + 0x44) * fVar25 +
                                     *(float *)(lVar3 + 0x40) * fVar14);
          fVar19 = (float)NEON_fmadd(fVar15,*(undefined4 *)(lVar4 + 0x48),
                                     *(float *)(lVar4 + 0x44) * fVar25 +
                                     *(float *)(lVar4 + 0x40) * fVar14);
          fVar21 = (float)NEON_fmadd(*(undefined4 *)((long)plVar1 + 0x3c),
                                     *(undefined4 *)(lVar4 + 0x58),uVar23);
          fVar18 = *(float *)(plVar1 + 0x10);
          uVar12 = NEON_fmsub(fVar18,*(undefined4 *)((long)plVar1 + 0x7c),
                              *(undefined4 *)(plVar1 + 0xf));
          fVar17 = (float)NEON_fmadd(*(float *)((long)plVar1 + 0x9c) *
                                     -((fVar17 + fVar13) - (fVar19 + fVar21)),
                                     *(undefined4 *)((long)plVar1 + 0x74),uVar12);
          uVar12 = NEON_fmin(fVar18 + fVar17,0);
          fVar13 = 0.0 - fVar18;
          if (fVar18 + fVar17 <= 0.0) {
            fVar13 = fVar17;
          }
          *(undefined4 *)(plVar1 + 0x10) = uVar12;
          fVar13 = *(float *)(plVar1 + 0x13) * fVar13;
          if (*(long *)(lVar3 + 0xf0) != 0) {
            *(ulong *)(lVar3 + 0x40) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x70) >> 0x20) *
                          fVar25 * (float)((ulong)*(undefined8 *)(lVar3 + 0x80) >> 0x20) * fVar13 +
                          (float)((ulong)*(undefined8 *)(lVar3 + 0x40) >> 0x20),
                          (float)*(undefined8 *)(lVar3 + 0x70) *
                          fVar14 * (float)*(undefined8 *)(lVar3 + 0x80) * fVar13 +
                          (float)*(undefined8 *)(lVar3 + 0x40));
            *(float *)(lVar3 + 0x48) =
                 fVar13 * fVar15 * *(float *)(lVar3 + 0x88) * *(float *)(lVar3 + 0x78) +
                 *(float *)(lVar3 + 0x48);
            fVar15 = fVar13 * *(float *)(lVar3 + 0x68) * *(float *)((long)plVar1 + 0x5c) +
                     *(float *)(lVar3 + 0x58);
            *(ulong *)(lVar3 + 0x50) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x60) >> 0x20) * fVar13 *
                          (float)((ulong)*(undefined8 *)((long)plVar1 + 0x54) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar3 + 0x50) >> 0x20),
                          (float)*(undefined8 *)(lVar3 + 0x60) * fVar13 *
                          (float)*(undefined8 *)((long)plVar1 + 0x54) +
                          (float)*(undefined8 *)(lVar3 + 0x50));
            *(float *)(lVar3 + 0x58) = fVar15;
          }
          uVar16 = (ulong)(uint)fVar15;
          if (*(long *)(lVar4 + 0xf0) != 0) {
            lVar2 = lVar11 + lVar7;
            fVar14 = -fVar13;
            uVar20 = *(undefined8 *)(lVar2 + 0x44);
            *(float *)(lVar4 + 0x48) =
                 *(float *)((long)plVar1 + 0x4c) * *(float *)(lVar4 + 0x88) * fVar14 *
                 *(float *)(lVar4 + 0x78) + *(float *)(lVar4 + 0x48);
            *(ulong *)(lVar4 + 0x40) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x70) >> 0x20) *
                          (float)((ulong)uVar20 >> 0x20) *
                          (float)((ulong)*(undefined8 *)(lVar4 + 0x80) >> 0x20) * fVar14 +
                          (float)((ulong)*(undefined8 *)(lVar4 + 0x40) >> 0x20),
                          (float)*(undefined8 *)(lVar4 + 0x70) *
                          (float)uVar20 * (float)*(undefined8 *)(lVar4 + 0x80) * fVar14 +
                          (float)*(undefined8 *)(lVar4 + 0x40));
            uVar16 = *(ulong *)(lVar4 + 0x50);
            fVar13 = *(float *)(lVar4 + 0x68) * fVar14 * *(float *)(lVar2 + 0x6c) +
                     *(float *)(lVar4 + 0x58);
            *(ulong *)(lVar4 + 0x50) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x60) >> 0x20) * fVar14 *
                          (float)((ulong)*(undefined8 *)(lVar2 + 100) >> 0x20) +
                          (float)(uVar16 >> 0x20),
                          (float)*(undefined8 *)(lVar4 + 0x60) * fVar14 *
                          (float)*(undefined8 *)(lVar2 + 100) + (float)uVar16);
            *(float *)(lVar4 + 0x58) = fVar13;
          }
          uVar23 = (undefined4)uVar16;
          fVar14 = *(float *)(plVar1 + 0x10);
          fVar25 = *(float *)(plVar1 + 0x13);
          fVar17 = *(float *)(lVar11 + lVar7 + 0x84);
          uVar12 = (**(code **)(*(long *)param_2 + 0x98))();
          uVar12 = NEON_fmadd(*(undefined4 *)((long)plVar1 + 0x44),uVar12,
                              *(float *)(plVar1 + 9) * fVar13);
          fVar13 = (float)NEON_fmadd(*(undefined4 *)((long)plVar1 + 0x4c),uVar23,uVar12);
          uVar12 = 0;
          if (fVar13 <= 0.0) {
            uVar12 = (**(code **)(*(long *)param_2 + 0x98))();
            uVar12 = NEON_fmadd(*(undefined4 *)((long)plVar1 + 0x44),uVar12,
                                *(float *)(plVar1 + 9) * fVar13);
            uVar12 = NEON_fmadd(*(undefined4 *)((long)plVar1 + 0x4c),uVar23,uVar12);
          }
          fVar13 = (float)NEON_fmsub(uVar12,*(undefined4 *)(lVar10 + lVar8 + 0x16c),
                                     ((fVar14 + fVar17) * fVar25) / param_3);
          if (0.0 < fVar13) {
            lVar2 = lVar11 + lVar7;
            computeTireForces((Bt2RaycastVehicle *)param_1,(Bt2WheelInfo *)(lVar10 + lVar8),
                              *(float *)(lVar2 + 0x14),*(float *)(lVar2 + 0x10),fVar13,&fStack_100,
                              &local_f4,&local_f8,&fStack_fc);
            fVar17 = (float)((ulong)*(undefined8 *)(lVar2 + 0xc0) >> 0x20);
            fVar15 = *(float *)(lVar2 + 200);
            uVar12 = NEON_fmadd(*(undefined4 *)(lVar2 + 0xa0),*(undefined4 *)(lVar3 + 0x50),
                                *(float *)(lVar2 + 0xa4) * *(float *)(lVar3 + 0x54));
            fVar25 = (float)*(undefined8 *)(lVar2 + 0xc0);
            uVar23 = NEON_fmadd(*(undefined4 *)(lVar2 + 0xb0),*(undefined4 *)(lVar4 + 0x50),
                                *(float *)(lVar2 + 0xb4) * *(float *)(lVar4 + 0x54));
            fVar21 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + 0xa8),*(undefined4 *)(lVar3 + 0x58),
                                       uVar12);
            fVar22 = (float)NEON_fmadd(fVar15,*(undefined4 *)(lVar4 + 0x48),
                                       *(float *)(lVar4 + 0x44) * fVar17 +
                                       *(float *)(lVar4 + 0x40) * fVar25);
            fVar19 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + 0xb8),*(undefined4 *)(lVar4 + 0x58),
                                       uVar23);
            fVar24 = (float)NEON_fmadd(fVar15,*(undefined4 *)(lVar3 + 0x48),
                                       *(float *)(lVar3 + 0x44) * fVar17 +
                                       *(float *)(lVar3 + 0x40) * fVar25);
            fVar18 = *(float *)(lVar2 + 0x18) * fVar13 * *(float *)(lVar10 + lVar8 + 0x154);
            fVar14 = ABS(local_f4);
            if (ABS(local_f4) < fVar18) {
              fVar14 = fVar18;
            }
            fVar21 = (float)NEON_fmsub((fVar24 + fVar21) - (fVar22 + fVar19),
                                       *(undefined4 *)(lVar2 + 0xf0),*(undefined4 *)(lVar2 + 0xf4));
            fVar19 = ABS(local_f8);
            if (ABS(local_f8) < fVar18) {
              fVar19 = fVar18;
            }
            fVar18 = *(float *)(lVar2 + 0xfc);
            *pfVar9 = fVar14 * param_3;
            fVar22 = fVar19 * param_3;
            fVar14 = fVar18 + fVar21;
            if (fVar14 <= fVar22) {
              fVar19 = -(fVar19 * param_3);
              if (fVar14 < fVar19) {
                fVar21 = fVar19 - fVar18;
                fVar14 = fVar19;
              }
            }
            else {
              fVar21 = fVar22 - fVar18;
              fVar14 = fVar22;
            }
            *(float *)(lVar2 + 0xfc) = fVar14;
            if (*(long *)(lVar3 + 0xf0) != 0) {
              *(ulong *)(lVar3 + 0x40) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x70) >> 0x20) *
                            fVar17 * (float)((ulong)*(undefined8 *)(lVar3 + 0x80) >> 0x20) * fVar21
                            + (float)((ulong)*(undefined8 *)(lVar3 + 0x40) >> 0x20),
                            (float)*(undefined8 *)(lVar3 + 0x70) *
                            fVar25 * (float)*(undefined8 *)(lVar3 + 0x80) * fVar21 +
                            (float)*(undefined8 *)(lVar3 + 0x40));
              *(float *)(lVar3 + 0x48) =
                   fVar21 * fVar15 * *(float *)(lVar3 + 0x88) * *(float *)(lVar3 + 0x78) +
                   *(float *)(lVar3 + 0x48);
              uVar20 = *(undefined8 *)(lVar11 + lVar7 + 0xd0);
              fVar14 = *(float *)(lVar11 + lVar7 + 0xd8);
              *(ulong *)(lVar3 + 0x50) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x60) >> 0x20) * fVar21 *
                            (float)((ulong)uVar20 >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar3 + 0x50) >> 0x20),
                            (float)*(undefined8 *)(lVar3 + 0x60) * fVar21 * (float)uVar20 +
                            (float)*(undefined8 *)(lVar3 + 0x50));
              *(float *)(lVar3 + 0x58) =
                   fVar21 * *(float *)(lVar3 + 0x68) * fVar14 + *(float *)(lVar3 + 0x58);
            }
            if (*(long *)(lVar4 + 0xf0) != 0) {
              lVar3 = lVar11 + lVar7;
              fVar21 = -fVar21;
              uVar20 = *(undefined8 *)(lVar3 + 0xc0);
              *(float *)(lVar4 + 0x48) =
                   *(float *)(lVar2 + 200) * *(float *)(lVar4 + 0x88) * fVar21 *
                   *(float *)(lVar4 + 0x78) + *(float *)(lVar4 + 0x48);
              *(ulong *)(lVar4 + 0x40) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x70) >> 0x20) *
                            (float)((ulong)uVar20 >> 0x20) *
                            (float)((ulong)*(undefined8 *)(lVar4 + 0x80) >> 0x20) * fVar21 +
                            (float)((ulong)*(undefined8 *)(lVar4 + 0x40) >> 0x20),
                            (float)*(undefined8 *)(lVar4 + 0x70) *
                            (float)uVar20 * (float)*(undefined8 *)(lVar4 + 0x80) * fVar21 +
                            (float)*(undefined8 *)(lVar4 + 0x40));
              fVar14 = *(float *)(lVar3 + 0xe8);
              *(ulong *)(lVar4 + 0x50) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x60) >> 0x20) * fVar21 *
                            (float)((ulong)*(undefined8 *)(lVar3 + 0xe0) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar4 + 0x50) >> 0x20),
                            (float)*(undefined8 *)(lVar4 + 0x60) * fVar21 *
                            (float)*(undefined8 *)(lVar3 + 0xe0) +
                            (float)*(undefined8 *)(lVar4 + 0x50));
              *(float *)(lVar4 + 0x58) =
                   *(float *)(lVar4 + 0x68) * fVar21 * fVar14 + *(float *)(lVar4 + 0x58);
            }
          }
          if (fVar13 <= 0.0) goto LAB_009b8664;
        }
        pfVar9 = pfVar9 + 1;
        lVar8 = lVar8 + 0x1a0;
        lVar7 = lVar7 + 0x168;
      } while ((ulong)uVar5 * 0x168 != lVar7);
    }
    solveDifferentialsAndWheels((float *)param_1,(btAlignedObjectArray *)local_f0,param_3);
  }
  if (*(long *)(lVar6 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


