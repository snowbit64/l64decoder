// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markDensityRegionDirty
// Entry Point: 008584d4
// Size: 428 bytes
// Signature: undefined __cdecl markDensityRegionDirty(DensityMap * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, bool param_7)


/* DensityMapSyncer::markDensityRegionDirty(DensityMap*, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, bool) */

void DensityMapSyncer::markDensityRegionDirty
               (DensityMap *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
               ,bool param_7)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long **pplVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong *puVar14;
  long lVar15;
  
  puVar14 = *(ulong **)(param_1 + 0x28);
  uVar9 = (*(long *)(param_1 + 0x30) - (long)puVar14 >> 4) * -0x5555555555555555;
  if ((int)uVar9 != 0) {
    lVar15 = 0;
    do {
      if (*puVar14 == (ulong)param_2) {
        uVar13 = *(uint *)(param_1 + 100);
        uVar12 = 0;
        if (uVar13 != 0) {
          uVar12 = param_4 / uVar13;
        }
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = ((uVar13 - 1) + param_6) / uVar13;
        }
        if (uVar5 <= uVar12) {
          return;
        }
        uVar6 = 0;
        if (uVar13 != 0) {
          uVar6 = param_3 / uVar13;
        }
        uVar7 = 0;
        if (uVar13 != 0) {
          uVar7 = ((uVar13 - 1) + param_5) / uVar13;
        }
        lVar2 = *(long *)(param_1 + 0x40);
        lVar3 = *(long *)(param_1 + 0x48);
        iVar4 = *(int *)((long)puVar14 + 0xc);
        do {
          if (uVar6 < uVar7) {
            uVar13 = uVar6;
            do {
              uVar1 = uVar13 + uVar12 * iVar4;
              if ((param_1[0x68] == (DensityMap)0x0) && ((int)((ulong)(lVar3 - lVar2) >> 4) != 0)) {
                pplVar10 = (long **)(*(long *)(param_1 + 0x40) + 8);
                uVar9 = (ulong)(lVar3 - lVar2) >> 4 & 0xffffffff;
                do {
                  lVar11 = (ulong)(uVar1 >> 6) * 8;
                  uVar9 = uVar9 - 1;
                  *(ulong *)(*(long *)(**pplVar10 + lVar15) + lVar11) =
                       *(ulong *)(*(long *)(**pplVar10 + lVar15) + lVar11) |
                       1L << ((ulong)uVar1 & 0x3f);
                  pplVar10 = pplVar10 + 2;
                } while (uVar9 != 0);
              }
              plVar8 = (long *)puVar14[4];
              if ((plVar8 != (long *)0x0) &&
                 ((*(byte *)(*(long *)(*(long *)puVar14[3] + (ulong)(uVar1 >> 0x13) * 8) +
                            ((ulong)(uVar1 >> 3) & 0xffff)) >> (ulong)(uVar1 & 7) & 1) != 0)) {
                (**(code **)(*plVar8 + 0x10))
                          (plVar8,*puVar14,*(undefined4 *)(puVar14 + 5),uVar13,uVar12);
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar7);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar5);
        return;
      }
      lVar15 = lVar15 + 8;
      puVar14 = puVar14 + 6;
    } while ((uVar9 & 0xffffffff) * 8 - lVar15 != 0);
  }
  return;
}


