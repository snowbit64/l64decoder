// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkTypedModuleMasks2<BitVector,BitVector,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
// Entry Point: 00840aa4
// Size: 1328 bytes
// Signature: bool __cdecl checkTypedModuleMasks2<BitVector,BitVector,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>(TypedModuleWithMasks * param_1, IDensityPixelSource * param_2, uint param_3, uint param_4, HelperSource * param_5, IDensityPixelSource * param_6, uint param_7, uint param_8, uint param_9, uint param_10, uint param_11, HelperSource * param_12, IDensityPixelSource * param_13, uint param_14, uint param_15, uint param_16, uint param_17, uint param_18)


/* bool DensityMapModifier::checkTypedModuleMasks2<BitVector, BitVector,
   DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >(DensityMapModifier::TypedModuleWithMasks<DensityMapOperations::SetOrAddDensityProcessor<BitVector,
   false> > const&, IDensityPixelSource const*, unsigned int, unsigned int,
   DensityMapAccessUtil::HelperSource<BitVector>&, IDensityPixelSource const*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int,
   DensityMapAccessUtil::HelperSource<BitVector>&, IDensityPixelSource const*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int) */

bool DensityMapModifier::
     checkTypedModuleMasks2<BitVector,BitVector,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
               (TypedModuleWithMasks *param_1,IDensityPixelSource *param_2,uint param_3,uint param_4
               ,HelperSource *param_5,IDensityPixelSource *param_6,uint param_7,uint param_8,
               uint param_9,uint param_10,uint param_11,HelperSource *param_12,
               IDensityPixelSource *param_13,uint param_14,uint param_15,uint param_16,uint param_17
               ,uint param_18)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  TypedModuleWithMasks TVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  IDensityPixelSource *pIVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  IDensityPixelSource *local_70;
  
  pIVar19 = *(IDensityPixelSource **)(param_1 + 0x78);
  if (pIVar19 == (IDensityPixelSource *)0x0) {
LAB_00840fac:
    uVar16 = 1;
    goto LAB_00840fb0;
  }
  bVar13 = pIVar19 == param_2;
  if (bVar13) {
    if ((*(int *)(param_1 + 0x80) == 2) ||
       ((*(int *)(param_1 + 0x80) == 0) != (*(uint *)(param_1 + 0x84) != param_3))) {
      uVar16 = param_4 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
               (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
      if ((int)uVar16 < *(int *)(param_1 + 0x90)) {
        TVar11 = param_1[0x98];
joined_r0x00840bb8:
        if (TVar11 == (TypedModuleWithMasks)0x0) goto LAB_00840f78;
      }
      else {
        TVar11 = param_1[0x98];
        if (*(int *)(param_1 + 0x94) < (int)uVar16) goto joined_r0x00840bb8;
        if (TVar11 != (TypedModuleWithMasks)0x0) goto LAB_00840f78;
      }
      if ((*(uint *)(param_1 + 0x9c) != 0) &&
         (uVar16 = *(uint *)(param_1 + 0x9c) & uVar16, uVar16 == 0)) goto LAB_00840fb0;
      local_70 = *(IDensityPixelSource **)(param_1 + 0xa8);
      if (local_70 != param_2) goto LAB_00840ae8;
      if (pIVar19 != param_2) goto LAB_00840bec;
      goto LAB_00840fac;
    }
  }
  else {
    local_70 = *(IDensityPixelSource **)(param_1 + 0xa8);
    if (local_70 != param_2) {
LAB_00840ae8:
      if ((*(int *)(param_1 + 0xb0) != 2) &&
         ((*(int *)(param_1 + 0xb0) == 0) == (*(uint *)(param_1 + 0xb4) != param_3)))
      goto LAB_00840f78;
      uVar16 = param_4 >> (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f) &
               (-1 << (ulong)(*(uint *)(param_1 + 0xbc) & 0x1f) ^ 0xffffffffU);
      if ((int)uVar16 < *(int *)(param_1 + 0xc0)) {
        TVar11 = param_1[200];
joined_r0x00840ba0:
        if (TVar11 == (TypedModuleWithMasks)0x0) goto LAB_00840f78;
      }
      else {
        TVar11 = param_1[200];
        if (*(int *)(param_1 + 0xc4) < (int)uVar16) goto joined_r0x00840ba0;
        if (TVar11 != (TypedModuleWithMasks)0x0) goto LAB_00840f78;
      }
      uVar21 = (uint)(*(uint *)(param_1 + 0xcc) != 0 && (*(uint *)(param_1 + 0xcc) & uVar16) == 0);
      uVar16 = uVar21 ^ 1;
      if ((uVar21 != 0) || (pIVar19 == param_2)) goto LAB_00840fb0;
    }
LAB_00840bec:
    if (((pIVar19 == param_6) || (local_70 == param_6)) && (param_11 != 0)) {
      uVar21 = 0;
      uVar9 = *(uint *)(param_5 + 8);
      uVar14 = uVar9 * (param_8 + *(int *)param_5 * param_9);
      do {
        bVar12 = bVar13;
        if (param_10 != 0) {
          uVar3 = *(uint *)(param_1 + 0x88);
          uVar6 = *(uint *)(param_1 + 0x8c);
          iVar4 = *(int *)(param_1 + 0x80);
          uVar7 = *(uint *)(param_1 + 0x84);
          iVar5 = *(int *)(param_1 + 0x90);
          iVar8 = *(int *)(param_1 + 0x94);
          TVar11 = param_1[0x98];
          uVar10 = *(uint *)(param_1 + 0x9c);
          lVar22 = **(long **)(param_5 + 0x10);
          uVar18 = param_10;
          uVar15 = param_8;
          uVar2 = uVar14;
          do {
            uVar20 = (ulong)(uVar2 >> 3) & 0xffff;
            *(uint *)(param_5 + 0x18) = uVar15;
            *(uint *)(param_5 + 0x1c) = uVar21 + param_9;
            lVar17 = *(long *)(lVar22 + (ulong)(uVar2 >> 0x13) * 8);
            if ((uint)uVar20 < 0xfffd) {
              uVar16 = *(uint *)(lVar17 + uVar20);
            }
            else {
              uVar16 = (uVar2 >> 3) + 1;
              uVar1 = (uVar2 >> 3) + 2;
              uVar16 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar22 + (ulong)(uVar1 >> 0x10) * 8) +
                                       ((ulong)uVar1 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar22 + (ulong)(uVar16 >> 0x10) * 8) +
                                                ((ulong)uVar16 & 0xffff)),
                                               *(undefined *)(lVar17 + uVar20)));
            }
            uVar16 = uVar16 >> (ulong)(uVar2 & 7) & ~(-1 << (ulong)(uVar9 & 0x1f)) & 0xffffU;
            *(uint *)(param_5 + 0x20) = uVar16;
            if ((bool)(bVar13 | pIVar19 != param_6)) {
              if (bVar13) goto LAB_00840fac;
            }
            else if ((iVar4 == 2) || ((iVar4 == 0) != (uVar7 != (uVar16 & param_7)))) {
              uVar1 = uVar16 >> (ulong)(uVar3 & 0x1f) & ~(-1 << (ulong)(uVar6 & 0x1f));
              if (((int)uVar1 < iVar5) || (iVar8 < (int)uVar1)) {
                if (TVar11 != (TypedModuleWithMasks)0x0) goto LAB_00840e0c;
              }
              else if (TVar11 == (TypedModuleWithMasks)0x0) {
LAB_00840e0c:
                uVar16 = 1;
                if ((uVar10 == 0) || ((uVar10 & uVar1) != 0)) goto LAB_00840fb0;
              }
            }
            bVar13 = false;
            uVar18 = uVar18 - 1;
            uVar2 = uVar2 + uVar9;
            uVar15 = uVar15 + 1;
            bVar12 = false;
          } while (uVar18 != 0);
        }
        bVar13 = bVar12;
        uVar21 = uVar21 + 1;
        uVar14 = uVar14 + *(int *)param_5 * uVar9;
      } while (uVar21 != param_11);
    }
    if ((pIVar19 == param_13) || (local_70 == param_13)) {
      uVar16 = param_11;
      if (param_11 != 0) {
        uVar21 = 0;
        uVar9 = *(uint *)(param_12 + 8);
        uVar14 = uVar9 * (param_8 + *(int *)param_12 * param_9);
        do {
          bVar12 = bVar13;
          if (param_10 != 0) {
            uVar3 = *(uint *)(param_1 + 0x88);
            uVar6 = *(uint *)(param_1 + 0x8c);
            iVar4 = *(int *)(param_1 + 0x80);
            uVar7 = *(uint *)(param_1 + 0x84);
            iVar5 = *(int *)(param_1 + 0x90);
            iVar8 = *(int *)(param_1 + 0x94);
            TVar11 = param_1[0x98];
            uVar10 = *(uint *)(param_1 + 0x9c);
            lVar22 = **(long **)(param_12 + 0x10);
            uVar18 = param_10;
            uVar15 = param_8;
            uVar2 = uVar14;
            do {
              uVar20 = (ulong)(uVar2 >> 3) & 0xffff;
              *(uint *)(param_12 + 0x18) = uVar15;
              *(uint *)(param_12 + 0x1c) = uVar21 + param_9;
              lVar17 = *(long *)(lVar22 + (ulong)(uVar2 >> 0x13) * 8);
              if ((uint)uVar20 < 0xfffd) {
                uVar16 = *(uint *)(lVar17 + uVar20);
              }
              else {
                uVar16 = (uVar2 >> 3) + 1;
                uVar1 = (uVar2 >> 3) + 2;
                uVar16 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar22 + (ulong)(uVar1 >> 0x10) * 8) +
                                         ((ulong)uVar1 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar22 + (ulong)(uVar16 >> 0x10) * 8) +
                                                  ((ulong)uVar16 & 0xffff)),
                                                 *(undefined *)(lVar17 + uVar20)));
              }
              uVar16 = uVar16 >> (ulong)(uVar2 & 7) & ~(-1 << (ulong)(uVar9 & 0x1f)) & 0xffffU;
              *(uint *)(param_12 + 0x20) = uVar16;
              if ((bool)(bVar13 | pIVar19 != param_13)) {
                if (bVar13) goto LAB_00840fac;
              }
              else if ((iVar4 == 2) || ((iVar4 == 0) != (uVar7 != (uVar16 & param_14)))) {
                uVar1 = uVar16 >> (ulong)(uVar3 & 0x1f) & ~(-1 << (ulong)(uVar6 & 0x1f));
                if (((int)uVar1 < iVar5) || (iVar8 < (int)uVar1)) {
                  if (TVar11 != (TypedModuleWithMasks)0x0) goto LAB_00840f58;
                }
                else if (TVar11 == (TypedModuleWithMasks)0x0) {
LAB_00840f58:
                  uVar16 = 1;
                  if ((uVar10 == 0) || ((uVar10 & uVar1) != 0)) goto LAB_00840fb0;
                }
              }
              bVar13 = false;
              uVar18 = uVar18 - 1;
              uVar2 = uVar2 + uVar9;
              uVar15 = uVar15 + 1;
              bVar12 = false;
            } while (uVar18 != 0);
          }
          bVar13 = bVar12;
          uVar16 = 0;
          uVar21 = uVar21 + 1;
          uVar14 = uVar14 + *(int *)param_12 * uVar9;
        } while (uVar21 != param_11);
      }
      goto LAB_00840fb0;
    }
  }
LAB_00840f78:
  uVar16 = 0;
LAB_00840fb0:
  return SUB41(uVar16,0);
}


