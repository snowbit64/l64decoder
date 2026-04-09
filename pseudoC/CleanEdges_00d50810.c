// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CleanEdges
// Entry Point: 00d50810
// Size: 168 bytes
// Signature: undefined CleanEdges(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::ICHull::CleanEdges() */

undefined8 HACD::ICHull::CleanEdges(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long in_x0;
  long lVar4;
  long lVar5;
  CircularListElement **ppCVar6;
  CircularListElement **ppCVar7;
  CircularListElement **ppCVar8;
  
  plVar3 = *(long **)(in_x0 + 0xb8);
  for (plVar2 = *(long **)(in_x0 + 0xb0); plVar2 != plVar3; plVar2 = plVar2 + 1) {
    lVar4 = *plVar2;
    lVar5 = *(long *)(lVar4 + 0x28);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar4 + 0x28) = 0;
      lVar1 = 0x10;
      if (*(char *)(*(long *)(lVar4 + 8) + 0xd0) != '\0') {
        lVar1 = 8;
      }
      *(long *)(lVar4 + lVar1) = lVar5;
    }
  }
  ppCVar6 = *(CircularListElement ***)(in_x0 + 0xa0);
  if (*(CircularListElement ***)(in_x0 + 0x98) != ppCVar6) {
    ppCVar7 = *(CircularListElement ***)(in_x0 + 0x98);
    do {
      ppCVar8 = ppCVar7 + 1;
      CircularList<HACD::TMMEdge>::Delete((CircularList<HACD::TMMEdge> *)(in_x0 + 0x30),*ppCVar7);
      ppCVar7 = ppCVar8;
    } while (ppCVar8 != ppCVar6);
    ppCVar6 = *(CircularListElement ***)(in_x0 + 0x98);
  }
  *(CircularListElement ***)(in_x0 + 0xa0) = ppCVar6;
  *(undefined8 *)(in_x0 + 0xb8) = *(undefined8 *)(in_x0 + 0xb0);
  return 1;
}


