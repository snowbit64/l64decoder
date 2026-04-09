// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CleanVertices
// Entry Point: 00d519e4
// Size: 272 bytes
// Signature: undefined __thiscall CleanVertices(ICHull * this, ulong * param_1)


/* HACD::ICHull::CleanVertices(unsigned long&) */

undefined8 __thiscall HACD::ICHull::CleanVertices(ICHull *this,ulong *param_1)

{
  long lVar1;
  CircularListElement *pCVar2;
  long lVar3;
  long lVar4;
  CircularListElement *pCVar6;
  CircularListElement *pCVar7;
  long *plVar5;
  
  lVar3 = *(long *)(this + 0x40);
  if (lVar3 != 0) {
    plVar5 = (long *)(this + 0x38);
    do {
      lVar4 = *plVar5;
      lVar3 = lVar3 + -1;
      lVar1 = *(long *)(lVar4 + 0x20);
      plVar5 = (long *)(lVar4 + 0x30);
      *(undefined *)(*(long *)(lVar4 + 0x18) + 0x30) = 1;
      *(undefined *)(lVar1 + 0x30) = 1;
    } while (lVar3 != 0);
  }
  pCVar7 = *(CircularListElement **)(this + 0x18);
  pCVar2 = *(CircularListElement **)(pCVar7 + 0x40);
  if ((pCVar2[0x31] == (CircularListElement)0x0) || (pCVar2[0x30] != (CircularListElement)0x0)) {
    pCVar6 = *(CircularListElement **)(pCVar2 + 0x40);
    *(undefined8 *)(pCVar2 + 0x28) = 0;
    pCVar2[0x30] = (CircularListElement)0x0;
    if (pCVar6 == pCVar7 || pCVar6[0x31] == (CircularListElement)0x0) {
      return 1;
    }
  }
  else {
    pCVar6 = *(CircularListElement **)(pCVar2 + 0x40);
    CircularList<HACD::TMMVertex>::Delete((CircularList<HACD::TMMVertex> *)(this + 0x10),pCVar2);
    *param_1 = *param_1 - 1;
    if (pCVar6 == pCVar7 || pCVar6[0x31] == (CircularListElement)0x0) {
      return 1;
    }
  }
  do {
    if (pCVar6[0x30] == (CircularListElement)0x0) {
      pCVar2 = *(CircularListElement **)(pCVar6 + 0x40);
      CircularList<HACD::TMMVertex>::Delete((CircularList<HACD::TMMVertex> *)(this + 0x10),pCVar6);
      *param_1 = *param_1 - 1;
      pCVar6 = pCVar2;
    }
    else {
      *(undefined8 *)(pCVar6 + 0x28) = 0;
      pCVar6[0x30] = (CircularListElement)0x0;
      pCVar6 = *(CircularListElement **)(pCVar6 + 0x40);
    }
  } while ((pCVar6 != pCVar7) && (pCVar6[0x31] != (CircularListElement)0x0));
  return 1;
}


