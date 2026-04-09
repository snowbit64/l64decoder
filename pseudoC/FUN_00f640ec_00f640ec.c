// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f640ec
// Entry Point: 00f640ec
// Size: 748 bytes
// Signature: undefined FUN_00f640ec(void)


void FUN_00f640ec(long param_1,float *param_2,int param_3,uint param_4)

{
  ushort *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  float fVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  fVar17 = -1e+18;
  fVar11 = *param_2;
  fVar12 = param_2[1];
  fVar13 = param_2[2];
  fVar18 = param_2[4];
  fVar20 = param_2[5];
  fVar23 = param_2[6];
  uVar15 = NEON_fminnm(fVar11,0x5d5e0b6b);
  uVar16 = NEON_fminnm(fVar12,0x5d5e0b6b);
  uVar9 = NEON_fminnm(fVar13,0x5d5e0b6b);
  if (fVar11 <= -1e+18) {
    fVar11 = fVar17;
  }
  if (fVar12 <= -1e+18) {
    fVar12 = fVar17;
  }
  if (fVar13 <= -1e+18) {
    fVar13 = fVar17;
  }
  lVar2 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  uVar15 = NEON_fminnm(fVar18,uVar15);
  uVar16 = NEON_fminnm(fVar20,uVar16);
  uVar9 = NEON_fminnm(fVar23,uVar9);
  if (fVar11 <= fVar18) {
    fVar11 = fVar18;
  }
  fVar17 = param_2[8];
  fVar18 = param_2[9];
  if (fVar12 <= fVar20) {
    fVar12 = fVar20;
  }
  if (fVar13 <= fVar23) {
    fVar13 = fVar23;
  }
  fVar21 = param_2[10];
  uVar7 = *(uint *)(lVar2 + 4);
  fVar20 = (float)NEON_fminnm(fVar17,uVar15);
  fVar23 = (float)NEON_fminnm(fVar18,uVar16);
  fVar19 = (float)NEON_fminnm(fVar21,uVar9);
  if (fVar11 <= fVar17) {
    fVar11 = fVar17;
  }
  if (fVar12 <= fVar18) {
    fVar12 = fVar18;
  }
  if (fVar13 <= fVar21) {
    fVar13 = fVar21;
  }
  fVar24 = *(float *)(lVar6 + 8);
  fVar25 = *(float *)(lVar6 + 0xc);
  fVar17 = *(float *)(lVar6 + 0x28);
  fVar22 = *(float *)(lVar6 + 0x2c);
  fVar21 = *(float *)(lVar6 + 0x10);
  fVar18 = *(float *)(lVar6 + 0x30);
  if (uVar7 == *(uint *)(lVar2 + 8)) {
    uVar3 = uVar7 << 1;
    if (uVar7 == 0) {
      uVar3 = 1;
    }
    if ((int)uVar7 < (int)uVar3) {
      if (uVar3 == 0) {
        lVar6 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar6 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4,0x10);
        uVar7 = *(uint *)(lVar2 + 4);
      }
      if (0 < (int)uVar7) {
        lVar8 = 0;
        do {
          puVar4 = (undefined8 *)(*(long *)(lVar2 + 0x10) + lVar8);
          uVar10 = *puVar4;
          ((undefined8 *)(lVar6 + lVar8))[1] = puVar4[1];
          *(undefined8 *)(lVar6 + lVar8) = uVar10;
          lVar8 = lVar8 + 0x10;
        } while ((ulong)uVar7 * 0x10 - lVar8 != 0);
      }
      if ((*(long *)(lVar2 + 0x10) != 0) && (*(char *)(lVar2 + 0x18) != '\0')) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      uVar7 = *(uint *)(lVar2 + 4);
      *(long *)(lVar2 + 0x10) = lVar6;
      *(uint *)(lVar2 + 8) = uVar3;
      *(undefined *)(lVar2 + 0x18) = 1;
    }
  }
  puVar1 = (ushort *)(*(long *)(lVar2 + 0x10) + (long)(int)uVar7 * 0x10);
  fVar14 = fVar19 + -0.001;
  fVar5 = fVar13 + 0.001;
  if (0.002 <= fVar13 - fVar19) {
    fVar14 = fVar19;
    fVar5 = fVar13;
  }
  fVar19 = fVar23 + -0.001;
  fVar13 = fVar12 + 0.001;
  if (0.002 <= fVar12 - fVar23) {
    fVar19 = fVar23;
    fVar13 = fVar12;
  }
  fVar23 = fVar11 + 0.001;
  fVar12 = fVar20 + -0.001;
  if (0.002 <= fVar11 - fVar20) {
    fVar23 = fVar11;
    fVar12 = fVar20;
  }
  fVar20 = (float)NEON_fmadd(fVar18,fVar5 - fVar21,0x3f800000);
  fVar13 = (float)NEON_fmadd(fVar22,fVar13 - fVar25,0x3f800000);
  fVar11 = (float)NEON_fmadd(fVar17,fVar23 - fVar24,0x3f800000);
  puVar1[2] = (ushort)(int)(fVar18 * (fVar14 - fVar21)) & 0xfffe;
  puVar1[5] = (ushort)(int)fVar20 | 1;
  puVar1[1] = (ushort)(int)(fVar22 * (fVar19 - fVar25)) & 0xfffe;
  puVar1[4] = (ushort)(int)fVar13 | 1;
  *puVar1 = (ushort)(int)(fVar17 * (fVar12 - fVar24)) & 0xfffe;
  puVar1[3] = (ushort)(int)fVar11 | 1;
  *(uint *)(puVar1 + 6) = param_4 | param_3 << 0x15;
  *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
  return;
}


