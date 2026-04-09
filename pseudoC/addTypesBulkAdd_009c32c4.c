// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTypesBulkAdd
// Entry Point: 009c32c4
// Size: 292 bytes
// Signature: undefined addTypesBulkAdd(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementCacheManager::addTypesBulkAdd() */

void ProceduralPlacementCacheManager::addTypesBulkAdd(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  long in_x0;
  long lVar6;
  long **pplVar7;
  int *piVar8;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long **pplVar14;
  int *piVar15;
  int *piVar9;
  
  pplVar14 = *(long ***)(in_x0 + 8);
  do {
    if (pplVar14 == (long **)(in_x0 + 0x10)) {
      return;
    }
    plVar13 = pplVar14[7];
    piVar15 = (int *)plVar13[2];
    piVar3 = (int *)plVar13[3];
    if (piVar15 != piVar3) {
      lVar6 = plVar13[1];
      iVar4 = *(int *)(plVar13 + 8);
      uVar10 = (long)piVar3 + (-8 - (long)piVar15);
      piVar8 = piVar15;
      if (uVar10 < 8) {
LAB_009c335c:
        do {
          piVar9 = piVar8 + 2;
          *(undefined4 *)(lVar6 + (ulong)(uint)(*piVar8 + piVar8[1] * iVar4) * 4) = 0;
          piVar8 = piVar9;
        } while (piVar9 != piVar3);
      }
      else {
        uVar10 = (uVar10 >> 3) + 1;
        uVar11 = uVar10 & 0x3ffffffffffffffe;
        piVar8 = piVar15 + 2;
        uVar12 = uVar11;
        do {
          iVar1 = *piVar8;
          iVar2 = piVar8[1];
          uVar12 = uVar12 - 2;
          *(undefined4 *)(lVar6 + (ulong)(uint)(piVar8[-2] + piVar8[-1] * iVar4) * 4) = 0;
          *(undefined4 *)(lVar6 + (ulong)(uint)(iVar1 + iVar2 * iVar4) * 4) = 0;
          piVar8 = piVar8 + 4;
        } while (uVar12 != 0);
        piVar8 = piVar15 + uVar11 * 2;
        if (uVar10 != uVar11) goto LAB_009c335c;
      }
      do {
        piVar8 = piVar15 + 2;
        DistanceMatrixTypeField::addPoint((DistanceMatrixTypeField *)plVar13,*piVar15,piVar15[1]);
        piVar15 = piVar8;
      } while (piVar8 != piVar3);
      piVar15 = (int *)plVar13[2];
    }
    pplVar7 = (long **)pplVar14[1];
    plVar13[3] = (long)piVar15;
    if (pplVar7 == (long **)0x0) {
      pplVar7 = pplVar14 + 2;
      bVar5 = (long **)**pplVar7 != pplVar14;
      pplVar14 = (long **)*pplVar7;
      if (bVar5) {
        do {
          plVar13 = *pplVar7;
          pplVar7 = (long **)(plVar13 + 2);
          pplVar14 = (long **)*pplVar7;
        } while (*pplVar14 != plVar13);
      }
    }
    else {
      do {
        pplVar14 = pplVar7;
        pplVar7 = (long **)*pplVar14;
      } while (*pplVar14 != (long *)0x0);
    }
  } while( true );
}


