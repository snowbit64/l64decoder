// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mergeProjection
// Entry Point: 00f9ff0c
// Size: 1368 bytes
// Signature: undefined __thiscall mergeProjection(btConvexHullInternal * this, IntermediateHull * param_1, IntermediateHull * param_2, Vertex * * param_3, Vertex * * param_4)


/* btConvexHullInternal::mergeProjection(btConvexHullInternal::IntermediateHull&,
   btConvexHullInternal::IntermediateHull&, btConvexHullInternal::Vertex*&,
   btConvexHullInternal::Vertex*&) */

undefined8 __thiscall
btConvexHullInternal::mergeProjection
          (btConvexHullInternal *this,IntermediateHull *param_1,IntermediateHull *param_2,
          Vertex **param_3,Vertex **param_4)

{
  bool bVar1;
  long **pplVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long **pplVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  long **pplVar14;
  Vertex **ppVVar15;
  Vertex **ppVVar16;
  Vertex *pVVar17;
  Vertex **ppVVar18;
  Vertex **ppVVar19;
  long **pplVar20;
  int iVar21;
  int iVar22;
  Vertex **ppVVar23;
  long **pplVar24;
  int iVar25;
  int iVar26;
  
  ppVVar15 = *(Vertex ***)(param_2 + 0x10);
  pVVar17 = *(Vertex **)(param_1 + 0x18);
  if ((*(int *)(pVVar17 + 0x68) == *(int *)(ppVVar15 + 0xd)) &&
     (*(int *)(pVVar17 + 0x6c) == *(int *)((long)ppVVar15 + 0x6c))) {
    ppVVar16 = (Vertex **)ppVVar15[1];
    if (ppVVar16 == ppVVar15) {
      *param_3 = pVVar17;
      if (ppVVar15[2] != (Vertex *)0x0) {
        ppVVar15 = *(Vertex ***)(ppVVar15[2] + 0x18);
      }
      uVar11 = 0;
      goto LAB_00fa02a4;
    }
    ppVVar19 = *(Vertex ***)param_2;
    ppVVar18 = (Vertex **)*ppVVar15;
    *ppVVar16 = (Vertex *)ppVVar18;
    ppVVar18[1] = (Vertex *)ppVVar16;
    if (ppVVar15 == ppVVar19) {
      ppVVar19 = ppVVar18;
      if ((*(int *)(ppVVar16 + 0xd) <= *(int *)(ppVVar18 + 0xd)) &&
         ((*(int *)(ppVVar18 + 0xd) != *(int *)(ppVVar16 + 0xd) ||
          (*(int *)((long)ppVVar16 + 0x6c) <= *(int *)((long)ppVVar18 + 0x6c))))) {
        ppVVar19 = ppVVar16;
      }
      *(Vertex ***)param_2 = ppVVar19;
    }
    if (ppVVar15 == *(Vertex ***)(param_2 + 8)) {
      if ((*(int *)(ppVVar18 + 0xd) <= *(int *)(ppVVar16 + 0xd)) &&
         ((*(int *)(ppVVar18 + 0xd) != *(int *)(ppVVar16 + 0xd) ||
          (*(int *)((long)ppVVar18 + 0x6c) <= *(int *)((long)ppVVar16 + 0x6c))))) {
        ppVVar18 = ppVVar16;
      }
      *(Vertex ***)(param_2 + 8) = ppVVar18;
    }
  }
  pplVar2 = *(long ***)param_2;
  ppVVar16 = *(Vertex ***)(param_2 + 8);
  pplVar24 = *(long ***)param_1;
  ppVVar15 = *(Vertex ***)(param_1 + 8);
  iVar3 = *(int *)(ppVVar16 + 0xd);
  iVar4 = *(int *)(ppVVar15 + 0xd);
  iVar21 = iVar3 - iVar4;
  ppVVar18 = ppVVar15;
  if (0 < iVar21) {
    ppVVar19 = ppVVar16;
    iVar22 = *(int *)((long)ppVVar16 + 0x6c);
    do {
      ppVVar15 = ppVVar19;
      iVar13 = *(int *)((long)ppVVar18 + 0x6c);
      iVar8 = iVar21;
      while( true ) {
        ppVVar19 = (Vertex **)ppVVar18[1];
        iVar12 = iVar22 - iVar13;
        if (ppVVar19 == ppVVar18) break;
        iVar13 = *(int *)((long)ppVVar19 + 0x6c) - iVar13;
        if (0 < iVar13) break;
        iVar21 = *(int *)(ppVVar19 + 0xd) - *(int *)(ppVVar18 + 0xd);
        if ((iVar21 != 0) && ((-1 < iVar21 || (iVar21 * iVar12 < iVar13 * iVar8)))) break;
        iVar8 = *(int *)(ppVVar15 + 0xd) - *(int *)(ppVVar19 + 0xd);
        ppVVar18 = ppVVar19;
        iVar13 = *(int *)((long)ppVVar19 + 0x6c);
      }
      ppVVar19 = (Vertex **)ppVVar15[1];
      if (ppVVar19 == ppVVar15) goto LAB_00fa0124;
      iVar21 = *(int *)(ppVVar19 + 0xd) - *(int *)(ppVVar18 + 0xd);
      if (iVar21 < 1) goto LAB_00fa0124;
      iVar13 = *(int *)((long)ppVVar19 + 0x6c);
      iVar26 = iVar13 - iVar22;
      if ((-1 < iVar26) ||
         ((iVar25 = *(int *)(ppVVar19 + 0xd) - *(int *)(ppVVar15 + 0xd), iVar22 = iVar13,
          iVar25 != 0 && ((-1 < iVar25 || (iVar25 * iVar12 <= iVar26 * iVar8))))))
      goto LAB_00fa0124;
    } while( true );
  }
  if (iVar21 < 0) {
    iVar22 = *(int *)((long)ppVVar15 + 0x6c);
    ppVVar15 = ppVVar16;
    iVar13 = *(int *)((long)ppVVar16 + 0x6c);
    iVar8 = iVar3;
LAB_00fa02cc:
    ppVVar23 = (Vertex **)*ppVVar15;
    ppVVar19 = ppVVar18;
    iVar12 = iVar8;
    do {
      iVar25 = iVar21;
      ppVVar18 = ppVVar19;
      iVar26 = iVar13 - iVar22;
      if (ppVVar23 != ppVVar15) {
        iVar21 = *(int *)((long)ppVVar23 + 0x6c) - iVar13;
        if (-1 < iVar21) {
          iVar8 = *(int *)(ppVVar23 + 0xd);
          iVar12 = iVar8 - iVar12;
          if ((iVar12 == 0) || ((iVar12 < 0 && (iVar21 * iVar25 <= iVar12 * iVar26))))
          goto LAB_00fa036c;
        }
      }
      ppVVar19 = (Vertex **)*ppVVar18;
      if (ppVVar19 == ppVVar18) goto LAB_00fa0124;
      iVar12 = *(int *)(ppVVar15 + 0xd);
      iVar21 = iVar12 - *(int *)(ppVVar19 + 0xd);
      if (-1 < iVar21) goto LAB_00fa0124;
      iVar8 = *(int *)((long)ppVVar19 + 0x6c);
      iVar5 = iVar8 - iVar22;
      if ((iVar5 < 1) ||
         ((iVar9 = *(int *)(ppVVar19 + 0xd) - *(int *)(ppVVar18 + 0xd), iVar22 = iVar8, iVar9 != 0
          && ((-1 < iVar9 || (iVar9 * iVar26 <= iVar5 * iVar25)))))) goto LAB_00fa0124;
    } while( true );
  }
  ppVVar19 = ppVVar15;
  iVar21 = *(int *)((long)ppVVar15 + 0x6c);
  do {
    ppVVar18 = ppVVar19;
    ppVVar19 = (Vertex **)ppVVar18[1];
    if ((ppVVar19 == ppVVar15) || (*(int *)(ppVVar19 + 0xd) != iVar4)) break;
    bVar1 = *(int *)((long)ppVVar19 + 0x6c) <= iVar21;
    iVar21 = *(int *)((long)ppVVar19 + 0x6c);
  } while (bVar1);
  ppVVar19 = ppVVar16;
  iVar21 = *(int *)((long)ppVVar16 + 0x6c);
  do {
    ppVVar15 = ppVVar19;
    ppVVar19 = (Vertex **)*ppVVar15;
    if ((ppVVar19 == ppVVar16) || (*(int *)(ppVVar19 + 0xd) != iVar4)) break;
    bVar1 = iVar21 <= *(int *)((long)ppVVar19 + 0x6c);
    iVar21 = *(int *)((long)ppVVar19 + 0x6c);
  } while (bVar1);
LAB_00fa0124:
  iVar21 = *(int *)(pplVar2 + 0xd);
  iVar22 = *(int *)(pplVar24 + 0xd);
  iVar8 = iVar22 - iVar21;
  pplVar20 = pplVar24;
  if (0 < iVar8) {
    pplVar10 = pplVar2;
    iVar13 = *(int *)((long)pplVar2 + 0x6c);
    do {
      pplVar24 = pplVar10;
      iVar26 = *(int *)((long)pplVar20 + 0x6c);
      iVar12 = iVar8;
      while( true ) {
        pplVar10 = (long **)*pplVar20;
        iVar25 = iVar13 - iVar26;
        if (pplVar10 == pplVar20) break;
        iVar26 = *(int *)((long)pplVar10 + 0x6c) - iVar26;
        if (0 < iVar26) break;
        iVar8 = *(int *)(pplVar20 + 0xd) - *(int *)(pplVar10 + 0xd);
        if ((iVar8 != 0) && ((-1 < iVar8 || (iVar8 * iVar25 < iVar26 * iVar12)))) break;
        iVar12 = *(int *)(pplVar10 + 0xd) - *(int *)(pplVar24 + 0xd);
        pplVar20 = pplVar10;
        iVar26 = *(int *)((long)pplVar10 + 0x6c);
      }
      pplVar10 = (long **)*pplVar24;
      if (pplVar10 == pplVar24) goto LAB_00fa026c;
      iVar8 = *(int *)(pplVar20 + 0xd) - *(int *)(pplVar10 + 0xd);
      if (iVar8 < 1) goto LAB_00fa026c;
      iVar26 = *(int *)((long)pplVar10 + 0x6c);
      iVar5 = iVar26 - iVar13;
      if ((-1 < iVar5) ||
         ((iVar9 = *(int *)(pplVar24 + 0xd) - *(int *)(pplVar10 + 0xd), iVar13 = iVar26, iVar9 != 0
          && ((-1 < iVar9 || (iVar9 * iVar25 <= iVar5 * iVar12)))))) goto LAB_00fa026c;
    } while( true );
  }
  if (iVar8 < 0) {
    iVar13 = *(int *)((long)pplVar24 + 0x6c);
    pplVar24 = pplVar2;
    iVar26 = *(int *)((long)pplVar2 + 0x6c);
    iVar12 = iVar21;
LAB_00fa0394:
    pplVar14 = (long **)pplVar24[1];
    pplVar10 = pplVar20;
    iVar25 = iVar12;
    do {
      iVar9 = iVar8;
      pplVar20 = pplVar10;
      iVar5 = iVar26 - iVar13;
      if (pplVar14 != pplVar24) {
        iVar8 = *(int *)((long)pplVar14 + 0x6c) - iVar26;
        if (-1 < iVar8) {
          iVar12 = *(int *)(pplVar14 + 0xd);
          iVar25 = iVar25 - iVar12;
          if ((iVar25 == 0) || ((iVar25 < 0 && (iVar8 * iVar9 <= iVar25 * iVar5))))
          goto LAB_00fa0434;
        }
      }
      pplVar10 = (long **)pplVar20[1];
      if (pplVar10 == pplVar20) goto LAB_00fa026c;
      iVar25 = *(int *)(pplVar24 + 0xd);
      iVar8 = *(int *)(pplVar10 + 0xd) - iVar25;
      if (-1 < iVar8) goto LAB_00fa026c;
      iVar12 = *(int *)((long)pplVar10 + 0x6c);
      iVar6 = iVar12 - iVar13;
      if ((iVar6 < 1) ||
         ((iVar7 = *(int *)(pplVar20 + 0xd) - *(int *)(pplVar10 + 0xd), iVar13 = iVar12, iVar7 != 0
          && ((-1 < iVar7 || (iVar7 * iVar5 <= iVar6 * iVar9)))))) goto LAB_00fa026c;
    } while( true );
  }
  pplVar10 = pplVar24;
  iVar8 = *(int *)((long)pplVar24 + 0x6c);
  do {
    pplVar20 = pplVar10;
    pplVar10 = (long **)*pplVar20;
    if ((pplVar10 == pplVar24) || (*(int *)(pplVar10 + 0xd) != iVar22)) break;
    bVar1 = *(int *)((long)pplVar10 + 0x6c) <= iVar8;
    iVar8 = *(int *)((long)pplVar10 + 0x6c);
  } while (bVar1);
  pplVar10 = pplVar2;
  iVar8 = *(int *)((long)pplVar2 + 0x6c);
  do {
    pplVar24 = pplVar10;
    pplVar10 = (long **)pplVar24[1];
    if ((pplVar10 == pplVar2) || (*(int *)(pplVar10 + 0xd) != iVar22)) break;
    bVar1 = iVar8 <= *(int *)((long)pplVar10 + 0x6c);
    iVar8 = *(int *)((long)pplVar10 + 0x6c);
  } while (bVar1);
LAB_00fa026c:
  pplVar20[1] = (long *)pplVar24;
  *pplVar24 = (long *)pplVar20;
  *ppVVar18 = (Vertex *)ppVVar15;
  ppVVar15[1] = (Vertex *)ppVVar18;
  if (iVar21 < iVar22) {
    *(long ***)param_1 = pplVar2;
  }
  if (iVar4 <= iVar3) {
    *(Vertex ***)(param_1 + 8) = ppVVar16;
  }
  uVar11 = 1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *param_3 = (Vertex *)ppVVar18;
LAB_00fa02a4:
  *param_4 = (Vertex *)ppVVar15;
  return uVar11;
LAB_00fa036c:
  iVar21 = iVar8 - *(int *)(ppVVar18 + 0xd);
  ppVVar15 = ppVVar23;
  iVar13 = *(int *)((long)ppVVar23 + 0x6c);
  goto LAB_00fa02cc;
LAB_00fa0434:
  iVar8 = *(int *)(pplVar20 + 0xd) - iVar12;
  pplVar24 = pplVar14;
  iVar26 = *(int *)((long)pplVar14 + 0x6c);
  goto LAB_00fa0394;
}


