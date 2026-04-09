// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveDifferentialsAndWheels
// Entry Point: 009b86f4
// Size: 2800 bytes
// Signature: undefined __cdecl solveDifferentialsAndWheels(float * param_1, btAlignedObjectArray * param_2, float param_3)


/* WARNING: Removing unreachable block (ram,0x009b8eb0) */
/* WARNING: Removing unreachable block (ram,0x009b8eb8) */
/* WARNING: Removing unreachable block (ram,0x009b8ec4) */
/* WARNING: Removing unreachable block (ram,0x009b8ec8) */
/* WARNING: Removing unreachable block (ram,0x009b8ecc) */
/* WARNING: Removing unreachable block (ram,0x009b8ee0) */
/* WARNING: Removing unreachable block (ram,0x009b8f00) */
/* WARNING: Removing unreachable block (ram,0x009b8f0c) */
/* Bt2RaycastVehicle::solveDifferentialsAndWheels(float const*, btAlignedObjectArray<btSolverBody>&,
   float) */

void Bt2RaycastVehicle::solveDifferentialsAndWheels
               (float *param_1,btAlignedObjectArray *param_2,float param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  long lVar7;
  byte bVar8;
  float *pfVar9;
  int iVar10;
  undefined4 *puVar11;
  float *pfVar12;
  float *pfVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  ulong in_d5;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined8 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float local_130;
  float fStack_12c;
  float afStack_128 [20];
  float afStack_d8 [20];
  long local_88;
  
  lVar7 = tpidr_el0;
  local_88 = *(long *)(lVar7 + 0x28);
  fVar6 = param_1[0xf];
  if (param_1[0x17] == 0.0) {
    if (0 < (int)fVar6) {
      lVar15 = 0;
      lVar16 = *(long *)(param_1 + 0x22);
      puVar11 = (undefined4 *)(*(long *)(param_1 + 0x12) + 0x170);
      do {
        fVar17 = *(float *)param_2;
        if (0.0 < fVar17) {
          plVar2 = (long *)(lVar16 + lVar15);
          lVar4 = *plVar2;
          lVar5 = plVar2[1];
          uVar29 = NEON_fmadd(*(undefined4 *)(plVar2 + 0x20),*(undefined4 *)(lVar4 + 0x50),
                              *(float *)((long)plVar2 + 0x104) * *(float *)(lVar4 + 0x54));
          uVar26 = NEON_fmadd(*(undefined4 *)(plVar2 + 0x24),*(undefined4 *)(lVar4 + 0x40),
                              *(float *)((long)plVar2 + 0x124) * *(float *)(lVar4 + 0x44));
          uVar41 = NEON_fmadd(*(undefined4 *)(plVar2 + 0x24),*(undefined4 *)(lVar5 + 0x40),
                              *(float *)((long)plVar2 + 0x124) * *(float *)(lVar5 + 0x44));
          uVar32 = NEON_fmadd(*(undefined4 *)(plVar2 + 0x22),*(undefined4 *)(lVar5 + 0x50),
                              *(float *)((long)plVar2 + 0x114) * *(float *)(lVar5 + 0x54));
          fVar22 = (float)NEON_fmadd(*(undefined4 *)(plVar2 + 0x25),*(undefined4 *)(lVar4 + 0x48),
                                     uVar26);
          fVar24 = (float)NEON_fmadd(*(undefined4 *)(plVar2 + 0x21),*(undefined4 *)(lVar4 + 0x58),
                                     uVar29);
          fVar18 = (float)NEON_fmadd(*(undefined4 *)(plVar2 + 0x25),*(undefined4 *)(lVar5 + 0x48),
                                     uVar41);
          fVar19 = (float)puVar11[-0x24];
          fVar36 = (float)NEON_fmadd(*(undefined4 *)(plVar2 + 0x23),*(undefined4 *)(lVar5 + 0x58),
                                     uVar32);
          fVar23 = (float)puVar11[-0xc];
          fVar36 = (float)NEON_fmadd(fVar23 * fVar19 - ((fVar22 + fVar24) - (fVar18 + fVar36)),
                                     *(undefined4 *)(plVar2 + 0x2a),
                                     *(undefined4 *)((long)plVar2 + 0x154));
          fVar18 = *(float *)((long)plVar2 + 0x15c) + fVar36;
          if ((fVar17 < fVar18) || (fVar17 = -fVar17, fVar18 < fVar17)) {
            fVar36 = fVar17 - *(float *)((long)plVar2 + 0x15c);
            fVar18 = fVar17;
          }
          fVar17 = -fVar36;
          *(float *)((long)plVar2 + 0x15c) = fVar18;
          uVar41 = NEON_fmadd(fVar19 * fVar17,*puVar11,fVar23);
          puVar11[-0xc] = uVar41;
          if (*(long *)(lVar4 + 0xf0) != 0) {
            lVar3 = lVar16 + lVar15;
            uVar28 = *(undefined8 *)(lVar3 + 0x120);
            *(float *)(lVar4 + 0x48) =
                 fVar36 * *(float *)(plVar2 + 0x25) * *(float *)(lVar4 + 0x88) *
                 *(float *)(lVar4 + 0x78) + *(float *)(lVar4 + 0x48);
            *(ulong *)(lVar4 + 0x40) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x70) >> 0x20) *
                          (float)((ulong)uVar28 >> 0x20) *
                          (float)((ulong)*(undefined8 *)(lVar4 + 0x80) >> 0x20) * fVar36 +
                          (float)((ulong)*(undefined8 *)(lVar4 + 0x40) >> 0x20),
                          (float)*(undefined8 *)(lVar4 + 0x70) *
                          (float)uVar28 * (float)*(undefined8 *)(lVar4 + 0x80) * fVar36 +
                          (float)*(undefined8 *)(lVar4 + 0x40));
            fVar18 = *(float *)(lVar3 + 0x138);
            *(ulong *)(lVar4 + 0x50) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x60) >> 0x20) * fVar36 *
                          (float)((ulong)*(undefined8 *)(lVar3 + 0x130) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar4 + 0x50) >> 0x20),
                          (float)*(undefined8 *)(lVar4 + 0x60) * fVar36 *
                          (float)*(undefined8 *)(lVar3 + 0x130) +
                          (float)*(undefined8 *)(lVar4 + 0x50));
            *(float *)(lVar4 + 0x58) =
                 fVar36 * *(float *)(lVar4 + 0x68) * fVar18 + *(float *)(lVar4 + 0x58);
          }
          if (*(long *)(lVar5 + 0xf0) != 0) {
            lVar4 = lVar16 + lVar15;
            uVar28 = *(undefined8 *)(lVar4 + 0x120);
            *(float *)(lVar5 + 0x48) =
                 *(float *)(plVar2 + 0x25) * *(float *)(lVar5 + 0x88) * fVar17 *
                 *(float *)(lVar5 + 0x78) + *(float *)(lVar5 + 0x48);
            *(ulong *)(lVar5 + 0x40) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x70) >> 0x20) *
                          (float)((ulong)uVar28 >> 0x20) *
                          (float)((ulong)*(undefined8 *)(lVar5 + 0x80) >> 0x20) * fVar17 +
                          (float)((ulong)*(undefined8 *)(lVar5 + 0x40) >> 0x20),
                          (float)*(undefined8 *)(lVar5 + 0x70) *
                          (float)uVar28 * (float)*(undefined8 *)(lVar5 + 0x80) * fVar17 +
                          (float)*(undefined8 *)(lVar5 + 0x40));
            fVar18 = *(float *)(lVar4 + 0x148);
            *(ulong *)(lVar5 + 0x50) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x60) >> 0x20) * fVar17 *
                          (float)((ulong)*(undefined8 *)(lVar4 + 0x140) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar5 + 0x50) >> 0x20),
                          (float)*(undefined8 *)(lVar5 + 0x60) * fVar17 *
                          (float)*(undefined8 *)(lVar4 + 0x140) +
                          (float)*(undefined8 *)(lVar5 + 0x50));
            *(float *)(lVar5 + 0x58) =
                 *(float *)(lVar5 + 0x68) * fVar17 * fVar18 + *(float *)(lVar5 + 0x58);
          }
        }
        lVar4 = lVar16 + lVar15;
        fVar17 = *(float *)(lVar4 + 0x1c);
        if (fVar17 != 0.0) {
          fVar36 = (float)puVar11[-0xc];
          fVar23 = *(float *)(lVar4 + 0x20) - fVar36;
          fVar18 = fVar17;
          if ((fVar17 < fVar23) || (fVar18 = -fVar17, fVar23 < -fVar17)) {
            fVar23 = fVar18;
            fVar17 = fVar23 - *(float *)(lVar4 + 0x20);
          }
          else {
            fVar17 = -fVar36;
          }
          *(float *)(lVar4 + 0x20) = fVar23;
          if (fVar17 != 0.0) {
            puVar11[-0xc] = fVar36 + fVar17;
          }
        }
        param_2 = (btAlignedObjectArray *)((long)param_2 + 4);
        lVar15 = lVar15 + 0x168;
        puVar11 = puVar11 + 0x68;
      } while ((ulong)(uint)fVar6 * 0x168 - lVar15 != 0);
    }
  }
  else {
    calculateWheelsMotorTorqueRatios
              ((Bt2RaycastVehicle *)param_1,afStack_d8,afStack_128,&fStack_12c,&local_130);
    iVar10 = 0;
    fVar17 = param_1[0xf];
    do {
      fVar18 = 0.0;
      if (0 < (int)fVar17) {
        puVar11 = (undefined4 *)(*(long *)(param_1 + 0x12) + 0x140);
        uVar14 = (ulong)(uint)fVar17;
        do {
          if (0.0 <= (float)puVar11[0x12]) {
            fVar18 = (float)NEON_fmadd(*puVar11,puVar11[0x12],fVar18);
          }
          uVar14 = uVar14 - 1;
          puVar11 = puVar11 + 0x68;
        } while (uVar14 != 0);
      }
      fVar34 = param_1[0x2d];
      fVar22 = param_1[0x48];
      fVar24 = param_1[0x32];
      fVar19 = param_1[0x35];
      fVar23 = (float)NEON_fnmsub(param_1[0x33],fVar34,fVar19);
      fVar36 = fVar18;
      if (0.0 > fVar22) {
        fVar36 = -fVar18;
      }
      fVar25 = (param_1[0x33] - fVar19) + fVar24;
      fVar27 = fStack_12c;
      if (fVar34 <= 0.0 == 0.0 <= fVar22) {
        fVar27 = local_130;
      }
      fVar40 = param_1[0x27];
      if (param_1[0x27] <= param_1[0x3e]) {
        fVar40 = param_1[0x3e];
      }
      fVar30 = fVar23 + fVar24;
      fVar39 = fVar40;
      if (fVar25 <= fVar40) {
        fVar39 = fVar25;
      }
      fVar25 = fVar30;
      if (fVar30 < fVar40) {
        fVar25 = fVar39;
      }
      fVar31 = -fVar19;
      if (fVar30 < fVar40) {
        fVar23 = fVar39 - fVar24;
      }
      fVar30 = param_1[0x26];
      fVar39 = -param_1[0x43];
      if (0.0 <= fVar22) {
        fVar39 = param_1[0x43];
      }
      fVar38 = ABS(fVar22);
      fVar37 = ABS(param_1[0x47]);
      fVar35 = param_1[0x44];
      fVar33 = fVar39 - fVar36;
      if (fVar34 == 0.0) {
        fVar25 = fVar25 / fVar36;
        if (fVar25 <= fVar38) {
          fVar38 = fVar25;
        }
        fVar34 = 0.0;
        if (fVar37 <= fVar25) {
          fVar37 = fVar38;
        }
        if ((fVar40 <= fVar36 * fVar37) && (fVar34 = 1.0, fVar37 != 0.0)) {
          fVar34 = fVar27 * fVar37;
          fVar25 = -fVar37;
          fVar40 = (float)NEON_fmadd(fVar34,fVar37,fVar30);
LAB_009b8e64:
          uVar41 = NEON_fmadd(fVar37 * -fVar36,fVar30,fVar30 * fVar35);
          fVar35 = (float)NEON_fmadd(fVar37 * fVar34,fVar35 - fVar24,uVar41);
          fVar35 = fVar35 / (fVar37 * fVar34);
          goto LAB_009b8e84;
        }
LAB_009b8adc:
        fVar25 = -fVar37;
        if (fVar35 - fVar24 <= fVar23) {
          fVar23 = fVar35 - fVar24;
        }
        if (fVar23 <= fVar31) {
          fVar23 = fVar31;
        }
        fVar24 = fVar24 + fVar23;
      }
      else {
        if (fVar39 <= 0.0001) {
          bVar8 = 1;
          bVar1 = true;
        }
        else {
          fVar34 = fVar36 + fVar33;
          fVar40 = (float)NEON_fmadd(fVar33 * -4.0 * fVar34,fVar30,fVar25 * fVar27 * fVar25);
          if (0.0 <= fVar40) {
            fVar40 = (float)NEON_fmadd(fVar27,fVar25,SQRT(fVar27 * fVar40));
            fVar40 = fVar40 / (fVar27 * (fVar34 + fVar34));
            bVar1 = fVar40 >= fVar37;
            fVar34 = fVar37;
            if ((fVar40 < fVar37) || (fVar34 = fVar38, fVar38 < fVar40)) {
              fVar40 = fVar34;
            }
            in_d5 = (ulong)(uint)fVar40;
            bVar8 = 0;
          }
          else {
            bVar1 = false;
            bVar8 = 1;
          }
        }
        fVar34 = fVar36 * fVar36 * fVar30;
        fVar40 = (float)NEON_fmadd(fVar27 * 4.0 * fVar35,fVar25 - fVar35,fVar34);
        if (((fVar40 < 0.0) || (ABS(fVar25 - fVar35) <= 0.0005)) ||
           ((fVar25 <= fVar35 && (fVar36 <= 0.0)))) {
          fVar40 = fVar38;
          if (1e-05 < fVar36) {
            fVar40 = (float)NEON_fmadd(fVar36 * fVar36,fVar30,fVar25 * fVar27 * fVar25);
            fVar40 = (float)NEON_fmadd(fVar27,fVar25,SQRT(fVar27 * fVar40));
            fVar40 = fVar40 / (fVar36 * fVar27);
            fVar21 = (float)NEON_fmadd(fVar27 * fVar40,fVar40,fVar30);
            fVar20 = (float)NEON_fnmadd(-fVar40,fVar36,-fVar25);
            fVar20 = (float)NEON_fmadd(fVar20 / fVar21,fVar30,fVar25);
            if (fVar35 <= fVar20) {
              fVar40 = fVar35 / fVar36;
            }
          }
        }
        else {
          fVar40 = (float)NEON_fmadd(SQRT(fVar30),SQRT(fVar40),fVar30 * -fVar36);
          fVar40 = fVar40 / ((fVar27 + fVar27) * (fVar25 - fVar35));
        }
        fVar20 = fVar37;
        if ((fVar40 < fVar37) || (fVar20 = fVar38, fVar38 < fVar40)) {
          fVar40 = fVar20;
        }
        fVar20 = param_1[0x45];
        fVar34 = (float)NEON_fmadd(fVar27 * 4.0 * fVar20,fVar25 - fVar20,fVar34);
        if (((fVar34 < 0.0) || (ABS(fVar25 - fVar20) <= 1e-05)) ||
           ((fVar25 <= fVar20 && (fVar36 <= 0.0)))) {
          fVar34 = fVar40;
          if (bVar1) goto LAB_009b8a6c;
LAB_009b8aa0:
          fVar25 = (float)in_d5;
          if (!(bool)(bVar8 | fVar40 < fVar25)) {
            fVar39 = fVar40;
            if (fVar34 <= fVar40) {
              fVar39 = fVar34;
            }
            fVar40 = fVar25;
            if (fVar25 <= fVar34) {
              fVar40 = fVar39;
            }
          }
        }
        else {
          fVar34 = (float)NEON_fmadd(SQRT(fVar30),SQRT(fVar34),fVar30 * -fVar36);
          fVar34 = fVar34 / ((fVar27 + fVar27) * (fVar25 - fVar20));
          if (!bVar1) goto LAB_009b8aa0;
LAB_009b8a6c:
          if (fVar39 <= 0.0001) {
            fVar39 = 0.0001;
          }
          fVar40 = fVar35 / fVar39;
        }
        fVar34 = 1.0;
        if (fVar40 <= fVar38) {
          fVar38 = fVar40;
        }
        if (fVar37 <= fVar40) {
          fVar37 = fVar38;
        }
        if (fVar37 == 0.0) goto LAB_009b8adc;
        fVar34 = fVar27 * fVar37;
        fVar25 = -fVar37;
        fVar40 = (float)NEON_fmadd(fVar34,fVar37,fVar30);
        if (!bVar1) goto LAB_009b8e64;
        fVar35 = fVar35 + ((fVar30 * fVar33 * (fVar36 + fVar33)) / (fVar27 * fVar35) - fVar24);
LAB_009b8e84:
        fVar34 = fVar23;
        if (fVar35 <= fVar23) {
          fVar34 = fVar35;
        }
        fVar23 = fVar31;
        if (fVar31 <= fVar35) {
          fVar23 = fVar34;
        }
        fVar34 = 1.0;
        fVar24 = fVar24 + fVar23;
        fVar36 = (float)NEON_fmadd(fVar25,fVar36,fVar24);
        NEON_fmsub(fVar36 / fVar40,fVar30,fVar24);
      }
      if (0.0 <= fVar22) {
        fVar25 = fVar37;
      }
      param_1[0x35] = fVar19 + fVar23;
      fVar36 = (float)NEON_fmsub(fVar25,fVar18,fVar24);
      param_1[0x41] = fVar25;
      pfVar13 = afStack_d8;
      fVar18 = fStack_12c;
      if (fVar25 * fVar36 < 0.0) {
        pfVar13 = afStack_128;
        fVar18 = local_130;
      }
      fVar34 = fVar34 * fVar36 * (1.0 / (fVar30 + fVar25 * fVar25 * fVar18));
      param_1[0x32] = fVar24 - fVar30 * fVar34;
      if (0 < (int)fVar6) {
        lVar15 = 0;
        lVar16 = *(long *)(param_1 + 0x22);
        pfVar12 = (float *)(*(long *)(param_1 + 0x12) + 0x188);
        pfVar9 = (float *)param_2;
        do {
          fVar18 = *(float *)(lVar16 + lVar15 + 0x1c);
          if (0.0 <= *pfVar12) {
            fVar36 = (float)NEON_fmadd(fVar25 * fVar34 * *pfVar13,pfVar12[-6],pfVar12[-0x12]);
            pfVar12[-0x12] = fVar36;
            if ((fVar18 == 0.0) &&
               (((0.0 < fVar25 && (fVar36 < 0.0)) || ((fVar25 < 0.0 && (0.0 < fVar36)))))) {
              fVar18 = pfVar12[-6] * pfVar12[-0x20] * param_3;
            }
          }
          if (fVar18 != 0.0) {
            fVar19 = pfVar12[-0x12];
            fVar22 = *(float *)(lVar16 + lVar15 + 0x20);
            fVar23 = fVar22 - fVar19;
            fVar36 = fVar18;
            if ((fVar18 < fVar23) || (fVar36 = -fVar18, fVar23 < -fVar18)) {
              fVar23 = fVar36;
              fVar22 = fVar23 - fVar22;
            }
            else {
              fVar22 = -fVar19;
            }
            *(float *)(lVar16 + lVar15 + 0x20) = fVar23;
            if (fVar22 != 0.0) {
              pfVar12[-0x12] = fVar19 + fVar22;
            }
          }
          fVar18 = *pfVar9;
          if (0.0 < fVar18) {
            plVar2 = (long *)(lVar16 + lVar15);
            lVar4 = *plVar2;
            lVar5 = plVar2[1];
            uVar29 = NEON_fmadd(*(undefined4 *)(plVar2 + 0x20),*(undefined4 *)(lVar4 + 0x50),
                                *(float *)((long)plVar2 + 0x104) * *(float *)(lVar4 + 0x54));
            uVar26 = NEON_fmadd(*(undefined4 *)(plVar2 + 0x24),*(undefined4 *)(lVar4 + 0x40),
                                *(float *)((long)plVar2 + 0x124) * *(float *)(lVar4 + 0x44));
            uVar41 = NEON_fmadd(*(undefined4 *)(plVar2 + 0x24),*(undefined4 *)(lVar5 + 0x40),
                                *(float *)((long)plVar2 + 0x124) * *(float *)(lVar5 + 0x44));
            uVar32 = NEON_fmadd(*(undefined4 *)(plVar2 + 0x22),*(undefined4 *)(lVar5 + 0x50),
                                *(float *)((long)plVar2 + 0x114) * *(float *)(lVar5 + 0x54));
            fVar24 = (float)NEON_fmadd(*(undefined4 *)(plVar2 + 0x25),*(undefined4 *)(lVar4 + 0x48),
                                       uVar26);
            fVar27 = (float)NEON_fmadd(*(undefined4 *)(plVar2 + 0x21),*(undefined4 *)(lVar4 + 0x58),
                                       uVar29);
            fVar36 = (float)NEON_fmadd(*(undefined4 *)(plVar2 + 0x25),*(undefined4 *)(lVar5 + 0x48),
                                       uVar41);
            fVar22 = pfVar12[-0x2a];
            fVar23 = (float)NEON_fmadd(*(undefined4 *)(plVar2 + 0x23),*(undefined4 *)(lVar5 + 0x58),
                                       uVar32);
            fVar19 = pfVar12[-0x12];
            fVar23 = (float)NEON_fmadd(fVar19 * fVar22 - ((fVar24 + fVar27) - (fVar36 + fVar23)),
                                       *(undefined4 *)(plVar2 + 0x2a),
                                       *(undefined4 *)((long)plVar2 + 0x154));
            fVar36 = *(float *)((long)plVar2 + 0x15c) + fVar23;
            if ((fVar18 < fVar36) || (fVar18 = -fVar18, fVar36 < fVar18)) {
              fVar23 = fVar18 - *(float *)((long)plVar2 + 0x15c);
              fVar36 = fVar18;
            }
            fVar18 = -fVar23;
            *(float *)((long)plVar2 + 0x15c) = fVar36;
            fVar36 = (float)NEON_fmadd(fVar22 * fVar18,pfVar12[-6],fVar19);
            pfVar12[-0x12] = fVar36;
            if (*(long *)(lVar4 + 0xf0) != 0) {
              lVar3 = lVar16 + lVar15;
              uVar28 = *(undefined8 *)(lVar3 + 0x120);
              *(float *)(lVar4 + 0x48) =
                   fVar23 * *(float *)(plVar2 + 0x25) * *(float *)(lVar4 + 0x88) *
                   *(float *)(lVar4 + 0x78) + *(float *)(lVar4 + 0x48);
              *(ulong *)(lVar4 + 0x40) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x70) >> 0x20) *
                            (float)((ulong)uVar28 >> 0x20) *
                            (float)((ulong)*(undefined8 *)(lVar4 + 0x80) >> 0x20) * fVar23 +
                            (float)((ulong)*(undefined8 *)(lVar4 + 0x40) >> 0x20),
                            (float)*(undefined8 *)(lVar4 + 0x70) *
                            (float)uVar28 * (float)*(undefined8 *)(lVar4 + 0x80) * fVar23 +
                            (float)*(undefined8 *)(lVar4 + 0x40));
              fVar36 = *(float *)(lVar3 + 0x138);
              *(ulong *)(lVar4 + 0x50) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x60) >> 0x20) * fVar23 *
                            (float)((ulong)*(undefined8 *)(lVar3 + 0x130) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar4 + 0x50) >> 0x20),
                            (float)*(undefined8 *)(lVar4 + 0x60) * fVar23 *
                            (float)*(undefined8 *)(lVar3 + 0x130) +
                            (float)*(undefined8 *)(lVar4 + 0x50));
              *(float *)(lVar4 + 0x58) =
                   fVar23 * *(float *)(lVar4 + 0x68) * fVar36 + *(float *)(lVar4 + 0x58);
            }
            if (*(long *)(lVar5 + 0xf0) != 0) {
              lVar4 = lVar16 + lVar15;
              uVar28 = *(undefined8 *)(lVar4 + 0x120);
              *(float *)(lVar5 + 0x48) =
                   *(float *)(plVar2 + 0x25) * *(float *)(lVar5 + 0x88) * fVar18 *
                   *(float *)(lVar5 + 0x78) + *(float *)(lVar5 + 0x48);
              *(ulong *)(lVar5 + 0x40) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x70) >> 0x20) *
                            (float)((ulong)uVar28 >> 0x20) *
                            (float)((ulong)*(undefined8 *)(lVar5 + 0x80) >> 0x20) * fVar18 +
                            (float)((ulong)*(undefined8 *)(lVar5 + 0x40) >> 0x20),
                            (float)*(undefined8 *)(lVar5 + 0x70) *
                            (float)uVar28 * (float)*(undefined8 *)(lVar5 + 0x80) * fVar18 +
                            (float)*(undefined8 *)(lVar5 + 0x40));
              fVar36 = *(float *)(lVar4 + 0x148);
              *(ulong *)(lVar5 + 0x50) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x60) >> 0x20) * fVar18 *
                            (float)((ulong)*(undefined8 *)(lVar4 + 0x140) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar5 + 0x50) >> 0x20),
                            (float)*(undefined8 *)(lVar5 + 0x60) * fVar18 *
                            (float)*(undefined8 *)(lVar4 + 0x140) +
                            (float)*(undefined8 *)(lVar5 + 0x50));
              *(float *)(lVar5 + 0x58) =
                   *(float *)(lVar5 + 0x68) * fVar18 * fVar36 + *(float *)(lVar5 + 0x58);
            }
          }
          pfVar9 = pfVar9 + 1;
          pfVar13 = pfVar13 + 1;
          lVar15 = lVar15 + 0x168;
          pfVar12 = pfVar12 + 0x68;
        } while ((ulong)(uint)fVar6 * 0x168 - lVar15 != 0);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != 8);
  }
  if (*(long *)(lVar7 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


