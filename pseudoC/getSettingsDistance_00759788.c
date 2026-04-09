// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSettingsDistance
// Entry Point: 00759788
// Size: 988 bytes
// Signature: undefined __cdecl getSettingsDistance(HardwareSettings * param_1, HardwareSettings * param_2)


/* HardwareScalability::getSettingsDistance(HardwareScalability::HardwareSettings const&,
   HardwareScalability::HardwareSettings const&) */

float HardwareScalability::getSettingsDistance(HardwareSettings *param_1,HardwareSettings *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar34;
  undefined8 uVar33;
  float fVar35;
  
  iVar2 = *(int *)(param_1 + 0x2c) - *(int *)(param_2 + 0x2c);
  iVar1 = -iVar2;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  fVar31 = 0.0;
  fVar35 = fVar31;
  if (param_1[0x30] != param_2[0x30]) {
    fVar35 = 1.0;
  }
  iVar3 = *(int *)(param_1 + 0x34) - *(int *)(param_2 + 0x34);
  iVar2 = -iVar3;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  iVar4 = *(int *)(param_1 + 0x38) - *(int *)(param_2 + 0x38);
  iVar3 = -iVar4;
  if (-1 < iVar4) {
    iVar3 = iVar4;
  }
  iVar5 = *(int *)(param_1 + 0x3c) - *(int *)(param_2 + 0x3c);
  iVar4 = -iVar5;
  if (-1 < iVar5) {
    iVar4 = iVar5;
  }
  if (param_1[0x1c] != param_2[0x1c]) {
    fVar31 = 1.0;
  }
  iVar6 = *(int *)(param_1 + 0x40) - *(int *)(param_2 + 0x40);
  iVar5 = -iVar6;
  if (-1 < iVar6) {
    iVar5 = iVar6;
  }
  iVar7 = *(int *)(param_1 + 0x44) - *(int *)(param_2 + 0x44);
  iVar6 = -iVar7;
  if (-1 < iVar7) {
    iVar6 = iVar7;
  }
  iVar8 = (uint)(byte)param_1[0x48] - (uint)(byte)param_2[0x48];
  iVar7 = -iVar8;
  if (-1 < iVar8) {
    iVar7 = iVar8;
  }
  iVar9 = *(int *)(param_1 + 0x4c) - *(int *)(param_2 + 0x4c);
  iVar8 = -iVar9;
  if (-1 < iVar9) {
    iVar8 = iVar9;
  }
  iVar10 = *(int *)(param_1 + 0x50) - *(int *)(param_2 + 0x50);
  iVar9 = -iVar10;
  if (-1 < iVar10) {
    iVar9 = iVar10;
  }
  iVar11 = *(int *)(param_1 + 0x58) - *(int *)(param_2 + 0x58);
  iVar10 = -iVar11;
  if (-1 < iVar11) {
    iVar10 = iVar11;
  }
  iVar12 = *(int *)(param_1 + 0x5c) - *(int *)(param_2 + 0x5c);
  iVar11 = -iVar12;
  if (-1 < iVar12) {
    iVar11 = iVar12;
  }
  iVar13 = *(int *)(param_1 + 0x60) - *(int *)(param_2 + 0x60);
  iVar12 = -iVar13;
  if (-1 < iVar13) {
    iVar12 = iVar13;
  }
  iVar14 = *(int *)(param_1 + 100) - *(int *)(param_2 + 100);
  iVar13 = -iVar14;
  if (-1 < iVar14) {
    iVar13 = iVar14;
  }
  iVar15 = *(int *)(param_1 + 0x68) - *(int *)(param_2 + 0x68);
  iVar14 = -iVar15;
  if (-1 < iVar15) {
    iVar14 = iVar15;
  }
  iVar16 = *(int *)(param_1 + 0x6c) - *(int *)(param_2 + 0x6c);
  iVar15 = -iVar16;
  if (-1 < iVar16) {
    iVar15 = iVar16;
  }
  iVar17 = *(int *)(param_1 + 0x70) - *(int *)(param_2 + 0x70);
  iVar16 = -iVar17;
  if (-1 < iVar17) {
    iVar16 = iVar17;
  }
  iVar18 = *(int *)(param_1 + 0x74) - *(int *)(param_2 + 0x74);
  iVar17 = -iVar18;
  if (-1 < iVar18) {
    iVar17 = iVar18;
  }
  iVar19 = *(int *)(param_1 + 0x7c) - *(int *)(param_2 + 0x7c);
  iVar18 = -iVar19;
  if (-1 < iVar19) {
    iVar18 = iVar19;
  }
  uVar32 = MP_INT_ABS((int)*(undefined8 *)(param_1 + 0x88) - (int)*(undefined8 *)(param_2 + 0x88));
  uVar34 = MP_INT_ABS((int)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) -
                      (int)((ulong)*(undefined8 *)(param_2 + 0x88) >> 0x20));
  iVar20 = *(int *)(param_1 + 0x80) - *(int *)(param_2 + 0x80);
  iVar19 = -iVar20;
  if (-1 < iVar20) {
    iVar19 = iVar20;
  }
  uVar33 = NEON_scvtf(CONCAT44(uVar34,uVar32),4);
  iVar21 = *(int *)(param_1 + 0x84) - *(int *)(param_2 + 0x84);
  iVar20 = -iVar21;
  if (-1 < iVar21) {
    iVar20 = iVar21;
  }
  iVar22 = (uint)(byte)param_1[0x90] - (uint)(byte)param_2[0x90];
  iVar21 = -iVar22;
  if (-1 < iVar22) {
    iVar21 = iVar22;
  }
  iVar23 = (uint)(byte)param_1[0x91] - (uint)(byte)param_2[0x91];
  iVar22 = -iVar23;
  if (-1 < iVar23) {
    iVar22 = iVar23;
  }
  iVar24 = (uint)(byte)param_1[0x92] - (uint)(byte)param_2[0x92];
  iVar23 = -iVar24;
  if (-1 < iVar24) {
    iVar23 = iVar24;
  }
  iVar25 = (uint)(byte)param_1[0x93] - (uint)(byte)param_2[0x93];
  iVar24 = -iVar25;
  if (-1 < iVar25) {
    iVar24 = iVar25;
  }
  iVar26 = *(int *)(param_1 + 0x94) - *(int *)(param_2 + 0x94);
  iVar25 = -iVar26;
  if (-1 < iVar26) {
    iVar25 = iVar26;
  }
  iVar27 = (uint)(byte)param_1[0x9a] - (uint)(byte)param_2[0x9a];
  iVar26 = -iVar27;
  if (-1 < iVar27) {
    iVar26 = iVar27;
  }
  iVar28 = *(int *)(param_1 + 0xa0) - *(int *)(param_2 + 0xa0);
  iVar27 = -iVar28;
  if (-1 < iVar28) {
    iVar27 = iVar28;
  }
  iVar29 = *(int *)(param_1 + 0xb8) - *(int *)(param_2 + 0xb8);
  iVar28 = -iVar29;
  if (-1 < iVar29) {
    iVar28 = iVar29;
  }
  iVar30 = *(int *)(param_1 + 0xbc) - *(int *)(param_2 + 0xbc);
  iVar29 = -iVar30;
  if (-1 < iVar30) {
    iVar29 = iVar30;
  }
  return ABS(*(float *)(param_1 + 0x9c) - *(float *)(param_2 + 0x9c)) +
         ABS(*(float *)(param_1 + 0x78) - *(float *)(param_2 + 0x78)) +
         ABS(*(float *)(param_1 + 0x54) - *(float *)(param_2 + 0x54)) +
         fVar31 + fVar35 + ABS(*(float *)(param_1 + 8) - *(float *)(param_2 + 8)) +
                           ABS(*(float *)(param_1 + 0xc) - *(float *)(param_2 + 0xc)) +
                           ABS(*(float *)(param_1 + 0x10) - *(float *)(param_2 + 0x10)) +
                           ABS(*(float *)(param_1 + 0x14) - *(float *)(param_2 + 0x14)) +
                           ABS(*(float *)(param_1 + 0x18) - *(float *)(param_2 + 0x18)) +
                           ABS(*(float *)(param_1 + 0x20) - *(float *)(param_2 + 0x20)) +
                           ABS(*(float *)(param_1 + 0x24) - *(float *)(param_2 + 0x24)) +
                           ABS(*(float *)(param_1 + 0x28) - *(float *)(param_2 + 0x28)) +
                           (float)iVar1 * 0.5 + (float)iVar2 * 0.0004882812 + (float)iVar3 * 0.125 +
                  (float)iVar4 * 0.25 + (float)iVar5 * 0.25 + (float)iVar6 + (float)iVar7 +
         (float)iVar8 * 0.0625 + (float)iVar9 * 0.25 + (float)iVar10 * 0.25 + (float)iVar11 * 0.0625
         + (float)iVar12 + (float)iVar13 / 5.0 + (float)iVar14 * 0.25 + (float)iVar15 * 0.25 +
         (float)iVar16 * 0.25 + (float)iVar17 * 0.25 + (float)iVar18 * 0.0009765625 +
         (float)iVar19 * 0.25 + (float)iVar20 * 0.03125 + (float)uVar33 / 15.0 +
         (float)((ulong)uVar33 >> 0x20) / 5.0 + (float)iVar21 + (float)iVar22 + (float)iVar23 +
         (float)iVar24 + (float)iVar25 / 3.0 + (float)iVar26 + (float)iVar27 / 3.0 + (float)iVar28 +
         (float)iVar29;
}


