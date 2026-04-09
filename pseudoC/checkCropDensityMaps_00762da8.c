// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkCropDensityMaps
// Entry Point: 00762da8
// Size: 576 bytes
// Signature: undefined __cdecl checkCropDensityMaps(uint param_1, uint param_2, uint param_3, CropDensityMap * param_4, uint param_5, bool param_6)


/* FieldCropsQuery::checkCropDensityMaps(unsigned int, unsigned int, unsigned int,
   FieldCropsQuery::CropDensityMap const*, unsigned int, bool) */

bool FieldCropsQuery::checkCropDensityMaps
               (uint param_1,uint param_2,uint param_3,CropDensityMap *param_4,uint param_5,
               bool param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  uint local_a8 [16];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_3 == 0) {
    bVar4 = true;
  }
  else {
    uVar11 = 0;
    uVar10 = (ulong)param_3;
    do {
      uVar6 = DensityMapModifier::readValue
                        (*(DensityMapModifier **)(param_4 + uVar11 * 0x28),param_1,param_2);
      local_a8[uVar11] = 0;
      if (uVar6 != 0) {
        lVar2 = *(long *)(param_4 + uVar11 * 0x28 + 0x10);
        uVar1 = *(uint *)(param_4 + uVar11 * 0x28 + 8) & uVar6;
        if (uVar1 < (uint)((int)((ulong)(*(long *)(param_4 + uVar11 * 0x28 + 0x18) - lVar2) >> 2) *
                          0x3e0f83e1)) {
          uVar7 = (ulong)*(ushort *)(lVar2 + (ulong)uVar1 * 0x84 + 2);
          if (uVar7 != 0) {
            uVar8 = 0;
            bVar4 = true;
            puVar9 = (uint *)(lVar2 + (ulong)uVar1 * 0x84 + 0x50);
            do {
              if ((((*puVar9 == 0) || ((*puVar9 & param_5) != 0)) &&
                  (puVar9[-2] <= (puVar9[-3] & uVar6))) && ((puVar9[-3] & uVar6) <= puVar9[-1]))
              break;
              uVar8 = uVar8 + 1;
              puVar9 = puVar9 + 4;
              bVar4 = uVar8 < uVar7;
            } while (uVar7 != uVar8);
            if (bVar4) {
              bVar4 = false;
              goto LAB_00762fb0;
            }
          }
          local_a8[uVar11] = uVar6;
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar10);
    if (param_6) {
      uVar11 = 0;
      bVar4 = true;
      if (param_3 < 2) {
        param_3 = 1;
      }
      do {
        uVar6 = local_a8[uVar11];
        if (uVar6 != 0) {
          uVar7 = (ulong)*(ushort *)
                          (*(long *)(param_4 + uVar11 * 0x28 + 0x10) +
                          (ulong)(*(uint *)(param_4 + uVar11 * 0x28 + 8) & uVar6) * 0x84);
          if (uVar7 != 0) {
            uVar8 = 0;
            bVar5 = true;
            puVar9 = (uint *)(*(long *)(param_4 + uVar11 * 0x28 + 0x10) +
                             (ulong)(*(uint *)(param_4 + uVar11 * 0x28 + 8) & uVar6) * 0x84);
            do {
              uVar1 = puVar9[4];
              if (((uVar1 == 0) || ((uVar1 & param_5) != 0)) &&
                 ((puVar9[2] <= (puVar9[1] & uVar6) && ((puVar9[1] & uVar6) <= puVar9[3])))) break;
              uVar8 = uVar8 + 1;
              bVar5 = uVar8 < uVar7;
              puVar9 = puVar9 + 4;
            } while (uVar7 != uVar8);
            if (bVar5) break;
          }
        }
        uVar11 = uVar11 + 1;
        bVar4 = uVar11 < uVar10;
      } while (uVar11 != param_3);
    }
    else {
      bVar4 = true;
    }
  }
LAB_00762fb0:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}


