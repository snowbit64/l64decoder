// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkTypedModuleMasks<BitVector,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
// Entry Point: 00833784
// Size: 816 bytes
// Signature: bool __cdecl checkTypedModuleMasks<BitVector,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>(TypedModuleWithMasks * param_1, IDensityPixelSource * param_2, uint param_3, uint param_4, HelperSource * param_5, IDensityPixelSource * param_6, uint param_7, uint param_8, uint param_9, uint param_10, uint param_11)


/* bool DensityMapModifier::checkTypedModuleMasks<BitVector,
   DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare, false>
   >(DensityMapModifier::TypedModuleWithMasks<DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,
   false> > const&, IDensityPixelSource const*, unsigned int, unsigned int,
   DensityMapAccessUtil::HelperSource<BitVector>&, IDensityPixelSource const*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int) */

bool DensityMapModifier::
     checkTypedModuleMasks<BitVector,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
               (TypedModuleWithMasks *param_1,IDensityPixelSource *param_2,uint param_3,uint param_4
               ,HelperSource *param_5,IDensityPixelSource *param_6,uint param_7,uint param_8,
               uint param_9,uint param_10,uint param_11)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  TypedModuleWithMasks TVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  IDensityPixelSource *pIVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  
  pIVar19 = *(IDensityPixelSource **)(param_1 + 0x78);
  if (pIVar19 == (IDensityPixelSource *)0x0) {
LAB_00833a8c:
    uVar16 = 1;
    goto LAB_00833a90;
  }
  bVar15 = pIVar19 == param_2;
  if (bVar15) {
    if ((*(int *)(param_1 + 0x80) == 2) ||
       ((*(int *)(param_1 + 0x80) == 0) != (*(uint *)(param_1 + 0x84) != param_3))) {
      uVar16 = param_4 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
               (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
      if ((int)uVar16 < *(int *)(param_1 + 0x90)) {
        TVar12 = param_1[0x98];
joined_r0x00833890:
        if (TVar12 == (TypedModuleWithMasks)0x0) goto LAB_00833a60;
      }
      else {
        TVar12 = param_1[0x98];
        if (*(int *)(param_1 + 0x94) < (int)uVar16) goto joined_r0x00833890;
        if (TVar12 != (TypedModuleWithMasks)0x0) goto LAB_00833a60;
      }
      if ((*(uint *)(param_1 + 0x9c) != 0) &&
         (uVar16 = *(uint *)(param_1 + 0x9c) & uVar16, uVar16 == 0)) goto LAB_00833a90;
      if (*(IDensityPixelSource **)(param_1 + 0xa8) != param_2) goto LAB_008337c0;
      if (pIVar19 != param_2) goto LAB_008338c4;
      goto LAB_00833a8c;
    }
LAB_00833a60:
    uVar16 = 0;
  }
  else {
    if (*(IDensityPixelSource **)(param_1 + 0xa8) != param_2) {
LAB_008337c0:
      if ((*(int *)(param_1 + 0xb0) != 2) &&
         ((*(int *)(param_1 + 0xb0) == 0) == (*(uint *)(param_1 + 0xb4) != param_3)))
      goto LAB_00833a60;
      uVar16 = param_4 >> (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f) &
               (-1 << (ulong)(*(uint *)(param_1 + 0xbc) & 0x1f) ^ 0xffffffffU);
      if ((int)uVar16 < *(int *)(param_1 + 0xc0)) {
        TVar12 = param_1[200];
joined_r0x00833878:
        if (TVar12 == (TypedModuleWithMasks)0x0) goto LAB_00833a60;
      }
      else {
        TVar12 = param_1[200];
        if (*(int *)(param_1 + 0xc4) < (int)uVar16) goto joined_r0x00833878;
        if (TVar12 != (TypedModuleWithMasks)0x0) goto LAB_00833a60;
      }
      uVar20 = (uint)(*(uint *)(param_1 + 0xcc) != 0 && (*(uint *)(param_1 + 0xcc) & uVar16) == 0);
      uVar16 = uVar20 ^ 1;
      if ((uVar20 != 0) || (pIVar19 == param_2)) goto LAB_00833a90;
    }
LAB_008338c4:
    uVar16 = param_11;
    if (param_11 != 0) {
      uVar20 = 0;
      uVar10 = *(uint *)(param_5 + 8);
      uVar21 = uVar10 * (param_8 + *(int *)param_5 * param_9);
      do {
        bVar14 = bVar15;
        if (param_10 != 0) {
          uVar4 = *(uint *)(param_1 + 0x88);
          uVar7 = *(uint *)(param_1 + 0x8c);
          iVar5 = *(int *)(param_1 + 0x80);
          uVar8 = *(uint *)(param_1 + 0x84);
          iVar6 = *(int *)(param_1 + 0x90);
          iVar9 = *(int *)(param_1 + 0x94);
          TVar12 = param_1[0x98];
          uVar11 = *(uint *)(param_1 + 0x9c);
          lVar22 = **(long **)(param_5 + 0x10);
          uVar1 = param_8;
          uVar3 = uVar21;
          uVar13 = param_10;
          do {
            uVar18 = (ulong)(uVar3 >> 3) & 0xffff;
            *(uint *)(param_5 + 0x18) = uVar1;
            *(uint *)(param_5 + 0x1c) = uVar20 + param_9;
            lVar17 = *(long *)(lVar22 + (ulong)(uVar3 >> 0x13) * 8);
            if ((uint)uVar18 < 0xfffd) {
              uVar16 = *(uint *)(lVar17 + uVar18);
            }
            else {
              uVar16 = (uVar3 >> 3) + 1;
              uVar2 = (uVar3 >> 3) + 2;
              uVar16 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar22 + (ulong)(uVar2 >> 0x10) * 8) +
                                       ((ulong)uVar2 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar22 + (ulong)(uVar16 >> 0x10) * 8) +
                                                ((ulong)uVar16 & 0xffff)),
                                               *(undefined *)(lVar17 + uVar18)));
            }
            uVar16 = uVar16 >> (ulong)(uVar3 & 7) & ~(-1 << (ulong)(uVar10 & 0x1f)) & 0xffffU;
            *(uint *)(param_5 + 0x20) = uVar16;
            if (bVar15) goto LAB_00833a8c;
            if ((iVar5 == 2) || ((iVar5 == 0) != (uVar8 != (uVar16 & param_7)))) {
              uVar2 = uVar16 >> (ulong)(uVar4 & 0x1f) & ~(-1 << (ulong)(uVar7 & 0x1f));
              if (((int)uVar2 < iVar6) || (iVar9 < (int)uVar2)) {
                if (TVar12 != (TypedModuleWithMasks)0x0) goto LAB_00833a20;
              }
              else if (TVar12 == (TypedModuleWithMasks)0x0) {
LAB_00833a20:
                uVar16 = 1;
                if ((uVar11 == 0) || ((uVar11 & uVar2) != 0)) goto LAB_00833a90;
              }
            }
            bVar15 = false;
            uVar13 = uVar13 - 1;
            uVar3 = uVar3 + uVar10;
            uVar1 = uVar1 + 1;
            bVar14 = false;
          } while (uVar13 != 0);
        }
        bVar15 = bVar14;
        uVar16 = 0;
        uVar20 = uVar20 + 1;
        uVar21 = uVar21 + *(int *)param_5 * uVar10;
      } while (uVar20 != param_11);
    }
  }
LAB_00833a90:
  return SUB41(uVar16,0);
}


