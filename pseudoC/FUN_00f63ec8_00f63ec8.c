// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f63ec8
// Entry Point: 00f63ec8
// Size: 544 bytes
// Signature: undefined FUN_00f63ec8(void)


void FUN_00f63ec8(long param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  
  lVar8 = *(long *)(param_1 + 8);
  fVar9 = *param_2;
  fVar14 = param_2[1];
  fVar19 = param_2[2];
  fVar20 = param_2[3];
  fVar21 = -1e+18;
  fVar27 = param_2[5];
  uVar23 = NEON_fminnm(fVar9,0x5d5e0b6b);
  uVar25 = NEON_fminnm(fVar14,0x5d5e0b6b);
  uVar12 = NEON_fminnm(fVar19,0x5d5e0b6b);
  uVar26 = NEON_fminnm(fVar20,0);
  uVar6 = *(uint *)(lVar8 + 4);
  if (fVar9 <= -1e+18) {
    fVar9 = fVar21;
  }
  if (fVar14 <= -1e+18) {
    fVar14 = fVar21;
  }
  if (fVar19 <= -1e+18) {
    fVar19 = fVar21;
  }
  uVar23 = NEON_fminnm(param_2[4],uVar23);
  fVar22 = param_2[6];
  fVar21 = param_2[7];
  uVar25 = NEON_fminnm(fVar27,uVar25);
  if (fVar14 <= fVar27) {
    fVar14 = fVar27;
  }
  fVar27 = param_2[8];
  fVar24 = param_2[9];
  uVar28 = NEON_fminnm(fVar22,uVar12);
  uVar12 = NEON_fminnm(fVar21,uVar26);
  if (fVar19 <= fVar22) {
    fVar19 = fVar22;
  }
  if (fVar20 <= fVar21) {
    fVar20 = fVar21;
  }
  fVar22 = param_2[10];
  fVar21 = param_2[0xb];
  if (uVar6 == *(uint *)(lVar8 + 8)) {
    uVar4 = uVar6 << 1;
    if (uVar6 == 0) {
      uVar4 = 1;
    }
    if ((int)uVar6 < (int)uVar4) {
      if (uVar4 == 0) {
        lVar5 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar5 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)(uVar4 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar4 << 6,0x10);
        uVar6 = *(uint *)(lVar8 + 4);
      }
      if (0 < (int)uVar6) {
        lVar7 = 0;
        do {
          puVar1 = (undefined8 *)(lVar5 + lVar7);
          puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x10) + lVar7);
          lVar7 = lVar7 + 0x40;
          uVar13 = puVar2[4];
          uVar11 = puVar2[7];
          uVar10 = puVar2[6];
          uVar18 = puVar2[1];
          uVar17 = *puVar2;
          uVar16 = puVar2[3];
          uVar15 = puVar2[2];
          puVar1[5] = puVar2[5];
          puVar1[4] = uVar13;
          puVar1[7] = uVar11;
          puVar1[6] = uVar10;
          puVar1[1] = uVar18;
          *puVar1 = uVar17;
          puVar1[3] = uVar16;
          puVar1[2] = uVar15;
        } while ((ulong)uVar6 * 0x40 - lVar7 != 0);
      }
      if ((*(long *)(lVar8 + 0x10) != 0) && (*(char *)(lVar8 + 0x18) != '\0')) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      uVar6 = *(uint *)(lVar8 + 4);
      *(long *)(lVar8 + 0x10) = lVar5;
      *(uint *)(lVar8 + 8) = uVar4;
      *(undefined *)(lVar8 + 0x18) = 1;
    }
  }
  uVar23 = NEON_fminnm(fVar27,uVar23);
  uVar25 = NEON_fminnm(fVar24,uVar25);
  uVar26 = NEON_fminnm(fVar22,uVar28);
  uVar12 = NEON_fminnm(fVar21,uVar12);
  puVar3 = (undefined4 *)(*(long *)(lVar8 + 0x10) + (long)(int)uVar6 * 0x40);
  if (fVar9 <= fVar27) {
    fVar9 = fVar27;
  }
  *puVar3 = uVar23;
  puVar3[1] = uVar25;
  if (fVar14 <= fVar24) {
    fVar14 = fVar24;
  }
  if (fVar19 <= fVar22) {
    fVar19 = fVar22;
  }
  puVar3[2] = uVar26;
  puVar3[3] = uVar12;
  if (fVar20 <= fVar21) {
    fVar20 = fVar21;
  }
  puVar3[8] = 0xffffffff;
  puVar3[9] = param_3;
  puVar3[10] = param_4;
  puVar3[4] = fVar9;
  puVar3[5] = fVar14;
  puVar3[6] = fVar19;
  puVar3[7] = fVar20;
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  return;
}


