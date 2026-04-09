// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MakeConeFace
// Entry Point: 00eaef74
// Size: 652 bytes
// Signature: undefined __thiscall MakeConeFace(ICHull * this, CircularListElement * param_1, CircularListElement * param_2)


/* WARNING: Type propagation algorithm not settling */
/* VHACD::ICHull::MakeConeFace(VHACD::CircularListElement<VHACD::TMMEdge>*,
   VHACD::CircularListElement<VHACD::TMMVertex>*) */

TMMTriangle * __thiscall
VHACD::ICHull::MakeConeFace(ICHull *this,CircularListElement *param_1,CircularListElement *param_2)

{
  TMMTriangle *pTVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  TMMEdge *pTVar7;
  TMMEdge *pTVar8;
  TMMTriangle **ppTVar9;
  long lVar10;
  
  pTVar7 = *(TMMEdge **)(*(long *)(param_1 + 0x18) + 0x28);
  if (pTVar7 == (TMMEdge *)0x0) {
    if (*(long *)(this + 0x20) == 0) {
      pTVar7 = (TMMEdge *)operator_new(0x40);
      TMMEdge::TMMEdge(pTVar7);
      *(TMMEdge **)(this + 0x18) = pTVar7;
      *(TMMEdge **)(pTVar7 + 0x30) = pTVar7;
      *(TMMEdge **)(pTVar7 + 0x38) = pTVar7;
    }
    else {
      lVar2 = *(long *)(this + 0x18);
      lVar10 = *(long *)(lVar2 + 0x30);
      pTVar7 = (TMMEdge *)operator_new(0x40);
      TMMEdge::TMMEdge(pTVar7);
      *(TMMEdge **)(this + 0x18) = pTVar7;
      *(long *)(pTVar7 + 0x30) = lVar10;
      *(long *)(pTVar7 + 0x38) = lVar2;
      *(TMMEdge **)(lVar2 + 0x30) = pTVar7;
      *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(this + 0x18);
      pTVar7 = *(TMMEdge **)(this + 0x18);
    }
    lVar2 = *(long *)(this + 0x20);
    *(undefined8 *)(pTVar7 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(CircularListElement **)(pTVar7 + 0x20) = param_2;
    lVar10 = *(long *)(param_1 + 0x18);
    *(long *)(this + 0x20) = lVar2 + 1;
    *(TMMEdge **)(lVar10 + 0x28) = pTVar7;
    pTVar8 = *(TMMEdge **)(*(long *)(param_1 + 0x20) + 0x28);
  }
  else {
    pTVar8 = *(TMMEdge **)(*(long *)(param_1 + 0x20) + 0x28);
  }
  if (pTVar8 == (TMMEdge *)0x0) {
    if (*(long *)(this + 0x20) == 0) {
      pTVar8 = (TMMEdge *)operator_new(0x40);
      TMMEdge::TMMEdge(pTVar8);
      *(TMMEdge **)(this + 0x18) = pTVar8;
      *(TMMEdge **)(pTVar8 + 0x30) = pTVar8;
      *(TMMEdge **)(pTVar8 + 0x38) = pTVar8;
    }
    else {
      lVar2 = *(long *)(this + 0x18);
      lVar10 = *(long *)(lVar2 + 0x30);
      pTVar8 = (TMMEdge *)operator_new(0x40);
      TMMEdge::TMMEdge(pTVar8);
      *(TMMEdge **)(this + 0x18) = pTVar8;
      *(long *)(pTVar8 + 0x30) = lVar10;
      *(long *)(pTVar8 + 0x38) = lVar2;
      *(TMMEdge **)(lVar2 + 0x30) = pTVar8;
      *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(this + 0x18);
      pTVar8 = *(TMMEdge **)(this + 0x18);
    }
    lVar2 = *(long *)(this + 0x20);
    *(undefined8 *)(pTVar8 + 0x18) = *(undefined8 *)(param_1 + 0x20);
    *(CircularListElement **)(pTVar8 + 0x20) = param_2;
    lVar10 = *(long *)(param_1 + 0x20);
    *(long *)(this + 0x20) = lVar2 + 1;
    *(TMMEdge **)(lVar10 + 0x28) = pTVar8;
    lVar2 = *(long *)(this + 0x30);
  }
  else {
    lVar2 = *(long *)(this + 0x30);
  }
  if (lVar2 == 0) {
    pTVar1 = (TMMTriangle *)operator_new(0x50);
    TMMTriangle::TMMTriangle(pTVar1);
    *(TMMTriangle **)(this + 0x28) = pTVar1;
    *(TMMTriangle **)(pTVar1 + 0x40) = pTVar1;
    *(TMMTriangle **)(pTVar1 + 0x48) = pTVar1;
  }
  else {
    lVar2 = *(long *)(this + 0x28);
    lVar10 = *(long *)(lVar2 + 0x40);
    pTVar1 = (TMMTriangle *)operator_new(0x50);
    TMMTriangle::TMMTriangle(pTVar1);
    *(TMMTriangle **)(this + 0x28) = pTVar1;
    *(long *)(pTVar1 + 0x40) = lVar10;
    *(long *)(pTVar1 + 0x48) = lVar2;
    *(TMMTriangle **)(lVar2 + 0x40) = pTVar1;
    *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(this + 0x28);
    pTVar1 = *(TMMTriangle **)(this + 0x28);
  }
  *(CircularListElement **)(pTVar1 + 8) = param_1;
  *(TMMEdge **)(pTVar1 + 0x10) = pTVar7;
  *(TMMEdge **)(pTVar1 + 0x18) = pTVar8;
  uVar3 = 0;
  lVar2 = 0x10;
  if (*(char *)(*(long *)(param_1 + 8) + 0x38) != '\0') {
    lVar2 = 8;
  }
  lVar4 = *(long *)(param_1 + lVar2);
  lVar2 = *(long *)(param_1 + 0x18);
  lVar10 = *(long *)(param_1 + 0x20);
  *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
  plVar5 = (long *)(lVar4 + 0x20);
  do {
    lVar6 = *plVar5;
    uVar3 = uVar3 + 1;
    plVar5 = plVar5 + 1;
  } while (lVar6 != lVar2);
  if (*(long *)(lVar4 + (ulong)(uVar3 - (uVar3 / 3 +
                                        ((uint)((ulong)uVar3 * 0xaaaaaaab >> 0x20) & 0xfffffffe))) *
                        8 + 0x20) == lVar10) {
    *(TMMEdge **)(pTVar1 + 8) = pTVar7;
    *(CircularListElement **)(pTVar1 + 0x10) = param_1;
    *(long *)(pTVar1 + 0x20) = lVar2;
    *(long *)(pTVar1 + 0x28) = lVar10;
    *(CircularListElement **)(pTVar1 + 0x30) = param_2;
    lVar2 = *(long *)((long)pTVar7 + 8);
  }
  else {
    *(long *)(pTVar1 + 0x20) = lVar10;
    *(long *)(pTVar1 + 0x28) = lVar2;
    *(CircularListElement **)(pTVar1 + 0x30) = param_2;
    lVar2 = *(long *)((long)pTVar7 + 8);
  }
  ppTVar9 = (TMMTriangle **)((long)pTVar7 + 8);
  if ((lVar2 == 0) ||
     (ppTVar9 = (TMMTriangle **)((long)pTVar7 + 0x10), *ppTVar9 == (TMMTriangle *)0x0)) {
    *ppTVar9 = pTVar1;
    lVar2 = *(long *)(pTVar8 + 8);
  }
  else {
    lVar2 = *(long *)(pTVar8 + 8);
  }
  ppTVar9 = (TMMTriangle **)(pTVar8 + 8);
  if ((lVar2 == 0) || (ppTVar9 = (TMMTriangle **)(pTVar8 + 0x10), *ppTVar9 == (TMMTriangle *)0x0)) {
    *ppTVar9 = pTVar1;
  }
  return pTVar1;
}


