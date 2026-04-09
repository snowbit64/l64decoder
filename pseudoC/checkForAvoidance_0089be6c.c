// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkForAvoidance
// Entry Point: 0089be6c
// Size: 1408 bytes
// Signature: undefined __thiscall checkForAvoidance(SimulatedPedestrian * this, SimulatedPedestrian * param_1, int param_2)


/* SimulatedPedestrian::checkForAvoidance(SimulatedPedestrian*, int) */

void __thiscall
SimulatedPedestrian::checkForAvoidance
          (SimulatedPedestrian *this,SimulatedPedestrian *param_1,int param_2)

{
  float *pfVar1;
  size_t __n;
  long lVar2;
  bool bVar3;
  SimulatedPedestrian SVar4;
  void *pvVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  float *pfVar9;
  ulong uVar10;
  float *pfVar11;
  float *pfVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  void *local_d0;
  void *local_c8;
  undefined8 local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  uint local_a4;
  char local_a0;
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  if (this[0x71] != (SimulatedPedestrian)0x0) goto LAB_0089c354;
  lVar7 = *(long *)(this + 0x78);
  fVar19 = *(float *)(lVar7 + 0x24);
  pfVar12 = *(float **)(lVar7 + 0x38);
  fVar20 = fVar19 * 3.0;
  fVar17 = *(float *)(this + 0x80);
  fVar14 = *(float *)(this + 0x84);
  if (pfVar12 != *(float **)(lVar7 + 0x40)) {
    do {
      if ((pfVar12[1] == 0.0 || fVar17 == pfVar12[1]) &&
         ((((0.0 < fVar17 && (fVar14 < *pfVar12)) && (*pfVar12 < fVar14 + fVar20)) ||
          (((fVar17 < 0.0 && (*pfVar12 < fVar14)) && (fVar14 - fVar20 < *pfVar12)))))) {
        SVar4 = (SimulatedPedestrian)0x1;
        if (this[0x8b] != (SimulatedPedestrian)0x0) goto LAB_0089bf5c;
        uVar16 = 0;
        goto LAB_0089bf58;
      }
      pfVar12 = pfVar12 + 2;
    } while (pfVar12 != *(float **)(lVar7 + 0x40));
  }
  SVar4 = this[0x8b];
  if (SVar4 != (SimulatedPedestrian)0x0) {
    uVar16 = *(undefined4 *)(this + 0xbc);
    SVar4 = (SimulatedPedestrian)0x0;
LAB_0089bf58:
    *(undefined4 *)(this + 0xb8) = uVar16;
  }
LAB_0089bf5c:
  this[0x8b] = SVar4;
  local_d0 = (void *)0x0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  if (param_2 < 1) {
LAB_0089c310:
    fVar14 = *(float *)(this + 0x98);
LAB_0089c314:
    *(float *)(this + 0x94) = fVar14;
LAB_0089c32c:
    SVar4 = this[0x8c];
    if (SVar4 != (SimulatedPedestrian)0x0) {
      SVar4 = (SimulatedPedestrian)0x0;
      uVar16 = *(undefined4 *)(this + 0xbc);
LAB_0089c340:
      *(undefined4 *)(this + 0xb8) = uVar16;
    }
    this[0x8c] = SVar4;
    if (local_d0 == (void *)0x0) goto LAB_0089c354;
  }
  else {
    uVar13 = 0;
    fVar19 = fVar19 * 5.0 * 0.5;
    fVar24 = (float)NEON_fmadd(fVar20 * 0.5,fVar17,fVar14);
    fVar14 = (float)NEON_fmadd(fVar19,fVar17,fVar14);
    do {
      if (((param_1 + uVar13 * 0x108 != this) &&
          (lVar7 = *(long *)(param_1 + uVar13 * 0x108 + 0x78), lVar7 == *(long *)(this + 0x78))) &&
         (fVar17 = *(float *)(param_1 + uVar13 * 0x108 + 0x84),
         ABS(fVar17 - fVar14) < fVar19 || ABS(fVar17 - fVar24) < fVar20 * 0.5)) {
        if (*(float *)(this + 0x80) == *(float *)(param_1 + uVar13 * 0x108 + 0x80)) {
          fVar21 = *(float *)(param_1 + uVar13 * 0x108 + 0x90);
          if (*(float *)(this + 0x94) < fVar21) goto LAB_0089bfb0;
        }
        else {
          fVar21 = *(float *)(param_1 + uVar13 * 0x108 + 0x90);
        }
        fVar22 = *(float *)(lVar7 + 0x1c);
        local_a0 = *(float *)(this + 0x80) == *(float *)(param_1 + uVar13 * 0x108 + 0x80);
        local_b8 = *(float *)(param_1 + uVar13 * 0x108 + 0xa0);
        local_b0 = 0.8;
        bVar3 = -fVar22 <= local_b8 + -0.8;
        local_ac = *(float *)(lVar7 + 0x24) * 0.8;
        local_a4 = (uint)(bVar3 || local_b8 + 0.8 <= fVar22);
        if (((bVar3) && (local_a4 = 0xffffffff, local_b8 + 0.8 <= fVar22)) &&
           (local_a4 = 0xffffffff, *(float *)(param_1 + uVar13 * 0x108 + 0xb4) < local_b8)) {
          local_a4 = 1;
        }
        uVar10 = ((long)local_c8 - (long)local_d0 >> 2) * 0xb6db6db7;
        local_b4 = fVar17;
        fStack_a8 = fVar21;
        if (0 < (int)uVar10) {
          uVar10 = uVar10 & 0xffffffff;
          pvVar5 = local_c8;
          if (!(bool)local_a0) goto LAB_0089c1fc;
          do {
            uVar8 = (ulong)((int)uVar10 - 1);
            pfVar12 = (float *)((long)local_d0 + uVar8 * 0x1c);
            fVar17 = *pfVar12;
            fVar21 = *(float *)((long)local_d0 + uVar8 * 0x1c + 8);
            if (ABS(local_b8 - fVar17) <= local_b0 + fVar21) {
              fVar22 = *(float *)((long)local_d0 + uVar8 * 0x1c + 4);
              fVar23 = *(float *)((long)local_d0 + uVar8 * 0x1c + 0xc);
              if (ABS(local_b4 - fVar22) <= local_ac + fVar23) {
                fVar15 = fVar17 - fVar21;
                if (local_b8 - local_b0 <= fVar17 - fVar21) {
                  fVar15 = local_b8 - local_b0;
                }
                fVar18 = fVar17 + fVar21;
                if (fVar17 + fVar21 <= local_b8 + local_b0) {
                  fVar18 = local_b8 + local_b0;
                }
                fVar17 = fVar22 - fVar23;
                if (local_b4 - local_ac <= fVar22 - fVar23) {
                  fVar17 = local_b4 - local_ac;
                }
                fVar21 = fVar22 + fVar23;
                if (fVar22 + fVar23 <= local_b4 + local_ac) {
                  fVar21 = local_b4 + local_ac;
                }
                fVar22 = *(float *)(*(long *)(this + 0x78) + 0x1c);
                local_b8 = (fVar15 + fVar18) * 0.5;
                local_b4 = (fVar17 + fVar21) * 0.5;
                fVar17 = -fVar22;
                local_b0 = fVar18 - local_b8;
                local_ac = fVar21 - local_b4;
                if (((fVar15 < fVar17) || (fVar22 < fVar18)) &&
                   (local_a4 = (uint)(fVar17 <= fVar15 || fVar18 <= fVar22), fVar17 <= fVar15)) {
                  local_a4 = 0xffffffff;
                }
                __n = (long)pvVar5 - (long)(pfVar12 + 7);
                if (__n != 0) {
                  memmove(pfVar12,pfVar12 + 7,__n);
                }
                pvVar5 = (void *)((long)pfVar12 + __n);
                local_c8 = pvVar5;
              }
            }
LAB_0089c1fc:
            do {
              if (uVar10 < 2) goto LAB_0089bfa4;
              uVar10 = uVar10 - 1;
            } while (local_a0 == '\0');
          } while( true );
        }
LAB_0089bfa4:
                    /* try { // try from 0089bfa4 to 0089bfaf has its CatchHandler @ 0089c3ec */
        FUN_0089c4d0(&local_d0,&local_b8);
      }
LAB_0089bfb0:
      uVar13 = uVar13 + 1;
    } while (uVar13 != (uint)param_2);
    if ((long)local_c8 - (long)local_d0 == 0) goto LAB_0089c310;
    uVar13 = 0;
    fVar14 = 3.402823e+38;
    uVar10 = ((long)local_c8 - (long)local_d0 >> 2) * 0x6db6db6db6db6db7;
    pfVar12 = (float *)0x0;
    pfVar9 = (float *)0x0;
    fVar17 = fVar14;
    do {
      pfVar11 = (float *)((long)local_d0 + uVar13 * 0x1c);
      fVar20 = ABS(pfVar11[1] - *(float *)(this + 0x84));
      pfVar1 = pfVar11;
      fVar19 = fVar20;
      if (fVar14 <= fVar20) {
        pfVar1 = pfVar9;
        fVar19 = fVar14;
      }
      fVar14 = fVar19;
      pfVar6 = pfVar12;
      fVar19 = fVar17;
      if ((*(char *)(pfVar11 + 6) != '\0') &&
         (pfVar6 = pfVar11, fVar19 = fVar20,
         *(float *)((long)local_d0 + uVar13 * 0x1c + 8) <= ABS(*pfVar11 - *(float *)(this + 0xa0))
         || fVar17 <= fVar20)) {
        pfVar6 = pfVar12;
        fVar19 = fVar17;
      }
      uVar13 = (ulong)((int)uVar13 + 1);
      pfVar12 = pfVar6;
      pfVar9 = pfVar1;
      fVar17 = fVar19;
    } while (uVar13 <= uVar10 && uVar10 - uVar13 != 0);
    *(undefined4 *)(this + 0x94) = *(undefined4 *)(this + 0x98);
    if (pfVar1 == (float *)0x0) goto LAB_0089c32c;
    fVar17 = *pfVar1;
    fVar14 = pfVar1[2];
    if (ABS(fVar17 - *(float *)(this + 0xa0)) < fVar14) {
      if ((int)pfVar1[5] < 1) {
        if (-1 < (int)pfVar1[5]) goto LAB_0089c320;
        fVar17 = fVar17 - fVar14;
      }
      else {
        fVar17 = fVar17 + fVar14;
      }
      *(float *)(this + 0xb4) = fVar17;
    }
LAB_0089c320:
    if ((pfVar6 == (float *)0x0) || (pfVar6[5] != 0.0)) goto LAB_0089c32c;
    fVar14 = pfVar6[4];
    if (fVar14 != 0.0) goto LAB_0089c314;
    fVar14 = (float)NEON_fmadd(*(undefined4 *)(this + 0xc0),
                               *(undefined4 *)(*(long *)(this + 0x78) + 0x24),pfVar6[3]);
    if (fVar14 <= ABS(*(float *)(this + 0x84) - pfVar6[1])) goto LAB_0089c32c;
    SVar4 = (SimulatedPedestrian)0x1;
    if (this[0x8c] == (SimulatedPedestrian)0x0) {
      uVar16 = 0;
      goto LAB_0089c340;
    }
    this[0x8c] = (SimulatedPedestrian)0x1;
  }
  local_c8 = local_d0;
  operator_delete(local_d0);
LAB_0089c354:
  if (*(long *)(lVar2 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


