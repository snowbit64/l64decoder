// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: shiftGridCells
// Entry Point: 00a6fc04
// Size: 1240 bytes
// Signature: undefined __cdecl shiftGridCells(int param_1, int param_2, IRenderDevice * param_3)


/* LocalGeometryTransformGroup::shiftGridCells(int, int, IRenderDevice*) */

void LocalGeometryTransformGroup::shiftGridCells(int param_1,int param_2,IRenderDevice *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  GridCellData *pGVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  IRenderDevice *pIVar14;
  uint uVar15;
  undefined8 uVar16;
  ulong uVar17;
  uint uVar18;
  IRenderDevice *pIVar19;
  
  pGVar5 = (GridCellData *)(ulong)(uint)param_1;
  uVar2 = *(uint *)(pGVar5 + 400);
  uVar11 = (ulong)uVar2;
  pIVar14 = (IRenderDevice *)((ulong)param_3 & 0xffffffff);
  uVar12 = uVar2 - param_2;
  iVar13 = (int)param_3;
  if (((uVar12 != 0 && param_2 <= (int)uVar2) && (uVar15 = -uVar2, (int)uVar15 < iVar13)) &&
     ((int)uVar15 < param_2)) {
    uVar4 = uVar2 - iVar13;
    if (uVar4 != 0 && iVar13 <= (int)uVar2) {
      uVar6 = uVar11;
      if (param_2 < 1) {
        uVar6 = (ulong)uVar2;
        if ((param_2 < 0) && (uVar6 = uVar11, 0 < (int)uVar2)) {
          uVar18 = -param_2;
          uVar12 = 0;
          do {
            lVar8 = 0;
            do {
              uVar16 = *(undefined8 *)
                        (*(long *)(pGVar5 + 0x180) +
                        ((int)(uVar2 + param_2) + lVar8 + (long)(int)(uVar12 * (int)uVar6)) * 8);
              clearAndRelocateCell(pGVar5,(int)uVar16,uVar15,(IRenderDevice *)0x0);
              *(undefined8 *)(*(long *)(pGVar5 + 0x1b8) + lVar8 * 8) = uVar16;
              lVar8 = lVar8 + 1;
              uVar6 = (ulong)*(uint *)(pGVar5 + 400);
            } while ((int)(uVar2 + param_2) + lVar8 < (long)uVar11);
            if (uVar2 != uVar18 && (int)(uVar2 + param_2) < 0 == SBORROW4(uVar2,uVar18)) {
              uVar3 = uVar12 * *(uint *)(pGVar5 + 400);
              uVar6 = uVar11;
              do {
                uVar17 = uVar6 - 1;
                *(undefined8 *)
                 (*(long *)(pGVar5 + 0x180) +
                  ((-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3) - 8) +
                 uVar6 * 8) = *(undefined8 *)
                               (*(long *)(pGVar5 + 0x180) +
                               (long)(int)(param_2 + -1 + uVar3 + (int)uVar6) * 8);
                uVar6 = uVar17;
              } while ((long)(ulong)uVar18 < (long)uVar17);
              uVar6 = (ulong)*(uint *)(pGVar5 + 400);
            }
            uVar3 = (int)uVar6 * uVar12;
            lVar8 = 0;
            do {
              *(undefined8 *)
               (*(long *)(pGVar5 + 0x180) +
                (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3) + lVar8) =
                   *(undefined8 *)(*(long *)(pGVar5 + 0x1b8) + lVar8);
              lVar8 = lVar8 + 8;
            } while ((ulong)uVar18 * 8 - lVar8 != 0);
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar2);
        }
      }
      else if (0 < (int)uVar2) {
        uVar18 = 0;
        do {
          uVar17 = 0;
          do {
            uVar16 = *(undefined8 *)
                      (*(long *)(pGVar5 + 0x180) + (uVar17 + (long)(int)(uVar18 * (int)uVar6)) * 8);
            clearAndRelocateCell(pGVar5,(int)uVar16,uVar2,(IRenderDevice *)0x0);
            *(undefined8 *)(*(long *)(pGVar5 + 0x1b8) + uVar17 * 8) = uVar16;
            uVar17 = uVar17 + 1;
            uVar6 = (ulong)*(uint *)(pGVar5 + 400);
          } while ((uint)param_2 != uVar17);
          if (0 < (int)uVar12) {
            uVar3 = uVar18 * *(uint *)(pGVar5 + 400);
            uVar6 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
            iVar7 = param_2 + uVar3;
            uVar17 = (ulong)uVar12;
            do {
              uVar17 = uVar17 - 1;
              lVar8 = (long)iVar7;
              iVar7 = iVar7 + 1;
              *(undefined8 *)(*(long *)(pGVar5 + 0x180) + uVar6) =
                   *(undefined8 *)(*(long *)(pGVar5 + 0x180) + lVar8 * 8);
              uVar6 = uVar6 + 8;
            } while (uVar17 != 0);
            uVar6 = (ulong)*(uint *)(pGVar5 + 400);
          }
          lVar8 = 0;
          do {
            *(undefined8 *)
             (*(long *)(pGVar5 + 0x180) +
              (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar12 << 3) +
              (long)(int)((int)uVar6 * uVar18) * 8 + lVar8) =
                 *(undefined8 *)(*(long *)(pGVar5 + 0x1b8) + lVar8);
            lVar8 = lVar8 + 8;
          } while ((ulong)(uint)param_2 * 8 - lVar8 != 0);
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar2);
      }
      if (0 < iVar13) {
        if ((int)uVar2 < 1) {
          return;
        }
        lVar8 = 0;
        uVar17 = 0;
        do {
          pIVar19 = (IRenderDevice *)0x0;
          do {
            uVar16 = *(undefined8 *)
                      (*(long *)(pGVar5 + 0x180) + (uVar17 + (long)((int)uVar6 * (int)pIVar19)) * 8)
            ;
            clearAndRelocateCell(pGVar5,(int)uVar16,0,(IRenderDevice *)(ulong)uVar2);
            *(undefined8 *)(*(long *)(pGVar5 + 0x1b8) + (long)pIVar19 * 8) = uVar16;
            pIVar19 = pIVar19 + 1;
            uVar12 = *(uint *)(pGVar5 + 400);
            uVar6 = (ulong)uVar12;
          } while (pIVar14 != pIVar19);
          if (0 < (int)uVar4) {
            uVar6 = (ulong)uVar4;
            lVar9 = lVar8;
            do {
              uVar6 = uVar6 - 1;
              *(undefined8 *)(*(long *)(pGVar5 + 0x180) + lVar9) =
                   *(undefined8 *)
                    (*(long *)(pGVar5 + 0x180) + (long)pIVar14 * 8 * (long)(int)uVar12 + lVar9);
              lVar9 = lVar9 + (long)(int)uVar12 * 8;
            } while (uVar6 != 0);
            uVar6 = (ulong)*(uint *)(pGVar5 + 400);
          }
          lVar9 = 0;
          lVar10 = (uVar17 + (long)(int)uVar4 * (long)(int)uVar6) * 8;
          do {
            puVar1 = (undefined8 *)(*(long *)(pGVar5 + 0x1b8) + lVar9);
            lVar9 = lVar9 + 8;
            *(undefined8 *)(*(long *)(pGVar5 + 0x180) + lVar10) = *puVar1;
            lVar10 = lVar10 + (-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3);
          } while ((long)pIVar14 * 8 - lVar9 != 0);
          uVar17 = uVar17 + 1;
          lVar8 = lVar8 + 8;
        } while (uVar17 != uVar11);
        return;
      }
      if (-1 < iVar13) {
        return;
      }
      if ((int)uVar2 < 1) {
        return;
      }
      uVar4 = -iVar13;
      uVar12 = uVar4;
      if (uVar4 == 1 || -1 < iVar13) {
        uVar12 = 1;
      }
      lVar8 = 0;
      uVar17 = 0;
      do {
        lVar9 = 0;
        do {
          uVar16 = *(undefined8 *)
                    (*(long *)(pGVar5 + 0x180) +
                    (uVar17 + (long)(int)((int)uVar6 * (uVar2 + iVar13 + (int)lVar9))) * 8);
          clearAndRelocateCell(pGVar5,(int)uVar16,0,(IRenderDevice *)(ulong)uVar15);
          *(undefined8 *)(*(long *)(pGVar5 + 0x1b8) + lVar9 * 8) = uVar16;
          lVar9 = lVar9 + 1;
          uVar6 = (ulong)*(uint *)(pGVar5 + 400);
        } while ((int)(uVar2 + iVar13) + lVar9 < (long)uVar11);
        if ((int)uVar4 < (int)uVar2) {
          lVar10 = (long)(int)*(uint *)(pGVar5 + 400);
          lVar9 = lVar8;
          uVar6 = uVar11;
          do {
            uVar6 = uVar6 - 1;
            *(undefined8 *)(*(long *)(pGVar5 + 0x180) + (uVar11 * 8 + -8) * lVar10 + lVar9) =
                 *(undefined8 *)
                  (*(long *)(pGVar5 + 0x180) + ((uVar11 + (long)iVar13) * 8 + -8) * lVar10 + lVar9);
            lVar9 = lVar9 + lVar10 * -8;
          } while ((long)(int)uVar4 < (long)uVar6);
          uVar6 = (ulong)*(uint *)(pGVar5 + 400);
        }
        lVar9 = 0;
        lVar10 = lVar8;
        do {
          puVar1 = (undefined8 *)(*(long *)(pGVar5 + 0x1b8) + lVar9);
          lVar9 = lVar9 + 8;
          *(undefined8 *)(*(long *)(pGVar5 + 0x180) + lVar10) = *puVar1;
          lVar10 = lVar10 + (-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3);
        } while ((ulong)uVar12 * 8 - lVar9 != 0);
        uVar17 = uVar17 + 1;
        lVar8 = lVar8 + 8;
      } while (uVar17 != uVar11);
      return;
    }
  }
  if (0 < (int)uVar2) {
    uVar12 = 0;
    do {
      uVar15 = 0;
      do {
        clearAndRelocateCell
                  (pGVar5,(int)*(undefined8 *)
                                (*(long *)(pGVar5 + 0x180) +
                                (long)(int)(uVar12 + *(int *)(pGVar5 + 400) * uVar15) * 8),param_2,
                   pIVar14);
        uVar15 = uVar15 + 1;
      } while (uVar2 != uVar15);
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar2);
  }
  return;
}


