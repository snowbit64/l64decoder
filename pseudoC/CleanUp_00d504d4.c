// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CleanUp
// Entry Point: 00d504d4
// Size: 576 bytes
// Signature: undefined __thiscall CleanUp(ICHull * this, ulong * param_1)


/* HACD::ICHull::CleanUp(unsigned long&) */

undefined8 __thiscall HACD::ICHull::CleanUp(ICHull *this,ulong *param_1)

{
  CircularListElement *pCVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  CircularListElement *pCVar10;
  CircularListElement **ppCVar11;
  CircularListElement **ppCVar12;
  CircularListElement *pCVar13;
  CircularListElement **ppCVar14;
  
  plVar3 = *(long **)(this + 0xb8);
  for (plVar2 = *(long **)(this + 0xb0); plVar2 != plVar3; plVar2 = plVar2 + 1) {
    lVar4 = *plVar2;
    lVar5 = *(long *)(lVar4 + 0x28);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar4 + 0x28) = 0;
      lVar6 = 0x10;
      if (*(char *)(*(long *)(lVar4 + 8) + 0xd0) != '\0') {
        lVar6 = 8;
      }
      *(long *)(lVar4 + lVar6) = lVar5;
    }
  }
  ppCVar14 = *(CircularListElement ***)(this + 0xa0);
  if (*(CircularListElement ***)(this + 0x98) != ppCVar14) {
    ppCVar11 = *(CircularListElement ***)(this + 0x98);
    do {
      ppCVar12 = ppCVar11 + 1;
      CircularList<HACD::TMMEdge>::Delete((CircularList<HACD::TMMEdge> *)(this + 0x30),*ppCVar11);
      ppCVar11 = ppCVar12;
    } while (ppCVar12 != ppCVar14);
    ppCVar14 = *(CircularListElement ***)(this + 0x98);
  }
  ppCVar11 = *(CircularListElement ***)(this + 200);
  ppCVar12 = *(CircularListElement ***)(this + 0xd0);
  *(CircularListElement ***)(this + 0xa0) = ppCVar14;
  *(undefined8 *)(this + 0xb8) = *(undefined8 *)(this + 0xb0);
  if (ppCVar11 != ppCVar12) {
    do {
      pCVar1 = *ppCVar11;
      if (((*(long *)(this + 0xe0) != 0) && (this[0x100] == (ICHull)0x0)) &&
         (lVar4 = *(long *)(pCVar1 + 0xc0), lVar4 != 0)) {
        plVar2 = (long *)(*(long *)(this + 0xe0) + 8);
        plVar3 = (long *)*plVar2;
        if (plVar3 != (long *)0x0) {
          lVar5 = 0;
          lVar6 = *(long *)(pCVar1 + 200);
          do {
            pCVar13 = pCVar1 + 0x38;
            if (lVar6 != 0x10) {
              pCVar13 = *(CircularListElement **)(pCVar1 + 0xb8);
            }
            lVar8 = *(long *)(pCVar13 + lVar5 * 8);
            plVar7 = plVar2;
            plVar9 = plVar3;
            do {
              if (lVar8 <= plVar9[4]) {
                plVar7 = plVar9;
              }
              plVar9 = (long *)plVar9[plVar9[4] < lVar8];
            } while (plVar9 != (long *)0x0);
            if ((plVar7 != plVar2) && (plVar7[4] <= lVar8)) {
              *(undefined *)(plVar7 + 7) = 0;
            }
            lVar5 = lVar5 + 1;
          } while (lVar5 != lVar4);
        }
      }
      CircularList<HACD::TMMTriangle>::Delete
                ((CircularList<HACD::TMMTriangle> *)(this + 0x50),pCVar1);
      ppCVar11 = ppCVar11 + 1;
    } while (ppCVar11 != ppCVar12);
    ppCVar12 = *(CircularListElement ***)(this + 200);
  }
  lVar4 = *(long *)(this + 0x40);
  *(CircularListElement ***)(this + 0xd0) = ppCVar12;
  if (lVar4 != 0) {
    plVar2 = (long *)(this + 0x38);
    do {
      lVar6 = *plVar2;
      lVar4 = lVar4 + -1;
      lVar5 = *(long *)(lVar6 + 0x20);
      plVar2 = (long *)(lVar6 + 0x30);
      *(undefined *)(*(long *)(lVar6 + 0x18) + 0x30) = 1;
      *(undefined *)(lVar5 + 0x30) = 1;
    } while (lVar4 != 0);
  }
  pCVar13 = *(CircularListElement **)(this + 0x18);
  pCVar1 = *(CircularListElement **)(pCVar13 + 0x40);
  if ((pCVar1[0x31] != (CircularListElement)0x0) && (pCVar1[0x30] == (CircularListElement)0x0)) {
    pCVar10 = *(CircularListElement **)(pCVar1 + 0x40);
    CircularList<HACD::TMMVertex>::Delete((CircularList<HACD::TMMVertex> *)(this + 0x10),pCVar1);
    *param_1 = *param_1 - 1;
    do {
      if (pCVar10 == pCVar13) {
        return 1;
      }
      while( true ) {
        if (pCVar10[0x31] == (CircularListElement)0x0) {
          return 1;
        }
        if (pCVar10[0x30] != (CircularListElement)0x0) break;
        pCVar1 = *(CircularListElement **)(pCVar10 + 0x40);
        CircularList<HACD::TMMVertex>::Delete
                  ((CircularList<HACD::TMMVertex> *)(this + 0x10),pCVar10);
        *param_1 = *param_1 - 1;
        pCVar10 = pCVar1;
joined_r0x00d50684:
        if (pCVar10 == pCVar13) {
          return 1;
        }
      }
      *(undefined8 *)(pCVar10 + 0x28) = 0;
      pCVar10[0x30] = (CircularListElement)0x0;
      pCVar10 = *(CircularListElement **)(pCVar10 + 0x40);
    } while( true );
  }
  *(undefined8 *)(pCVar1 + 0x28) = 0;
  pCVar1[0x30] = (CircularListElement)0x0;
  pCVar10 = *(CircularListElement **)(pCVar1 + 0x40);
  goto joined_r0x00d50684;
}


