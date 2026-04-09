// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHasBlockingPosition
// Entry Point: 0072d4f8
// Size: 456 bytes
// Signature: undefined __thiscall getHasBlockingPosition(VehicleNavigationMapGenerator * this, float param_1, float param_2, ushort param_3, float param_4, ushort param_5)


/* WARNING: Removing unreachable block (ram,0x0072d664) */
/* VehicleNavigationMapGenerator::getHasBlockingPosition(float, float, unsigned short, float,
   unsigned short) */

bool __thiscall
VehicleNavigationMapGenerator::getHasBlockingPosition
          (VehicleNavigationMapGenerator *this,float param_1,float param_2,ushort param_3,
          float param_4,ushort param_5)

{
  VehicleNavigationMapGenerator **ppVVar1;
  uint uVar2;
  VehicleNavigationMapGenerator *pVVar3;
  long lVar4;
  VehicleNavigationMapGenerator **ppVVar5;
  VehicleNavigationMapGenerator **ppVVar6;
  uint *puVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((param_3 != 0xffff) &&
     (pVVar3 = *(VehicleNavigationMapGenerator **)(this + 0x238),
     pVVar3 != (VehicleNavigationMapGenerator *)0x0)) {
    ppVVar1 = (VehicleNavigationMapGenerator **)(this + 0x238);
    puVar7 = (uint *)(*(long *)(*(long *)(this + 0x108) + 0x28) + (ulong)param_3 * 0x50 + 0x14);
    uVar2 = *puVar7;
    ppVVar5 = ppVVar1;
    do {
      if (*(uint *)(pVVar3 + 0x20) >= uVar2) {
        ppVVar5 = (VehicleNavigationMapGenerator **)pVVar3;
      }
      pVVar3 = *(VehicleNavigationMapGenerator **)
                (pVVar3 + (ulong)(*(uint *)(pVVar3 + 0x20) < uVar2) * 8);
    } while (pVVar3 != (VehicleNavigationMapGenerator *)0x0);
    if ((ppVVar5 != ppVVar1) && (*(uint *)((long)ppVVar5 + 0x20) <= uVar2)) {
      lVar4 = *(long *)((long)ppVVar5 + 0x30);
      if (*(long *)((long)ppVVar5 + 0x38) != lVar4) {
        uVar8 = 0;
        do {
          fVar9 = *(float *)(lVar4 + uVar8 * 4);
          fVar10 = (float)Spline::getLength();
          fVar10 = (fVar9 - param_4) * fVar10;
          if (param_1 < fVar10 && fVar10 < param_2 || param_1 < fVar10 && fVar10 == param_2) {
            return true;
          }
          lVar4 = *(long *)((long)ppVVar5 + 0x30);
          uVar8 = (ulong)((int)uVar8 + 1);
        } while (uVar8 < (ulong)(*(long *)((long)ppVVar5 + 0x38) - lVar4 >> 2));
      }
      fVar9 = (float)Spline::getLength();
      fVar9 = (1.0 - param_4) * fVar9;
      if (((param_2 < fVar9) && (param_5 != 0xffff)) &&
         (ppVVar5 = (VehicleNavigationMapGenerator **)*ppVVar1,
         ppVVar5 != (VehicleNavigationMapGenerator **)0x0)) {
        uVar2 = *puVar7;
        fVar10 = (float)NEON_fminnm(param_1 - fVar9,0);
        ppVVar6 = ppVVar1;
        do {
          if (*(uint *)(ppVVar5 + 4) >= uVar2) {
            ppVVar6 = ppVVar5;
          }
          ppVVar5 = (VehicleNavigationMapGenerator **)ppVVar5[*(uint *)(ppVVar5 + 4) < uVar2];
        } while (ppVVar5 != (VehicleNavigationMapGenerator **)0x0);
        if (((ppVVar6 != ppVVar1) && (*(uint *)(ppVVar6 + 4) <= uVar2)) &&
           (pVVar3 = ppVVar6[6], ppVVar6[7] != pVVar3)) {
          uVar8 = 0;
          do {
            fVar12 = *(float *)(pVVar3 + uVar8 * 4);
            fVar11 = (float)Spline::getLength();
            pVVar3 = ppVVar6[6];
            uVar8 = (ulong)((int)uVar8 + 1);
          } while (uVar8 < (ulong)((long)ppVVar6[7] - (long)pVVar3 >> 2));
          return fVar10 < fVar12 * fVar11 && fVar12 * fVar11 <= param_2 - fVar9;
        }
      }
    }
  }
  return false;
}


