// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decompose
// Entry Point: 00fa72cc
// Size: 1444 bytes
// Signature: undefined __thiscall decompose(btPolarDecomposition * this, btMatrix3x3 * param_1, btMatrix3x3 * param_2, btMatrix3x3 * param_3)


/* btPolarDecomposition::decompose(btMatrix3x3 const&, btMatrix3x3&, btMatrix3x3&) const */

uint __thiscall
btPolarDecomposition::decompose
          (btPolarDecomposition *this,btMatrix3x3 *param_1,btMatrix3x3 *param_2,btMatrix3x3 *param_3
          )

{
  uint uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
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
  float fVar27;
  float fVar28;
  
  uVar3 = *(undefined8 *)param_1;
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)param_2 = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 0x20) = uVar3;
  fVar15 = *(float *)(param_1 + 0x14);
  fVar2 = *(float *)(param_1 + 0x18);
  fVar4 = *(float *)(param_1 + 0x24);
  fVar5 = *(float *)(param_1 + 0x28);
  fVar9 = *(float *)(param_1 + 0x10);
  fVar16 = *(float *)param_1;
  fVar17 = *(float *)(param_1 + 4);
  fVar6 = *(float *)(param_1 + 0x20);
  fVar7 = (float)NEON_fnmsub(fVar5,fVar15,fVar4 * fVar2);
  fVar18 = (float)NEON_fnmsub(fVar6,fVar2,fVar9 * fVar5);
  fVar19 = (float)NEON_fnmsub(fVar9,fVar4,fVar6 * fVar15);
  fVar14 = *(float *)(param_1 + 8);
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  fVar21 = (float)NEON_fnmsub(fVar14,fVar4,fVar17 * fVar5);
  *(undefined4 *)(param_3 + 0x2c) = 0;
  uVar8 = NEON_fmadd(fVar18,fVar17,fVar16 * fVar7);
  fVar5 = (float)NEON_fnmsub(fVar16,fVar5,fVar14 * fVar6);
  fVar4 = (float)NEON_fnmsub(fVar17,fVar6,fVar16 * fVar4);
  fVar6 = (float)NEON_fmadd(fVar14,fVar19,uVar8);
  fVar6 = 1.0 / fVar6;
  fVar24 = (float)NEON_fnmsub(fVar17,fVar2,fVar14 * fVar15);
  fVar15 = (float)NEON_fnmsub(fVar16,fVar15,fVar17 * fVar9);
  fVar2 = (float)NEON_fnmsub(fVar14,fVar9,fVar16 * fVar2);
  fVar7 = fVar6 * fVar7;
  fVar21 = fVar6 * fVar21;
  fVar24 = fVar6 * fVar24;
  fVar18 = fVar6 * fVar18;
  fVar5 = fVar6 * fVar5;
  fVar2 = fVar6 * fVar2;
  fVar19 = fVar6 * fVar19;
  fVar4 = fVar6 * fVar4;
  fVar6 = fVar6 * fVar15;
  *(float *)param_3 = fVar7;
  *(float *)(param_3 + 4) = fVar21;
  *(float *)(param_3 + 8) = fVar24;
  *(float *)(param_3 + 0x10) = fVar18;
  *(float *)(param_3 + 0x14) = fVar5;
  *(float *)(param_3 + 0x18) = fVar2;
  *(float *)(param_3 + 0x20) = fVar19;
  *(float *)(param_3 + 0x24) = fVar4;
  *(float *)(param_3 + 0x28) = fVar6;
  if (*(int *)(this + 4) != 0) {
    uVar1 = 0;
    do {
      fVar9 = ABS(fVar18) + ABS(fVar7) + ABS(fVar19);
      fVar26 = ABS(fVar5) + ABS(fVar21) + ABS(fVar4);
      fVar14 = ABS(fVar21) + ABS(fVar7) + ABS(fVar24);
      fVar15 = ABS(fVar5) + ABS(fVar18) + ABS(fVar2);
      fVar17 = ABS(fVar2) + ABS(fVar24) + ABS(fVar6);
      fVar16 = ABS(fVar4) + ABS(fVar19) + ABS(fVar6);
      if (fVar9 <= fVar26) {
        fVar9 = fVar26;
      }
      if (fVar14 <= fVar15) {
        fVar14 = fVar15;
      }
      if (fVar9 <= fVar17) {
        fVar9 = fVar17;
      }
      if (fVar14 <= fVar16) {
        fVar14 = fVar16;
      }
      if (fVar14 * fVar9 < 1.192093e-07) break;
      fVar16 = *(float *)param_2;
      fVar22 = *(float *)(param_2 + 4);
      fVar25 = *(float *)(param_2 + 0x10);
      fVar17 = *(float *)(param_2 + 0x14);
      fVar27 = *(float *)(param_2 + 0x20);
      fVar28 = *(float *)(param_2 + 0x24);
      fVar23 = *(float *)(param_2 + 8);
      fVar26 = *(float *)(param_2 + 0x18);
      fVar10 = *(float *)(param_2 + 0x28);
      fVar15 = ABS(fVar25) + ABS(fVar16) + ABS(fVar27);
      fVar13 = ABS(fVar17) + ABS(fVar22) + ABS(fVar28);
      fVar11 = ABS(fVar26) + ABS(fVar23) + ABS(fVar10);
      if (fVar15 <= fVar13) {
        fVar15 = fVar13;
      }
      if (fVar15 <= fVar11) {
        fVar15 = fVar11;
      }
      fVar11 = (ABS(fVar22) + ABS(fVar16) + ABS(fVar23)) * fVar15;
      if (fVar11 < 1.192093e-07) break;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 0x1c) = 0;
      *(undefined4 *)(param_2 + 0x2c) = 0;
      fVar9 = SQRT(SQRT((fVar14 * fVar9) / fVar11));
      fVar11 = fVar9 + -2.0;
      fVar9 = 1.0 / fVar9;
      fVar20 = (float)NEON_fmadd(fVar9,fVar4,fVar11 * fVar26);
      fVar4 = (float)NEON_fmadd(fVar9,fVar2,fVar11 * fVar28);
      fVar13 = (float)NEON_fmadd(fVar9,fVar21,fVar11 * fVar25);
      fVar2 = (float)NEON_fmadd(fVar9,fVar5,fVar11 * fVar17);
      fVar5 = (float)NEON_fmadd(fVar9,fVar6,fVar11 * fVar10);
      fVar12 = (float)NEON_fmadd(fVar9,fVar7,fVar11 * fVar16);
      fVar14 = (float)NEON_fmadd(fVar9,fVar24,fVar11 * fVar27);
      fVar26 = fVar20 * 0.5 + fVar26;
      fVar28 = fVar4 * 0.5 + fVar28;
      fVar4 = (float)NEON_fmadd(fVar9,fVar18,fVar11 * fVar22);
      fVar25 = fVar13 * 0.5 + fVar25;
      fVar17 = fVar2 * 0.5 + fVar17;
      fVar10 = fVar5 * 0.5 + fVar10;
      fVar2 = (float)NEON_fmadd(fVar9,fVar19,fVar11 * fVar23);
      fVar16 = fVar12 * 0.5 + fVar16;
      fVar27 = fVar14 * 0.5 + fVar27;
      fVar7 = (float)NEON_fnmsub(fVar10,fVar17,fVar28 * fVar26);
      fVar22 = fVar4 * 0.5 + fVar22;
      fVar18 = (float)NEON_fnmsub(fVar27,fVar26,fVar25 * fVar10);
      fVar23 = fVar2 * 0.5 + fVar23;
      fVar19 = (float)NEON_fnmsub(fVar25,fVar28,fVar27 * fVar17);
      uVar8 = NEON_fmadd(fVar18,fVar22,fVar7 * fVar16);
      *(float *)(param_2 + 4) = fVar22;
      fVar6 = (float)NEON_fmadd(fVar19,fVar23,uVar8);
      *(float *)(param_2 + 0x20) = fVar27;
      *(float *)(param_2 + 0x24) = fVar28;
      *(float *)(param_2 + 0x28) = fVar10;
      fVar21 = (float)NEON_fnmsub(fVar23,fVar28,fVar22 * fVar10);
      fVar24 = (float)NEON_fnmsub(fVar22,fVar26,fVar23 * fVar17);
      fVar6 = 1.0 / fVar6;
      fVar5 = (float)NEON_fnmsub(fVar16,fVar10,fVar23 * fVar27);
      fVar2 = (float)NEON_fnmsub(fVar23,fVar25,fVar16 * fVar26);
      fVar4 = (float)NEON_fnmsub(fVar22,fVar27,fVar16 * fVar28);
      fVar9 = (float)NEON_fnmsub(fVar16,fVar17,fVar22 * fVar25);
      *(float *)param_2 = fVar16;
      *(float *)(param_2 + 8) = fVar23;
      *(float *)(param_2 + 0x10) = fVar25;
      *(float *)(param_2 + 0x14) = fVar17;
      *(float *)(param_2 + 0x18) = fVar26;
      *(undefined4 *)(param_3 + 0xc) = 0;
      *(undefined4 *)(param_3 + 0x1c) = 0;
      *(undefined4 *)(param_3 + 0x2c) = 0;
      fVar7 = fVar6 * fVar7;
      fVar21 = fVar6 * fVar21;
      fVar24 = fVar6 * fVar24;
      fVar18 = fVar6 * fVar18;
      fVar5 = fVar6 * fVar5;
      fVar2 = fVar6 * fVar2;
      fVar19 = fVar6 * fVar19;
      fVar4 = fVar6 * fVar4;
      fVar6 = fVar6 * fVar9;
      *(float *)param_3 = fVar7;
      *(float *)(param_3 + 4) = fVar21;
      *(float *)(param_3 + 8) = fVar24;
      *(float *)(param_3 + 0x10) = fVar18;
      *(float *)(param_3 + 0x14) = fVar5;
      *(float *)(param_3 + 0x18) = fVar2;
      *(float *)(param_3 + 0x20) = fVar19;
      *(float *)(param_3 + 0x24) = fVar4;
      *(float *)(param_3 + 0x28) = fVar6;
      if (ABS(fVar13 * 0.5) + ABS(fVar12 * 0.5) + ABS(fVar14 * 0.5) <= *(float *)this * fVar15) {
        fVar2 = *(float *)param_2;
        fVar7 = *(float *)param_1;
        fVar4 = (float)*(undefined8 *)(param_1 + 4);
        fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
        fVar9 = *(float *)(param_2 + 0x10);
        fVar19 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
        fVar6 = (float)*(undefined8 *)(param_2 + 4);
        fVar16 = *(float *)(param_1 + 0x10);
        fVar24 = (float)*(undefined8 *)(param_1 + 0x14);
        fVar14 = (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20);
        fVar17 = *(float *)(param_2 + 0x20);
        fVar15 = (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20);
        fVar21 = (float)*(undefined8 *)(param_2 + 0x14);
        fVar10 = *(float *)(param_1 + 0x20);
        fVar25 = (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20);
        fVar11 = (float)*(undefined8 *)(param_1 + 0x24);
        fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20);
        fVar26 = (float)*(undefined8 *)(param_2 + 0x24);
        uVar8 = NEON_fmadd(fVar16,fVar9,fVar7 * fVar2);
        *(undefined4 *)(param_3 + 0xc) = 0;
        uVar8 = NEON_fmadd(fVar10,fVar17,uVar8);
        *(undefined4 *)(param_3 + 0x1c) = 0;
        *(undefined4 *)(param_3 + 0x2c) = 0;
        fVar18 = (fVar4 * fVar2 + fVar24 * fVar9 + fVar11 * fVar17 +
                 fVar6 * fVar7 + fVar21 * fVar16 + fVar26 * fVar10) * 0.5;
        fVar7 = (fVar5 * fVar2 + fVar14 * fVar9 + fVar13 * fVar17 +
                fVar19 * fVar7 + fVar15 * fVar16 + fVar25 * fVar10) * 0.5;
        *(undefined4 *)param_3 = uVar8;
        *(float *)(param_3 + 0x28) = fVar5 * fVar19 + fVar15 * fVar14 + fVar25 * fVar13;
        fVar2 = (fVar5 * fVar6 + fVar21 * fVar14 + fVar26 * fVar13 +
                fVar4 * fVar19 + fVar15 * fVar24 + fVar25 * fVar11) * 0.5;
        *(ulong *)(param_3 + 4) = CONCAT44(fVar7,fVar18);
        *(float *)(param_3 + 0x20) = fVar7;
        *(ulong *)(param_3 + 0x10) =
             CONCAT44(fVar4 * fVar6 + fVar21 * fVar24 + fVar26 * fVar11,fVar18);
        *(float *)(param_3 + 0x18) = fVar2;
        *(float *)(param_3 + 0x24) = fVar2;
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(this + 4));
  }
  fVar2 = *(float *)param_2;
  fVar7 = *(float *)param_1;
  fVar18 = *(float *)(param_2 + 0x10);
  fVar6 = (float)*(undefined8 *)(param_1 + 4);
  fVar19 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  fVar4 = (float)*(undefined8 *)(param_2 + 4);
  fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar16 = *(float *)(param_1 + 0x10);
  fVar14 = (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20);
  fVar21 = (float)*(undefined8 *)(param_1 + 0x14);
  fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20);
  fVar17 = *(float *)(param_2 + 0x20);
  fVar24 = (float)*(undefined8 *)(param_2 + 0x14);
  fVar13 = *(float *)(param_1 + 0x20);
  fVar25 = (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20);
  fVar10 = (float)*(undefined8 *)(param_1 + 0x24);
  fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20);
  uVar8 = NEON_fmadd(fVar16,fVar18,fVar7 * fVar2);
  fVar26 = (float)*(undefined8 *)(param_2 + 0x24);
  uVar8 = NEON_fmadd(fVar13,fVar17,uVar8);
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined4 *)param_3 = uVar8;
  fVar9 = (fVar6 * fVar2 + fVar21 * fVar18 + fVar10 * fVar17 +
          fVar4 * fVar7 + fVar24 * fVar16 + fVar26 * fVar13) * 0.5;
  fVar7 = (fVar19 * fVar2 + fVar15 * fVar18 + fVar11 * fVar17 +
          fVar5 * fVar7 + fVar14 * fVar16 + fVar25 * fVar13) * 0.5;
  *(undefined4 *)(param_3 + 0x2c) = 0;
  fVar2 = (fVar19 * fVar4 + fVar24 * fVar15 + fVar26 * fVar11 +
          fVar6 * fVar5 + fVar14 * fVar21 + fVar25 * fVar10) * 0.5;
  *(ulong *)(param_3 + 4) = CONCAT44(fVar7,fVar9);
  *(float *)(param_3 + 0x20) = fVar7;
  *(ulong *)(param_3 + 0x10) = CONCAT44(fVar6 * fVar4 + fVar24 * fVar21 + fVar26 * fVar10,fVar9);
  *(float *)(param_3 + 0x18) = fVar2;
  *(float *)(param_3 + 0x24) = fVar2;
  *(float *)(param_3 + 0x28) = fVar19 * fVar5 + fVar14 * fVar15 + fVar25 * fVar11;
  return *(uint *)(this + 4);
}


