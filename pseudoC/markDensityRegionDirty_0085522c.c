// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markDensityRegionDirty
// Entry Point: 0085522c
// Size: 332 bytes
// Signature: undefined __cdecl markDensityRegionDirty(DensityMap * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, bool param_7)


/* FieldCropsUpdater::markDensityRegionDirty(DensityMap*, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, bool) */

void FieldCropsUpdater::markDensityRegionDirty
               (DensityMap *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
               ,bool param_7)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  long lVar12;
  uint uVar13;
  
  if ((*(ulong *)(param_1 + 0x38) == (ulong)param_2 && param_1[0xd24] == (DensityMap)0x0) &&
      param_1[0xd05] == (DensityMap)0x0) {
    uVar8 = 0;
    uVar9 = 0;
    pfVar11 = (float *)(param_1 + 0x7c);
    do {
      if (((pfVar11[-7] != 0.0) && (uVar4 = 1 << (ulong)(uVar9 & 0x1f), (uVar4 & param_7) != 0)) &&
         (pfVar11[-2] < *pfVar11 * 0.15)) {
        uVar8 = uVar8 | uVar4;
      }
      uVar9 = uVar9 + 1;
      pfVar11 = pfVar11 + 0x19;
    } while (uVar9 <= *(uint *)(param_1 + 0x58));
    if (uVar8 != 0) {
      uVar4 = *(uint *)(param_1 + 0xd08);
      uVar9 = *(uint *)(param_1 + 0xd0c);
      uVar10 = 0;
      if (uVar4 != 0) {
        uVar10 = ((uVar4 - 1) + param_5) / uVar4;
      }
      uVar2 = uVar9;
      if (uVar10 <= uVar9) {
        uVar2 = uVar10;
      }
      uVar10 = 0;
      if (uVar4 != 0) {
        uVar10 = ((uVar4 - 1) + param_6) / uVar4;
      }
      if (uVar10 <= uVar9) {
        uVar9 = uVar10;
      }
      uVar10 = 0;
      if (uVar4 != 0) {
        uVar10 = param_4 / uVar4;
      }
      if (uVar10 < uVar9) {
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = param_3 / uVar4;
        }
        do {
          if (uVar5 < uVar2) {
            lVar12 = *(long *)(param_1 + 0xcf8);
            uVar4 = uVar5;
            do {
              lVar6 = (ulong)(uVar4 + *(int *)(param_1 + 0xd0c) * uVar10) * 4;
              uVar3 = *(uint *)(lVar12 + lVar6);
              uVar13 = uVar3 & uVar8;
              *(uint *)(lVar12 + lVar6) = uVar3 & ~uVar8;
              piVar7 = (int *)(param_1 + 0x78);
              if (uVar13 != 0) {
                do {
                  if ((uVar13 & 1) != 0) {
                    *piVar7 = *piVar7 + 1;
                  }
                  bVar1 = 1 < uVar13;
                  piVar7 = piVar7 + 0x19;
                  uVar13 = uVar13 >> 1;
                } while (bVar1);
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 != uVar2);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar9);
      }
    }
  }
  return;
}


