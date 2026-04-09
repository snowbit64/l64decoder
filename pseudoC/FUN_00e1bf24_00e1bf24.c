// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e1bf24
// Entry Point: 00e1bf24
// Size: 552 bytes
// Signature: undefined FUN_00e1bf24(void)


void FUN_00e1bf24(uint param_1,int param_2,float *param_3,float *param_4,long param_5,long param_6)

{
  float *pfVar1;
  undefined4 *puVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  
  if (0 < param_2) {
    iVar10 = param_2 * param_1;
    uVar4 = param_1 * 2;
    uVar5 = param_1 * 3;
    iVar11 = iVar10 * 2;
    pfVar8 = param_4;
    pfVar9 = param_3;
    iVar7 = param_2;
    do {
      pfVar1 = (float *)((long)pfVar9 +
                        (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2));
      fVar18 = *pfVar9;
      pfVar9 = (float *)((long)pfVar9 +
                        (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2));
      iVar7 = iVar7 + -1;
      fVar16 = pfVar1[-1];
      fVar16 = fVar16 + fVar16;
      fVar17 = (float)NEON_fmadd(fVar16,0xbf000000,fVar18);
      *pfVar8 = fVar18 + fVar16;
      fVar16 = *pfVar1;
      fVar16 = (fVar16 + fVar16) * 0.8660254;
      pfVar8[iVar10] = fVar17 - fVar16;
      pfVar8[iVar11] = fVar17 + fVar16;
      pfVar8 = (float *)((long)pfVar8 +
                        (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2));
    } while (iVar7 != 0);
    if ((0 < param_2) && (2 < (int)param_1)) {
      param_4 = param_4 + 2;
      iVar12 = 0;
      iVar7 = 0;
      pfVar9 = param_4;
      do {
        uVar14 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
        lVar13 = 0;
        uVar15 = 2;
        pfVar8 = (float *)((long)param_3 + (uVar14 - 0xc));
        do {
          lVar6 = lVar13 + uVar14;
          pfVar1 = (float *)((long)param_3 + lVar13 + (long)iVar12 * 4 + 8);
          uVar15 = uVar15 + 2;
          fVar16 = *(float *)((long)param_3 + lVar6 + 4) + *pfVar8;
          fVar18 = pfVar1[-1];
          fVar17 = (float)NEON_fmadd(fVar16,0xbf000000,fVar18);
          ((float *)((long)pfVar9 + lVar13))[-1] = fVar18 + fVar16;
          fVar16 = *(float *)((long)param_3 + lVar6 + 8) - pfVar8[1];
          fVar19 = *pfVar1;
          puVar2 = (undefined4 *)((long)param_4 + lVar13 + (long)iVar10 * 4);
          fVar18 = (float)NEON_fmadd(fVar16,0xbf000000,fVar19);
          *(float *)((long)pfVar9 + lVar13) = fVar19 + fVar16;
          pfVar1 = (float *)(param_5 + 4 + lVar13);
          fVar19 = (*(float *)((long)param_3 + lVar6 + 4) - *pfVar8) * 0.8660254;
          fVar16 = (*(float *)((long)param_3 + lVar6 + 8) + pfVar8[1]) * 0.8660254;
          fVar21 = fVar18 + fVar19;
          fVar18 = fVar18 - fVar19;
          fVar19 = fVar17 - fVar16;
          fVar17 = fVar17 + fVar16;
          uVar20 = NEON_fmadd(pfVar1[-1],fVar19,fVar21 * -*pfVar1);
          puVar2[-1] = uVar20;
          pfVar3 = (float *)(param_6 + 4 + lVar13);
          uVar20 = NEON_fmadd(pfVar1[-1],fVar21,fVar19 * *pfVar1);
          *puVar2 = uVar20;
          puVar2 = (undefined4 *)((long)param_4 + lVar13 + (long)iVar11 * 4);
          lVar13 = lVar13 + 8;
          uVar20 = NEON_fmadd(pfVar3[-1],fVar17,fVar18 * -*pfVar3);
          puVar2[-1] = uVar20;
          uVar20 = NEON_fmadd(pfVar3[-1],fVar18,fVar17 * *pfVar3);
          *puVar2 = uVar20;
          pfVar8 = pfVar8 + -2;
        } while (uVar15 < param_1);
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + uVar5;
        iVar12 = iVar12 + uVar5;
        iVar11 = iVar11 + param_1;
        iVar10 = iVar10 + param_1;
        pfVar9 = pfVar9 + param_1;
      } while (iVar7 != param_2);
    }
  }
  return;
}


