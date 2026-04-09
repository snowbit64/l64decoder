// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f416ac
// Entry Point: 00f416ac
// Size: 528 bytes
// Signature: undefined FUN_00f416ac(void)


void FUN_00f416ac(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar6 = (ulong)*(uint *)(param_2 + 4);
  if (1 < (int)*(uint *)(param_2 + 4)) {
    do {
      iVar13 = -1;
      lVar5 = *(long *)(param_2 + 0x10);
      iVar15 = -1;
      fVar18 = 3.402823e+38;
      uVar8 = 1;
      uVar7 = 0;
      do {
        uVar1 = uVar7 + 1;
        if (uVar1 < uVar6) {
          puVar11 = *(undefined4 **)(lVar5 + uVar7 * 8);
          uVar9 = uVar8;
          iVar16 = iVar15;
          iVar14 = iVar13;
          do {
            puVar12 = *(undefined4 **)(lVar5 + uVar9 * 8);
            fVar19 = (float)NEON_fminnm(*puVar11,*puVar12);
            fVar20 = (float)NEON_fminnm(puVar11[1],puVar12[1]);
            fVar21 = (float)NEON_fminnm(puVar11[2],puVar12[2]);
            fVar19 = (float)NEON_fmadd(((float)puVar11[5] - fVar20) * ((float)puVar11[4] - fVar19),
                                       (float)puVar11[6] - fVar21,
                                       ((float)puVar11[5] - fVar20) + ((float)puVar11[4] - fVar19) +
                                       ((float)puVar11[6] - fVar21));
            bVar3 = fVar18 <= fVar19;
            fVar18 = (float)NEON_fminnm(fVar19,fVar18);
            iVar15 = (int)uVar7;
            if (bVar3) {
              iVar15 = iVar16;
            }
            iVar13 = (int)uVar9;
            if (bVar3) {
              iVar13 = iVar14;
            }
            uVar9 = uVar9 + 1;
            iVar16 = iVar15;
            iVar14 = iVar13;
          } while (uVar6 != uVar9);
        }
        uVar8 = uVar8 + 1;
        uVar7 = uVar1;
      } while (uVar1 != uVar6);
      puVar11 = *(undefined4 **)(lVar5 + (long)iVar15 * 8);
      puVar12 = *(undefined4 **)(lVar5 + (long)iVar13 * 8);
      puVar4 = *(undefined8 **)(param_1 + 8);
      if (puVar4 == (undefined8 *)0x0) {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        puVar4 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x38,0x10);
        puVar4[6] = 0;
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        puVar4[5] = 0;
        puVar4[4] = 0;
      }
      else {
        *(undefined8 *)(param_1 + 8) = 0;
      }
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      uVar17 = NEON_fminnm(*puVar11,*puVar12);
      *(undefined4 *)puVar4 = uVar17;
      fVar18 = (float)puVar11[4];
      if ((float)puVar11[4] <= (float)puVar12[4]) {
        fVar18 = (float)puVar12[4];
      }
      *(float *)(puVar4 + 2) = fVar18;
      uVar17 = NEON_fminnm(puVar11[1],puVar12[1]);
      *(undefined4 *)((long)puVar4 + 4) = uVar17;
      fVar18 = (float)puVar11[5];
      if ((float)puVar11[5] <= (float)puVar12[5]) {
        fVar18 = (float)puVar12[5];
      }
      *(float *)((long)puVar4 + 0x14) = fVar18;
      uVar17 = NEON_fminnm(puVar11[2],puVar12[2]);
      *(undefined4 *)(puVar4 + 1) = uVar17;
      fVar18 = (float)puVar11[6];
      fVar19 = (float)puVar12[6];
      puVar4[5] = puVar11;
      puVar4[6] = puVar12;
      if (fVar18 <= fVar19) {
        fVar18 = fVar19;
      }
      *(float *)(puVar4 + 3) = fVar18;
      iVar16 = *(int *)(param_2 + 4);
      *(undefined8 **)(puVar11 + 8) = puVar4;
      lVar5 = *(long *)(param_2 + 0x10);
      *(undefined8 **)(puVar12 + 8) = puVar4;
      uVar2 = iVar16 - 1;
      uVar6 = (ulong)uVar2;
      *(undefined8 **)(lVar5 + (long)iVar15 * 8) = puVar4;
      uVar8 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3;
      lVar5 = *(long *)(param_2 + 0x10);
      uVar10 = *(undefined8 *)(lVar5 + (long)iVar13 * 8);
      *(uint *)(param_2 + 4) = uVar2;
      *(undefined8 *)(lVar5 + (long)iVar13 * 8) = *(undefined8 *)(lVar5 + uVar8);
      *(undefined8 *)(*(long *)(param_2 + 0x10) + uVar8) = uVar10;
    } while (2 < iVar16);
  }
  return;
}


