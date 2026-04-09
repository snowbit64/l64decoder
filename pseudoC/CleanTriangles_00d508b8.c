// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CleanTriangles
// Entry Point: 00d508b8
// Size: 228 bytes
// Signature: undefined CleanTriangles(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::ICHull::CleanTriangles() */

undefined8 HACD::ICHull::CleanTriangles(void)

{
  CircularListElement *pCVar1;
  long in_x0;
  CircularListElement *pCVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  CircularListElement **ppCVar11;
  CircularListElement **ppCVar12;
  
  ppCVar12 = *(CircularListElement ***)(in_x0 + 200);
  ppCVar11 = *(CircularListElement ***)(in_x0 + 0xd0);
  if (ppCVar12 != ppCVar11) {
    do {
      pCVar2 = *ppCVar12;
      if (((*(long *)(in_x0 + 0xe0) != 0) && (*(char *)(in_x0 + 0x100) == '\0')) &&
         (lVar3 = *(long *)(pCVar2 + 0xc0), lVar3 != 0)) {
        plVar4 = (long *)(*(long *)(in_x0 + 0xe0) + 8);
        plVar5 = (long *)*plVar4;
        if (plVar5 != (long *)0x0) {
          lVar6 = 0;
          lVar7 = *(long *)(pCVar2 + 200);
          do {
            pCVar1 = pCVar2 + 0x38;
            if (lVar7 != 0x10) {
              pCVar1 = *(CircularListElement **)(pCVar2 + 0xb8);
            }
            lVar9 = *(long *)(pCVar1 + lVar6 * 8);
            plVar8 = plVar4;
            plVar10 = plVar5;
            do {
              if (lVar9 <= plVar10[4]) {
                plVar8 = plVar10;
              }
              plVar10 = (long *)plVar10[plVar10[4] < lVar9];
            } while (plVar10 != (long *)0x0);
            if ((plVar8 != plVar4) && (plVar8[4] <= lVar9)) {
              *(undefined *)(plVar8 + 7) = 0;
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 != lVar3);
        }
      }
      CircularList<HACD::TMMTriangle>::Delete
                ((CircularList<HACD::TMMTriangle> *)(in_x0 + 0x50),pCVar2);
      ppCVar12 = ppCVar12 + 1;
    } while (ppCVar12 != ppCVar11);
    ppCVar11 = *(CircularListElement ***)(in_x0 + 200);
  }
  *(CircularListElement ***)(in_x0 + 0xd0) = ppCVar11;
  return 1;
}


