// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithoutMask<BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
// Entry Point: 0083eedc
// Size: 1100 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithoutMask<BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>(IDensityPixelSource * param_1, BitVector * param_2, ParallelogramHelper * param_3, uint param_4, TypedModules * param_5)


/* bool DensityMapModifier::applyTypedModulesToShapeWithoutMask<BitVector, ParallelogramHelper,
   DensityMapOperations::SetOrAddDensityProcessor<BitVector, false> >(IDensityPixelSource*,
   BitVector*, ParallelogramHelper&, unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithoutMask<BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
               (IDensityPixelSource *param_1,BitVector *param_2,ParallelogramHelper *param_3,
               uint param_4,TypedModules *param_5)

{
  uint uVar1;
  SetOrAddDensityProcessor<BitVector,false> *this;
  long lVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  uint local_90;
  undefined4 local_8c;
  uint local_88;
  long *local_80;
  uint local_78;
  uint uStack_74;
  uint local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar7 = (**(code **)(*(long *)param_1 + 0x28))();
  local_90 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  local_8c = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_88 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  uVar15 = *(uint *)(param_3 + 0x48);
  local_80 = (long *)param_2;
  if (uVar15 < *(uint *)(param_3 + 0x4c)) {
    do {
      ParallelogramHelper::startXIteration(param_3,uVar15);
      uVar14 = *(uint *)(param_3 + 0x58);
      uVar8 = *(uint *)(param_3 + 0x5c);
LAB_0083efc4:
      if (uVar14 < uVar8) {
        lVar13 = *local_80;
        uVar8 = (uVar14 + local_90 * uVar15) * local_88;
        lVar10 = *(long *)(lVar13 + (ulong)(uVar8 >> 0x13) * 8);
        uVar12 = (ulong)(uVar8 >> 3) & 0xffff;
        if ((uint)uVar12 < 0xfffd) {
          uVar9 = *(uint *)(lVar10 + uVar12);
        }
        else {
          uVar9 = (uVar8 >> 3) + 1;
          uVar1 = (uVar8 >> 3) + 2;
          uVar9 = (uint)CONCAT12(*(undefined *)
                                  (*(long *)(lVar13 + (ulong)(uVar1 >> 0x10) * 8) +
                                  ((ulong)uVar1 & 0xffff)),
                                 CONCAT11(*(undefined *)
                                           (*(long *)(lVar13 + (ulong)(uVar9 >> 0x10) * 8) +
                                           ((ulong)uVar9 & 0xffff)),*(undefined *)(lVar10 + uVar12))
                                );
        }
        uVar8 = uVar9 >> (ulong)(uVar8 & 7) & (-1 << (ulong)(local_88 & 0x1f) ^ 0xffffffffU) &
                0xffff;
        uVar9 = uVar8 & ~(-1 << (ulong)(uVar7 & 0x1f));
        uVar1 = param_4 - 1;
        if (uVar9 <= param_4 - 1) {
          uVar1 = uVar9;
        }
        plVar16 = (long *)(param_5 + (ulong)uVar1 * 0x18);
        lVar10 = *plVar16;
        uVar12 = (plVar16[1] - lVar10 >> 3) * 0x684bda13;
        local_78 = uVar14;
        uStack_74 = uVar15;
        local_70 = uVar8;
        if ((int)uVar12 != 0) {
          lVar13 = 0;
          do {
            this = (SetOrAddDensityProcessor<BitVector,false> *)(lVar10 + lVar13);
            if (*(long *)(this + 0x78) == 0) {
LAB_0083f1ec:
              DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                        (this,(HelperSource *)&local_90);
            }
            else {
              if ((*(int *)(this + 0x80) == 2) ||
                 ((*(int *)(this + 0x80) == 0) != (*(uint *)(lVar10 + lVar13 + 0x84) != uVar9))) {
                lVar2 = lVar10 + lVar13;
                uVar1 = uVar8 >> (ulong)(*(uint *)(lVar2 + 0x88) & 0x1f) &
                        (-1 << (ulong)(*(uint *)(lVar2 + 0x8c) & 0x1f) ^ 0xffffffffU);
                if ((int)uVar1 < *(int *)(lVar2 + 0x90)) {
                  cVar5 = *(char *)(lVar2 + 0x98);
joined_r0x0083f120:
                  if (cVar5 == '\0') goto LAB_0083f140;
                }
                else {
                  cVar5 = *(char *)(lVar2 + 0x98);
                  if (*(int *)(lVar2 + 0x94) < (int)uVar1) goto joined_r0x0083f120;
                  if (cVar5 != '\0') goto LAB_0083f140;
                }
                uVar4 = *(uint *)(lVar10 + lVar13 + 0x9c);
                if ((uVar4 == 0) || ((uVar4 & uVar1) != 0)) {
                  if (*(long *)(lVar10 + lVar13 + 0xa8) == 0) goto LAB_0083f1ec;
                  lVar2 = lVar10 + lVar13;
                  if ((*(int *)(lVar2 + 0xb0) != 2) &&
                     ((*(int *)(lVar2 + 0xb0) == 0) == (*(uint *)(lVar2 + 0xb4) != uVar9)))
                  goto LAB_0083f140;
                  uVar1 = uVar8 >> (ulong)(*(uint *)(lVar2 + 0xb8) & 0x1f) &
                          (-1 << (ulong)(*(uint *)(lVar2 + 0xbc) & 0x1f) ^ 0xffffffffU);
                  lVar3 = lVar10 + lVar13;
                  if ((int)uVar1 < *(int *)(lVar2 + 0xc0)) {
                    cVar5 = *(char *)(lVar3 + 200);
joined_r0x0083f1cc:
                    if (cVar5 == '\0') goto LAB_0083f140;
                  }
                  else {
                    cVar5 = *(char *)(lVar3 + 200);
                    if (*(int *)(lVar3 + 0xc4) < (int)uVar1) goto joined_r0x0083f1cc;
                    if (cVar5 != '\0') goto LAB_0083f140;
                  }
                  uVar4 = *(uint *)(lVar10 + lVar13 + 0xcc);
                  if ((uVar4 == 0) || ((uVar4 & uVar1) != 0)) goto LAB_0083f1ec;
                }
              }
LAB_0083f140:
              *(int *)(lVar10 + lVar13 + 4) = *(int *)(lVar10 + lVar13 + 4) + 1;
            }
            if ((uVar12 & 0xffffffff) * 0xd8 + -0xd8 == lVar13) goto LAB_0083f208;
            lVar10 = *plVar16;
            lVar13 = lVar13 + 0xd8;
          } while( true );
        }
        goto LAB_0083efbc;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(param_3 + 0x4c));
  }
  if (param_4 != 0) {
    uVar12 = 0;
    do {
      plVar16 = (long *)(param_5 + uVar12 * 0x18);
      lVar10 = *plVar16;
      lVar13 = plVar16[1];
      if (lVar13 != lVar10) {
        uVar17 = 0;
        do {
          if (*(char *)(lVar10 + uVar17 * 0xd8 + 0x6c) != '\0') {
            lVar10 = lVar10 + uVar17 * 0xd8;
            DensityMap::markDensityRegionDirty
                      (*(DensityMap **)(lVar10 + 0x58),*(uint *)(param_3 + 0x50),
                       *(uint *)(param_3 + 0x48),*(uint *)(param_3 + 0x54),*(uint *)(param_3 + 0x4c)
                       ,*(uint *)(lVar10 + 0x24),*(uint *)(lVar10 + 0x28),*(uint *)(lVar10 + 0x70),
                       *(bool *)(lVar10 + 0x6d),true,true);
            lVar13 = plVar16[1];
            lVar10 = *plVar16;
          }
          uVar17 = (ulong)((int)uVar17 + 1);
          uVar11 = (lVar13 - lVar10 >> 3) * -0x7b425ed097b425ed;
        } while (uVar17 <= uVar11 && uVar11 - uVar17 != 0);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != param_4);
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return true;
LAB_0083f208:
  if (uVar8 != local_70) {
    DensityMapAccessUtil::writeValue
              ((BitVector *)local_80,local_88,local_90,local_78,uStack_74,local_70);
  }
LAB_0083efbc:
  uVar8 = *(uint *)(param_3 + 0x5c);
  uVar14 = uVar14 + 1;
  goto LAB_0083efc4;
}


