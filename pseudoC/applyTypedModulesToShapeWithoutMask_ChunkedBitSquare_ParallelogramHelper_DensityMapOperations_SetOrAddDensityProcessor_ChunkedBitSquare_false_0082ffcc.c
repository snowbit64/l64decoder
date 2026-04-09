// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithoutMask<ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
// Entry Point: 0082ffcc
// Size: 1320 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithoutMask<ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, ParallelogramHelper * param_3, uint param_4, TypedModules * param_5)


/* bool DensityMapModifier::applyTypedModulesToShapeWithoutMask<ChunkedBitSquare,
   ParallelogramHelper, DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare, false>
   >(IDensityPixelSource*, ChunkedBitSquare*, ParallelogramHelper&, unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,
   false> >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithoutMask<ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,ParallelogramHelper *param_3,
               uint param_4,TypedModules *param_5)

{
  uint *puVar1;
  int iVar2;
  SetOrAddDensityProcessor<ChunkedBitSquare,false> *this;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  code **ppcVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  uint uVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  uint *puVar22;
  uint uVar23;
  ulong uVar24;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  uint *local_80;
  uint local_78;
  uint uStack_74;
  uint local_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  uVar11 = (**(code **)(*(long *)param_1 + 0x28))();
  local_90 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  local_8c = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_88 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  uVar18 = *(uint *)(param_3 + 0x48);
  local_80 = (uint *)param_2;
  if (uVar18 < *(uint *)(param_3 + 0x4c)) {
    do {
      ParallelogramHelper::startXIteration(param_3,uVar18);
      uVar23 = *(uint *)(param_3 + 0x58);
      if (uVar23 < *(uint *)(param_3 + 0x5c)) {
        do {
          puVar10 = local_80;
          uVar5 = local_80[0xd];
          iVar2 = ((uVar18 >> 5) << (ulong)(*local_80 & 0x1f)) + (uVar23 >> 5);
          ppcVar14 = *(code ***)(*(long *)(local_80 + 10) + (ulong)(iVar2 * uVar5) * 8);
          uVar8 = uVar23 & 0x1f | (uVar18 & 0x1f) << 5;
          local_78 = uVar23;
          uStack_74 = uVar18;
          uVar12 = (**ppcVar14)(ppcVar14,uVar8,0,local_80[0xf]);
          if (1 < puVar10[0xd]) {
            puVar22 = puVar10 + 0x11;
            uVar20 = 1;
            do {
              ppcVar14 = *(code ***)
                          (*(long *)(puVar10 + 10) + (ulong)(uVar5 * iVar2 + (int)uVar20) * 8);
              iVar13 = (**ppcVar14)(ppcVar14,uVar8,0,*puVar22);
              puVar1 = puVar22 + -1;
              uVar20 = uVar20 + 1;
              puVar22 = puVar22 + 2;
              uVar12 = iVar13 << (ulong)(*puVar1 & 0x1f) | uVar12;
            } while (uVar20 < puVar10[0xd]);
          }
          uVar5 = uVar12 & ~(-1 << (ulong)(uVar11 & 0x1f));
          uVar8 = param_4 - 1;
          if (uVar5 <= param_4 - 1) {
            uVar8 = uVar5;
          }
          plVar19 = (long *)(param_5 + (ulong)uVar8 * 0x18);
          lVar15 = *plVar19;
          uVar20 = (plVar19[1] - lVar15 >> 3) * 0x684bda13;
          local_70 = uVar12;
          if ((int)uVar20 != 0) {
            lVar21 = 0;
            do {
              this = (SetOrAddDensityProcessor<ChunkedBitSquare,false> *)(lVar15 + lVar21);
              if (*(long *)(this + 0x78) == 0) {
LAB_00830320:
                DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>::process
                          (this,(HelperSource *)&local_90);
              }
              else {
                if ((*(int *)(this + 0x80) == 2) ||
                   ((*(int *)(this + 0x80) == 0) != (*(uint *)(lVar15 + lVar21 + 0x84) != uVar5))) {
                  lVar3 = lVar15 + lVar21;
                  uVar8 = uVar12 >> (ulong)(*(uint *)(lVar3 + 0x88) & 0x1f) &
                          (-1 << (ulong)(*(uint *)(lVar3 + 0x8c) & 0x1f) ^ 0xffffffffU);
                  if ((int)uVar8 < *(int *)(lVar3 + 0x90)) {
                    cVar7 = *(char *)(lVar3 + 0x98);
joined_r0x00830254:
                    if (cVar7 == '\0') goto LAB_00830274;
                  }
                  else {
                    cVar7 = *(char *)(lVar3 + 0x98);
                    if (*(int *)(lVar3 + 0x94) < (int)uVar8) goto joined_r0x00830254;
                    if (cVar7 != '\0') goto LAB_00830274;
                  }
                  uVar6 = *(uint *)(lVar15 + lVar21 + 0x9c);
                  if ((uVar6 == 0) || ((uVar6 & uVar8) != 0)) {
                    if (*(long *)(lVar15 + lVar21 + 0xa8) == 0) goto LAB_00830320;
                    lVar3 = lVar15 + lVar21;
                    if ((*(int *)(lVar3 + 0xb0) != 2) &&
                       ((*(int *)(lVar3 + 0xb0) == 0) == (*(uint *)(lVar3 + 0xb4) != uVar5)))
                    goto LAB_00830274;
                    uVar8 = uVar12 >> (ulong)(*(uint *)(lVar3 + 0xb8) & 0x1f) &
                            (-1 << (ulong)(*(uint *)(lVar3 + 0xbc) & 0x1f) ^ 0xffffffffU);
                    lVar4 = lVar15 + lVar21;
                    if ((int)uVar8 < *(int *)(lVar3 + 0xc0)) {
                      cVar7 = *(char *)(lVar4 + 200);
joined_r0x00830300:
                      if (cVar7 == '\0') goto LAB_00830274;
                    }
                    else {
                      cVar7 = *(char *)(lVar4 + 200);
                      if (*(int *)(lVar4 + 0xc4) < (int)uVar8) goto joined_r0x00830300;
                      if (cVar7 != '\0') goto LAB_00830274;
                    }
                    uVar6 = *(uint *)(lVar15 + lVar21 + 0xcc);
                    if ((uVar6 == 0) || ((uVar6 & uVar8) != 0)) goto LAB_00830320;
                  }
                }
LAB_00830274:
                *(int *)(lVar15 + lVar21 + 4) = *(int *)(lVar15 + lVar21 + 4) + 1;
              }
              if ((uVar20 & 0xffffffff) * 0xd8 + -0xd8 == lVar21) break;
              lVar15 = *plVar19;
              lVar21 = lVar21 + 0xd8;
            } while( true );
          }
          uVar5 = local_70;
          puVar10 = local_80;
          if (uVar12 != local_70) {
            uVar8 = local_78 & 0x1f | (uStack_74 & 0x1f) << 5;
            uVar12 = (((uStack_74 >> 5) << (ulong)(*local_80 & 0x1f)) + (local_78 >> 5)) *
                     local_80[0xd];
            lVar21 = (ulong)uVar12 * 8;
            lVar15 = *(long *)(*(long *)(local_80 + 10) + lVar21);
            uVar16 = (**(code **)(lVar15 + 8))(lVar15,uVar8,0,local_80[0xf],local_70);
            *(undefined8 *)(*(long *)(puVar10 + 10) + lVar21) = uVar16;
            if (1 < puVar10[0xd]) {
              puVar22 = puVar10 + 0x11;
              uVar20 = 1;
              do {
                lVar21 = (ulong)(uVar12 + (int)uVar20) * 8;
                lVar15 = *(long *)(*(long *)(puVar10 + 10) + lVar21);
                uVar16 = (**(code **)(lVar15 + 8))
                                   (lVar15,uVar8,0,*puVar22,uVar5 >> (ulong)(puVar22[-1] & 0x1f));
                uVar20 = uVar20 + 1;
                puVar22 = puVar22 + 2;
                *(undefined8 *)(*(long *)(puVar10 + 10) + lVar21) = uVar16;
              } while (uVar20 < puVar10[0xd]);
            }
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 < *(uint *)(param_3 + 0x5c));
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(uint *)(param_3 + 0x4c));
  }
  if (param_4 != 0) {
    uVar20 = 0;
    do {
      plVar19 = (long *)(param_5 + uVar20 * 0x18);
      lVar15 = *plVar19;
      lVar21 = plVar19[1];
      if (lVar21 != lVar15) {
        uVar24 = 0;
        do {
          if (*(char *)(lVar15 + uVar24 * 0xd8 + 0x6c) != '\0') {
            lVar15 = lVar15 + uVar24 * 0xd8;
            DensityMap::markDensityRegionDirty
                      (*(DensityMap **)(lVar15 + 0x58),*(uint *)(param_3 + 0x50),
                       *(uint *)(param_3 + 0x48),*(uint *)(param_3 + 0x54),*(uint *)(param_3 + 0x4c)
                       ,*(uint *)(lVar15 + 0x24),*(uint *)(lVar15 + 0x28),*(uint *)(lVar15 + 0x70),
                       *(bool *)(lVar15 + 0x6d),true,true);
            lVar21 = plVar19[1];
            lVar15 = *plVar19;
          }
          uVar24 = (ulong)((int)uVar24 + 1);
          uVar17 = (lVar21 - lVar15 >> 3) * -0x7b425ed097b425ed;
        } while (uVar24 <= uVar17 && uVar17 - uVar24 != 0);
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != param_4);
  }
  if (*(long *)(lVar9 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return true;
}


