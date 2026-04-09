// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateWheelsMotorTorqueRatios
// Entry Point: 009b94bc
// Size: 1084 bytes
// Signature: undefined __thiscall calculateWheelsMotorTorqueRatios(Bt2RaycastVehicle * this, float * param_1, float * param_2, float * param_3, float * param_4)


/* Bt2RaycastVehicle::calculateWheelsMotorTorqueRatios(float*, float*, float&, float&) */

void __thiscall
Bt2RaycastVehicle::calculateWheelsMotorTorqueRatios
          (Bt2RaycastVehicle *this,float *param_1,float *param_2,float *param_3,float *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  ushort *puVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  long lVar15;
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
  float fVar26;
  float afStack_2a0 [20];
  float afStack_250 [20];
  float afStack_200 [20];
  float afStack_1b0 [20];
  float afStack_160 [20];
  float afStack_110 [20];
  float afStack_c0 [20];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  uVar3 = *(uint *)(this + 0x5c);
  uVar7 = (ulong)uVar3;
  if (uVar3 != 0) {
    if (0 < (int)uVar3) {
      lVar8 = *(long *)(this + 0x48);
      puVar11 = (ushort *)(*(long *)(this + 0x68) + 8);
      pfVar9 = afStack_200;
      pfVar10 = afStack_160;
      pfVar12 = afStack_c0;
      pfVar13 = afStack_110;
      pfVar14 = afStack_1b0;
      do {
        uVar4 = *puVar11;
        if ((ulong)uVar4 < 0x14) {
          lVar15 = lVar8 + (ulong)uVar4 * 0x1a0;
          fVar16 = *(float *)(lVar15 + 0xe0);
          fVar18 = fVar16 * fVar16 * *(float *)(lVar15 + 0x170);
          fVar16 = fVar16 * *(float *)(lVar15 + 0x140);
          fVar17 = fVar18;
        }
        else {
          uVar2 = uVar4 - 0x14;
          fVar16 = afStack_c0[uVar2];
          fVar17 = afStack_110[uVar2];
          fVar18 = afStack_1b0[uVar2];
        }
        uVar4 = puVar11[1];
        if ((ulong)uVar4 < 0x14) {
          lVar15 = lVar8 + (ulong)uVar4 * 0x1a0;
          fVar20 = *(float *)(lVar15 + 0xe0);
          fVar21 = fVar20 * fVar20 * *(float *)(lVar15 + 0x170);
          fVar20 = fVar20 * *(float *)(lVar15 + 0x140);
          fVar19 = fVar21;
        }
        else {
          uVar2 = uVar4 - 0x14;
          fVar20 = afStack_c0[uVar2];
          fVar19 = afStack_110[uVar2];
          fVar21 = afStack_1b0[uVar2];
        }
        fVar24 = ABS(fVar16);
        fVar25 = ABS(fVar20);
        fVar23 = fVar24;
        if (fVar24 <= fVar25) {
          fVar23 = fVar25;
        }
        fVar22 = *(float *)(puVar11 + -4);
        fVar26 = fVar22;
        if (0.01 < fVar23) {
          if (fVar25 <= fVar24) {
            fVar24 = fVar25;
          }
          if (fVar16 <= 0.0 == 0.0 < fVar20) {
            fVar22 = 0.001;
            if (fVar16 <= fVar20) {
              fVar22 = 0.999;
            }
            fVar26 = 1.0 - fVar22;
          }
          else {
            fVar23 = (float)NEON_fmsub(*(float *)(puVar11 + -2),fVar24,fVar23);
            if (0.0 < fVar23) {
              fVar25 = fVar24 * *(float *)(puVar11 + -2) * 0.3;
              fVar24 = fVar23 / fVar25;
              if (fVar25 <= fVar23) {
                fVar24 = 1.0;
              }
              if (fVar16 <= fVar20) {
                fVar23 = fVar24 + 1.0;
                fVar24 = 1.0 - fVar24;
                fVar25 = 0.0;
                fVar26 = fVar22 * fVar23;
                if (0.0001 <= fVar26) {
                  fVar25 = fVar26 / (fVar26 + (1.0 - fVar22) * fVar24);
                }
              }
              else {
                fVar23 = 1.0 - fVar24;
                fVar24 = fVar24 + 1.0;
                fVar25 = 0.0;
                fVar26 = fVar22 * fVar23;
                if (0.0001 <= fVar26) {
                  fVar25 = fVar26 / (fVar26 + (1.0 - fVar22) * fVar24);
                }
              }
              fVar24 = fVar22 * fVar24;
              if (0.0001 <= fVar24) {
                fVar26 = 1.0 - fVar22;
                fVar22 = fVar25;
                fVar26 = fVar24 / (fVar24 + fVar26 * fVar23);
              }
              else {
                fVar22 = fVar25;
                fVar26 = 0.0;
              }
            }
          }
        }
        uVar7 = uVar7 - 1;
        puVar11 = puVar11 + 6;
        *pfVar10 = fVar22;
        *pfVar9 = fVar26;
        fVar19 = (float)NEON_fmadd(fVar17,fVar22,fVar19 * (1.0 - fVar22));
        fVar17 = (float)NEON_fmadd(fVar18,fVar26,fVar21 * (1.0 - fVar26));
        *pfVar12 = (fVar16 + fVar20) * 0.5;
        *pfVar13 = fVar19 * 0.5;
        *pfVar14 = fVar17 * 0.5;
        pfVar9 = pfVar9 + 1;
        pfVar10 = pfVar10 + 1;
        pfVar12 = pfVar12 + 1;
        pfVar13 = pfVar13 + 1;
        pfVar14 = pfVar14 + 1;
      } while (uVar7 != 0);
    }
    uVar7 = (long)(int)uVar3 - 1;
    fVar17 = afStack_1b0[uVar7];
    afStack_250[uVar7] = 1.0;
    afStack_2a0[uVar7] = 1.0;
    *param_3 = afStack_110[uVar7];
    *param_4 = fVar17;
    if (0 < (int)uVar3) {
      lVar8 = *(long *)(this + 0x48);
      puVar11 = (ushort *)(*(long *)(this + 0x68) + (uVar7 & 0xffffffff) * 0xc + 10);
      uVar7 = uVar7 & 0xffffffff;
      do {
        uVar6 = (ulong)puVar11[-1];
        if (uVar6 < 0x14) {
          lVar15 = lVar8 + uVar6 * 0x1a0;
          fVar16 = afStack_160[uVar7];
          fVar18 = afStack_2a0[uVar7];
          fVar17 = afStack_200[uVar7];
          param_1[uVar6] = afStack_250[uVar7] * fVar16 * *(float *)(lVar15 + 0xe0);
          param_2[uVar6] = fVar18 * fVar17 * *(float *)(lVar15 + 0xe0);
        }
        else {
          uVar3 = puVar11[-1] - 0x14;
          fVar16 = afStack_160[uVar7];
          fVar18 = afStack_2a0[uVar7];
          fVar17 = afStack_200[uVar7];
          afStack_250[uVar3] = afStack_250[uVar7] * fVar16;
          afStack_2a0[uVar3] = fVar18 * fVar17;
        }
        uVar6 = (ulong)*puVar11;
        if (uVar6 < 0x14) {
          lVar15 = lVar8 + uVar6 * 0x1a0;
          fVar18 = afStack_2a0[uVar7];
          param_1[uVar6] = afStack_250[uVar7] * (1.0 - fVar16) * *(float *)(lVar15 + 0xe0);
          param_2[uVar6] = *(float *)(lVar15 + 0xe0) * fVar18 * (1.0 - fVar17);
        }
        else {
          fVar18 = afStack_2a0[uVar7];
          uVar3 = *puVar11 - 0x14;
          afStack_250[uVar3] = afStack_250[uVar7] * (1.0 - fVar16);
          afStack_2a0[uVar3] = fVar18 * (1.0 - fVar17);
        }
        puVar11 = puVar11 + -6;
        bVar1 = 0 < (long)uVar7;
        uVar7 = uVar7 - 1;
      } while (bVar1);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


