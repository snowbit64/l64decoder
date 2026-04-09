// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: execute
// Entry Point: 0076903c
// Size: 1100 bytes
// Signature: undefined __thiscall execute(DensityMapMultiModifierLua * this, MethodInvocation * param_1)


/* DensityMapMultiModifierLua::execute(MethodInvocation*) */

void __thiscall
DensityMapMultiModifierLua::execute(DensityMapMultiModifierLua *this,MethodInvocation *param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  ChunkedBitSquare *pCVar4;
  void *pvVar5;
  BitVector *pBVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  int iVar16;
  long lVar17;
  TypedModules **ppTVar18;
  TypedModules *pTVar19;
  long *plVar20;
  long lVar21;
  long **pplVar22;
  uint uVar23;
  void *pvVar24;
  int iVar25;
  int iVar26;
  ulong uVar27;
  uint local_64;
  
  lVar3 = *(long *)this;
  lVar17 = *(long *)(this + 8);
  if (lVar17 == lVar3) {
    iVar25 = 0;
    iVar16 = 0;
    local_64 = 0;
    iVar26 = 0;
  }
  else {
    uVar14 = 0;
    iVar26 = 0;
    iVar16 = 0;
    iVar25 = 0;
    local_64 = 0;
    do {
      lVar21 = lVar3 + uVar14 * 0x20;
      lVar8 = *(long *)(lVar21 + 8);
      if (*(long *)(lVar21 + 0x10) != lVar8) {
        uVar27 = 0;
        do {
          pplVar22 = (long **)(lVar8 + uVar27 * 0xb0);
          lVar3 = (**(code **)(**pplVar22 + 0x30))();
          lVar17 = lVar8 + uVar27 * 0xb0;
          if (lVar3 == 0) {
            ppTVar18 = (TypedModules **)(lVar17 + 0xa0);
            pTVar19 = *ppTVar18;
            if (pTVar19 == (TypedModules *)0x0) {
              pTVar19 = createModules<BitVector>(this,(DensityMapExecute *)pplVar22);
              *ppTVar18 = pTVar19;
            }
            pBVar6 = (BitVector *)(**(code **)(**pplVar22 + 0x38))();
            lVar8 = lVar8 + uVar27 * 0xb0;
            uVar1 = *(uint *)(lVar8 + 0xa8);
            plVar20 = (long *)0x0;
            if (*pplVar22 != (long *)0x0) {
              plVar20 = *pplVar22 + 0xb;
            }
            bVar2 = DensityMapModifier::
                    applyTypedModulesToShape<BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                              ((IDensityPixelSource *)plVar20,pBVar6,
                               (ParallelogramHelper *)(lVar8 + 8),uVar1,pTVar19,
                               *(IDensityPixelSource **)(lVar8 + 0x88),
                               *(IDensityPixelSource **)(lVar8 + 0x90));
            uVar23 = 0;
            if ((uVar1 != 0) && (bVar2)) {
              uVar9 = 0;
              uVar23 = 0;
              do {
                lVar3 = *(long *)(pTVar19 + uVar9 * 0x18);
                lVar17 = *(long *)((long)(pTVar19 + uVar9 * 0x18) + 8) - lVar3;
                if (lVar17 != 0) {
                  uVar11 = (lVar17 >> 3) * -0x7b425ed097b425ed;
                  uVar12 = 0;
                  do {
                    uVar13 = uVar12;
                    uVar12 = (ulong)((int)uVar13 + 1);
                    piVar15 = (int *)(lVar3 + uVar13 * 0xd8);
                    iVar25 = piVar15[2] + iVar25;
                    iVar26 = *piVar15 + iVar26;
                  } while (uVar12 <= uVar11 && uVar11 - uVar12 != 0);
                  uVar23 = *(uint *)(lVar3 + uVar13 * 0xd8 + 4);
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 != uVar1);
            }
            uVar1 = uVar23;
            if (uVar23 <= local_64) {
              uVar1 = local_64;
            }
            local_64 = uVar1;
            if (*param_1 != (MethodInvocation)0x0) {
              pTVar19 = *ppTVar18;
              if (pTVar19 != (TypedModules *)0x0) {
                plVar20 = (long *)(pTVar19 + -8);
                if (*plVar20 != 0) {
                  lVar3 = *plVar20 * 0x18;
                  do {
                    pvVar5 = *(void **)(pTVar19 + lVar3 + -0x18);
                    if (pvVar5 != (void *)0x0) {
                      *(void **)(pTVar19 + lVar3 + -0x10) = pvVar5;
                      operator_delete(pvVar5);
                    }
                    lVar3 = lVar3 + -0x18;
                  } while (lVar3 != 0);
                }
                goto LAB_007690c8;
              }
              goto LAB_007690d0;
            }
          }
          else {
            ppTVar18 = (TypedModules **)(lVar17 + 0x98);
            pTVar19 = *ppTVar18;
            if (pTVar19 == (TypedModules *)0x0) {
              pTVar19 = createModules<ChunkedBitSquare>(this,(DensityMapExecute *)pplVar22);
              *ppTVar18 = pTVar19;
            }
            pCVar4 = (ChunkedBitSquare *)(**(code **)(**pplVar22 + 0x30))();
            lVar8 = lVar8 + uVar27 * 0xb0;
            uVar1 = *(uint *)(lVar8 + 0xa8);
            plVar20 = (long *)0x0;
            if (*pplVar22 != (long *)0x0) {
              plVar20 = *pplVar22 + 0xb;
            }
            bVar2 = DensityMapModifier::
                    applyTypedModulesToShape<ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
                              ((IDensityPixelSource *)plVar20,pCVar4,
                               (ParallelogramHelper *)(lVar8 + 8),uVar1,pTVar19,
                               *(IDensityPixelSource **)(lVar8 + 0x88),
                               *(IDensityPixelSource **)(lVar8 + 0x90));
            uVar23 = 0;
            if ((uVar1 != 0) && (bVar2)) {
              uVar9 = 0;
              uVar23 = 0;
              do {
                lVar3 = *(long *)(pTVar19 + uVar9 * 0x18);
                lVar17 = *(long *)((long)(pTVar19 + uVar9 * 0x18) + 8) - lVar3;
                if (lVar17 != 0) {
                  uVar11 = (lVar17 >> 3) * -0x7b425ed097b425ed;
                  uVar12 = 0;
                  do {
                    uVar13 = uVar12;
                    uVar12 = (ulong)((int)uVar13 + 1);
                    piVar15 = (int *)(lVar3 + uVar13 * 0xd8);
                    iVar25 = piVar15[2] + iVar25;
                    iVar26 = *piVar15 + iVar26;
                  } while (uVar12 <= uVar11 && uVar11 - uVar12 != 0);
                  uVar23 = *(uint *)(lVar3 + uVar13 * 0xd8 + 4);
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 != uVar1);
            }
            uVar1 = uVar23;
            if (uVar23 <= local_64) {
              uVar1 = local_64;
            }
            local_64 = uVar1;
            if (*param_1 != (MethodInvocation)0x0) {
              pTVar19 = *ppTVar18;
              if (pTVar19 != (TypedModules *)0x0) {
                plVar20 = (long *)(pTVar19 + -8);
                if (*plVar20 != 0) {
                  lVar3 = *plVar20 * 0x18;
                  do {
                    pvVar5 = *(void **)(pTVar19 + lVar3 + -0x18);
                    if (pvVar5 != (void *)0x0) {
                      *(void **)(pTVar19 + lVar3 + -0x10) = pvVar5;
                      operator_delete(pvVar5);
                    }
                    lVar3 = lVar3 + -0x18;
                  } while (lVar3 != 0);
                }
LAB_007690c8:
                operator_delete__(plVar20);
              }
LAB_007690d0:
              *ppTVar18 = (TypedModules *)0x0;
            }
          }
          uVar27 = (ulong)((int)uVar27 + 1);
          lVar3 = *(long *)this;
          iVar16 = uVar23 + iVar16;
          lVar17 = lVar3 + uVar14 * 0x20;
          lVar8 = *(long *)(lVar17 + 8);
          uVar9 = (*(long *)(lVar17 + 0x10) - lVar8 >> 4) * 0x2e8ba2e8ba2e8ba3;
        } while (uVar27 <= uVar9 && uVar9 - uVar27 != 0);
        lVar17 = *(long *)(this + 8);
      }
      uVar14 = (ulong)((int)uVar14 + 1);
    } while (uVar14 < (ulong)(lVar17 - lVar3 >> 5));
  }
  *(int *)(param_1 + 0x100) = iVar26;
  *(int *)(param_1 + 0x110) = iVar25;
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(undefined4 *)(param_1 + 0x118) = 1;
  *(int *)(param_1 + 0x120) = iVar16;
  *(undefined4 *)(param_1 + 0x128) = 1;
  *(uint *)(param_1 + 0x130) = local_64;
  *(undefined4 *)(param_1 + 0x138) = 1;
  if (*param_1 != (MethodInvocation)0x0) {
    lVar3 = *(long *)this;
    lVar17 = *(long *)(this + 8);
    if (*(long *)(this + 8) != lVar3) {
      do {
        pvVar5 = *(void **)(lVar17 + -0x18);
        lVar21 = lVar17 + -0x20;
        if (pvVar5 != (void *)0x0) {
          pvVar7 = pvVar5;
          pvVar10 = *(void **)(lVar17 + -0x10);
          if (*(void **)(lVar17 + -0x10) != pvVar5) {
            do {
              pvVar7 = *(void **)((long)pvVar10 + -0x40);
              pvVar24 = (void *)((long)pvVar10 + -0xb0);
              if (pvVar7 != (void *)0x0) {
                *(void **)((long)pvVar10 + -0x38) = pvVar7;
                operator_delete(pvVar7);
              }
              pvVar10 = pvVar24;
            } while (pvVar24 != pvVar5);
            pvVar7 = *(void **)(lVar17 + -0x18);
          }
          *(void **)(lVar17 + -0x10) = pvVar5;
          operator_delete(pvVar7);
        }
        lVar17 = lVar21;
      } while (lVar21 != lVar3);
      *(long *)(this + 8) = lVar3;
    }
  }
  return;
}


